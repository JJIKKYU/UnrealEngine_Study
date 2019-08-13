// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_Snail_generated_h
#error "Snail.generated.h already included, missing '#pragma once' in Snail.h"
#endif
#define BASICSTUDY_Snail_generated_h

#define Projectfile_Source_BasicStudy_Snail_h_13_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_Snail_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_Snail_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnail(); \
	friend struct Z_Construct_UClass_ASnail_Statics; \
public: \
	DECLARE_CLASS(ASnail, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASnail) \
	virtual UObject* _getUObject() const override { return const_cast<ASnail*>(this); }


#define Projectfile_Source_BasicStudy_Snail_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASnail(); \
	friend struct Z_Construct_UClass_ASnail_Statics; \
public: \
	DECLARE_CLASS(ASnail, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASnail) \
	virtual UObject* _getUObject() const override { return const_cast<ASnail*>(this); }


#define Projectfile_Source_BasicStudy_Snail_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnail(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnail(ASnail&&); \
	NO_API ASnail(const ASnail&); \
public:


#define Projectfile_Source_BasicStudy_Snail_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnail(ASnail&&); \
	NO_API ASnail(const ASnail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnail); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnail); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnail)


#define Projectfile_Source_BasicStudy_Snail_h_13_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_Snail_h_10_PROLOG
#define Projectfile_Source_BasicStudy_Snail_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Snail_h_13_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Snail_h_13_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Snail_h_13_INCLASS \
	Projectfile_Source_BasicStudy_Snail_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Snail_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Snail_h_13_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Snail_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Snail_h_13_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Snail_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ASnail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Snail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
