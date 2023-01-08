// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMRUNNER_ChasingWall_generated_h
#error "ChasingWall.generated.h already included, missing '#pragma once' in ChasingWall.h"
#endif
#define PLATFORMRUNNER_ChasingWall_generated_h

#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_SPARSE_DATA
#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_RPC_WRAPPERS
#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChasingWall(); \
	friend struct Z_Construct_UClass_AChasingWall_Statics; \
public: \
	DECLARE_CLASS(AChasingWall, AObstacleBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(AChasingWall)


#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAChasingWall(); \
	friend struct Z_Construct_UClass_AChasingWall_Statics; \
public: \
	DECLARE_CLASS(AChasingWall, AObstacleBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformRunner"), NO_API) \
	DECLARE_SERIALIZER(AChasingWall)


#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChasingWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChasingWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChasingWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChasingWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChasingWall(AChasingWall&&); \
	NO_API AChasingWall(const AChasingWall&); \
public:


#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChasingWall(AChasingWall&&); \
	NO_API AChasingWall(const AChasingWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChasingWall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChasingWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChasingWall)


#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__baseWallSpeed() { return STRUCT_OFFSET(AChasingWall, baseWallSpeed); }


#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_12_PROLOG
#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_RPC_WRAPPERS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_INCLASS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_SPARSE_DATA \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_INCLASS_NO_PURE_DECLS \
	PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMRUNNER_API UClass* StaticClass<class AChasingWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformRunner_Source_PlatformRunner_Obstacles_ChasingWall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
