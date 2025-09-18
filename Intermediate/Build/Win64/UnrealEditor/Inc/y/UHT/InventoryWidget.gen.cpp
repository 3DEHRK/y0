// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/InventoryWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_UInventoryWidget();
Y_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInventoryWidget *********************************************************
void UInventoryWidget::StaticRegisterNativesUInventoryWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryWidget;
UClass* UInventoryWidget::GetPrivateStaticClass()
{
	using TClass = UInventoryWidget;
	if (!Z_Registration_Info_UClass_UInventoryWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryWidget"),
			Z_Registration_Info_UClass_UInventoryWidget.InnerSingleton,
			StaticRegisterNativesUInventoryWidget,
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
	return Z_Registration_Info_UClass_UInventoryWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryWidget_NoRegister()
{
	return UInventoryWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/InventoryWidget.h" },
		{ "ModuleRelativePath", "Public/UI/InventoryWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryWidget_Statics::ClassParams = {
	&UInventoryWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryWidget()
{
	if (!Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton, Z_Construct_UClass_UInventoryWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryWidget.OuterSingleton;
}
UInventoryWidget::UInventoryWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryWidget);
UInventoryWidget::~UInventoryWidget() {}
// ********** End Class UInventoryWidget ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventoryWidget_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryWidget, UInventoryWidget::StaticClass, TEXT("UInventoryWidget"), &Z_Registration_Info_UClass_UInventoryWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryWidget), 648149981U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventoryWidget_h__Script_y_2136388513(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventoryWidget_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_UI_InventoryWidget_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
