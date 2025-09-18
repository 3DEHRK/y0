#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Net/UnrealNetwork.h"
#include "PlacementComponent.generated.h"

UCLASS(ClassGroup=(Custom))
class Y_API UPlacementComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPlacementComponent();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(Replicated)
	uint8 DesiredRot = 0; // 0..3

	void RotateCW();
	void RotateCCW();
	void SelectHotbar(uint8 Index); // sets via owner’s Inventory->SelectSlot(Index)
	bool GetCandidateCell(FIntPoint& OutCell) const; // LineTrace 3000 cm from camera; AGridWorld::WorldToGrid

	UFUNCTION(Server, Reliable)
	void ServerPlaceRequest(FIntPoint Anchor, uint8 Rot);
	UFUNCTION(Server, Reliable)
	void ServerRemoveRequest(FIntPoint Anchor);

	void ServerPlaceRequest_Implementation(FIntPoint Anchor, uint8 Rot);
	void ServerRemoveRequest_Implementation(FIntPoint Anchor);
};
