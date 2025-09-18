#include "Buildables/BuildableActor.h"

#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "Algo/Unique.h"
#include "Registry/BuildableRegistry.h"

ABuildableActor::ABuildableActor()
{
	bReplicates = true;
	SetReplicateMovement(true);
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
}

void ABuildableActor::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		// Register occupancy with the grid
		if (UWorld* World = GetWorld())
		{
			if (AGridWorld* Grid = AGridWorld::Get(World))
			{
				TArray<FIntPoint> Cells;
				GetOccupiedCells(Cells);
				AGridWorld::FGridFootprint FP; FP.Anchor = GridAnchor; FP.Offsets = AGridWorld::RotateOffsets90(Footprint, RotationTurns);
				Grid->Claim(FP);
				Grid->SetCellsOccupiedByActor(Cells, this);
			}
		}
	}
	else
	{
		// On clients, ensure initial transform/mesh setup after replication
		ApplyTransformFromGrid();
	}
}

void ABuildableActor::Destroyed()
{
	if (HasAuthority())
	{
		if (UWorld* World = GetWorld())
		{
			if (AGridWorld* Grid = AGridWorld::Get(World))
			{
				TArray<FIntPoint> Cells;
				GetOccupiedCells(Cells);
				AGridWorld::FGridFootprint FP; FP.Anchor = GridAnchor; FP.Offsets = AGridWorld::RotateOffsets90(Footprint, RotationTurns);
				Grid->Release(FP);
				Grid->ClearCellsOccupiedByActor(Cells, this);
			}
		}
	}

	Super::Destroyed();
}

void ABuildableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABuildableActor, TypeId);
	DOREPLIFETIME(ABuildableActor, GridAnchor);
	DOREPLIFETIME(ABuildableActor, RotationTurns);
}

FBuildableSave ABuildableActor::GetSaveData() const
{
	FBuildableSave S;
	S.TypeId = TypeId;
	S.Anchor = GridAnchor;
	S.Rot = RotationTurns;
	// Custom left empty here
	return S;
}

void ABuildableActor::ApplySaveData(const FBuildableSave& In)
{
	TypeId = In.TypeId;
	GridAnchor = In.Anchor;
	RotationTurns = In.Rot & 3;

	ApplyTransformFromGrid();
	OnPostLoadedFromSave();
}

void ABuildableActor::ApplyTransformFromGrid()
{
	// Compute world transform from GridAnchor and RotationTurns, snap to cell center
	const FVector CellCenter = AGridWorld::GridToWorld(GridAnchor);
	const FRotator YawRot(0.f, 90.f * static_cast<float>(RotationTurns & 3), 0.f);
	SetActorTransform(FTransform(YawRot, CellCenter, FVector(1.f)));
}

void ABuildableActor::GetOccupiedCells(TArray<FIntPoint>& Out) const
{
	Out.Reset();
	Out.Add(GridAnchor);

	// Rotate footprint
	TArray<FIntPoint> Rot = AGridWorld::RotateOffsets90(Footprint, RotationTurns);
	for (const FIntPoint& O : Rot)
	{
		Out.Add(GridAnchor + O);
	}
	Out.Sort([](const FIntPoint& A, const FIntPoint& B)
	{
		if (A.X != B.X) return A.X < B.X;
		return A.Y < B.Y;
	});
	Out.SetNum(Algo::Unique(Out));
}

void ABuildableActor::InitializePlaced(int32 InTypeId, const FIntPoint& InAnchor, uint8 InRot, const TArray<FIntPoint>& InFootprint, UStaticMesh* OptionalMesh)
{
	TypeId = InTypeId;
	GridAnchor = InAnchor;
	RotationTurns = InRot & 3;
	Footprint = InFootprint;
	if (OptionalMesh && Mesh)
	{
		Mesh->SetStaticMesh(OptionalMesh);
	}
	ApplyTransformFromGrid();
}

void ABuildableActor::OnRep_TypeId()
{
	// Resolve mesh from registry if needed (optional)
	if (UWorld* World = GetWorld())
	{
		if (!Mesh || Mesh->GetStaticMesh()) return; // already set
		if (UBuildableRegistry* Reg = World->GetGameInstance()->GetSubsystem<UBuildableRegistry>())
		{
			if (const UBuildableRegistry::FBuildableDef* Def = Reg->Get(TypeId))
			{
				if (Def->Mesh)
				{
					Mesh->SetStaticMesh(Def->Mesh);
				}
			}
		}
	}
}

void ABuildableActor::OnRep_GridAnchor()
{
	ApplyTransformFromGrid();
}

void ABuildableActor::OnRep_RotationTurns()
{
	ApplyTransformFromGrid();
}
