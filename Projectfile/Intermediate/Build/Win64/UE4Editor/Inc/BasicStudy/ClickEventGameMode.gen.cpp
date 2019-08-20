// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/ClickEventGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClickEventGameMode() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_AClickEventGameMode_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_AClickEventGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void AClickEventGameMode::StaticRegisterNativesAClickEventGameMode()
	{
	}
	UClass* Z_Construct_UClass_AClickEventGameMode_NoRegister()
	{
		return AClickEventGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AClickEventGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClickEventGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClickEventGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ClickEventGameMode.h" },
		{ "ModuleRelativePath", "ClickEventGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClickEventGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClickEventGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AClickEventGameMode_Statics::ClassParams = {
		&AClickEventGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AClickEventGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AClickEventGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClickEventGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AClickEventGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AClickEventGameMode, 2880386694);
	template<> BASICSTUDY_API UClass* StaticClass<AClickEventGameMode>()
	{
		return AClickEventGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AClickEventGameMode(Z_Construct_UClass_AClickEventGameMode, &AClickEventGameMode::StaticClass, TEXT("/Script/BasicStudy"), TEXT("AClickEventGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClickEventGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif