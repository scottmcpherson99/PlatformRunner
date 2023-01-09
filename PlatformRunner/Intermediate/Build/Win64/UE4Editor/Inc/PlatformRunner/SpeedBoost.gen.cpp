// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/Powerups/SpeedBoost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedBoost() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_ASpeedBoost_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_ASpeedBoost();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APowerupBase();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
// End Cross Module References
	void ASpeedBoost::StaticRegisterNativesASpeedBoost()
	{
	}
	UClass* Z_Construct_UClass_ASpeedBoost_NoRegister()
	{
		return ASpeedBoost::StaticClass();
	}
	struct Z_Construct_UClass_ASpeedBoost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpeedBoost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpeedBoost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Powerups/SpeedBoost.h" },
		{ "ModuleRelativePath", "Powerups/SpeedBoost.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpeedBoost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedBoost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpeedBoost_Statics::ClassParams = {
		&ASpeedBoost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpeedBoost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedBoost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpeedBoost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpeedBoost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpeedBoost, 79669911);
	template<> PLATFORMRUNNER_API UClass* StaticClass<ASpeedBoost>()
	{
		return ASpeedBoost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpeedBoost(Z_Construct_UClass_ASpeedBoost, &ASpeedBoost::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("ASpeedBoost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedBoost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
