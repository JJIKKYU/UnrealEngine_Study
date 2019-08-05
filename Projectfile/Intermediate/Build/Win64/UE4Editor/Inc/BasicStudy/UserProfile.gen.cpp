// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStudy/UserProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserProfile() {}
// Cross Module References
	BASICSTUDY_API UEnum* Z_Construct_UEnum_BasicStudy_Status();
	UPackage* Z_Construct_UPackage__Script_BasicStudy();
	BASICSTUDY_API UClass* Z_Construct_UClass_UUserProfile_NoRegister();
	BASICSTUDY_API UClass* Z_Construct_UClass_UUserProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* Status_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BasicStudy_Status, Z_Construct_UPackage__Script_BasicStudy(), TEXT("Status"));
		}
		return Singleton;
	}
	template<> BASICSTUDY_API UEnum* StaticEnum<Status>()
	{
		return Status_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Status(Status_StaticEnum, TEXT("/Script/BasicStudy"), TEXT("Status"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BasicStudy_Status_Hash() { return 1610043055U; }
	UEnum* Z_Construct_UEnum_BasicStudy_Status()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BasicStudy();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Status"), 0, Get_Z_Construct_UEnum_BasicStudy_Status_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Stopped", (int64)Stopped },
				{ "Moving", (int64)Moving },
				{ "Attacking", (int64)Attacking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attacking.DisplayName", "Attacking" },
				{ "ModuleRelativePath", "UserProfile.h" },
				{ "Moving.DisplayName", "Moving" },
				{ "Stopped.DisplayName", "Stopped" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BasicStudy,
				nullptr,
				"Status",
				"Status",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UUserProfile::StaticRegisterNativesUUserProfile()
	{
	}
	UClass* Z_Construct_UClass_UUserProfile_NoRegister()
	{
		return UUserProfile::StaticClass();
	}
	struct Z_Construct_UClass_UUserProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_status_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HpMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HpMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UClassGameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UClassGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UClassOfPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UClassOfPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicStudy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UserProfile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_status_MetaData[] = {
		{ "Category", "Status" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_status = { "status", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, status), Z_Construct_UEnum_BasicStudy_Status, METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_status_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax = { "HpMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, HpMax), METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, Armor), METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode_MetaData[] = {
		{ "Category", "Unit" },
		{ "MetaClass", "GameMode" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode = { "UClassGameMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, UClassGameMode), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "UserProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer = { "UClassOfPlayer", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUserProfile, UClassOfPlayer), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_HpMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserProfile_Statics::NewProp_UClassOfPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserProfile_Statics::ClassParams = {
		&UUserProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserProfile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUserProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserProfile, 388547145);
	template<> BASICSTUDY_API UClass* StaticClass<UUserProfile>()
	{
		return UUserProfile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserProfile(Z_Construct_UClass_UUserProfile, &UUserProfile::StaticClass, TEXT("/Script/BasicStudy"), TEXT("UUserProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
