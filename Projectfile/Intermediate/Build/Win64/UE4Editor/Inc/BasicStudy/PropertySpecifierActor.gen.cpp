// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/PropertySpecifierActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertySpecifierActor() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_APropertySpecifierActor_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_APropertySpecifierActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void APropertySpecifierActor::StaticRegisterNativesAPropertySpecifierActor()
	{
	}
	UClass* Z_Construct_UClass_APropertySpecifierActor_NoRegister()
	{
		return APropertySpecifierActor::StaticClass();
	}
	struct Z_Construct_UClass_APropertySpecifierActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibleAnywhere_MetaData[];
#endif
		static void NewProp_bVisibleAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibleAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibleInstanceOnly_MetaData[];
#endif
		static void NewProp_bVisibleInstanceOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibleInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisibleDefaultsOnly_MetaData[];
#endif
		static void NewProp_bVisibleDefaultsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisibleDefaultsOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditAnywhere_MetaData[];
#endif
		static void NewProp_bEditAnywhere_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditAnywhere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditInstanceOnly_MetaData[];
#endif
		static void NewProp_bEditInstanceOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditInstanceOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditDefaultsOnly_MetaData[];
#endif
		static void NewProp_bEditDefaultsOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditDefaultsOnly;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APropertySpecifierActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PropertySpecifierActor.h" },
		{ "ModuleRelativePath", "PropertySpecifierActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleAnywhere_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleAnywhere_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->bVisibleAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleAnywhere = { "bVisibleAnywhere", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleAnywhere_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleInstanceOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleInstanceOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->bVisibleInstanceOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleInstanceOnly = { "bVisibleInstanceOnly", nullptr, (EPropertyFlags)0x0010000000020801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleInstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleInstanceOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleDefaultsOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleDefaultsOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->bVisibleDefaultsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleDefaultsOnly = { "bVisibleDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000030001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleDefaultsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleDefaultsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditAnywhere_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditAnywhere_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->bEditAnywhere = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditAnywhere = { "bEditAnywhere", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditAnywhere_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditAnywhere_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditAnywhere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditInstanceOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditInstanceOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->bEditInstanceOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditInstanceOnly = { "bEditInstanceOnly", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditInstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditInstanceOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditDefaultsOnly_MetaData[] = {
		{ "Category", "PropertySpecifierActor" },
		{ "ModuleRelativePath", "PropertySpecifierActor.h" },
	};
#endif
	void Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditDefaultsOnly_SetBit(void* Obj)
	{
		((APropertySpecifierActor*)Obj)->bEditDefaultsOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditDefaultsOnly = { "bEditDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APropertySpecifierActor), &Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditDefaultsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditDefaultsOnly_MetaData, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditDefaultsOnly_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APropertySpecifierActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bVisibleDefaultsOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditAnywhere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditInstanceOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APropertySpecifierActor_Statics::NewProp_bEditDefaultsOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APropertySpecifierActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APropertySpecifierActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APropertySpecifierActor_Statics::ClassParams = {
		&APropertySpecifierActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APropertySpecifierActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APropertySpecifierActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APropertySpecifierActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APropertySpecifierActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APropertySpecifierActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APropertySpecifierActor, 1037309437);
	template<> BASICSTUDY_API UClass* StaticClass<APropertySpecifierActor>()
	{
		return APropertySpecifierActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APropertySpecifierActor(Z_Construct_UClass_APropertySpecifierActor, &APropertySpecifierActor::StaticClass, TEXT("/Script/BasicStudy"), TEXT("APropertySpecifierActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APropertySpecifierActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
