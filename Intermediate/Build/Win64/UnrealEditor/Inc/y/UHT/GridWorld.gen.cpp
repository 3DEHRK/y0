// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "World/GridWorld.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGridWorld() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_y();
Y_API UClass* Z_Construct_UClass_AGridWorld();
Y_API UClass* Z_Construct_UClass_AGridWorld_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGridWorld ***************************************************************
void AGridWorld::StaticRegisterNativesAGridWorld()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGridWorld;
UClass* AGridWorld::GetPrivateStaticClass()
{
	using TClass = AGridWorld;
	if (!Z_Registration_Info_UClass_AGridWorld.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GridWorld"),
			Z_Registration_Info_UClass_AGridWorld.InnerSingleton,
			StaticRegisterNativesAGridWorld,
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
	return Z_Registration_Info_UClass_AGridWorld.InnerSingleton;
}
UClass* Z_Construct_UClass_AGridWorld_NoRegister()
{
	return AGridWorld::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGridWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Authoritative, placeable, replicated grid world. Maintains occupancy and cell->actor mapping.\n */" },
#endif
		{ "IncludePath", "World/GridWorld.h" },
		{ "ModuleRelativePath", "Public/World/GridWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authoritative, placeable, replicated grid world. Maintains occupancy and cell->actor mapping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "GridWorld" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Components\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/GridWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugMesh_MetaData[] = {
		{ "Category", "GridWorld" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/World/GridWorld.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional editor debug draw of a small grid around world origin.\n" },
#endif
		{ "ModuleRelativePath", "Public/World/GridWorld.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional editor debug draw of a small grid around world origin." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugMesh;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridWorld_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridWorld, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridWorld_Statics::NewProp_DebugMesh = { "DebugMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridWorld, DebugMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugMesh_MetaData), NewProp_DebugMesh_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AGridWorld_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
{
	((AGridWorld*)Obj)->bDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridWorld_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGridWorld), &Z_Construct_UClass_AGridWorld_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugDraw_MetaData), NewProp_bDebugDraw_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridWorld_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridWorld_Statics::NewProp_DebugMesh,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridWorld_Statics::NewProp_bDebugDraw,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridWorld_Statics::ClassParams = {
	&AGridWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGridWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridWorld_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridWorld()
{
	if (!Z_Registration_Info_UClass_AGridWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridWorld.OuterSingleton, Z_Construct_UClass_AGridWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridWorld.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridWorld);
AGridWorld::~AGridWorld() {}
// ********** End Class AGridWorld *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h__Script_y_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridWorld, AGridWorld::StaticClass, TEXT("AGridWorld"), &Z_Registration_Info_UClass_AGridWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridWorld), 1233283509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h__Script_y_250720067(TEXT("/Script/y"),
	Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h__Script_y_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_Unreal_Projects_y_Source_y_Public_World_GridWorld_h__Script_y_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
