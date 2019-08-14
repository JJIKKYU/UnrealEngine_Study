// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_TalkingMesh_generated_h
#error "TalkingMesh.generated.h already included, missing '#pragma once' in TalkingMesh.h"
#endif
#define BASICSTUDY_TalkingMesh_generated_h

#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATalkingMesh(); \
	friend struct Z_Construct_UClass_ATalkingMesh_Statics; \
public: \
	DECLARE_CLASS(ATalkingMesh, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ATalkingMesh) \
	virtual UObject* _getUObject() const override { return const_cast<ATalkingMesh*>(this); }


#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATalkingMesh(); \
	friend struct Z_Construct_UClass_ATalkingMesh_Statics; \
public: \
	DECLARE_CLASS(ATalkingMesh, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ATalkingMesh) \
	virtual UObject* _getUObject() const override { return const_cast<ATalkingMesh*>(this); }


#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATalkingMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATalkingMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingMesh(ATalkingMesh&&); \
	NO_API ATalkingMesh(const ATalkingMesh&); \
public:


#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingMesh(ATalkingMesh&&); \
	NO_API ATalkingMesh(const ATalkingMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATalkingMesh)


#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_TalkingMesh_h_13_PROLOG
#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_INCLASS \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_TalkingMesh_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_TalkingMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ATalkingMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_TalkingMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
