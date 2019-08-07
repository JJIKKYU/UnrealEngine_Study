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
	BASICSTUDY_API UFunction* Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction();
	BASICSTUDY_API UClass* Z_Construct_UClass_AMyFirstActor_NoRegister();
// End Cross Module References
	void AUE4CookBookGameMode::StaticRegisterNativesAUE4CookBookGameMode()
	{
		UClass* Class = AUE4CookBookGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyActorFunction", &AUE4CookBookGameMode::execDestroyActorFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UE4CookBookGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUE4CookBookGameMode, nullptr, "DestroyActorFunction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUE4CookBookGameMode_NoRegister()
	{
		return AUE4CookBookGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE4CookBookGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4CookBookGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUE4CookBookGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUE4CookBookGameMode_DestroyActorFunction, "DestroyActorFunction" }, // 2334926255
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CookBookGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4CookBookGameMode.h" },
		{ "ModuleRelativePath", "UE4CookBookGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CookBookGameMode_Statics::NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "UE4CookBookGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUE4CookBookGameMode_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUE4CookBookGameMode, SpawnedActor), Z_Construct_UClass_AMyFirstActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUE4CookBookGameMode_Statics::NewProp_SpawnedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUE4CookBookGameMode_Statics::NewProp_SpawnedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUE4CookBookGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUE4CookBookGameMode_Statics::NewProp_SpawnedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4CookBookGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CookBookGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4CookBookGameMode_Statics::ClassParams = {
		&AUE4CookBookGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUE4CookBookGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AUE4CookBookGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AUE4CookBookGameMode, 2986221139);
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
