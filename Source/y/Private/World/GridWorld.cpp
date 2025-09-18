#include "World/GridWorld.h"

// UE includes must precede to ensure proper module includes
#include "Engine/World.h"
#include "EngineUtils.h" // TActorIterator
#include "Algo/Unique.h" // Algo::Unique
#include "Kismet/KismetMathLibrary.h"

// -------------------- Static helpers --------------------
FIntPoint AGridWorld::WorldToGrid(const FVector& W)
{
	const float InvSize = 1.0f / CellSize;
	// Floor to ensure consistent mapping for negative coordinates
	const int32 X = FMath::FloorToInt(W.X * InvSize);
	const int32 Y = FMath::FloorToInt(W.Y * InvSize);
	return FIntPoint(X, Y);
}

FVector AGridWorld::GridToWorld(const FIntPoint& C)
{
	return FVector((C.X + 0.5f) * CellSize, (C.Y + 0.5f) * CellSize, 0.f);
}

TArray<FIntPoint> AGridWorld::RotateOffsets90(const TArray<FIntPoint>& In, uint8 TurnsCW0to3)
{
	const uint8 T = TurnsCW0to3 & 3; // clamp to 0..3
	TArray<FIntPoint> Out;
	Out.Reserve(In.Num());
	for (const FIntPoint& P : In)
	{
		FIntPoint R = P;
		switch (T)
		{
		case 0: R = P; break;
		case 1: R = FIntPoint(P.Y, -P.X); break;         // 90 CW
		case 2: R = FIntPoint(-P.X, -P.Y); break;        // 180
		case 3: R = FIntPoint(-P.Y, P.X); break;         // 270 CW
		}
		Out.Add(R);
	}
	return Out;
}

void AGridWorld::AccumulateCells(const FGridFootprint& FP, TArray<FIntPoint>& OutCells)
{
	OutCells.Reset();
	OutCells.Reserve(FMath::Max(1, FP.Offsets.Num() + 1));
	OutCells.Add(FP.Anchor);
	for (const FIntPoint& O : FP.Offsets)
	{
		OutCells.Add(FP.Anchor + O);
	}
	// Ensure uniqueness and deterministic order
	OutCells.Sort([](const FIntPoint& A, const FIntPoint& B)
	{
		if (A.X != B.X) return A.X < B.X;
		return A.Y < B.Y;
	});
	OutCells.SetNum(Algo::Unique(OutCells));
}

// -------------------- Actor setup --------------------
AGridWorld::AGridWorld()
{
	bReplicates = true;
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	DebugMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DebugMesh"));
	DebugMesh->SetupAttachment(Root);
	DebugMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	DebugMesh->SetMobility(EComponentMobility::Static);
	DebugMesh->SetRelativeScale3D(FVector(0.1f)); // tiny cube as marker

	// Load basic cube mesh from engine content
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh.Succeeded())
	{
		DebugMesh->SetStaticMesh(CubeMesh.Object);
	}
}

void AGridWorld::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	// No state replicated at the moment (authoritative on server). Clients can query via RPCs in future if needed.
}

void AGridWorld::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
#if WITH_EDITORONLY_DATA
	if (bDebugDraw && GetWorld())
	{
		const int32 Half = 5; // draw 10x10 cross centered around origin
		const float Z = GetActorLocation().Z;
		for (int32 X = -Half; X <= Half; ++X)
		{
			const FVector A = FVector(X * CellSize, -Half * CellSize, Z);
			const FVector B = FVector(X * CellSize,  Half * CellSize, Z);
			DrawDebugLine(GetWorld(), A, B, FColor::Green, false, 2.0f, 0, 1.0f);
		}
		for (int32 Y = -Half; Y <= Half; ++Y)
		{
			const FVector A = FVector(-Half * CellSize, Y * CellSize, Z);
			const FVector B = FVector( Half * CellSize, Y * CellSize, Z);
			DrawDebugLine(GetWorld(), A, B, FColor::Green, false, 2.0f, 0, 1.0f);
		}
	}
#endif
}

// -------------------- API --------------------
bool AGridWorld::CanPlace(const FGridFootprint& FP) const
{
	TArray<FIntPoint> Cells;
	AccumulateCells(FP, Cells);
	for (const FIntPoint& C : Cells)
	{
		if (OccupiedCells.Contains(C))
		{
			return false;
		}
	}
	return true;
}

void AGridWorld::Claim(const FGridFootprint& FP)
{
	if (!HasAuthority()) { ensureMsgf(false, TEXT("Claim called on non-authority")); return; }
	TArray<FIntPoint> Cells;
	AccumulateCells(FP, Cells);
	// Pre-check
	for (const FIntPoint& C : Cells)
	{
		if (!ensureMsgf(!OccupiedCells.Contains(C), TEXT("Attempting to claim occupied cell (%d,%d)"), C.X, C.Y))
		{
			return;
		}
	}
	for (const FIntPoint& C : Cells)
	{
		OccupiedCells.Add(C);
	}
}

void AGridWorld::Release(const FGridFootprint& FP)
{
	if (!HasAuthority()) { ensureMsgf(false, TEXT("Release called on non-authority")); return; }
	TArray<FIntPoint> Cells;
	AccumulateCells(FP, Cells);
	for (const FIntPoint& C : Cells)
	{
		OccupiedCells.Remove(C);
		CellToActor.Remove(C);
	}
}

void AGridWorld::SetCellsOccupiedByActor(const TArray<FIntPoint>& Cells, AActor* Actor)
{
	if (!HasAuthority()) { ensureMsgf(false, TEXT("SetCellsOccupiedByActor on non-authority")); return; }
	if (!ensure(Actor != nullptr)) return;

	for (const FIntPoint& C : Cells)
	{
		// Enforce exclusivity
		if (!ensureMsgf(!OccupiedCells.Contains(C) || (CellToActor.FindRef(C).Get() == Actor), TEXT("Cell already occupied by another actor at (%d,%d)"), C.X, C.Y))
		{
			continue;
		}
		OccupiedCells.Add(C);
		CellToActor.Add(C, Actor);
	}
}

void AGridWorld::ClearCellsOccupiedByActor(const TArray<FIntPoint>& Cells, AActor* Actor)
{
	if (!HasAuthority()) { ensureMsgf(false, TEXT("ClearCellsOccupiedByActor on non-authority")); return; }
	if (!ensure(Actor != nullptr)) return;

	for (const FIntPoint& C : Cells)
	{
		TWeakObjectPtr<AActor>* Existing = CellToActor.Find(C);
		if (Existing && Existing->Get() == Actor)
		{
			CellToActor.Remove(C);
			OccupiedCells.Remove(C);
		}
	}
}

AActor* AGridWorld::GetActorAtCell(const FIntPoint& Cell) const
{
	const TWeakObjectPtr<AActor> Ptr = CellToActor.FindRef(Cell);
	return Ptr.Get();
}

AGridWorld* AGridWorld::Get(UWorld* World)
{
	if (!World) return nullptr;
	for (TActorIterator<AGridWorld> It(World); It; ++It)
	{
		return *It; // first
	}
	return nullptr;
}
