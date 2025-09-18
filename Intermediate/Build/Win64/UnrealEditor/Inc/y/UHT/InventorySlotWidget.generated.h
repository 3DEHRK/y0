// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/InventorySlotWidget.h"

#ifdef Y_InventorySlotWidget_generated_h
#error "InventorySlotWidget.generated.h already included, missing '#pragma once' in InventorySlotWidget.h"
#endif
#define Y_InventorySlotWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInventorySlotWidget *****************************************************
Y_API UClass* Z_Construct_UClass_UInventorySlotWidget_NoRegister();

#define FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventorySlotWidget(); \
	friend struct Z_Construct_UClass_UInventorySlotWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend Y_API UClass* Z_Construct_UClass_UInventorySlotWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventorySlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/y"), Z_Construct_UClass_UInventorySlotWidget_NoRegister) \
	DECLARE_SERIALIZER(UInventorySlotWidget)


#define FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventorySlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventorySlotWidget(UInventorySlotWidget&&) = delete; \
	UInventorySlotWidget(const UInventorySlotWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventorySlotWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventorySlotWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventorySlotWidget) \
	NO_API virtual ~UInventorySlotWidget();


#define FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h_10_PROLOG
#define FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h_13_INCLASS_NO_PURE_DECLS \
	FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventorySlotWidget;

// ********** End Class UInventorySlotWidget *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
