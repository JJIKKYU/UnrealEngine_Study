// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/MyWarrior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWarrior() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_UMyWarrior_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UMyWarrior();
	BASICSTUDY_API UClass* Z_Construct_UClass_UUserProfile();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BASICSTUDY_API UClass* Z_Construct_UClass_UUserProfile_NoRegister();
// End Cross Module References
	void UMyWarrior::StaticRegisterNativesUMyWarrior()
	{
	}
	UClass* Z_Construct_UClass_UMyWarrior_NoRegister()
	{
		return UMyWarrior::StaticClass();
	}
	struct Z_Construct_UClass_UMyWarrior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UPBlueprintClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UPBlueprintClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyWarrior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserProfile,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWarrior_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MyWarrior.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MyWarrior.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWarrior_Statics::NewProp_UPBlueprintClassName_MetaData[] = {
		{ "Category", "UClassNames" },
		{ "ModuleRelativePath", "MyWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyWarrior_Statics::NewProp_UPBlueprintClassName = { "UPBlueprintClassName", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyWarrior, UPBlueprintClassName), Z_Construct_UClass_UUserProfile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMyWarrior_Statics::NewProp_UPBlueprintClassName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyWarrior_Statics::NewProp_UPBlueprintClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWarrior_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "MyWarrior.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyWarrior_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyWarrior, Name), METADATA_PARAMS(Z_Construct_UClass_UMyWarrior_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyWarrior_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyWarrior_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyWarrior_Statics::NewProp_UPBlueprintClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyWarrior_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyWarrior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyWarrior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyWarrior_Statics::ClassParams = {
		&UMyWarrior::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyWarrior_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMyWarrior_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyWarrior_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyWarrior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyWarrior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyWarrior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyWarrior, 3566431636);
	template<> BASICSTUDY_API UClass* StaticClass<UMyWarrior>()
	{
		return UMyWarrior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyWarrior(Z_Construct_UClass_UMyWarrior, &UMyWarrior::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UMyWarrior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyWarrior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
