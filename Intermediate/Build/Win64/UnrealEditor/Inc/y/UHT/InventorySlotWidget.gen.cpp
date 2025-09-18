// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/InventorySlotWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventorySlotWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_UInventorySlotWidget();
Y_API UClass* Z_Construct_UClass_UInventorySlotWidget_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventorySlotWidget *****************************************************
void UInventorySlotWidget::StaticRegisterNativesUInventorySlotWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventorySlotWidget;
UClass* UInventorySlotWidget::GetPrivateStaticClass()
{
	using TClass = UInventorySlotWidget;
	if (!Z_Registration_Info_UClass_UInventorySlotWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventorySlotWidget"),
			Z_Registration_Info_UClass_UInventorySlotWidget.InnerSingleton,
			StaticRegisterNativesUInventorySlotWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UInventorySlotWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventorySlotWidget_NoRegister()
{
	return UInventorySlotWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventorySlotWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/InventorySlotWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InventorySlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CountText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventorySlotWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotWidget, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_CountText = { "CountText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventorySlotWidget, CountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountText_MetaData), NewProp_CountText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventorySlotWidget_Statics::NewProp_CountText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventorySlotWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventorySlotWidget_Statics::ClassParams = {
	&UInventorySlotWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventorySlotWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventorySlotWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventorySlotWidget()
{
	if (!Z_Registration_Info_UClass_UInventorySlotWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventorySlotWidget.OuterSingleton, Z_Construct_UClass_UInventorySlotWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventorySlotWidget.OuterSingleton;
}
UInventorySlotWidget::UInventorySlotWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventorySlotWidget);
UInventorySlotWidget::~UInventorySlotWidget() {}
// ********** End Class UInventorySlotWidget *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventorySlotWidget, UInventorySlotWidget::StaticClass, TEXT("UInventorySlotWidget"), &Z_Registration_Info_UClass_UInventorySlotWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventorySlotWidget), 4152231731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h__Script_y_4099956145(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventorySlotWidget_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
