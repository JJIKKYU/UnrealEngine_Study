// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_SingleInterfaceActor_generated_h
#error "SingleInterfaceActor.generated.h already included, missing '#pragma once' in SingleInterfaceActor.h"
#endif
#define BASICSTUDY_SingleInterfaceActor_generated_h

#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASingleInterfaceActor(); \
	friend struct Z_Construct_UClass_ASingleInterfaceActor_Statics; \
public: \
	DECLARE_CLASS(ASingleInterfaceActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASingleInterfaceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASingleInterfaceActor*>(this); }


#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASingleInterfaceActor(); \
	friend struct Z_Construct_UClass_ASingleInterfaceActor_Statics; \
public: \
	DECLARE_CLASS(ASingleInterfaceActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ASingleInterfaceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ASingleInterfaceActor*>(this); }


#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASingleInterfaceActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASingleInterfaceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleInterfaceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleInterfaceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleInterfaceActor(ASingleInterfaceActor&&); \
	NO_API ASingleInterfaceActor(const ASingleInterfaceActor&); \
public:


#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASingleInterfaceActor(ASingleInterfaceActor&&); \
	NO_API ASingleInterfaceActor(const ASingleInterfaceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASingleInterfaceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASingleInterfaceActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASingleInterfaceActor)


#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_10_PROLOG
#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_INCLASS \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_SingleInterfaceActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ASingleInterfaceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_SingleInterfaceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
