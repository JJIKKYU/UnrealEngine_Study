// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/CookBookGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookBookGameMode() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_ACookBookGameMode_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ACookBookGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void ACookBookGameMode::StaticRegisterNativesACookBookGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACookBookGameMode_NoRegister()
	{
		return ACookBookGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACookBookGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACookBookGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookBookGameMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CookBookGameMode.h" },
		{ "ModuleRelativePath", "CookBookGameMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACookBookGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACookBookGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACookBookGameMode_Statics::ClassParams = {
		&ACookBookGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACookBookGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACookBookGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACookBookGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACookBookGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACookBookGameMode, 4055811435);
	template<> BASICSTUDY_API UClass* StaticClass<ACookBookGameMode>()
	{
		return ACookBookGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACookBookGameMode(Z_Construct_UClass_ACookBookGameMode, &ACookBookGameMode::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ACookBookGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACookBookGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
