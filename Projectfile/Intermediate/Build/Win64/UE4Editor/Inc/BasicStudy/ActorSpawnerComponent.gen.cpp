// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/ActorSpawnerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawnerComponent() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_UActorSpawnerComponent_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UActorSpawnerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_UActorSpawnerComponent_Spawn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UActorSpawnerComponent::StaticRegisterNativesUActorSpawnerComponent()
	{
		UClass* Class = UActorSpawnerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Spawn", &UActorSpawnerComponent::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ActorSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSpawnerComponent, nullptr, "Spawn", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSpawnerComponent_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorSpawnerComponent_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorSpawnerComponent_NoRegister()
	{
		return UActorSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorSpawnerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorSpawnerComponent_Spawn, "Spawn" }, // 616597902
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActorSpawnerComponent.h" },
		{ "ModuleRelativePath", "ActorSpawnerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerComponent_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "ActorSpawn" },
		{ "ModuleRelativePath", "ActorSpawnerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorSpawnerComponent_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSpawnerComponent, ActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerComponent_Statics::NewProp_ActorToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerComponent_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSpawnerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSpawnerComponent_Statics::NewProp_ActorToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSpawnerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorSpawnerComponent_Statics::ClassParams = {
		&UActorSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorSpawnerComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSpawnerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorSpawnerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSpawnerComponent, 1220117249);
	template<> BASICSTUDY_API UClass* StaticClass<UActorSpawnerComponent>()
	{
		return UActorSpawnerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSpawnerComponent(Z_Construct_UClass_UActorSpawnerComponent, &UActorSpawnerComponent::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UActorSpawnerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSpawnerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
