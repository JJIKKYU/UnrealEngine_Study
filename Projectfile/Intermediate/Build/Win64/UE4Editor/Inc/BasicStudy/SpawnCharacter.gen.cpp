// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/SpawnCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnCharacter() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_ASpawnCharacter_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ASpawnCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ASpawnCharacter::StaticRegisterNativesASpawnCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASpawnCharacter_NoRegister()
	{
		return ASpawnCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualRepresentation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualRepresentation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpawnCharacter.h" },
		{ "ModuleRelativePath", "SpawnCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnCharacter_Statics::NewProp_VisualRepresentation_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnCharacter_Statics::NewProp_VisualRepresentation = { "VisualRepresentation", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnCharacter, VisualRepresentation), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnCharacter_Statics::NewProp_VisualRepresentation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnCharacter_Statics::NewProp_VisualRepresentation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnCharacter_Statics::NewProp_VisualRepresentation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnCharacter_Statics::ClassParams = {
		&ASpawnCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawnCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASpawnCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpawnCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnCharacter, 2622267514);
	template<> BASICSTUDY_API UClass* StaticClass<ASpawnCharacter>()
	{
		return ASpawnCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnCharacter(Z_Construct_UClass_ASpawnCharacter, &ASpawnCharacter::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ASpawnCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
