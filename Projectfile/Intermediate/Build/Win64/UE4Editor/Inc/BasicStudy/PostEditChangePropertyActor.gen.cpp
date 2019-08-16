// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/PostEditChangePropertyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostEditChangePropertyActor() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_APostEditChangePropertyActor_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_APostEditChangePropertyActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void APostEditChangePropertyActor::StaticRegisterNativesAPostEditChangePropertyActor()
	{
	}
	UClass* Z_Construct_UClass_APostEditChangePropertyActor_NoRegister()
	{
		return APostEditChangePropertyActor::StaticClass();
	}
	struct Z_Construct_UClass_APostEditChangePropertyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowStaticMesh_MetaData[];
#endif
		static void NewProp_bShowStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APostEditChangePropertyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostEditChangePropertyActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "PostEditChangePropertyActor.h" },
		{ "ModuleRelativePath", "PostEditChangePropertyActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APostEditChangePropertyActor_Statics::NewProp_bShowStaticMesh_MetaData[] = {
		{ "Category", "Show Static Mesh" },
		{ "ModuleRelativePath", "PostEditChangePropertyActor.h" },
	};
#endif
	void Z_Construct_UClass_APostEditChangePropertyActor_Statics::NewProp_bShowStaticMesh_SetBit(void* Obj)
	{
		((APostEditChangePropertyActor*)Obj)->bShowStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APostEditChangePropertyActor_Statics::NewProp_bShowStaticMesh = { "bShowStaticMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APostEditChangePropertyActor), &Z_Construct_UClass_APostEditChangePropertyActor_Statics::NewProp_bShowStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_APostEditChangePropertyActor_Statics::NewProp_bShowStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APostEditChangePropertyActor_Statics::NewProp_bShowStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APostEditChangePropertyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APostEditChangePropertyActor_Statics::NewProp_bShowStaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APostEditChangePropertyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APostEditChangePropertyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APostEditChangePropertyActor_Statics::ClassParams = {
		&APostEditChangePropertyActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APostEditChangePropertyActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APostEditChangePropertyActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APostEditChangePropertyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APostEditChangePropertyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APostEditChangePropertyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APostEditChangePropertyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APostEditChangePropertyActor, 3797736220);
	template<> BASICSTUDY_API UClass* StaticClass<APostEditChangePropertyActor>()
	{
		return APostEditChangePropertyActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APostEditChangePropertyActor(Z_Construct_UClass_APostEditChangePropertyActor, &APostEditChangePropertyActor::StaticClass, TEXT("/Script/BasicStudy"), TEXT("APostEditChangePropertyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APostEditChangePropertyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
