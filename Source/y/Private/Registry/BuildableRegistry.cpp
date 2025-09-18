#include "Registry/BuildableRegistry.h"
#include "UObject/ConstructorHelpers.h"

void UBuildableRegistry::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	FBuildableDef Def;
	Def.Class = ABuildableActor::StaticClass();
	Def.Footprint.Reset(); // 1x1 occupies only anchor

	// Load asset at runtime (ConstructorHelpers::FObjectFinder is only valid in constructors)
	UStaticMesh* CubeMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (CubeMesh)
	{
		Def.Mesh = CubeMesh;
	}
	Def.Name = TEXT("Cube");

	RegisterDef(1, Def);
}

const UBuildableRegistry::FBuildableDef* UBuildableRegistry::Get(int32 TypeId) const
{
	return Defs.Find(TypeId);
}

void UBuildableRegistry::RegisterDef(int32 TypeId, const FBuildableDef& Def)
{
	Defs.Add(TypeId, Def);
}
