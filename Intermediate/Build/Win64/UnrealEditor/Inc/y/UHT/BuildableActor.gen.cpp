// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Buildables/BuildableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBuildableActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_ABuildableActor();
Y_API UClass* Z_Construct_UClass_ABuildableActor_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABuildableActor **********************************************************
void ABuildableActor::StaticRegisterNativesABuildableActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABuildableActor;
UClass* ABuildableActor::GetPrivateStaticClass()
{
	using TClass = ABuildableActor;
	if (!Z_Registration_Info_UClass_ABuildableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BuildableActor"),
			Z_Registration_Info_UClass_ABuildableActor.InnerSingleton,
			StaticRegisterNativesABuildableActor,
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
	return Z_Registration_Info_UClass_ABuildableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ABuildableActor_NoRegister()
{
	return ABuildableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABuildableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Buildables/BuildableActor.h" },
		{ "ModuleRelativePath", "Public/Buildables/BuildableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "BuildableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Buildables/BuildableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeId_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid replicated properties\n" },
#endif
		{ "ModuleRelativePath", "Public/Buildables/BuildableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid replicated properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridAnchor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/BuildableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationTurns_MetaData[] = {
		{ "ModuleRelativePath", "Public/Buildables/BuildableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Footprint_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Local footprint offsets (unrotated). Not replicated; same per-class typically.\n" },
#endif
		{ "ModuleRelativePath", "Public/Buildables/BuildableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local footprint offsets (unrotated). Not replicated; same per-class typically." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TypeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridAnchor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationTurns;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Footprint_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Footprint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildableActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildableActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABuildableActor_Statics::NewProp_TypeId = { "TypeId", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildableActor, TypeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeId_MetaData), NewProp_TypeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildableActor_Statics::NewProp_GridAnchor = { "GridAnchor", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildableActor, GridAnchor), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridAnchor_MetaData), NewProp_GridAnchor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABuildableActor_Statics::NewProp_RotationTurns = { "RotationTurns", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildableActor, RotationTurns), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationTurns_MetaData), NewProp_RotationTurns_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABuildableActor_Statics::NewProp_Footprint_Inner = { "Footprint", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABuildableActor_Statics::NewProp_Footprint = { "Footprint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildableActor, Footprint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Footprint_MetaData), NewProp_Footprint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildableActor_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildableActor_Statics::NewProp_TypeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildableActor_Statics::NewProp_GridAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildableActor_Statics::NewProp_RotationTurns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildableActor_Statics::NewProp_Footprint_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildableActor_Statics::NewProp_Footprint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABuildableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildableActor_Statics::ClassParams = {
	&ABuildableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABuildableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABuildableActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuildableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuildableActor()
{
	if (!Z_Registration_Info_UClass_ABuildableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildableActor.OuterSingleton, Z_Construct_UClass_ABuildableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuildableActor.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ABuildableActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TypeId(TEXT("TypeId"));
	static FName Name_GridAnchor(TEXT("GridAnchor"));
	static FName Name_RotationTurns(TEXT("RotationTurns"));
	const bool bIsValid = true
		&& Name_TypeId == ClassReps[(int32)ENetFields_Private::TypeId].Property->GetFName()
		&& Name_GridAnchor == ClassReps[(int32)ENetFields_Private::GridAnchor].Property->GetFName()
		&& Name_RotationTurns == ClassReps[(int32)ENetFields_Private::RotationTurns].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABuildableActor"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildableActor);
ABuildableActor::~ABuildableActor() {}
// ********** End Class ABuildableActor ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuildableActor, ABuildableActor::StaticClass, TEXT("ABuildableActor"), &Z_Registration_Info_UClass_ABuildableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildableActor), 2451071335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h__Script_y_457743890(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_Buildables_BuildableActor_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
