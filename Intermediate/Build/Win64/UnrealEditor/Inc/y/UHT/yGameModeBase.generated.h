// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "yGameModeBase.h"

#ifdef Y_yGameModeBase_generated_h
#error "yGameModeBase.generated.h already included, missing '#pragma once' in yGameModeBase.h"
#endif
#define Y_yGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AyGameModeBase ***********************************************************
Y_API UClass* Z_Construct_UClass_AyGameModeBase_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAyGameModeBase(); \
	friend struct Z_Construct_UClass_AyGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_AyGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_AyGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AyGameModeBase)


#define FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AyGameModeBase(AyGameModeBase&&) = delete; \
	AyGameModeBase(const AyGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AyGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AyGameModeBase) \
	NO_API virtual ~AyGameModeBase();


#define FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h_12_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AyGameModeBase;

// ********** End Class AyGameModeBase *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
