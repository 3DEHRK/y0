#include "Registry/BuildableRegistry.h"

const UBuildableRegistry::FBuildableDef* UBuildableRegistry::Get(int32 TypeId) const
{
	return Defs.Find(TypeId);
}

void UBuildableRegistry::RegisterDef(int32 TypeId, const FBuildableDef& Def)
{
	Defs.Add(TypeId, Def);
}
