// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMRUNNER_PlatformRunnerCharacter_generated_h
#error "PlatformRunnerCharacter.generated.h already included, missing '#pragma once' in PlatformRunnerCharacter.h"
#endif
#define PLATFORMRUNNER_PlatformRunnerCharacter_generated_h

#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_RPC_WRAPPERS
#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformRunnerCharacter(); \
	friend struct Z_Construct_UClass_APlatformRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlatformRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(APlatformRunnerCharacter)


#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformRunnerCharacter(); \
	friend struct Z_Construct_UClass_APlatformRunnerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlatformRunnerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(APlatformRunnerCharacter)


#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformRunnerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformRunnerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformRunnerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformRunnerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformRunnerCharacter(APlatformRunnerCharacter&&); \
	NO_API APlatformRunnerCharacter(const APlatformRunnerCharacter&); \
public:


#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformRunnerCharacter(APlatformRunnerCharacter&&); \
	NO_API APlatformRunnerCharacter(const APlatformRunnerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformRunnerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformRunnerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformRunnerCharacter)


#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlatformRunnerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APlatformRunnerCharacter, FollowCamera); }


#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_9_PROLOG
#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_INCLASS \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class APlatformRunnerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_PlatformRunnerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
