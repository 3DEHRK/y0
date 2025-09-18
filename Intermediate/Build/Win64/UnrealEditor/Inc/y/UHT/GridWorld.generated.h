// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "World/GridWorld.h"

#ifdef Y_GridWorld_generated_h
#error "GridWorld.generated.h already included, missing '#pragma once' in GridWorld.h"
#endif
#define Y_GridWorld_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGridWorld ***************************************************************
Y_API UClass* Z_Construct_UClass_AGridWorld_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridWorld(); \
	friend struct Z_Construct_UClass_AGridWorld_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_AGridWorld_NoRegister(); \
public: \
	DECLARE_CLASS2(AGridWorld, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_AGridWorld_NoRegister) \
	DECLARE_SERIALIZER(AGridWorld)


#define FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGridWorld(AGridWorld&&) = delete; \
	AGridWorld(const AGridWorld&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridWorld) \
	NO_API virtual ~AGridWorld();


#define FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h_16_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h_19_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGridWorld;

// ********** End Class AGridWorld *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
