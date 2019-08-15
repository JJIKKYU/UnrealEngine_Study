// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_Tree_generated_h
#error "Tree.generated.h already included, missing '#pragma once' in Tree.h"
#endif
#define BASICSTUDY_Tree_generated_h

#define Projectfile_Source_BasicStudy_Tree_h_24_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_Tree_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_Tree_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define Projectfile_Source_BasicStudy_Tree_h_24_INCLASS \
private: \
	static void StaticRegisterNativesATree(); \
	friend struct Z_Construct_UClass_ATree_Statics; \
public: \
	DECLARE_CLASS(ATree, AStaticMeshActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ATree)


#define Projectfile_Source_BasicStudy_Tree_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATree(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATree) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public:


#define Projectfile_Source_BasicStudy_Tree_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATree(ATree&&); \
	NO_API ATree(const ATree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATree); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATree)


#define Projectfile_Source_BasicStudy_Tree_h_24_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_Tree_h_21_PROLOG
#define Projectfile_Source_BasicStudy_Tree_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Tree_h_24_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Tree_h_24_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Tree_h_24_INCLASS \
	Projectfile_Source_BasicStudy_Tree_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Tree_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Tree_h_24_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_Tree_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Tree_h_24_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Tree_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ATree>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Tree_h


#define FOREACH_ENUM_ETREETYPE(op) \
	op(ETreeType::ree_Poplar) \
	op(ETreeType::Tree_Spruce) \
	op(ETreeType::Tree_Eucalyptus) \
	op(ETreeType::Tree_Redwood) 

enum class ETreeType : uint8;
template<> BASICSTUDY_API UEnum* StaticEnum<ETreeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
