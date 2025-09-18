// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "y/yGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeyGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_AyGameModeBase();
Y_API UClass* Z_Construct_UClass_AyGameModeBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AyGameModeBase ***********************************************************
void AyGameModeBase::StaticRegisterNativesAyGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AyGameModeBase;
UClass* AyGameModeBase::GetPrivateStaticClass()
{
	using TClass = AyGameModeBase;
	if (!Z_Registration_Info_UClass_AyGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("yGameModeBase"),
			Z_Registration_Info_UClass_AyGameModeBase.InnerSingleton,
			StaticRegisterNativesAyGameModeBase,
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
	return Z_Registration_Info_UClass_AyGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AyGameModeBase_NoRegister()
{
	return AyGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AyGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "yGameModeBase.h" },
		{ "ModuleRelativePath", "yGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AyGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AyGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AyGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AyGameModeBase_Statics::ClassParams = {
	&AyGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AyGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AyGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AyGameModeBase()
{
	if (!Z_Registration_Info_UClass_AyGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AyGameModeBase.OuterSingleton, Z_Construct_UClass_AyGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AyGameModeBase.OuterSingleton;
}
AyGameModeBase::AyGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AyGameModeBase);
AyGameModeBase::~AyGameModeBase() {}
// ********** End Class AyGameModeBase *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AyGameModeBase, AyGameModeBase::StaticClass, TEXT("AyGameModeBase"), &Z_Registration_Info_UClass_AyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AyGameModeBase), 2287330386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h__Script_y_1505115276(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_yGameModeBase_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
