// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/UE4CookBookGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4CookBookGameMode() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_AUE4CookBookGameMode_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_AUE4CookBookGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void AUE4CookBookGameMode::StaticRegisterNativesAUE4CookBookGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUE4CookBookGameMode_NoRegister()
	{
		return AUE4CookBookGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4CookBookGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4CookBookGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CookBookGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4CookBookGameMode.h" },
		{ "ModuleRelativePath", "UE4CookBookGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4CookBookGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CookBookGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4CookBookGameMode_Statics::ClassParams = {
		&AUE4CookBookGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE4CookBookGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4CookBookGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4CookBookGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4CookBookGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4CookBookGameMode, 1925272087);
	template<> BASICSTUDY_API UClass* StaticClass<AUE4CookBookGameMode>()
	{
		return AUE4CookBookGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CookBookGameMode(Z_Construct_UClass_AUE4CookBookGameMode, &AUE4CookBookGameMode::StaticClass, TEXT("/Script/BasicStudy"), TEXT("AUE4CookBookGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CookBookGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
