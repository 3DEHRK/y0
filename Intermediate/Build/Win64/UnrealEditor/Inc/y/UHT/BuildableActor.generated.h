// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Buildables/BuildableActor.h"

#ifdef Y_BuildableActor_generated_h
#error "BuildableActor.generated.h already included, missing '#pragma once' in BuildableActor.h"
#endif
#define Y_BuildableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABuildableActor **********************************************************
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_RotationTurns); \
	DECLARE_FUNCTION(execOnRep_GridAnchor); \
	DECLARE_FUNCTION(execOnRep_TypeId);


Y_API UClass* Z_Construct_UClass_ABuildableActor_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildableActor(); \
	friend struct Z_Construct_UClass_ABuildableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_ABuildableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ABuildableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_ABuildableActor_NoRegister) \
	DECLARE_SERIALIZER(ABuildableActor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TypeId=NETFIELD_REP_START, \
		GridAnchor, \
		RotationTurns, \
		NETFIELD_REP_END=RotationTurns	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABuildableActor(ABuildableActor&&) = delete; \
	ABuildableActor(const ABuildableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildableActor) \
	NO_API virtual ~ABuildableActor();


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_13_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABuildableActor;

// ********** End Class ABuildableActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
