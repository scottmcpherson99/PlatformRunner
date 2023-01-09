// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMRUNNER_ControlsWidget_generated_h
#error "ControlsWidget.generated.h already included, missing '#pragma once' in ControlsWidget.h"
#endif
#define PLATFORMRUNNER_ControlsWidget_generated_h

#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBackButtonClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingHighClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingMediumClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingLowClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingMinimumClicked);


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBackButtonClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingHighClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingMediumClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingLowClicked); \
	DECLARE_FUNCTION(execOnAntiAliasingMinimumClicked);


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlsWidget(); \
	friend struct Z_Construct_UClass_UControlsWidget_Statics; \
public: \
	DECLARE_CLASS(UControlsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(UControlsWidget)


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUControlsWidget(); \
	friend struct Z_Construct_UClass_UControlsWidget_Statics; \
public: \
	DECLARE_CLASS(UControlsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(UControlsWidget)


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlsWidget(UControlsWidget&&); \
	NO_API UControlsWidget(const UControlsWidget&); \
public:


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlsWidget(UControlsWidget&&); \
	NO_API UControlsWidget(const UControlsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlsWidget)


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AntiAliasing_Minimum_Button() { return STRUCT_OFFSET(UControlsWidget, AntiAliasing_Minimum_Button); } \
	FORCEINLINE static uint32 __PPO__AntiAliasing_Low_Button() { return STRUCT_OFFSET(UControlsWidget, AntiAliasing_Low_Button); } \
	FORCEINLINE static uint32 __PPO__AntiAliasing_Medium_Button() { return STRUCT_OFFSET(UControlsWidget, AntiAliasing_Medium_Button); } \
	FORCEINLINE static uint32 __PPO__AntiAliasing_High_Button() { return STRUCT_OFFSET(UControlsWidget, AntiAliasing_High_Button); } \
	FORCEINLINE static uint32 __PPO__BackButton() { return STRUCT_OFFSET(UControlsWidget, BackButton); }


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_12_PROLOG
#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_INCLASS \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_ControlsWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class UControlsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_ControlsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
