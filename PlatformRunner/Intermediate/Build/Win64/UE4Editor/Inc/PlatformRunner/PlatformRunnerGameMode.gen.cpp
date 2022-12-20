// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/PlatformRunnerGameMode.h"
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
		{ "IncludePath", "PlatformRunnerGameMode.h" },
		{ "ModuleRelativePath", "PlatformRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformRunnerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformRunnerGameMode_Statics::ClassParams = {
		&APlatformRunnerGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(APlatformRunnerGameMode, 1606126807);
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
