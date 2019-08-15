// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AKing;
#ifdef BASICSTUDY_King_generated_h
#error "King.generated.h already included, missing '#pragma once' in King.h"
#endif
#define BASICSTUDY_King_generated_h

#define Projectfile_Source_BasicStudy_King_h_12_DELEGATE \
struct _Script_BasicStudy_eventOnKingDeathSignature_Parms \
{ \
	AKing* DeadKing; \
}; \
static inline void FOnKingDeathSignature_DelegateWrapper(const FMulticastScriptDelegate& OnKingDeathSignature, AKing* DeadKing) \
{ \
	_Script_BasicStudy_eventOnKingDeathSignature_Parms Parms; \
	Parms.DeadKing=DeadKing; \
	OnKingDeathSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Projectfile_Source_BasicStudy_King_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Die(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_King_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDie) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Die(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_King_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKing(); \
	friend struct Z_Construct_UClass_AKing_Statics; \
public: \
	DECLARE_CLASS(AKing, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AKing)


#define Projectfile_Source_BasicStudy_King_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAKing(); \
	friend struct Z_Construct_UClass_AKing_Statics; \
public: \
	DECLARE_CLASS(AKing, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AKing)


#define Projectfile_Source_BasicStudy_King_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKing(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKing(AKing&&); \
	NO_API AKing(const AKing&); \
public:


#define Projectfile_Source_BasicStudy_King_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKing(AKing&&); \
	NO_API AKing(const AKing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKing); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKing)


#define Projectfile_Source_BasicStudy_King_h_16_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_King_h_13_PROLOG
#define Projectfile_Source_BasicStudy_King_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_King_h_16_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_King_h_16_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_King_h_16_INCLASS \
	Projectfile_Source_BasicStudy_King_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_King_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_King_h_16_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_King_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_King_h_16_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_King_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class AKing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_King_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
