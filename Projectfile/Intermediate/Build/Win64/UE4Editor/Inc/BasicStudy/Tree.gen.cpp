// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/Tree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTree() {}
// Cross Module References
	BASICSTUDY_API UEnum* Z_Construct_UEnum_BasicStudy_ETreeType();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UClass* Z_Construct_UClass_ATree_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_ATree();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
// End Cross Module References
	static UEnum* ETreeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BasicStudy_ETreeType, Z_Construct_UPackage__Script_BasicStudy(), TEXT("ETreeType"));
		}
		return Singleton;
	}
	template<> BASICSTUDY_API UEnum* StaticEnum<ETreeType>()
	{
		return ETreeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETreeType(ETreeType_StaticEnum, TEXT("/Script/BasicStudy"), TEXT("ETreeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BasicStudy_ETreeType_Hash() { return 2863892391U; }
	UEnum* Z_Construct_UEnum_BasicStudy_ETreeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BasicStudy();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETreeType"), 0, Get_Z_Construct_UEnum_BasicStudy_ETreeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETreeType::ree_Poplar", (int64)ETreeType::ree_Poplar },
				{ "ETreeType::Tree_Spruce", (int64)ETreeType::Tree_Spruce },
				{ "ETreeType::Tree_Eucalyptus", (int64)ETreeType::Tree_Eucalyptus },
				{ "ETreeType::Tree_Redwood", (int64)ETreeType::Tree_Redwood },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Tree.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BasicStudy,
				nullptr,
				"ETreeType",
				"ETreeType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATree::StaticRegisterNativesATree()
	{
	}
	UClass* Z_Construct_UClass_ATree_NoRegister()
	{
		return ATree::StaticClass();
	}
	struct Z_Construct_UClass_ATree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Tree.h" },
		{ "ModuleRelativePath", "Tree.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATree_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Tree.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATree_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATree, Type), Z_Construct_UEnum_BasicStudy_ETreeType, METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATree_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATree_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATree_Statics::NewProp_Type_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATree_Statics::ClassParams = {
		&ATree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATree_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATree, 2435920548);
	template<> BASICSTUDY_API UClass* StaticClass<ATree>()
	{
		return ATree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATree(Z_Construct_UClass_ATree, &ATree::StaticClass, TEXT("/Script/BasicStudy"), TEXT("ATree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
