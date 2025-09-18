// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inventory/InventoryComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_UInventoryComponent();
Y_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
Y_API UScriptStruct* Z_Construct_UScriptStruct_FItemStack();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FItemStack ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FItemStack;
class UScriptStruct* FItemStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FItemStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FItemStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStack, (UObject*)Z_Construct_UPackage__Script_y(), TEXT("ItemStack"));
	}
	return Z_Registration_Info_UScriptStruct_FItemStack.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FItemStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TypeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStack_Statics::NewProp_TypeId = { "TypeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStack, TypeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeId_MetaData), NewProp_TypeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStack_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStack, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemStack_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStack, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStack_Statics::NewProp_TypeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStack_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStack_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_y,
	nullptr,
	&NewStructOps,
	"ItemStack",
	Z_Construct_UScriptStruct_FItemStack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStack_Statics::PropPointers),
	sizeof(FItemStack),
	alignof(FItemStack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemStack()
{
	if (!Z_Registration_Info_UScriptStruct_FItemStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FItemStack.InnerSingleton, Z_Construct_UScriptStruct_FItemStack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FItemStack.InnerSingleton;
}
// ********** End ScriptStruct FItemStack **********************************************************

// ********** Begin Class UInventoryComponent Function OnRep_ActiveSlot ****************************
struct Z_Construct_UFunction_UInventoryComponent_OnRep_ActiveSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_ActiveSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_ActiveSlot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_ActiveSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnRep_ActiveSlot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_ActiveSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_ActiveSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execOnRep_ActiveSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ActiveSlot();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function OnRep_ActiveSlot ******************************

// ********** Begin Class UInventoryComponent Function OnRep_Slots *********************************
struct Z_Construct_UFunction_UInventoryComponent_OnRep_Slots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRep_Slots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRep_Slots", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRep_Slots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnRep_Slots_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInventoryComponent_OnRep_Slots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRep_Slots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execOnRep_Slots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Slots();
	P_NATIVE_END;
}
// ********** End Class UInventoryComponent Function OnRep_Slots ***********************************

// ********** Begin Class UInventoryComponent ******************************************************
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ActiveSlot", &UInventoryComponent::execOnRep_ActiveSlot },
		{ "OnRep_Slots", &UInventoryComponent::execOnRep_Slots },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInventoryComponent;
UClass* UInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UInventoryComponent;
	if (!Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InventoryComponent"),
			Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton,
			StaticRegisterNativesUInventoryComponent,
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
	return Z_Registration_Info_UClass_UInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Inventory/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSlot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// fixed size 8\n" },
#endif
		{ "ModuleRelativePath", "Public/Inventory/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "fixed size 8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_ActiveSlot, "OnRep_ActiveSlot" }, // 3574664425
		{ &Z_Construct_UFunction_UInventoryComponent_OnRep_Slots, "OnRep_Slots" }, // 1052818428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemStack, METADATA_PARAMS(0, nullptr) }; // 2080487945
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Slots = { "Slots", "OnRep_Slots", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slots_MetaData), NewProp_Slots_MetaData) }; // 2080487945
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ActiveSlot = { "ActiveSlot", "OnRep_ActiveSlot", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, ActiveSlot), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSlot_MetaData), NewProp_ActiveSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Slots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_Slots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ActiveSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UInventoryComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Slots(TEXT("Slots"));
	static FName Name_ActiveSlot(TEXT("ActiveSlot"));
	const bool bIsValid = true
		&& Name_Slots == ClassReps[(int32)ENetFields_Private::Slots].Property->GetFName()
		&& Name_ActiveSlot == ClassReps[(int32)ENetFields_Private::ActiveSlot].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInventoryComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// ********** End Class UInventoryComponent ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h__Script_y_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemStack::StaticStruct, Z_Construct_UScriptStruct_FItemStack_Statics::NewStructOps, TEXT("ItemStack"), &Z_Registration_Info_UScriptStruct_FItemStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStack), 2080487945U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 262619058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h__Script_y_1165702046(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h__Script_y_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h__Script_y_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Inventory_InventoryComponent_h__Script_y_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
