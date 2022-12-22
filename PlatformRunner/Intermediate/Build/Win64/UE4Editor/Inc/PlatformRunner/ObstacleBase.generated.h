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
#ifdef PLATFORMRUNNER_ObstacleBase_generated_h
#error "ObstacleBase.generated.h already included, missing '#pragma once' in ObstacleBase.h"
#endif
#define PLATFORMRUNNER_ObstacleBase_generated_h

#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerBoxOverlap);


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleBase(); \
	friend struct Z_Construct_UClass_AObstacleBase_Statics; \
public: \
	DECLARE_CLASS(AObstacleBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(AObstacleBase)


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAObstacleBase(); \
	friend struct Z_Construct_UClass_AObstacleBase_Statics; \
public: \
	DECLARE_CLASS(AObstacleBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(AObstacleBase)


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObstacleBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObstacleBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacleBase(AObstacleBase&&); \
	NO_API AObstacleBase(const AObstacleBase&); \
public:


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AObstacleBase(AObstacleBase&&); \
	NO_API AObstacleBase(const AObstacleBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AObstacleBase)


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__triggerBox() { return STRUCT_OFFSET(AObstacleBase, triggerBox); } \
	FORCEINLINE static uint32 __PPO__obstacleMesh() { return STRUCT_OFFSET(AObstacleBase, obstacleMesh); }


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_9_PROLOG
#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_INCLASS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class AObstacleBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_Obstacles_ObstacleBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
