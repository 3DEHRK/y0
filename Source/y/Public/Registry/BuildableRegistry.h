#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Buildables/BuildableActor.h"
#include "BuildableRegistry.generated.h"

UCLASS()
class Y_API UBuildableRegistry : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	struct FBuildableDef
	{
		TSubclassOf<ABuildableActor> Class;
		TArray<FIntPoint> Footprint;
		UStaticMesh* Mesh = nullptr;
		UTexture2D* Icon = nullptr;
		FString Name;
		uint8 RailShapeIfAny = 255; // 255 = not a rail
	};

	// Subsystem lifecycle
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	// Register and retrieve definitions
	const FBuildableDef* Get(int32 TypeId) const;
	void RegisterDef(int32 TypeId, const FBuildableDef& Def);

private:
	TMap<int32, FBuildableDef> Defs;
};
