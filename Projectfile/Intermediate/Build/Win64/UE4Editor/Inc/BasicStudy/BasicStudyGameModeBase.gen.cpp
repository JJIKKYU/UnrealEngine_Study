// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/BasicStudyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicStudyGameModeBase() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_ABasicStudyGameModeBase_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ABasicStudyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void ABasicStudyGameModeBase::StaticRegisterNativesABasicStudyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABasicStudyGameModeBase_NoRegister()
	{
		return ABasicStudyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABasicStudyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicStudyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicStudyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicStudyGameModeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BasicStudyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicStudyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicStudyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicStudyGameModeBase_Statics::ClassParams = {
		&ABasicStudyGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABasicStudyGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABasicStudyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicStudyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicStudyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicStudyGameModeBase, 1019433446);
	template<> BASICSTUDY_API UClass* StaticClass<ABasicStudyGameModeBase>()
	{
		return ABasicStudyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicStudyGameModeBase(Z_Construct_UClass_ABasicStudyGameModeBase, &ABasicStudyGameModeBase::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ABasicStudyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicStudyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
