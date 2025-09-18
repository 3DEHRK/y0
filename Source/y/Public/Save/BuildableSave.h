#pragma once

#include "CoreMinimal.h"

// Minimal save struct for buildable actors. Extend/customize in derived classes via Custom bytes.
struct FBuildableSave
{
	int32 TypeId = 0;
	FIntPoint Anchor = FIntPoint::ZeroValue;
	uint8 Rot = 0; // 0..3
	TArray<uint8> Custom; // user-defined payload for derived types
};
