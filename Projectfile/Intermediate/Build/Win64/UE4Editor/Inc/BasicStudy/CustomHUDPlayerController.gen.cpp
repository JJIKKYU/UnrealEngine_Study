// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/CustomHUDPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomHUDPlayerController() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_ACustomHUDPlayerController_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ACustomHUDPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void ACustomHUDPlayerController::StaticRegisterNativesACustomHUDPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ACustomHUDPlayerController_NoRegister()
	{
		return ACustomHUDPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACustomHUDPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomHUDPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomHUDPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CustomHUDPlayerController.h" },
		{ "ModuleRelativePath", "CustomHUDPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomHUDPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomHUDPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomHUDPlayerController_Statics::ClassParams = {
		&ACustomHUDPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomHUDPlayerController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACustomHUDPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomHUDPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomHUDPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomHUDPlayerController, 1360872904);
	template<> BASICSTUDY_API UClass* StaticClass<ACustomHUDPlayerController>()
	{
		return ACustomHUDPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomHUDPlayerController(Z_Construct_UClass_ACustomHUDPlayerController, &ACustomHUDPlayerController::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ACustomHUDPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomHUDPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif