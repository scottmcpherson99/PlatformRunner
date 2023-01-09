// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMRUNNER_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define PLATFORMRUNNER_MainMenuWidget_generated_h

#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonClicked); \
	DECLARE_FUNCTION(execOnStartGameButtonClicked);


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExitButtonClicked); \
	DECLARE_FUNCTION(execOnSettingsButtonClicked); \
	DECLARE_FUNCTION(execOnStartGameButtonClicked);


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartGameButton() { return STRUCT_OFFSET(UMainMenuWidget, StartGameButton); } \
	FORCEINLINE static uint32 __PPO__SettingsButton() { return STRUCT_OFFSET(UMainMenuWidget, SettingsButton); } \
	FORCEINLINE static uint32 __PPO__ExitButton() { return STRUCT_OFFSET(UMainMenuWidget, ExitButton); }


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_12_PROLOG
#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_INCLASS \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_MainMenuWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
