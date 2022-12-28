// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMRUNNER_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define PLATFORMRUNNER_PlayerCharacter_generated_h

#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_RPC_WRAPPERS
#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(APlayerCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__jumpSound() { return STRUCT_OFFSET(APlayerCharacter, jumpSound); } \
	FORCEINLINE static uint32 __PPO__baseJumpVelocity() { return STRUCT_OFFSET(APlayerCharacter, baseJumpVelocity); } \
	FORCEINLINE static uint32 __PPO__baseWalkSpeed() { return STRUCT_OFFSET(APlayerCharacter, baseWalkSpeed); }


#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_17_PROLOG
#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_INCLASS \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_PlayerCharacter_PlayerCharacter_h


#define FOREACH_ENUM_EPOWERUP(op) \
	op(EPowerup::ENone) \
	op(EPowerup::EJumpBoost) \
	op(EPowerup::EJetPack) \
	op(EPowerup::ESpeedBoost) 

enum class EPowerup : uint8;
template<> PLATFORMRUNNER_API UEnum* StaticEnum<EPowerup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
