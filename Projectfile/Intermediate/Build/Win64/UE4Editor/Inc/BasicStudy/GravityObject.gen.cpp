// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/GravityObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityObject() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_UGravityObject_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UGravityObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
// End Cross Module References
	void UGravityObject::StaticRegisterNativesUGravityObject()
	{
	}
	UClass* Z_Construct_UClass_UGravityObject_NoRegister()
	{
		return UGravityObject::StaticClass();
	}
	struct Z_Construct_UClass_UGravityObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGravityObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGravityObject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "GravityObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGravityObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGravityObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGravityObject_Statics::ClassParams = {
		&UGravityObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGravityObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGravityObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGravityObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGravityObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGravityObject, 1297183150);
	template<> BASICSTUDY_API UClass* StaticClass<UGravityObject>()
	{
		return UGravityObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGravityObject(Z_Construct_UClass_UGravityObject, &UGravityObject::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UGravityObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGravityObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif