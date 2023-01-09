// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMRUNNER_MainMenuGameModeBase_generated_h
#error "MainMenuGameModeBase.generated.h already included, missing '#pragma once' in MainMenuGameModeBase.h"
#endif
#define PLATFORMRUNNER_MainMenuGameModeBase_generated_h

#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_RPC_WRAPPERS
#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuGameModeBase(); \
	friend struct Z_Construct_UClass_AMainMenuGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameModeBase)


#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAMainMenuGameModeBase(); \
	friend struct Z_Construct_UClass_AMainMenuGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameModeBase)


#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameModeBase(AMainMenuGameModeBase&&); \
	NO_API AMainMenuGameModeBase(const AMainMenuGameModeBase&); \
public:


#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainMenuGameModeBase(AMainMenuGameModeBase&&); \
	NO_API AMainMenuGameModeBase(const AMainMenuGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainMenuGameModeBase)


#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MainMenuWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, MainMenuWidget); } \
	FORCEINLINE static uint32 __PPO__ControlsWidget() { return STRUCT_OFFSET(AMainMenuGameModeBase, ControlsWidget); }


#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_18_PROLOG
#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_INCLASS \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class AMainMenuGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_GameSettings_MainMenuGameModeBase_h


#define FOREACH_ENUM_EDISPLAYWIDGET(op) \
	op(EDisplayWidget::ENone) \
	op(EDisplayWidget::EMainMenuWidget) \
	op(EDisplayWidget::EControlsWidget) 

enum class EDisplayWidget : uint8;
template<> PLATFORMRUNNER_API UEnum* StaticEnum<EDisplayWidget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
