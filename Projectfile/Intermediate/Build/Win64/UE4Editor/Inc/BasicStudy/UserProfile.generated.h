// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_UserProfile_generated_h
#error "UserProfile.generated.h already included, missing '#pragma once' in UserProfile.h"
#endif
#define BASICSTUDY_UserProfile_generated_h

#define Projectfile_Source_BasicStudy_UserProfile_h_15_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_UserProfile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_UserProfile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserProfile(); \
	friend struct Z_Construct_UClass_UUserProfile_Statics; \
public: \
	DECLARE_CLASS(UUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(UUserProfile)


#define Projectfile_Source_BasicStudy_UserProfile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUUserProfile(); \
	friend struct Z_Construct_UClass_UUserProfile_Statics; \
public: \
	DECLARE_CLASS(UUserProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(UUserProfile)


#define Projectfile_Source_BasicStudy_UserProfile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserProfile(UUserProfile&&); \
	NO_API UUserProfile(const UUserProfile&); \
public:


#define Projectfile_Source_BasicStudy_UserProfile_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserProfile(UUserProfile&&); \
	NO_API UUserProfile(const UUserProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserProfile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserProfile)


#define Projectfile_Source_BasicStudy_UserProfile_h_15_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_UserProfile_h_12_PROLOG
#define Projectfile_Source_BasicStudy_UserProfile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_UserProfile_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_UserProfile_h_15_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_UserProfile_h_15_INCLASS \
	Projectfile_Source_BasicStudy_UserProfile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_UserProfile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_UserProfile_h_15_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_UserProfile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_UserProfile_h_15_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_UserProfile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class UUserProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_UserProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
