// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_InteracGameMode_generated_h
#error "InteracGameMode.generated.h already included, missing '#pragma once' in InteracGameMode.h"
#endif
#define BASICSTUDY_InteracGameMode_generated_h

#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteracGameMode(); \
	friend struct Z_Construct_UClass_AInteracGameMode_Statics; \
public: \
	DECLARE_CLASS(AInteracGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AInteracGameMode)


#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAInteracGameMode(); \
	friend struct Z_Construct_UClass_AInteracGameMode_Statics; \
public: \
	DECLARE_CLASS(AInteracGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(AInteracGameMode)


#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteracGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteracGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteracGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteracGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteracGameMode(AInteracGameMode&&); \
	NO_API AInteracGameMode(const AInteracGameMode&); \
public:


#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteracGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteracGameMode(AInteracGameMode&&); \
	NO_API AInteracGameMode(const AInteracGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteracGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteracGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteracGameMode)


#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_InteracGameMode_h_12_PROLOG
#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_INCLASS \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_InteracGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_InteracGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class AInteracGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_InteracGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
