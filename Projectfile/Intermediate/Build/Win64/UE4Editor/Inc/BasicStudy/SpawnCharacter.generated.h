// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_SpawnCharacter_generated_h
#error "SpawnCharacter.generated.h already included, missing '#pragma once' in SpawnCharacter.h"
#endif
#define BASICSTUDY_SpawnCharacter_generated_h

#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnCharacter(); \
	friend struct Z_Construct_UClass_ASpawnCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpawnCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASpawnCharacter)


#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnCharacter(); \
	friend struct Z_Construct_UClass_ASpawnCharacter_Statics; \
public: \
	DECLARE_CLASS(ASpawnCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASpawnCharacter)


#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnCharacter(ASpawnCharacter&&); \
	NO_API ASpawnCharacter(const ASpawnCharacter&); \
public:


#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnCharacter(ASpawnCharacter&&); \
	NO_API ASpawnCharacter(const ASpawnCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnCharacter)


#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_SpawnCharacter_h_9_PROLOG
#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_INCLASS \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_SpawnCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_SpawnCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ASpawnCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_SpawnCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
