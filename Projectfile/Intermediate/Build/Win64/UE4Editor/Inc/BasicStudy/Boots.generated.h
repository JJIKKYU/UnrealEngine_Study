// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef BASICSTUDY_Boots_generated_h
#error "Boots.generated.h already included, missing '#pragma once' in Boots.h"
#endif
#define BASICSTUDY_Boots_generated_h

#define Projectfile_Source_BasicStudy_Boots_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEquip_Implementation) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Boots_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEquip_Implementation) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_Wearer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip_Implementation(Z_Param_Wearer); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Boots_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoots(); \
	friend struct Z_Construct_UClass_ABoots_Statics; \
public: \
	DECLARE_CLASS(ABoots, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ABoots) \
	virtual UObject* _getUObject() const override { return const_cast<ABoots*>(this); }


#define Projectfile_Source_BasicStudy_Boots_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABoots(); \
	friend struct Z_Construct_UClass_ABoots_Statics; \
public: \
	DECLARE_CLASS(ABoots, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ABoots) \
	virtual UObject* _getUObject() const override { return const_cast<ABoots*>(this); }


#define Projectfile_Source_BasicStudy_Boots_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoots(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoots) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoots); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoots); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoots(ABoots&&); \
	NO_API ABoots(const ABoots&); \
public:


#define Projectfile_Source_BasicStudy_Boots_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoots(ABoots&&); \
	NO_API ABoots(const ABoots&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoots); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoots); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoots)


#define Projectfile_Source_BasicStudy_Boots_h_13_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_Boots_h_10_PROLOG
#define Projectfile_Source_BasicStudy_Boots_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Boots_h_13_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Boots_h_13_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Boots_h_13_INCLASS \
	Projectfile_Source_BasicStudy_Boots_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Boots_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Boots_h_13_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Boots_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Boots_h_13_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Boots_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ABoots>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Boots_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
