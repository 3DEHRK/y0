// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/InventoryComponent.h"

#ifdef Y_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define Y_InventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FItemStack ********************************************************
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStack_Statics; \
	Y_API static class UScriptStruct* StaticStruct();


struct FItemStack;
// ********** End ScriptStruct FItemStack **********************************************************

// ********** Begin Class UInventoryComponent ******************************************************
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ActiveSlot); \
	DECLARE_FUNCTION(execOnRep_Slots);


Y_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_UInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UInventoryComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Slots=NETFIELD_REP_START, \
		ActiveSlot, \
		NETFIELD_REP_END=ActiveSlot	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_29_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&) = delete; \
	UInventoryComponent(const UInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_26_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryComponent;

// ********** End Class UInventoryComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
