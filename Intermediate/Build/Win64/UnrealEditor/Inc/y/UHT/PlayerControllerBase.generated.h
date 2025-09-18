// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlayerControllerBase.h"

#ifdef Y_PlayerControllerBase_generated_h
#error "PlayerControllerBase.generated.h already included, missing '#pragma once' in PlayerControllerBase.h"
#endif
#define Y_PlayerControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APlayerControllerBase ****************************************************
Y_API UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerControllerBase(); \
	friend struct Z_Construct_UClass_APlayerControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerControllerBase, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_APlayerControllerBase_NoRegister) \
	DECLARE_SERIALIZER(APlayerControllerBase)


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerControllerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerControllerBase(APlayerControllerBase&&) = delete; \
	APlayerControllerBase(const APlayerControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerControllerBase) \
	NO_API virtual ~APlayerControllerBase();


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h_9_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerControllerBase;

// ********** End Class APlayerControllerBase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
