// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/PlacementComponent.h"

#ifdef Y_PlacementComponent_generated_h
#error "PlacementComponent.generated.h already included, missing '#pragma once' in PlacementComponent.h"
#endif
#define Y_PlacementComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPlacementComponent ******************************************************
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execServerRemoveRequest); \
	DECLARE_FUNCTION(execServerPlaceRequest);


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_CALLBACK_WRAPPERS
Y_API UClass* Z_Construct_UClass_UPlacementComponent_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlacementComponent(); \
	friend struct Z_Construct_UClass_UPlacementComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_UPlacementComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPlacementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_UPlacementComponent_NoRegister) \
	DECLARE_SERIALIZER(UPlacementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DesiredRot=NETFIELD_REP_START, \
		NETFIELD_REP_END=DesiredRot	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPlacementComponent(UPlacementComponent&&) = delete; \
	UPlacementComponent(const UPlacementComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlacementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlacementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlacementComponent) \
	NO_API virtual ~UPlacementComponent();


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_8_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_CALLBACK_WRAPPERS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPlacementComponent;

// ********** End Class UPlacementComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
