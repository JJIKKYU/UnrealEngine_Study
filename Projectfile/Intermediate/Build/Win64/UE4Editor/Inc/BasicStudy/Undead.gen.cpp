// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/Undead.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUndead() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_UUndead_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UUndead();
	BASICSTUDY_API UClass* Z_Construct_UClass_UKillable();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void UUndead::StaticRegisterNativesUUndead()
	{
	}
	UClass* Z_Construct_UClass_UUndead_NoRegister()
	{
		return UUndead::StaticClass();
	}
	struct Z_Construct_UClass_UUndead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUndead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKillable,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUndead_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Undead.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUndead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUndead>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUndead_Statics::ClassParams = {
		&UUndead::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUndead_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUndead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUndead()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUndead_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUndead, 2793809371);
	template<> BASICSTUDY_API UClass* StaticClass<UUndead>()
	{
		return UUndead::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUndead(Z_Construct_UClass_UUndead, &UUndead::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UUndead"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUndead);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif