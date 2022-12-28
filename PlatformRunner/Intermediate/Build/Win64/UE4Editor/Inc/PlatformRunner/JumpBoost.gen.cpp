// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/JumpBoost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpBoost() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AJumpBoost_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AJumpBoost();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APowerupBase();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
// End Cross Module References
	void AJumpBoost::StaticRegisterNativesAJumpBoost()
	{
	}
	UClass* Z_Construct_UClass_AJumpBoost_NoRegister()
	{
		return AJumpBoost::StaticClass();
	}
	struct Z_Construct_UClass_AJumpBoost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJumpBoost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumpBoost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "JumpBoost.h" },
		{ "ModuleRelativePath", "JumpBoost.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJumpBoost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpBoost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJumpBoost_Statics::ClassParams = {
		&AJumpBoost::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AJumpBoost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJumpBoost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJumpBoost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJumpBoost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJumpBoost, 1065905163);
	template<> PLATFORMRUNNER_API UClass* StaticClass<AJumpBoost>()
	{
		return AJumpBoost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJumpBoost(Z_Construct_UClass_AJumpBoost, &AJumpBoost::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("AJumpBoost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpBoost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
