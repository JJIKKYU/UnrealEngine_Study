// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_Selectable_generated_h
#error "Selectable.generated.h already included, missing '#pragma once' in Selectable.h"
#endif
#define BASICSTUDY_Selectable_generated_h

#define Projectfile_Source_BasicStudy_Selectable_h_8_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_Selectable_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_Selectable_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectable(USelectable&&); \
	NO_API USelectable(const USelectable&); \
public:


#define Projectfile_Source_BasicStudy_Selectable_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectable(USelectable&&); \
	NO_API USelectable(const USelectable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectable)


#define Projectfile_Source_BasicStudy_Selectable_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSelectable(); \
	friend struct Z_Construct_UClass_USelectable_Statics; \
public: \
	DECLARE_CLASS(USelectable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(USelectable)


#define Projectfile_Source_BasicStudy_Selectable_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Selectable_h_8_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Selectable_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Selectable_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Selectable_h_8_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Selectable_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Selectable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISelectable() {} \
public: \
	typedef USelectable UClassType; \
	typedef ISelectable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Selectable_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~ISelectable() {} \
public: \
	typedef USelectable UClassType; \
	typedef ISelectable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Selectable_h_5_PROLOG
#define Projectfile_Source_BasicStudy_Selectable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Selectable_h_8_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Selectable_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Selectable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Selectable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Selectable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class USelectable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Selectable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
