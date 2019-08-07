// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/FirstGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstGameState() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_AFirstGameState_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_AFirstGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_AFirstGameState_GetScore();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_AFirstGameState_SetScore();
// End Cross Module References
	void AFirstGameState::StaticRegisterNativesAFirstGameState()
	{
		UClass* Class = AFirstGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScore", &AFirstGameState::execGetScore },
			{ "SetScore", &AFirstGameState::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstGameState_GetScore_Statics
	{
		struct FirstGameState_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirstGameState_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstGameState_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstGameState_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstGameState_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstGameState_GetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstGameState_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstGameState, nullptr, "GetScore", sizeof(FirstGameState_eventGetScore_Parms), Z_Construct_UFunction_AFirstGameState_GetScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstGameState_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstGameState_GetScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstGameState_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstGameState_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstGameState_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstGameState_SetScore_Statics
	{
		struct FirstGameState_eventSetScore_Parms
		{
			int32 NewScore;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirstGameState_SetScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstGameState_eventSetScore_Parms, NewScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstGameState_SetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstGameState_SetScore_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstGameState_SetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FirstGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstGameState_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstGameState, nullptr, "SetScore", sizeof(FirstGameState_eventSetScore_Parms), Z_Construct_UFunction_AFirstGameState_SetScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstGameState_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstGameState_SetScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstGameState_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstGameState_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstGameState_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstGameState_NoRegister()
	{
		return AFirstGameState::StaticClass();
	}
	struct Z_Construct_UClass_AFirstGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstGameState_GetScore, "GetScore" }, // 623741370
		{ &Z_Construct_UFunction_AFirstGameState_SetScore, "SetScore" }, // 823614827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstGameState.h" },
		{ "ModuleRelativePath", "FirstGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstGameState_Statics::NewProp_CurrentScore_MetaData[] = {
		{ "ModuleRelativePath", "FirstGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFirstGameState_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstGameState, CurrentScore), METADATA_PARAMS(Z_Construct_UClass_AFirstGameState_Statics::NewProp_CurrentScore_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstGameState_Statics::NewProp_CurrentScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstGameState_Statics::NewProp_CurrentScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstGameState_Statics::ClassParams = {
		&AFirstGameState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstGameState_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFirstGameState_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFirstGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstGameState, 2324300721);
	template<> BASICSTUDY_API UClass* StaticClass<AFirstGameState>()
	{
		return AFirstGameState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstGameState(Z_Construct_UClass_AFirstGameState, &AFirstGameState::StaticClass, TEXT("/Script/BasicStudy"), TEXT("AFirstGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
