// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/InteracGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteracGameMode() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_AInteracGameMode_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_AInteracGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void AInteracGameMode::StaticRegisterNativesAInteracGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInteracGameMode_NoRegister()
	{
		return AInteracGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInteracGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteracGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteracGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InteracGameMode.h" },
		{ "ModuleRelativePath", "InteracGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteracGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteracGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteracGameMode_Statics::ClassParams = {
		&AInteracGameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AInteracGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInteracGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteracGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteracGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteracGameMode, 3373108185);
	template<> BASICSTUDY_API UClass* StaticClass<AInteracGameMode>()
	{
		return AInteracGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteracGameMode(Z_Construct_UClass_AInteracGameMode, &AInteracGameMode::StaticClass, TEXT("/Script/BasicStudy"), TEXT("AInteracGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteracGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
