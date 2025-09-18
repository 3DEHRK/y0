// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlayerControllerBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerControllerBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_APlayerControllerBase();
Y_API UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerControllerBase ****************************************************
void APlayerControllerBase::StaticRegisterNativesAPlayerControllerBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerControllerBase;
UClass* APlayerControllerBase::GetPrivateStaticClass()
{
	using TClass = APlayerControllerBase;
	if (!Z_Registration_Info_UClass_APlayerControllerBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerControllerBase"),
			Z_Registration_Info_UClass_APlayerControllerBase.InnerSingleton,
			StaticRegisterNativesAPlayerControllerBase,
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
	return Z_Registration_Info_UClass_APlayerControllerBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerControllerBase_NoRegister()
{
	return APlayerControllerBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerControllerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/PlayerControllerBase.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerControllerBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerControllerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerBase_Statics::ClassParams = {
	&APlayerControllerBase::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerControllerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerControllerBase()
{
	if (!Z_Registration_Info_UClass_APlayerControllerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerControllerBase.OuterSingleton, Z_Construct_UClass_APlayerControllerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerControllerBase.OuterSingleton;
}
APlayerControllerBase::APlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerBase);
APlayerControllerBase::~APlayerControllerBase() {}
// ********** End Class APlayerControllerBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerControllerBase, APlayerControllerBase::StaticClass, TEXT("APlayerControllerBase"), &Z_Registration_Info_UClass_APlayerControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerControllerBase), 984979710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h__Script_y_3926731530(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
