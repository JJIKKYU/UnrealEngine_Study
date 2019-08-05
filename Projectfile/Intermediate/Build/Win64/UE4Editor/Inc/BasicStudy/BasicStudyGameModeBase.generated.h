// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_BasicStudyGameModeBase_generated_h
#error "BasicStudyGameModeBase.generated.h already included, missing '#pragma once' in BasicStudyGameModeBase.h"
#endif
#define BASICSTUDY_BasicStudyGameModeBase_generated_h

#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_RPC_WRAPPERS
#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicStudyGameModeBase(); \
	friend struct Z_Construct_UClass_ABasicStudyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABasicStudyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ABasicStudyGameModeBase)


#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasicStudyGameModeBase(); \
	friend struct Z_Construct_UClass_ABasicStudyGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABasicStudyGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ABasicStudyGameModeBase)


#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicStudyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicStudyGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicStudyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicStudyGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicStudyGameModeBase(ABasicStudyGameModeBase&&); \
	NO_API ABasicStudyGameModeBase(const ABasicStudyGameModeBase&); \
public:


#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicStudyGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicStudyGameModeBase(ABasicStudyGameModeBase&&); \
	NO_API ABasicStudyGameModeBase(const ABasicStudyGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicStudyGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicStudyGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicStudyGameModeBase)


#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_12_PROLOG
#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_RPC_WRAPPERS \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_INCLASS \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ABasicStudyGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicStudy_Source_BasicStudy_BasicStudyGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
