// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_Openable_generated_h
#error "Openable.generated.h already included, missing '#pragma once' in Openable.h"
#endif
#define BASICSTUDY_Openable_generated_h

#define Projectfile_Source_BasicStudy_Openable_h_8_RPC_WRAPPERS \
	virtual void Open_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open_Implementation(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Openable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Open_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOpen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Open_Implementation(); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_Openable_h_8_EVENT_PARMS
#define Projectfile_Source_BasicStudy_Openable_h_8_CALLBACK_WRAPPERS
#define Projectfile_Source_BasicStudy_Openable_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenable(UOpenable&&); \
	NO_API UOpenable(const UOpenable&); \
public:


#define Projectfile_Source_BasicStudy_Openable_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenable(UOpenable&&); \
	NO_API UOpenable(const UOpenable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenable)


#define Projectfile_Source_BasicStudy_Openable_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOpenable(); \
	friend struct Z_Construct_UClass_UOpenable_Statics; \
public: \
	DECLARE_CLASS(UOpenable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(UOpenable)


#define Projectfile_Source_BasicStudy_Openable_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Openable_h_8_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Openable_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Openable_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Projectfile_Source_BasicStudy_Openable_h_8_GENERATED_UINTERFACE_BODY() \
	Projectfile_Source_BasicStudy_Openable_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Openable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOpenable() {} \
public: \
	typedef UOpenable UClassType; \
	typedef IOpenable ThisClass; \
	static void Execute_Open(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Openable_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IOpenable() {} \
public: \
	typedef UOpenable UClassType; \
	typedef IOpenable ThisClass; \
	static void Execute_Open(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Projectfile_Source_BasicStudy_Openable_h_5_PROLOG \
	Projectfile_Source_BasicStudy_Openable_h_8_EVENT_PARMS


#define Projectfile_Source_BasicStudy_Openable_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Openable_h_8_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_Openable_h_8_CALLBACK_WRAPPERS \
	Projectfile_Source_BasicStudy_Openable_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_Openable_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_Openable_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_Openable_h_8_CALLBACK_WRAPPERS \
	Projectfile_Source_BasicStudy_Openable_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class UOpenable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_Openable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
