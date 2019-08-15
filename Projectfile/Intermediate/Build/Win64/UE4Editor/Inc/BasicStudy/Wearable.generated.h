// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef BASICSTUDY_Wearable_generated_h
#error "Wearable.generated.h already included, missing '#pragma once' in Wearable.h"
#endif
#define BASICSTUDY_Wearable_generated_h

#define Projectfile_Source_BasicStudy_Wearable_h_8_RPC_WRAPPERS \
	virtual void OnEquip_Implementation(APawn* Wearer) {}; \
	virtual bool CanEquip_Implementation(APawn* Wearer) { return false; }; \
	virtual int32 GetStrengthRequirement_Implementation() { return 0; }; \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStrengthRequirement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStrengthRequirement_Implementation(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Wearable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEquip) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStrengthRequirement) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetStrengthRequirement_Implementation(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Wearable_h_8_EVENT_PARMS \
	struct Wearable_eventCanEquip_Parms \
	{ \
		APawn* Wearer; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Wearable_eventCanEquip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct Wearable_eventGetStrengthRequirement_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Wearable_eventGetStrengthRequirement_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct Wearable_eventOnEquip_Parms \
	{ \
		APawn* Wearer; \
	};


#define Projectfile_Source_BasicStudy_Wearable_h_8_CALLBACK_WRAPPERS
#define Projectfile_Source_BasicStudy_Wearable_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWearable(UWearable&&); \
	NO_API UWearable(const UWearable&); \
public:


#define Projectfile_Source_BasicStudy_Wearable_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWearable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWearable(UWearable&&); \
	NO_API UWearable(const UWearable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWearable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWearable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWearable)


#define Projectfile_Source_BasicStudy_Wearable_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUWearable(); \
	friend struct Z_Construct_UClass_UWearable_Statics; \
public: \
	DECLARE_CLASS(UWearable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(UWearable)


#define Projectfile_Source_BasicStudy_Wearable_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Wearable_h_8_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Wearable_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Wearable_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Wearable_h_8_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Wearable_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Wearable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IWearable() {} \
public: \
	typedef UWearable UClassType; \
	typedef IWearable ThisClass; \
	static bool Execute_CanEquip(UObject* O, APawn* Wearer); \
	static int32 Execute_GetStrengthRequirement(UObject* O); \
	static void Execute_OnEquip(UObject* O, APawn* Wearer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Wearable_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IWearable() {} \
public: \
	typedef UWearable UClassType; \
	typedef IWearable ThisClass; \
	static bool Execute_CanEquip(UObject* O, APawn* Wearer); \
	static int32 Execute_GetStrengthRequirement(UObject* O); \
	static void Execute_OnEquip(UObject* O, APawn* Wearer); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Wearable_h_5_PROLOG \
	Projectfile_Source_BasicStudy_Wearable_h_8_EVENT_PARMS


#define Projectfile_Source_BasicStudy_Wearable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Wearable_h_8_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Wearable_h_8_CALLBACK_WRAPPERS \
	Projectfile_Source_BasicStudy_Wearable_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Wearable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Wearable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Wearable_h_8_CALLBACK_WRAPPERS \
	Projectfile_Source_BasicStudy_Wearable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class UWearable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Wearable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS