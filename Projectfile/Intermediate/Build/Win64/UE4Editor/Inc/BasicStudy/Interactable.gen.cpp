// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	BASICSTUDY_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UInteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_UInteractable_CanInteract();
	BASICSTUDY_API UFunction* Z_Construct_UFunction_UInteractable_PerformInteract();
// End Cross Module References
	bool IInteractable::CanInteract()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanInteract instead.");
		Interactable_eventCanInteract_Parms Parms;
		return Parms.ReturnValue;
	}
	void IInteractable::PerformInteract()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PerformInteract instead.");
	}
	void UInteractable::StaticRegisterNativesUInteractable()
	{
		UClass* Class = UInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &IInteractable::execCanInteract },
			{ "PerformInteract", &IInteractable::execPerformInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractable_CanInteract_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractable_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Interactable_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractable_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractable_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractable_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractable_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "CanInteract", sizeof(Interactable_eventCanInteract_Parms), Z_Construct_UFunction_UInteractable_CanInteract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInteractable_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_CanInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractable_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractable_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractable_PerformInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_PerformInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactable" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_PerformInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "PerformInteract", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_PerformInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractable_PerformInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_PerformInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractable_PerformInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractable_NoRegister()
	{
		return UInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_CanInteract, "CanInteract" }, // 2772389244
		{ &Z_Construct_UFunction_UInteractable_PerformInteract, "PerformInteract" }, // 1074475597
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
		&UInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractable, 3051895687);
	template<> BASICSTUDY_API UClass* StaticClass<UInteractable>()
	{
		return UInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractable(Z_Construct_UClass_UInteractable, &UInteractable::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
	static FName NAME_UInteractable_CanInteract = FName(TEXT("CanInteract"));
	bool IInteractable::Execute_CanInteract(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		Interactable_eventCanInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractable_CanInteract);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
		{
			Parms.ReturnValue = I->CanInteract_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UInteractable_PerformInteract = FName(TEXT("PerformInteract"));
	void IInteractable::Execute_PerformInteract(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractable_PerformInteract);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
		{
			I->PerformInteract_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif