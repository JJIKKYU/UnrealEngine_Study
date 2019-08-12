// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_SpawnBuliding_generated_h
#error "SpawnBuliding.generated.h already included, missing '#pragma once' in SpawnBuliding.h"
#endif
#define BASICSTUDY_SpawnBuliding_generated_h

#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndPlay) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnUnit(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_EndPlayReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnUnit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnUnit(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnBuliding(); \
	friend struct Z_Construct_UClass_ASpawnBuliding_Statics; \
public: \
	DECLARE_CLASS(ASpawnBuliding, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASpawnBuliding)


#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnBuliding(); \
	friend struct Z_Construct_UClass_ASpawnBuliding_Statics; \
public: \
	DECLARE_CLASS(ASpawnBuliding, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASpawnBuliding)


#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnBuliding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnBuliding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnBuliding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnBuliding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnBuliding(ASpawnBuliding&&); \
	NO_API ASpawnBuliding(const ASpawnBuliding&); \
public:


#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnBuliding(ASpawnBuliding&&); \
	NO_API ASpawnBuliding(const ASpawnBuliding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnBuliding); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnBuliding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnBuliding)


#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_SpawnBuliding_h_9_PROLOG
#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_INCLASS \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_SpawnBuliding_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_SpawnBuliding_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ASpawnBuliding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_SpawnBuliding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
