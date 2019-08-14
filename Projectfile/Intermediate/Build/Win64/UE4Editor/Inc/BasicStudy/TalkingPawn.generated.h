// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BASICSTUDY_TalkingPawn_generated_h
#error "TalkingPawn.generated.h already included, missing '#pragma once' in TalkingPawn.h"
#endif
#define BASICSTUDY_TalkingPawn_generated_h

#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATalkingPawn(); \
	friend struct Z_Construct_UClass_ATalkingPawn_Statics; \
public: \
	DECLARE_CLASS(ATalkingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ATalkingPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ATalkingPawn*>(this); }


#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATalkingPawn(); \
	friend struct Z_Construct_UClass_ATalkingPawn_Statics; \
public: \
	DECLARE_CLASS(ATalkingPawn, ADefaultPawn, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(ATalkingPawn) \
	virtual UObject* _getUObject() const override { return const_cast<ATalkingPawn*>(this); }


#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATalkingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATalkingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingPawn(ATalkingPawn&&); \
	NO_API ATalkingPawn(const ATalkingPawn&); \
public:


#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATalkingPawn(ATalkingPawn&&); \
	NO_API ATalkingPawn(const ATalkingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATalkingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATalkingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATalkingPawn)


#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_TalkingPawn_h_13_PROLOG
#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_INCLASS \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_TalkingPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_TalkingPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class ATalkingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_TalkingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
