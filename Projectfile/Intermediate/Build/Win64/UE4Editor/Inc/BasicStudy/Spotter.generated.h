// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef BASICSTUDY_Spotter_generated_h
#error "Spotter.generated.h already included, missing '#pragma once' in Spotter.h"
#endif
#define BASICSTUDY_Spotter_generated_h

#define Projectfile_Source_BasicStudy_Spotter_h_15_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_Spotter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_Spotter_h_15_EVENT_PARMS \
	struct Spotter_eventOnPlayerSpotted_Parms \
	{ \
		APawn* Player; \
	};


#define Projectfile_Source_BasicStudy_Spotter_h_15_CALLBACK_WRAPPERS
#define Projectfile_Source_BasicStudy_Spotter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpotter(); \
	friend struct Z_Construct_UClass_ASpotter_Statics; \
public: \
	DECLARE_CLASS(ASpotter, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASpotter)


#define Projectfile_Source_BasicStudy_Spotter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpotter(); \
	friend struct Z_Construct_UClass_ASpotter_Statics; \
public: \
	DECLARE_CLASS(ASpotter, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASpotter)


#define Projectfile_Source_BasicStudy_Spotter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpotter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpotter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpotter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpotter(ASpotter&&); \
	NO_API ASpotter(const ASpotter&); \
public:


#define Projectfile_Source_BasicStudy_Spotter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpotter(ASpotter&&); \
	NO_API ASpotter(const ASpotter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpotter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpotter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpotter)


#define Projectfile_Source_BasicStudy_Spotter_h_15_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_Spotter_h_12_PROLOG \
	Projectfile_Source_BasicStudy_Spotter_h_15_EVENT_PARMS


#define Projectfile_Source_BasicStudy_Spotter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Spotter_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Spotter_h_15_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Spotter_h_15_CALLBACK_WRAPPERS \
	Projectfile_Source_BasicStudy_Spotter_h_15_INCLASS \
	Projectfile_Source_BasicStudy_Spotter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Spotter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Spotter_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Spotter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Spotter_h_15_CALLBACK_WRAPPERS \
	Projectfile_Source_BasicStudy_Spotter_h_15_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Spotter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ASpotter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Spotter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
