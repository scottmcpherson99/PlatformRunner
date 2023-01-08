// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/PlatformSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSpawner() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APlatformSpawner_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APlatformSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_APlatformBase_NoRegister();
// End Cross Module References
	void APlatformSpawner::StaticRegisterNativesAPlatformSpawner()
	{
	}
	UClass* Z_Construct_UClass_APlatformSpawner_NoRegister()
	{
		return APlatformSpawner::StaticClass();
	}
	struct Z_Construct_UClass_APlatformSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startingPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_startingPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platform1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_platform1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platform2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_platform2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platform3_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_platform3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_platform4_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_platform4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfStartingTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfStartingTiles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformSpawner.h" },
		{ "ModuleRelativePath", "PlatformSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_startingPlatform_MetaData[] = {
		{ "Category", "Platforms" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Tiles>\n" },
		{ "ModuleRelativePath", "PlatformSpawner.h" },
		{ "ToolTip", "<Tiles>" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_startingPlatform = { "startingPlatform", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformSpawner, startingPlatform), Z_Construct_UClass_APlatformBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_startingPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_startingPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform1_MetaData[] = {
		{ "Category", "Platforms" },
		{ "ModuleRelativePath", "PlatformSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform1 = { "platform1", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformSpawner, platform1), Z_Construct_UClass_APlatformBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform2_MetaData[] = {
		{ "Category", "Platforms" },
		{ "ModuleRelativePath", "PlatformSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform2 = { "platform2", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformSpawner, platform2), Z_Construct_UClass_APlatformBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform3_MetaData[] = {
		{ "Category", "Platforms" },
		{ "ModuleRelativePath", "PlatformSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform3 = { "platform3", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformSpawner, platform3), Z_Construct_UClass_APlatformBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform4_MetaData[] = {
		{ "Category", "Platforms" },
		{ "ModuleRelativePath", "PlatformSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform4 = { "platform4", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformSpawner, platform4), Z_Construct_UClass_APlatformBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformSpawner_Statics::NewProp_numberOfStartingTiles_MetaData[] = {
		{ "Category", "Tiles" },
		{ "ClampMax", "10" },
		{ "ClampMin", "3" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Attributes>\n" },
		{ "ModuleRelativePath", "PlatformSpawner.h" },
		{ "ToolTip", "<Attributes>" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_APlatformSpawner_Statics::NewProp_numberOfStartingTiles = { "numberOfStartingTiles", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformSpawner, numberOfStartingTiles), METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_numberOfStartingTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::NewProp_numberOfStartingTiles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_startingPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_platform4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformSpawner_Statics::NewProp_numberOfStartingTiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformSpawner_Statics::ClassParams = {
		&APlatformSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformSpawner, 460782340);
	template<> PLATFORMRUNNER_API UClass* StaticClass<APlatformSpawner>()
	{
		return APlatformSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformSpawner(Z_Construct_UClass_APlatformSpawner, &APlatformSpawner::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("APlatformSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
