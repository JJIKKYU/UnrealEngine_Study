// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/UserProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfile() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_UUserProfile_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UUserProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void UUserProfile::StaticRegisterNativesUUserProfile()
	{
	}
	UClass* Z_Construct_UClass_UUserProfile_NoRegister()
	{
		return UUserProfile::StaticClass();
	}
	struct Z_Construct_UClass_UUserProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UserProfile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax = { "HpMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, HpMax), METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, Armor), METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserProfile_Statics::ClassParams = {
		&UUserProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserProfile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserProfile, 1524617973);
	template<> BASICSTUDY_API UClass* StaticClass<UUserProfile>()
	{
		return UUserProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserProfile(Z_Construct_UClass_UUserProfile, &UUserProfile::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UUserProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
