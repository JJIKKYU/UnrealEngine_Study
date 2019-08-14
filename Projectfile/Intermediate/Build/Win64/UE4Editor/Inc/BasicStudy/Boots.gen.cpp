// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/Boots.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoots() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_ABoots_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ABoots();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_ABoots_OnEquip_Implementation();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UWearable_NoRegister();
// End Cross Module References
	void ABoots::StaticRegisterNativesABoots()
	{
		UClass* Class = ABoots::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEquip_Implementation", &ABoots::execOnEquip_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics
	{
		struct Boots_eventOnEquip_Implementation_Parms
		{
			APawn* Wearer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Wearer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::NewProp_Wearer = { "Wearer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Boots_eventOnEquip_Implementation_Parms, Wearer), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::NewProp_Wearer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Boots.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoots, nullptr, "OnEquip_Implementation", sizeof(Boots_eventOnEquip_Implementation_Parms), Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABoots_OnEquip_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABoots_OnEquip_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABoots_NoRegister()
	{
		return ABoots::StaticClass();
	}
	struct Z_Construct_UClass_ABoots_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoots_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABoots_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoots_OnEquip_Implementation, "OnEquip_Implementation" }, // 3393070913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoots_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boots.h" },
		{ "ModuleRelativePath", "Boots.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABoots_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWearable_NoRegister, (int32)VTABLE_OFFSET(ABoots, IWearable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoots_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoots>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoots_Statics::ClassParams = {
		&ABoots::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABoots_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABoots_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoots()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoots_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoots, 1273406745);
	template<> BASICSTUDY_API UClass* StaticClass<ABoots>()
	{
		return ABoots::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoots(Z_Construct_UClass_ABoots, &ABoots::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ABoots"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoots);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
