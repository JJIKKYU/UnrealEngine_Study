// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/NonSelectableCube.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonSelectableCube() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_ANonSelectableCube_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ANonSelectableCube();
	BASICSTUDY_API UClass* Z_Construct_UClass_ASelectableCube();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void ANonSelectableCube::StaticRegisterNativesANonSelectableCube()
	{
	}
	UClass* Z_Construct_UClass_ANonSelectableCube_NoRegister()
	{
		return ANonSelectableCube::StaticClass();
	}
	struct Z_Construct_UClass_ANonSelectableCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANonSelectableCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASelectableCube,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANonSelectableCube_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NonSelectableCube.h" },
		{ "ModuleRelativePath", "NonSelectableCube.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANonSelectableCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANonSelectableCube>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANonSelectableCube_Statics::ClassParams = {
		&ANonSelectableCube::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANonSelectableCube_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANonSelectableCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANonSelectableCube()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANonSelectableCube_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANonSelectableCube, 2614182630);
	template<> BASICSTUDY_API UClass* StaticClass<ANonSelectableCube>()
	{
		return ANonSelectableCube::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANonSelectableCube(Z_Construct_UClass_ANonSelectableCube, &ANonSelectableCube::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ANonSelectableCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANonSelectableCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
