// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_MyFirstActor_generated_h
#error "MyFirstActor.generated.h already included, missing '#pragma once' in MyFirstActor.h"
#endif
#define BASICSTUDY_MyFirstActor_generated_h

#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyFirstActor(); \
	friend struct Z_Construct_UClass_AMyFirstActor_Statics; \
public: \
	DECLARE_CLASS(AMyFirstActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyFirstActor)


#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyFirstActor(); \
	friend struct Z_Construct_UClass_AMyFirstActor_Statics; \
public: \
	DECLARE_CLASS(AMyFirstActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AMyFirstActor)


#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyFirstActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyFirstActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFirstActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFirstActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFirstActor(AMyFirstActor&&); \
	NO_API AMyFirstActor(const AMyFirstActor&); \
public:


#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyFirstActor(AMyFirstActor&&); \
	NO_API AMyFirstActor(const AMyFirstActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyFirstActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyFirstActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyFirstActor)


#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_MyFirstActor_h_9_PROLOG
#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_INCLASS \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_MyFirstActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_MyFirstActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class AMyFirstActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_MyFirstActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
