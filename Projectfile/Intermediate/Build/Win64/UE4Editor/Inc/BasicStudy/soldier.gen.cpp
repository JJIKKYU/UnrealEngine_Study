// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/soldier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodesoldier() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_Asoldier_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_Asoldier();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_Asoldier_ToString();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void Asoldier::StaticRegisterNativesAsoldier()
	{
		UClass* Class = Asoldier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToString", &Asoldier::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Asoldier_ToString_Statics
	{
		struct soldier_eventToString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_Asoldier_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(soldier_eventToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Asoldier_ToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Asoldier_ToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Asoldier_ToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "soldier.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Asoldier_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Asoldier, nullptr, "ToString", sizeof(soldier_eventToString_Parms), Z_Construct_UFunction_Asoldier_ToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_Asoldier_ToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Asoldier_ToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Asoldier_ToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Asoldier_ToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Asoldier_ToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Asoldier_NoRegister()
	{
		return Asoldier::StaticClass();
	}
	struct Z_Construct_UClass_Asoldier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Asoldier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Asoldier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Asoldier_ToString, "ToString" }, // 3008845445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asoldier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "soldier.h" },
		{ "ModuleRelativePath", "soldier.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asoldier_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "soldier.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Asoldier_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asoldier, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Asoldier_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_Asoldier_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Asoldier_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "soldier.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_Asoldier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Asoldier, Name), METADATA_PARAMS(Z_Construct_UClass_Asoldier_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_Asoldier_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Asoldier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asoldier_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Asoldier_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Asoldier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Asoldier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Asoldier_Statics::ClassParams = {
		&Asoldier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Asoldier_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_Asoldier_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Asoldier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Asoldier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Asoldier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Asoldier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Asoldier, 2513713391);
	template<> BASICSTUDY_API UClass* StaticClass<Asoldier>()
	{
		return Asoldier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Asoldier(Z_Construct_UClass_Asoldier, &Asoldier::StaticClass, TEXT("/Script/BasicStudy"), TEXT("Asoldier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Asoldier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
