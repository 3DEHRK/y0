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
Y_API UClass* Z_Construct_UClass_UInventoryWidget_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerControllerBase Function Give **************************************
struct Z_Construct_UFunction_APlayerControllerBase_Give_Statics
{
	struct PlayerControllerBase_eventGive_Parms
	{
		int32 TypeId;
		int32 Count;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Console helpers\n" },
#endif
		{ "CPP_Default_Count", "1" },
		{ "ModuleRelativePath", "Public/Player/PlayerControllerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Console helpers" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TypeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerControllerBase_Give_Statics::NewProp_TypeId = { "TypeId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerControllerBase_eventGive_Parms, TypeId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerControllerBase_Give_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerControllerBase_eventGive_Parms, Count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerControllerBase_Give_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerBase_Give_Statics::NewProp_TypeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerControllerBase_Give_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Give_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerBase_Give_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerBase, nullptr, "Give", Z_Construct_UFunction_APlayerControllerBase_Give_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Give_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerControllerBase_Give_Statics::PlayerControllerBase_eventGive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_Give_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerBase_Give_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerControllerBase_Give_Statics::PlayerControllerBase_eventGive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerControllerBase_Give()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerBase_Give_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerBase::execGive)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_TypeId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Give(Z_Param_TypeId,Z_Param_Count);
	P_NATIVE_END;
}
// ********** End Class APlayerControllerBase Function Give ****************************************

// ********** Begin Class APlayerControllerBase Function RecreateInventoryUI ***********************
struct Z_Construct_UFunction_APlayerControllerBase_RecreateInventoryUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerControllerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerControllerBase_RecreateInventoryUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerControllerBase, nullptr, "RecreateInventoryUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerControllerBase_RecreateInventoryUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerControllerBase_RecreateInventoryUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerControllerBase_RecreateInventoryUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerControllerBase_RecreateInventoryUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerControllerBase::execRecreateInventoryUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecreateInventoryUI();
	P_NATIVE_END;
}
// ********** End Class APlayerControllerBase Function RecreateInventoryUI *************************

// ********** Begin Class APlayerControllerBase ****************************************************
void APlayerControllerBase::StaticRegisterNativesAPlayerControllerBase()
{
	UClass* Class = APlayerControllerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Give", &APlayerControllerBase::execGive },
		{ "RecreateInventoryUI", &APlayerControllerBase::execRecreateInventoryUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/PlayerControllerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerControllerBase_Give, "Give" }, // 402883312
		{ &Z_Construct_UFunction_APlayerControllerBase_RecreateInventoryUI, "RecreateInventoryUI" }, // 1418407715
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBase_Statics::NewProp_InventoryUI = { "InventoryUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBase, InventoryUI), Z_Construct_UClass_UInventoryWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryUI_MetaData), NewProp_InventoryUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBase_Statics::NewProp_InventoryUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBase_Statics::PropPointers),
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
		{ Z_Construct_UClass_APlayerControllerBase, APlayerControllerBase::StaticClass, TEXT("APlayerControllerBase"), &Z_Registration_Info_UClass_APlayerControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerControllerBase), 1936706837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h__Script_y_2395234857(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlayerControllerBase_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
