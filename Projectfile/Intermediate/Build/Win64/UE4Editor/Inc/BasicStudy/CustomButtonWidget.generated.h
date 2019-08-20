// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUDY_CustomButtonWidget_generated_h
#error "CustomButtonWidget.generated.h already included, missing '#pragma once' in CustomButtonWidget.h"
#endif
#define BASICSTUDY_CustomButtonWidget_generated_h

#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_12_DELEGATE \
static inline void FButtonClicked_DelegateWrapper(const FMulticastScriptDelegate& ButtonClicked) \
{ \
	ButtonClicked.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_11_DELEGATE \
struct _Script_BasicStudy_eventGetString_Parms \
{ \
	FString ReturnValue; \
}; \
static inline FString FGetString_DelegateWrapper(const FScriptDelegate& GetString) \
{ \
	_Script_BasicStudy_eventGetString_Parms Parms; \
	GetString.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_RPC_WRAPPERS
#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomButtonWidget(); \
	friend struct Z_Construct_UClass_UCustomButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCustomButtonWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(UCustomButtonWidget)


#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCustomButtonWidget(); \
	friend struct Z_Construct_UClass_UCustomButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCustomButtonWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BasicStudy"), NO_API) \
	DECLARE_SERIALIZER(UCustomButtonWidget)


#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomButtonWidget(UCustomButtonWidget&&); \
	NO_API UCustomButtonWidget(const UCustomButtonWidget&); \
public:


#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomButtonWidget(UCustomButtonWidget&&); \
	NO_API UCustomButtonWidget(const UCustomButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomButtonWidget)


#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_PRIVATE_PROPERTY_OFFSET
#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_17_PROLOG
#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_RPC_WRAPPERS \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_INCLASS \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_INCLASS_NO_PURE_DECLS \
	Projectfile_Source_BasicStudy_CustomButtonWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUDY_API UClass* StaticClass<class UCustomButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projectfile_Source_BasicStudy_CustomButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
