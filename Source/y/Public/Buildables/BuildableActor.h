#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

#include "World/GridWorld.h"
#include "Save/BuildableSave.h"

#include "BuildableActor.generated.h"

UCLASS()
class Y_API ABuildableActor : public AActor
{
	GENERATED_BODY()

public:
	static constexpr float CellSize = 100.f; // must match AGridWorld

	ABuildableActor();

	virtual void BeginPlay() override;
	virtual void Destroyed() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Save/load
	virtual FBuildableSave GetSaveData() const;
	virtual void ApplySaveData(const FBuildableSave& In);
	virtual void OnPostLoadedFromSave() {}

	// Grid helpers
	void ApplyTransformFromGrid();
	void GetOccupiedCells(TArray<FIntPoint>& Out) const; // Anchor + rotated footprint

	// Initialize placement data prior to FinishSpawning (server-side)
	void InitializePlaced(int32 InTypeId, const FIntPoint& InAnchor, uint8 InRot, const TArray<FIntPoint>& InFootprint, UStaticMesh* OptionalMesh = nullptr);

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh; // Root

	// Grid replicated properties
	UFUNCTION()
	void OnRep_TypeId();
	UFUNCTION()
	void OnRep_GridAnchor();
	UFUNCTION()
	void OnRep_RotationTurns();

	UPROPERTY(ReplicatedUsing=OnRep_TypeId)
	int32 TypeId = 0;

	UPROPERTY(ReplicatedUsing=OnRep_GridAnchor)
	FIntPoint GridAnchor = FIntPoint::ZeroValue;

	UPROPERTY(ReplicatedUsing=OnRep_RotationTurns)
	uint8 RotationTurns = 0; // 0..3

	// Local footprint offsets (unrotated). Not replicated; same per-class typically.
	UPROPERTY()
	TArray<FIntPoint> Footprint;
};
