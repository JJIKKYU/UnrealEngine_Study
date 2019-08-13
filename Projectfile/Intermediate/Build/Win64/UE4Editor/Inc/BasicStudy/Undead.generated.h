// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_Undead_generated_h
#error "Undead.generated.h already included, missing '#pragma once' in Undead.h"
#endif
#define BASICSTUDY_Undead_generated_h

#define Projectfile_Source_BasicStudy_Undead_h_9_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_Undead_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_Undead_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUndead(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUndead) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUndead); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUndead); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUndead(UUndead&&); \
	NO_API UUndead(const UUndead&); \
public:


#define Projectfile_Source_BasicStudy_Undead_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUndead(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUndead(UUndead&&); \
	NO_API UUndead(const UUndead&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUndead); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUndead); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUndead)


#define Projectfile_Source_BasicStudy_Undead_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUndead(); \
	friend struct Z_Construct_UClass_UUndead_Statics; \
public: \
	DECLARE_CLASS(UUndead, UKillable, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(UUndead)


#define Projectfile_Source_BasicStudy_Undead_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Undead_h_9_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Undead_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Undead_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Undead_h_9_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Undead_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Undead_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUndead() {} \
public: \
	typedef UUndead UClassType; \
	typedef IUndead ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Undead_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IUndead() {} \
public: \
	typedef UUndead UClassType; \
	typedef IUndead ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Undead_h_6_PROLOG
#define Projectfile_Source_BasicStudy_Undead_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Undead_h_9_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Undead_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Undead_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Undead_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Undead_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class UUndead>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Undead_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
