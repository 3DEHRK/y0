// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Registry/BuildableRegistry.h"

#ifdef Y_BuildableRegistry_generated_h
#error "BuildableRegistry.generated.h already included, missing '#pragma once' in BuildableRegistry.h"
#endif
#define Y_BuildableRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBuildableRegistry *******************************************************
Y_API UClass* Z_Construct_UClass_UBuildableRegistry_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuildableRegistry(); \
	friend struct Z_Construct_UClass_UBuildableRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_UBuildableRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UBuildableRegistry, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_UBuildableRegistry_NoRegister) \
	DECLARE_SERIALIZER(UBuildableRegistry)


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuildableRegistry(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBuildableRegistry(UBuildableRegistry&&) = delete; \
	UBuildableRegistry(const UBuildableRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuildableRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuildableRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBuildableRegistry) \
	NO_API virtual ~UBuildableRegistry();


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h_8_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h_11_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBuildableRegistry;

// ********** End Class UBuildableRegistry *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
