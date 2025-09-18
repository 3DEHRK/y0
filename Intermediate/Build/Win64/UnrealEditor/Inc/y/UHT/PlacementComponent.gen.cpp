// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/PlacementComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlacementComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_UPlacementComponent();
Y_API UClass* Z_Construct_UClass_UPlacementComponent_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlacementComponent Function ServerPlaceRequest **************************
struct PlacementComponent_eventServerPlaceRequest_Parms
{
	FIntPoint Anchor;
	uint8 Rot;
};
static FName NAME_UPlacementComponent_ServerPlaceRequest = FName(TEXT("ServerPlaceRequest"));
void UPlacementComponent::ServerPlaceRequest(FIntPoint Anchor, uint8 Rot)
{
	PlacementComponent_eventServerPlaceRequest_Parms Parms;
	Parms.Anchor=Anchor;
	Parms.Rot=Rot;
	UFunction* Func = FindFunctionChecked(NAME_UPlacementComponent_ServerPlaceRequest);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LineTrace 3000 cm from camera; AGridWorld::WorldToGrid\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/PlacementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LineTrace 3000 cm from camera; AGridWorld::WorldToGrid" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlacementComponent_eventServerPlaceRequest_Parms, Anchor), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::NewProp_Rot = { "Rot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlacementComponent_eventServerPlaceRequest_Parms, Rot), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::NewProp_Anchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::NewProp_Rot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlacementComponent, nullptr, "ServerPlaceRequest", Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::PropPointers), sizeof(PlacementComponent_eventServerPlaceRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlacementComponent_eventServerPlaceRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlacementComponent::execServerPlaceRequest)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Anchor);
	P_GET_PROPERTY(FByteProperty,Z_Param_Rot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerPlaceRequest_Implementation(Z_Param_Anchor,Z_Param_Rot);
	P_NATIVE_END;
}
// ********** End Class UPlacementComponent Function ServerPlaceRequest ****************************

// ********** Begin Class UPlacementComponent Function ServerRemoveRequest *************************
struct PlacementComponent_eventServerRemoveRequest_Parms
{
	FIntPoint Anchor;
};
static FName NAME_UPlacementComponent_ServerRemoveRequest = FName(TEXT("ServerRemoveRequest"));
void UPlacementComponent::ServerRemoveRequest(FIntPoint Anchor)
{
	PlacementComponent_eventServerRemoveRequest_Parms Parms;
	Parms.Anchor=Anchor;
	UFunction* Func = FindFunctionChecked(NAME_UPlacementComponent_ServerRemoveRequest);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlacementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anchor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlacementComponent_eventServerRemoveRequest_Parms, Anchor), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::NewProp_Anchor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlacementComponent, nullptr, "ServerRemoveRequest", Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::PropPointers), sizeof(PlacementComponent_eventServerRemoveRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A20CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PlacementComponent_eventServerRemoveRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlacementComponent::execServerRemoveRequest)
{
	P_GET_STRUCT(FIntPoint,Z_Param_Anchor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRemoveRequest_Implementation(Z_Param_Anchor);
	P_NATIVE_END;
}
// ********** End Class UPlacementComponent Function ServerRemoveRequest ***************************

// ********** Begin Class UPlacementComponent ******************************************************
void UPlacementComponent::StaticRegisterNativesUPlacementComponent()
{
	UClass* Class = UPlacementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ServerPlaceRequest", &UPlacementComponent::execServerPlaceRequest },
		{ "ServerRemoveRequest", &UPlacementComponent::execServerRemoveRequest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlacementComponent;
UClass* UPlacementComponent::GetPrivateStaticClass()
{
	using TClass = UPlacementComponent;
	if (!Z_Registration_Info_UClass_UPlacementComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlacementComponent"),
			Z_Registration_Info_UClass_UPlacementComponent.InnerSingleton,
			StaticRegisterNativesUPlacementComponent,
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
	return Z_Registration_Info_UClass_UPlacementComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlacementComponent_NoRegister()
{
	return UPlacementComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlacementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/PlacementComponent.h" },
		{ "ModuleRelativePath", "Public/Player/PlacementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/PlacementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DesiredRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlacementComponent_ServerPlaceRequest, "ServerPlaceRequest" }, // 3781074647
		{ &Z_Construct_UFunction_UPlacementComponent_ServerRemoveRequest, "ServerRemoveRequest" }, // 470961431
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlacementComponent_Statics::NewProp_DesiredRot = { "DesiredRot", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlacementComponent, DesiredRot), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredRot_MetaData), NewProp_DesiredRot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlacementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementComponent_Statics::NewProp_DesiredRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlacementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementComponent_Statics::ClassParams = {
	&UPlacementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlacementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlacementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlacementComponent()
{
	if (!Z_Registration_Info_UClass_UPlacementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementComponent.OuterSingleton, Z_Construct_UClass_UPlacementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlacementComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UPlacementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_DesiredRot(TEXT("DesiredRot"));
	const bool bIsValid = true
		&& Name_DesiredRot == ClassReps[(int32)ENetFields_Private::DesiredRot].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPlacementComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementComponent);
UPlacementComponent::~UPlacementComponent() {}
// ********** End Class UPlacementComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementComponent, UPlacementComponent::StaticClass, TEXT("UPlacementComponent"), &Z_Registration_Info_UClass_UPlacementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementComponent), 2441303476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h__Script_y_3124335060(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Player_PlacementComponent_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
