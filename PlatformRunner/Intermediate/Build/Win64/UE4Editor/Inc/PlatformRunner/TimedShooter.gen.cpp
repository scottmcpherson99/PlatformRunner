// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/Obstacles/TimedShooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimedShooter() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_ATimedShooter_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_ATimedShooter();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AShooter();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
// End Cross Module References
	void ATimedShooter::StaticRegisterNativesATimedShooter()
	{
	}
	UClass* Z_Construct_UClass_ATimedShooter_NoRegister()
	{
		return ATimedShooter::StaticClass();
	}
	struct Z_Construct_UClass_ATimedShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATimedShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AShooter,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATimedShooter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Obstacles/TimedShooter.h" },
		{ "ModuleRelativePath", "Obstacles/TimedShooter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATimedShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimedShooter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATimedShooter_Statics::ClassParams = {
		&ATimedShooter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATimedShooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATimedShooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATimedShooter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATimedShooter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATimedShooter, 3516150035);
	template<> PLATFORMRUNNER_API UClass* StaticClass<ATimedShooter>()
	{
		return ATimedShooter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimedShooter(Z_Construct_UClass_ATimedShooter, &ATimedShooter::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("ATimedShooter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimedShooter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
