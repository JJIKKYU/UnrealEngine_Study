// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AKing;
#ifdef BASICSTUDY_Peasant_generated_h
#error "Peasant.generated.h already included, missing '#pragma once' in Peasant.h"
#endif
#define BASICSTUDY_Peasant_generated_h

#define Projectfile_Source_BasicStudy_Peasant_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFlee) \
	{ \
		P_GET_OBJECT(AKing,Z_Param_DeadKing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Flee(Z_Param_DeadKing); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Peasant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFlee) \
	{ \
		P_GET_OBJECT(AKing,Z_Param_DeadKing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Flee(Z_Param_DeadKing); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Peasant_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPeasant(); \
	friend struct Z_Construct_UClass_APeasant_Statics; \
public: \
	DECLARE_CLASS(APeasant, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(APeasant)


#define Projectfile_Source_BasicStudy_Peasant_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPeasant(); \
	friend struct Z_Construct_UClass_APeasant_Statics; \
public: \
	DECLARE_CLASS(APeasant, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(APeasant)


#define Projectfile_Source_BasicStudy_Peasant_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APeasant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APeasant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APeasant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APeasant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APeasant(APeasant&&); \
	NO_API APeasant(const APeasant&); \
public:


#define Projectfile_Source_BasicStudy_Peasant_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APeasant(APeasant&&); \
	NO_API APeasant(const APeasant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APeasant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APeasant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APeasant)


#define Projectfile_Source_BasicStudy_Peasant_h_15_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_Peasant_h_12_PROLOG
#define Projectfile_Source_BasicStudy_Peasant_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Peasant_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Peasant_h_15_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Peasant_h_15_INCLASS \
	Projectfile_Source_BasicStudy_Peasant_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Peasant_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Peasant_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Peasant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Peasant_h_15_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Peasant_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class APeasant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Peasant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
