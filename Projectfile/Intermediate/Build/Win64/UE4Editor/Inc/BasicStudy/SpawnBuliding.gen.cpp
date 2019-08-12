// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/SpawnBuliding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnBuliding() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_ASpawnBuliding_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ASpawnBuliding();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_ASpawnBuliding_EndPlay();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_ASpawnBuliding_SpawnUnit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASpawnBuliding::StaticRegisterNativesASpawnBuliding()
	{
		UClass* Class = ASpawnBuliding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &ASpawnBuliding::execEndPlay },
			{ "SpawnUnit", &ASpawnBuliding::execSpawnUnit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics
	{
		struct SpawnBuliding_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawnBuliding_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::NewProp_EndPlayReason_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::NewProp_EndPlayReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBuliding, nullptr, "EndPlay", sizeof(SpawnBuliding_eventEndPlay_Parms), Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnBuliding_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawnBuliding_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawnBuliding_SpawnUnit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnBuliding_SpawnUnit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnBuliding_SpawnUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnBuliding, nullptr, "SpawnUnit", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawnBuliding_SpawnUnit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASpawnBuliding_SpawnUnit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawnBuliding_SpawnUnit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawnBuliding_SpawnUnit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawnBuliding_NoRegister()
	{
		return ASpawnBuliding::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnBuliding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnTimerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UnitToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulidingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulidingMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnBuliding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnBuliding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnBuliding_EndPlay, "EndPlay" }, // 3059673233
		{ &Z_Construct_UFunction_ASpawnBuliding_SpawnUnit, "SpawnUnit" }, // 3769424989
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBuliding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnBuliding.h" },
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnTimerHandle = { "SpawnTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBuliding, SpawnTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnTimerHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnTimerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBuliding, SpawnInterval), METADATA_PARAMS(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_UnitToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_UnitToSpawn = { "UnitToSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBuliding, UnitToSpawn), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_UnitToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_UnitToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBuliding, SpawnPoint), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_BulidingMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnBuliding.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_BulidingMesh = { "BulidingMesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawnBuliding, BulidingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_BulidingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_BulidingMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnBuliding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnTimerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_UnitToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnBuliding_Statics::NewProp_BulidingMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnBuliding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnBuliding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnBuliding_Statics::ClassParams = {
		&ASpawnBuliding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnBuliding_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASpawnBuliding_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnBuliding_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASpawnBuliding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnBuliding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnBuliding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnBuliding, 3994719007);
	template<> BASICSTUDY_API UClass* StaticClass<ASpawnBuliding>()
	{
		return ASpawnBuliding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnBuliding(Z_Construct_UClass_ASpawnBuliding, &ASpawnBuliding::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ASpawnBuliding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnBuliding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
