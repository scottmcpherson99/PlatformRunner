// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef PLATFORMRUNNER_PowerupBase_generated_h
#error "PowerupBase.generated.h already included, missing '#pragma once' in PowerupBase.h"
#endif
#define PLATFORMRUNNER_PowerupBase_generated_h

#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerupBase(); \
	friend struct Z_Construct_UClass_APowerupBase_Statics; \
public: \
	DECLARE_CLASS(APowerupBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(APowerupBase)


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPowerupBase(); \
	friend struct Z_Construct_UClass_APowerupBase_Statics; \
public: \
	DECLARE_CLASS(APowerupBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(APowerupBase)


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerupBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerupBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerupBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerupBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerupBase(APowerupBase&&); \
	NO_API APowerupBase(const APowerupBase&); \
public:


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerupBase(APowerupBase&&); \
	NO_API APowerupBase(const APowerupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerupBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerupBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerupBase)


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__triggerBox() { return STRUCT_OFFSET(APowerupBase, triggerBox); } \
	FORCEINLINE static uint32 __PPO__powerupMesh() { return STRUCT_OFFSET(APowerupBase, powerupMesh); }


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_10_PROLOG
#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_INCLASS \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_PowerupBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class APowerupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_PowerupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
