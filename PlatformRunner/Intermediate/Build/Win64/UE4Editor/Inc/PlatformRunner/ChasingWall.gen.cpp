// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/Obstacles/ChasingWall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChasingWall() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AChasingWall_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AChasingWall();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AObstacleBase();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
// End Cross Module References
	void AChasingWall::StaticRegisterNativesAChasingWall()
	{
	}
	UClass* Z_Construct_UClass_AChasingWall_NoRegister()
	{
		return AChasingWall::StaticClass();
	}
	struct Z_Construct_UClass_AChasingWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseWallSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseWallSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChasingWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstacleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasingWall_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Obstacles/ChasingWall.h" },
		{ "ModuleRelativePath", "Obstacles/ChasingWall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChasingWall_Statics::NewProp_baseWallSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Attributes>\n// the base jump velocity for the player\n" },
		{ "ModuleRelativePath", "Obstacles/ChasingWall.h" },
		{ "ToolTip", "<Attributes>\nthe base jump velocity for the player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AChasingWall_Statics::NewProp_baseWallSpeed = { "baseWallSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChasingWall, baseWallSpeed), METADATA_PARAMS(Z_Construct_UClass_AChasingWall_Statics::NewProp_baseWallSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChasingWall_Statics::NewProp_baseWallSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChasingWall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChasingWall_Statics::NewProp_baseWallSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChasingWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChasingWall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChasingWall_Statics::ClassParams = {
		&AChasingWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AChasingWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AChasingWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChasingWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChasingWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChasingWall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChasingWall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChasingWall, 1872776639);
	template<> PLATFORMRUNNER_API UClass* StaticClass<AChasingWall>()
	{
		return AChasingWall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChasingWall(Z_Construct_UClass_AChasingWall, &AChasingWall::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("AChasingWall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChasingWall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
