// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/JetPackBoost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJetPackBoost() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AJetPackBoost_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AJetPackBoost();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APowerupBase();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
// End Cross Module References
	void AJetPackBoost::StaticRegisterNativesAJetPackBoost()
	{
	}
	UClass* Z_Construct_UClass_AJetPackBoost_NoRegister()
	{
		return AJetPackBoost::StaticClass();
	}
	struct Z_Construct_UClass_AJetPackBoost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJetPackBoost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJetPackBoost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "JetPackBoost.h" },
		{ "ModuleRelativePath", "JetPackBoost.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJetPackBoost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJetPackBoost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJetPackBoost_Statics::ClassParams = {
		&AJetPackBoost::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJetPackBoost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJetPackBoost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJetPackBoost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJetPackBoost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJetPackBoost, 880690281);
	template<> PLATFORMRUNNER_API UClass* StaticClass<AJetPackBoost>()
	{
		return AJetPackBoost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJetPackBoost(Z_Construct_UClass_AJetPackBoost, &AJetPackBoost::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("AJetPackBoost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJetPackBoost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
