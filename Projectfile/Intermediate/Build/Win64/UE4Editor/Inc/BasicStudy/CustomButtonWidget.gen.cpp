// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/CustomButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomButtonWidget() {}
// Cross Module References
	BASICSTUDY_API UFunction* Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UFunction* Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature();
	BASICSTUDY_API UClass* Z_Construct_UClass_UCustomButtonWidget_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UCustomButtonWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasicStudy, nullptr, "ButtonClicked__DelegateSignature", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics
	{
		struct _Script_BasicStudy_eventGetString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BasicStudy_eventGetString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CustomButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BasicStudy, nullptr, "GetString__DelegateSignature", sizeof(_Script_BasicStudy_eventGetString_Parms), Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCustomButtonWidget::StaticRegisterNativesUCustomButtonWidget()
	{
	}
	UClass* Z_Construct_UClass_UCustomButtonWidget_NoRegister()
	{
		return UCustomButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCustomButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_LabelDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ButtonClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomButtonWidget.h" },
		{ "ModuleRelativePath", "CustomButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_LabelDelegate_MetaData[] = {
		{ "ModuleRelativePath", "CustomButtonWidget.h" },
		{ "ToolTip", "MUST be of the form varnameDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_LabelDelegate = { "LabelDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomButtonWidget, LabelDelegate), Z_Construct_UDelegateFunction_BasicStudy_GetString__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_LabelDelegate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_LabelDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "CustomButtonWidget" },
		{ "ModuleRelativePath", "CustomButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomButtonWidget, Label), METADATA_PARAMS(Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_Label_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_ButtonClicked_MetaData[] = {
		{ "ModuleRelativePath", "CustomButtonWidget.h" },
		{ "ToolTip", "multicast" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_ButtonClicked = { "ButtonClicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::MulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomButtonWidget, ButtonClicked), Z_Construct_UDelegateFunction_BasicStudy_ButtonClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_ButtonClicked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_ButtonClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_LabelDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomButtonWidget_Statics::NewProp_ButtonClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomButtonWidget_Statics::ClassParams = {
		&UCustomButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomButtonWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCustomButtonWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomButtonWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomButtonWidget, 3412372293);
	template<> BASICSTUDY_API UClass* StaticClass<UCustomButtonWidget>()
	{
		return UCustomButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomButtonWidget(Z_Construct_UClass_UCustomButtonWidget, &UCustomButtonWidget::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UCustomButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif