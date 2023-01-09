// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformRunner/ControlsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlsWidget() {}
// Cross Module References
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_UControlsWidget_NoRegister();
	PLATFORMRUNNER_API UClass* Z_Construct_UClass_UControlsWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PlatformRunner();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UControlsWidget::execOnBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlsWidget::execOnAntiAliasingHighClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAntiAliasingHighClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlsWidget::execOnAntiAliasingMediumClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAntiAliasingMediumClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlsWidget::execOnAntiAliasingLowClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAntiAliasingLowClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlsWidget::execOnAntiAliasingMinimumClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAntiAliasingMinimumClicked();
		P_NATIVE_END;
	}
	void UControlsWidget::StaticRegisterNativesUControlsWidget()
	{
		UClass* Class = UControlsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAntiAliasingHighClicked", &UControlsWidget::execOnAntiAliasingHighClicked },
			{ "OnAntiAliasingLowClicked", &UControlsWidget::execOnAntiAliasingLowClicked },
			{ "OnAntiAliasingMediumClicked", &UControlsWidget::execOnAntiAliasingMediumClicked },
			{ "OnAntiAliasingMinimumClicked", &UControlsWidget::execOnAntiAliasingMinimumClicked },
			{ "OnBackButtonClicked", &UControlsWidget::execOnBackButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// set the anti aliasing quality to high\n" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "set the anti aliasing quality to high" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlsWidget, nullptr, "OnAntiAliasingHighClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// set the anti aliasing quality to low\n" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "set the anti aliasing quality to low" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlsWidget, nullptr, "OnAntiAliasingLowClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// set the anti aliasing quality to medium\n" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "set the anti aliasing quality to medium" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlsWidget, nullptr, "OnAntiAliasingMediumClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// set the anti aliasing quality to minimum\n" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "set the anti aliasing quality to minimum" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlsWidget, nullptr, "OnAntiAliasingMinimumClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// display the main menu widget\n" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "display the main menu widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlsWidget, nullptr, "OnBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UControlsWidget_NoRegister()
	{
		return UControlsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UControlsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_Minimum_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntiAliasing_Minimum_Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_Low_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntiAliasing_Low_Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_Medium_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntiAliasing_Medium_Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiAliasing_High_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AntiAliasing_High_Button;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformRunner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlsWidget_OnAntiAliasingHighClicked, "OnAntiAliasingHighClicked" }, // 185134767
		{ &Z_Construct_UFunction_UControlsWidget_OnAntiAliasingLowClicked, "OnAntiAliasingLowClicked" }, // 971168279
		{ &Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMediumClicked, "OnAntiAliasingMediumClicked" }, // 2984396008
		{ &Z_Construct_UFunction_UControlsWidget_OnAntiAliasingMinimumClicked, "OnAntiAliasingMinimumClicked" }, // 3324791851
		{ &Z_Construct_UFunction_UControlsWidget_OnBackButtonClicked, "OnBackButtonClicked" }, // 1822311086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlsWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ControlsWidget.h" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Minimum_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ControlsWidget" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Anti-Aliasing>\n// button that will set the anti aliasing quality to minimum\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "<Anti-Aliasing>\nbutton that will set the anti aliasing quality to minimum" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Minimum_Button = { "AntiAliasing_Minimum_Button", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlsWidget, AntiAliasing_Minimum_Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Minimum_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Minimum_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Low_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ControlsWidget" },
		{ "Comment", "// button that will set the anti aliasing quality to low\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "button that will set the anti aliasing quality to low" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Low_Button = { "AntiAliasing_Low_Button", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlsWidget, AntiAliasing_Low_Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Low_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Low_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Medium_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ControlsWidget" },
		{ "Comment", "// button that will set the anti aliasing quality to medium\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "button that will set the anti aliasing quality to medium" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Medium_Button = { "AntiAliasing_Medium_Button", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlsWidget, AntiAliasing_Medium_Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Medium_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Medium_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_High_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ControlsWidget" },
		{ "Comment", "// button that will set the anti aliasing quality to high\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "button that will set the anti aliasing quality to high" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_High_Button = { "AntiAliasing_High_Button", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlsWidget, AntiAliasing_High_Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_High_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_High_Button_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlsWidget_Statics::NewProp_BackButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ControlsWidget" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////////////////////\n// <Buttons>\n// button to return to the mainmenu widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlsWidget.h" },
		{ "ToolTip", "<Buttons>\nbutton to return to the mainmenu widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UControlsWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UControlsWidget, BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlsWidget_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::NewProp_BackButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Minimum_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Low_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_Medium_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlsWidget_Statics::NewProp_AntiAliasing_High_Button,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlsWidget_Statics::NewProp_BackButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UControlsWidget_Statics::ClassParams = {
		&UControlsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UControlsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UControlsWidget, 292277670);
	template<> PLATFORMRUNNER_API UClass* StaticClass<UControlsWidget>()
	{
		return UControlsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UControlsWidget(Z_Construct_UClass_UControlsWidget, &UControlsWidget::StaticClass, TEXT("/Script/PlatformRunner"), TEXT("UControlsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
