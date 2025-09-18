#include "Player/PlacementComponent.h"

#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

#include "Player/PlayerCharacter.h"
#include "Inventory/InventoryComponent.h"
#include "Registry/BuildableRegistry.h"
#include "Buildables/BuildableActor.h"
#include "World/GridWorld.h"

UPlacementComponent::UPlacementComponent()
{
	SetIsReplicatedByDefault(true);
}

void UPlacementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UPlacementComponent, DesiredRot);
}

void UPlacementComponent::RotateCW()
{
	DesiredRot = (DesiredRot + 1) & 3; // 0..3
}

void UPlacementComponent::RotateCCW()
{
	DesiredRot = (DesiredRot + 3) & 3; // -1 mod 4
}

void UPlacementComponent::SelectHotbar(uint8 Index)
{
	if (AActor* Owner = GetOwner())
	{
		if (UInventoryComponent* Inv = Owner->FindComponentByClass<UInventoryComponent>())
		{
			Inv->SelectSlot(Index);
		}
	}
}

bool UPlacementComponent::GetCandidateCell(FIntPoint& OutCell) const
{
	const APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwner());
	if (!PC || !PC->FirstPersonCamera) return false;

	const FVector Start = PC->FirstPersonCamera->GetComponentLocation();
	const FVector End = Start + PC->FirstPersonCamera->GetForwardVector() * 3000.f;

	FHitResult Hit;
	FCollisionQueryParams Params(SCENE_QUERY_STAT(PlacementTrace), false, PC);
	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
	{
		OutCell = AGridWorld::WorldToGrid(Hit.Location);
		return true;
	}
	// Fallback to end point if no hit
	OutCell = AGridWorld::WorldToGrid(End);
	return true;
}

void UPlacementComponent::ServerPlaceRequest_Implementation(FIntPoint Anchor, uint8 Rot)
{
	AActor* Owner = GetOwner();
	if (!Owner) return;

	UWorld* World = Owner->GetWorld();
	if (!World) return;

	UInventoryComponent* Inv = Owner->FindComponentByClass<UInventoryComponent>();
	if (!Inv)
	{
		UE_LOG(LogTemp, Error, TEXT("Placement: No inventory on owner"));
		return;
	}

	const int32 TypeId = Inv->GetActiveTypeId();
	if (TypeId == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Placement: No active item"));
		return;
	}
	if (!Inv->TryConsumeActiveOne())
	{
		UE_LOG(LogTemp, Error, TEXT("Placement: Failed to consume one item"));
		return;
	}

	UBuildableRegistry* Reg = World->GetGameInstance()->GetSubsystem<UBuildableRegistry>();
	if (!Reg)
	{
		UE_LOG(LogTemp, Error, TEXT("Placement: Registry missing"));
		return;
	}
	const UBuildableRegistry::FBuildableDef* Def = Reg->Get(TypeId);
	if (!Def || !Def->Class)
	{
		UE_LOG(LogTemp, Error, TEXT("Placement: Invalid def for TypeId %d"), TypeId);
		return;
	}

	// Compute desired transform
	const FVector CellCenter = AGridWorld::GridToWorld(Anchor);
	const FRotator YawRot(0.f, 90.f * static_cast<float>(Rot & 3), 0.f);
	const FTransform SpawnTM(YawRot, CellCenter);

	ABuildableActor* NewActor = World->SpawnActorDeferred<ABuildableActor>(Def->Class, SpawnTM, nullptr, nullptr, ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	if (!NewActor)
	{
		UE_LOG(LogTemp, Error, TEXT("Placement: SpawnActorDeferred failed"));
		return;
	}

	NewActor->InitializePlaced(TypeId, Anchor, Rot & 3, Def->Footprint, Def->Mesh);

	UGameplayStatics::FinishSpawningActor(NewActor, SpawnTM);

	// Ensure transform consistent with grid data
	NewActor->ApplyTransformFromGrid();
}

void UPlacementComponent::ServerRemoveRequest_Implementation(FIntPoint Anchor)
{
	UWorld* World = GetWorld();
	if (!World) return;
	if (AGridWorld* Grid = AGridWorld::Get(World))
	{
		if (AActor* A = Grid->GetActorAtCell(Anchor))
		{
			if (ABuildableActor* B = Cast<ABuildableActor>(A))
			{
				B->Destroy();
			}
		}
	}
}
