// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/Obstacles/DetectorShooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectorShooter() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_ADetectorShooter_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_ADetectorShooter();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AShooter();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
// End Cross Module References
	void ADetectorShooter::StaticRegisterNativesADetectorShooter()
	{
	}
	UClass* Z_Construct_UClass_ADetectorShooter_NoRegister()
	{
		return ADetectorShooter::StaticClass();
	}
	struct Z_Construct_UClass_ADetectorShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADetectorShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooter,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADetectorShooter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Obstacles/DetectorShooter.h" },
		{ "ModuleRelativePath", "Obstacles/DetectorShooter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADetectorShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADetectorShooter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADetectorShooter_Statics::ClassParams = {
		&ADetectorShooter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADetectorShooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADetectorShooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADetectorShooter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADetectorShooter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADetectorShooter, 2200897756);
	template<> PLATFORMRUNNER_API UClass* StaticClass<ADetectorShooter>()
	{
		return ADetectorShooter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADetectorShooter(Z_Construct_UClass_ADetectorShooter, &ADetectorShooter::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("ADetectorShooter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADetectorShooter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
