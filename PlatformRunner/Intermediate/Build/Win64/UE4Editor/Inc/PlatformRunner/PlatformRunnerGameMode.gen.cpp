// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/GameSettings/PlatformRunnerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformRunnerGameMode() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APlatformRunnerGameMode_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APlatformRunnerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APlatformBase_NoRegister();
// End Cross Module References
	void APlatformRunnerGameMode::StaticRegisterNativesAPlatformRunnerGameMode()
	{
	}
	UClass* Z_Construct_UClass_APlatformRunnerGameMode_NoRegister()
	{
		return APlatformRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APlatformRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startingPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_startingPlatform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformRunnerGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameSettings/PlatformRunnerGameMode.h" },
		{ "ModuleRelativePath", "GameSettings/PlatformRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformRunnerGameMode_Statics::NewProp_startingPlatform_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Tiles>\n" },
		{ "ModuleRelativePath", "GameSettings/PlatformRunnerGameMode.h" },
		{ "ToolTip", "<Tiles>" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformRunnerGameMode_Statics::NewProp_startingPlatform = { "startingPlatform", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformRunnerGameMode, startingPlatform), Z_Construct_UClass_APlatformBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformRunnerGameMode_Statics::NewProp_startingPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformRunnerGameMode_Statics::NewProp_startingPlatform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformRunnerGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformRunnerGameMode_Statics::NewProp_startingPlatform,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformRunnerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformRunnerGameMode_Statics::ClassParams = {
		&APlatformRunnerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformRunnerGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformRunnerGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlatformRunnerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformRunnerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformRunnerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformRunnerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformRunnerGameMode, 194845556);
	template<> PLATFORMRUNNER_API UClass* StaticClass<APlatformRunnerGameMode>()
	{
		return APlatformRunnerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformRunnerGameMode(Z_Construct_UClass_APlatformRunnerGameMode, &APlatformRunnerGameMode::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("APlatformRunnerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformRunnerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
