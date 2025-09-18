// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Registry/BuildableRegistry.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBuildableRegistry() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_UBuildableRegistry();
Y_API UClass* Z_Construct_UClass_UBuildableRegistry_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBuildableRegistry *******************************************************
void UBuildableRegistry::StaticRegisterNativesUBuildableRegistry()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBuildableRegistry;
UClass* UBuildableRegistry::GetPrivateStaticClass()
{
	using TClass = UBuildableRegistry;
	if (!Z_Registration_Info_UClass_UBuildableRegistry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BuildableRegistry"),
			Z_Registration_Info_UClass_UBuildableRegistry.InnerSingleton,
			StaticRegisterNativesUBuildableRegistry,
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
	return Z_Registration_Info_UClass_UBuildableRegistry.InnerSingleton;
}
UClass* Z_Construct_UClass_UBuildableRegistry_NoRegister()
{
	return UBuildableRegistry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBuildableRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Registry/BuildableRegistry.h" },
		{ "ModuleRelativePath", "Public/Registry/BuildableRegistry.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBuildableRegistry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBuildableRegistry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildableRegistry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBuildableRegistry_Statics::ClassParams = {
	&UBuildableRegistry::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBuildableRegistry_Statics::Class_MetaDataParams), Z_Construct_UClass_UBuildableRegistry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBuildableRegistry()
{
	if (!Z_Registration_Info_UClass_UBuildableRegistry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBuildableRegistry.OuterSingleton, Z_Construct_UClass_UBuildableRegistry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBuildableRegistry.OuterSingleton;
}
UBuildableRegistry::UBuildableRegistry() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBuildableRegistry);
UBuildableRegistry::~UBuildableRegistry() {}
// ********** End Class UBuildableRegistry *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBuildableRegistry, UBuildableRegistry::StaticClass, TEXT("UBuildableRegistry"), &Z_Registration_Info_UClass_UBuildableRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBuildableRegistry), 63112251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h__Script_y_235385253(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Registry_BuildableRegistry_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
