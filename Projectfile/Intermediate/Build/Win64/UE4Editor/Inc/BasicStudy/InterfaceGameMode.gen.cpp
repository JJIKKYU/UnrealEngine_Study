// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/InterfaceGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceGameMode() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_AInterfaceGameMode_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_AInterfaceGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void AInterfaceGameMode::StaticRegisterNativesAInterfaceGameMode()
	{
	}
	UClass* Z_Construct_UClass_AInterfaceGameMode_NoRegister()
	{
		return AInterfaceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInterfaceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInterfaceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInterfaceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "InterfaceGameMode.h" },
		{ "ModuleRelativePath", "InterfaceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInterfaceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInterfaceGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInterfaceGameMode_Statics::ClassParams = {
		&AInterfaceGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInterfaceGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInterfaceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInterfaceGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInterfaceGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInterfaceGameMode, 3075378934);
	template<> BASICSTUDY_API UClass* StaticClass<AInterfaceGameMode>()
	{
		return AInterfaceGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInterfaceGameMode(Z_Construct_UClass_AInterfaceGameMode, &AInterfaceGameMode::StaticClass, TEXT("/Script/BasicStudy"), TEXT("AInterfaceGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInterfaceGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
