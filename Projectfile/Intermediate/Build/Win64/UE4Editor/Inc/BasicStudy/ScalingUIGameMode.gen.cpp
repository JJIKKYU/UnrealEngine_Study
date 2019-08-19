// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/ScalingUIGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalingUIGameMode() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_AScalingUIGameMode_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_AScalingUIGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void AScalingUIGameMode::StaticRegisterNativesAScalingUIGameMode()
	{
	}
	UClass* Z_Construct_UClass_AScalingUIGameMode_NoRegister()
	{
		return AScalingUIGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AScalingUIGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScalingUIGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScalingUIGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ScalingUIGameMode.h" },
		{ "ModuleRelativePath", "ScalingUIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScalingUIGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScalingUIGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScalingUIGameMode_Statics::ClassParams = {
		&AScalingUIGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AScalingUIGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AScalingUIGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScalingUIGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScalingUIGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScalingUIGameMode, 949573483);
	template<> BASICSTUDY_API UClass* StaticClass<AScalingUIGameMode>()
	{
		return AScalingUIGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScalingUIGameMode(Z_Construct_UClass_AScalingUIGameMode, &AScalingUIGameMode::StaticClass, TEXT("/Script/BasicStudy"), TEXT("AScalingUIGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScalingUIGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
