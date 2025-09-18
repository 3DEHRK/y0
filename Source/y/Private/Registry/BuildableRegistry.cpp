#include "Registry/BuildableRegistry.h"
#include "UObject/ConstructorHelpers.h"

void UBuildableRegistry::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Common engine icons (fallback-safe)
	UTexture2D* IconWhite   = LoadObject<UTexture2D>(nullptr, TEXT("/Engine/EngineResources/WhiteSquareTexture.WhiteSquareTexture"));
	UTexture2D* IconDefault = LoadObject<UTexture2D>(nullptr, TEXT("/Engine/EngineResources/DefaultTexture.DefaultTexture"));

	// 1x1 Cube
	{
		FBuildableDef Def;
		Def.Class = ABuildableActor::StaticClass();
		Def.Footprint.Reset(); // 1x1 occupies only anchor

		UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
		if (Mesh) { Def.Mesh = Mesh; }
		Def.Icon = IconWhite ? IconWhite : IconDefault;
		Def.Name = TEXT("Cube");
		RegisterDef(1, Def);
	}

	// 1x1 Sphere
	{
		FBuildableDef Def;
		Def.Class = ABuildableActor::StaticClass();
		Def.Footprint.Reset();

		UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere"));
		if (Mesh) { Def.Mesh = Mesh; }
		Def.Icon = IconDefault ? IconDefault : IconWhite;
		Def.Name = TEXT("Sphere");
		RegisterDef(2, Def);
	}

	// 1x1 Cylinder
	{
		FBuildableDef Def;
		Def.Class = ABuildableActor::StaticClass();
		Def.Footprint.Reset();

		UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
		if (Mesh) { Def.Mesh = Mesh; }
		Def.Icon = IconWhite ? IconWhite : IconDefault;
		Def.Name = TEXT("Cylinder");
		RegisterDef(3, Def);
	}

	// 1x1 Cone
	{
		FBuildableDef Def;
		Def.Class = ABuildableActor::StaticClass();
		Def.Footprint.Reset();

		UStaticMesh* Mesh = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cone.Cone"));
		if (Mesh) { Def.Mesh = Mesh; }
		Def.Icon = IconDefault ? IconDefault : IconWhite;
		Def.Name = TEXT("Cone");
		RegisterDef(4, Def);
	}
}

const UBuildableRegistry::FBuildableDef* UBuildableRegistry::Get(int32 TypeId) const
{
	return Defs.Find(TypeId);
}

void UBuildableRegistry::RegisterDef(int32 TypeId, const FBuildableDef& Def)
{
	Defs.Add(TypeId, Def);
}
