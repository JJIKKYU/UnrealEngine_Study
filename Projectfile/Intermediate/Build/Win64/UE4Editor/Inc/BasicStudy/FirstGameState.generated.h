// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_FirstGameState_generated_h
#error "FirstGameState.generated.h already included, missing '#pragma once' in FirstGameState.h"
#endif
#define BASICSTUDY_FirstGameState_generated_h

#define Projectfile_Source_BasicStudy_FirstGameState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScore(Z_Param_NewScore); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_FirstGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScore(Z_Param_NewScore); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_FirstGameState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstGameState(); \
	friend struct Z_Construct_UClass_AFirstGameState_Statics; \
public: \
	DECLARE_CLASS(AFirstGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameState)


#define Projectfile_Source_BasicStudy_FirstGameState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFirstGameState(); \
	friend struct Z_Construct_UClass_AFirstGameState_Statics; \
public: \
	DECLARE_CLASS(AFirstGameState, AGameState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AFirstGameState)


#define Projectfile_Source_BasicStudy_FirstGameState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameState(AFirstGameState&&); \
	NO_API AFirstGameState(const AFirstGameState&); \
public:


#define Projectfile_Source_BasicStudy_FirstGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstGameState(AFirstGameState&&); \
	NO_API AFirstGameState(const AFirstGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFirstGameState)


#define Projectfile_Source_BasicStudy_FirstGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentScore() { return STRUCT_OFFSET(AFirstGameState, CurrentScore); }


#define Projectfile_Source_BasicStudy_FirstGameState_h_12_PROLOG
#define Projectfile_Source_BasicStudy_FirstGameState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_INCLASS \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_FirstGameState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_FirstGameState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class AFirstGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_FirstGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
