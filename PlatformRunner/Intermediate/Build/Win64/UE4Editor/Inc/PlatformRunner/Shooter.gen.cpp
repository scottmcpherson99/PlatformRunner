// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/Shooter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooter() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AShooter_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AShooter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_AArrow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AShooter::StaticRegisterNativesAShooter()
	{
	}
	UClass* Z_Construct_UClass_AShooter_NoRegister()
	{
		return AShooter::StaticClass();
	}
	struct Z_Construct_UClass_AShooter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrowDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_arrowDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shooterMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shooterMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_arrowSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arrowSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shooter.h" },
		{ "ModuleRelativePath", "Shooter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_arrowDrop_MetaData[] = {
		{ "Category", "Spawn" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Spawn>\n// The arrow\n" },
		{ "ModuleRelativePath", "Shooter.h" },
		{ "ToolTip", "<Spawn>\nThe arrow" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_arrowDrop = { "arrowDrop", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, arrowDrop), Z_Construct_UClass_AArrow_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_arrowDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_arrowDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_shooterMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//the shooter Mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shooter.h" },
		{ "ToolTip", "the shooter Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_shooterMesh = { "shooterMesh", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, shooterMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_shooterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_shooterMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooter_Statics::NewProp_arrowSource_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// scene component for arrow spawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shooter.h" },
		{ "ToolTip", "scene component for arrow spawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooter_Statics::NewProp_arrowSource = { "arrowSource", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShooter, arrowSource), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::NewProp_arrowSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::NewProp_arrowSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_arrowDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_shooterMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooter_Statics::NewProp_arrowSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooter_Statics::ClassParams = {
		&AShooter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooter, 3647586878);
	template<> PLATFORMRUNNER_API UClass* StaticClass<AShooter>()
	{
		return AShooter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooter(Z_Construct_UClass_AShooter, &AShooter::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("AShooter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
