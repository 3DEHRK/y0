#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"

#include "GridWorld.generated.h"

/**
 * Authoritative, placeable, replicated grid world. Maintains occupancy and cell->actor mapping.
 */
UCLASS()
class Y_API AGridWorld : public AActor
{
	GENERATED_BODY()

public:
	// Grid constants and helpers
	static constexpr float CellSize = 100.f; // cm

	// Convert world XY (cm) to grid cell index. Z ignored.
	static FIntPoint WorldToGrid(const FVector& W);
	// Convert grid cell to world-space center point (Z from actor or 0 as needed by caller).
	static FVector GridToWorld(const FIntPoint& C);

	// A footprint with an anchor cell and relative offsets (in cells).
	struct FGridFootprint
	{
		FIntPoint Anchor{0, 0};
		TArray<FIntPoint> Offsets; // Offsets relative to Anchor
	};

	// Rotate offsets around (0,0) by 90-degree clockwise turns [0..3].
	static TArray<FIntPoint> RotateOffsets90(const TArray<FIntPoint>& In, uint8 TurnsCW0to3);
	// Expand a footprint to absolute cells (unique, deterministic order).
	static void AccumulateCells(const FGridFootprint& FP, TArray<FIntPoint>& OutCells);

public:
	AGridWorld();

	// A placeable, replicated actor with no tick.
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void OnConstruction(const FTransform& Transform) override;

	// Query/modify occupancy (server-authoritative; guarded by HasAuthority()).
	bool CanPlace(const FGridFootprint& FP) const;
	void Claim(const FGridFootprint& FP);
	void Release(const FGridFootprint& FP);

	void SetCellsOccupiedByActor(const TArray<FIntPoint>& Cells, AActor* Actor);
	void ClearCellsOccupiedByActor(const TArray<FIntPoint>& Cells, AActor* Actor);
	AActor* GetActorAtCell(const FIntPoint& Cell) const;

	// Find an instance in a world (returns first found or nullptr).
	static AGridWorld* Get(UWorld* World);

protected:
	// Components
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* DebugMesh; // Visual marker, cube from Engine BasicShapes

#if WITH_EDITORONLY_DATA
	// Optional editor debug draw of a small grid around world origin.
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDebugDraw = false;
#endif

	// Authoritative state (not replicated)
	TSet<FIntPoint> OccupiedCells;
	TMap<FIntPoint, TWeakObjectPtr<AActor>> CellToActor;
};
