// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_Ending();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_GoToCredits();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_SetTextVariables();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_StartIntstructions();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_TurnOnLight();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBackgroundBlur_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
		UClass* Class = UMyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Ending", &UMyGameInstance::execEnding },
			{ "GoToCredits", &UMyGameInstance::execGoToCredits },
			{ "SetTextVariables", &UMyGameInstance::execSetTextVariables },
			{ "StartIntstructions", &UMyGameInstance::execStartIntstructions },
			{ "TurnOnLight", &UMyGameInstance::execTurnOnLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstance_Ending_Statics
	{
		struct MyGameInstance_eventEnding_Parms
		{
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_Ending_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventEnding_Parms, time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_Ending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_Ending_Statics::NewProp_time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_Ending_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_Ending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "Ending", sizeof(MyGameInstance_eventEnding_Parms), Z_Construct_UFunction_UMyGameInstance_Ending_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_Ending_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_Ending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_Ending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_Ending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_Ending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics
	{
		struct MyGameInstance_eventGoToCredits_Parms
		{
			UImage* fade;
			UImage* credits;
			float time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_credits_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_credits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventGoToCredits_Parms, time), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_credits_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_credits = { "credits", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventGoToCredits_Parms, credits), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_credits_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_credits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_fade_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_fade = { "fade", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventGoToCredits_Parms, fade), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_fade_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_fade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_credits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::NewProp_fade,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "GoToCredits", sizeof(MyGameInstance_eventGoToCredits_Parms), Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_GoToCredits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_GoToCredits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics
	{
		struct MyGameInstance_eventSetTextVariables_Parms
		{
			UImage* Ucreators;
			UImage* UendingText;
			UTextBlock* UscriptText;
			UTextBlock* UvoiceActorsText;
			UTextBlock* exitText;
			UTextBlock* prevText;
			UTextBlock* continueText;
			UImage* fadeBlock;
			UImage* endImg;
			UImage* endMenu;
			UImage* creditImage;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_creditImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_creditImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endImg_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endImg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fadeBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fadeBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_continueText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_continueText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prevText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prevText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exitText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_exitText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UvoiceActorsText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UvoiceActorsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UscriptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UscriptText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UendingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UendingText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ucreators_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ucreators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_creditImage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_creditImage = { "creditImage", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, creditImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_creditImage_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_creditImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endMenu_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endMenu = { "endMenu", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, endMenu), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endMenu_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endImg_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endImg = { "endImg", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, endImg), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endImg_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endImg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_fadeBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_fadeBlock = { "fadeBlock", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, fadeBlock), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_fadeBlock_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_fadeBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_continueText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_continueText = { "continueText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, continueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_continueText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_continueText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_prevText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_prevText = { "prevText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, prevText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_prevText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_prevText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_exitText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_exitText = { "exitText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, exitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_exitText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_exitText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UvoiceActorsText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UvoiceActorsText = { "UvoiceActorsText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, UvoiceActorsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UvoiceActorsText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UvoiceActorsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UscriptText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UscriptText = { "UscriptText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, UscriptText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UscriptText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UscriptText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UendingText_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UendingText = { "UendingText", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, UendingText), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UendingText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UendingText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_Ucreators_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_Ucreators = { "Ucreators", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSetTextVariables_Parms, Ucreators), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_Ucreators_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_Ucreators_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_creditImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_endImg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_fadeBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_continueText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_prevText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_exitText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UvoiceActorsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UscriptText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_UendingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::NewProp_Ucreators,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SetTextVariables", sizeof(MyGameInstance_eventSetTextVariables_Parms), Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_SetTextVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SetTextVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics
	{
		struct MyGameInstance_eventStartIntstructions_Parms
		{
			float timer;
			bool next;
		};
		static void NewProp_next_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_next;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::NewProp_next_SetBit(void* Obj)
	{
		((MyGameInstance_eventStartIntstructions_Parms*)Obj)->next = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::NewProp_next = { "next", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyGameInstance_eventStartIntstructions_Parms), &Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::NewProp_next_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventStartIntstructions_Parms, timer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::NewProp_next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::NewProp_timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "StartIntstructions", sizeof(MyGameInstance_eventStartIntstructions_Parms), Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_StartIntstructions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_StartIntstructions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics
	{
		struct MyGameInstance_eventTurnOnLight_Parms
		{
			UChildActorComponent* child;
			bool visible;
		};
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_child_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_child;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((MyGameInstance_eventTurnOnLight_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyGameInstance_eventTurnOnLight_Parms), &Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_child_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_child = { "child", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventTurnOnLight_Parms, child), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_child_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_child_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::NewProp_child,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "TurnOnLight", sizeof(MyGameInstance_eventTurnOnLight_Parms), Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_TurnOnLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_TurnOnLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isWaitingForEndCinematic_MetaData[];
#endif
		static void NewProp_isWaitingForEndCinematic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isWaitingForEndCinematic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pressX_MetaData[];
#endif
		static void NewProp_pressX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_third_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_third;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_second_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_second;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_first_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_first;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_finishedInstructions_MetaData[];
#endif
		static void NewProp_finishedInstructions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_finishedInstructions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_creditImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_creditImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endingImg_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endingImg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_screenFade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_screenFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_childLight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_childLight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canPutDown_MetaData[];
#endif
		static void NewProp_canPutDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canPutDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentlyCarrying_MetaData[];
#endif
		static void NewProp_currentlyCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_currentlyCarrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCurrentlyPaused_MetaData[];
#endif
		static void NewProp_isCurrentlyPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCurrentlyPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFinished_MetaData[];
#endif
		static void NewProp_isFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voiceActorsText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_voiceActorsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scriptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_scriptText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_endingText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_creators_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_creators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nextText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prevText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prevText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exitText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_exitText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_exitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_exitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_prevButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_prevButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_continueButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_continueButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentTextBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blur_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blur;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentlyCollidingObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentlyCollidingObj;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentSubs_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_currentSubs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_swapString_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_swapString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_narrationCounter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_narrationCounter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_counter_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_counter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_checkPointPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_checkPointPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentPlayerPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currentPlayerPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasNewsPaper_MetaData[];
#endif
		static void NewProp_hasNewsPaper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasNewsPaper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAtEnd_MetaData[];
#endif
		static void NewProp_isAtEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAtEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasPressedXOnGamepad_MetaData[];
#endif
		static void NewProp_hasPressedXOnGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasPressedXOnGamepad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHoldingNewsPaper_MetaData[];
#endif
		static void NewProp_isHoldingNewsPaper_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHoldingNewsPaper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isInCine_MetaData[];
#endif
		static void NewProp_isInCine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isInCine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPressedX_MetaData[];
#endif
		static void NewProp_isPressedX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPressedX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGameOver_MetaData[];
#endif
		static void NewProp_isGameOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGameOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sequenceIsPlaying_MetaData[];
#endif
		static void NewProp_sequenceIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_sequenceIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canStartSubs_MetaData[];
#endif
		static void NewProp_canStartSubs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canStartSubs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canDisplayTest_MetaData[];
#endif
		static void NewProp_canDisplayTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canDisplayTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDone_MetaData[];
#endif
		static void NewProp_isDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFadeToBlack_MetaData[];
#endif
		static void NewProp_isFadeToBlack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFadeToBlack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isClear_MetaData[];
#endif
		static void NewProp_isClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startFade_MetaData[];
#endif
		static void NewProp_startFade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_startFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isTalking_MetaData[];
#endif
		static void NewProp_isTalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isTalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canJumped_MetaData[];
#endif
		static void NewProp_canJumped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canJumped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerStop_MetaData[];
#endif
		static void NewProp_playerStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSwapped_MetaData[];
#endif
		static void NewProp_isSwapped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSwapped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pressXToContinue_MetaData[];
#endif
		static void NewProp_pressXToContinue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_pressXToContinue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPlayerScreenLocked_MetaData[];
#endif
		static void NewProp_isPlayerScreenLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayerScreenLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canPlayerRotate_MetaData[];
#endif
		static void NewProp_canPlayerRotate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canPlayerRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canPlayerMove_MetaData[];
#endif
		static void NewProp_canPlayerMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canPlayerMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOutro_MetaData[];
#endif
		static void NewProp_isOutro_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOutro;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isIntro_MetaData[];
#endif
		static void NewProp_isIntro_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isIntro;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_Ending, "Ending" }, // 54322780
		{ &Z_Construct_UFunction_UMyGameInstance_GoToCredits, "GoToCredits" }, // 1640728000
		{ &Z_Construct_UFunction_UMyGameInstance_SetTextVariables, "SetTextVariables" }, // 2516527553
		{ &Z_Construct_UFunction_UMyGameInstance_StartIntstructions, "StartIntstructions" }, // 2065193302
		{ &Z_Construct_UFunction_UMyGameInstance_TurnOnLight, "TurnOnLight" }, // 2958894066
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isWaitingForEndCinematic_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isWaitingForEndCinematic_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isWaitingForEndCinematic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isWaitingForEndCinematic = { "isWaitingForEndCinematic", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isWaitingForEndCinematic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isWaitingForEndCinematic_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isWaitingForEndCinematic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressX_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressX_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->pressX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressX = { "pressX", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_third_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_third = { "third", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, third), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_third_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_third_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_second_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_second = { "second", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, second), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_second_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_second_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_first_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_first = { "first", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, first), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_first_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_first_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_finishedInstructions_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_finishedInstructions_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->finishedInstructions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_finishedInstructions = { "finishedInstructions", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_finishedInstructions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_finishedInstructions_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_finishedInstructions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creditImage_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creditImage = { "creditImage", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, creditImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creditImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creditImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingImg_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingImg = { "endingImg", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, endingImg), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingImg_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingImg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_screenFade_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_screenFade = { "screenFade", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, screenFade), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_screenFade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_screenFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_childLight_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_childLight = { "childLight", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, childLight), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_childLight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_childLight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPutDown_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPutDown_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->canPutDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPutDown = { "canPutDown", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPutDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPutDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPutDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCarrying_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCarrying_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->currentlyCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCarrying = { "currentlyCarrying", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCarrying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCarrying_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCarrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isCurrentlyPaused_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isCurrentlyPaused_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isCurrentlyPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isCurrentlyPaused = { "isCurrentlyPaused", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isCurrentlyPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isCurrentlyPaused_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isCurrentlyPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFinished_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFinished_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFinished = { "isFinished", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFinished_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_voiceActorsText_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_voiceActorsText = { "voiceActorsText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, voiceActorsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_voiceActorsText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_voiceActorsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_scriptText_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_scriptText = { "scriptText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, scriptText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_scriptText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_scriptText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endMenu_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endMenu = { "endMenu", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, endMenu), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endMenu_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingText_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingText = { "endingText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, endingText), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creators_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creators = { "creators", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, creators), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creators_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_nextText_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_nextText = { "nextText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, nextText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_nextText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_nextText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevText_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevText = { "prevText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, prevText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitText_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitText = { "exitText", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, exitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitText_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitButton_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitButton = { "exitButton", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, exitButton), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevButton_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevButton = { "prevButton", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, prevButton), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_continueButton_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_continueButton = { "continueButton", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, continueButton), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_continueButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_continueButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentTextBlock_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentTextBlock = { "currentTextBlock", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, currentTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentTextBlock_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentTextBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_blur_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_blur = { "blur", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, blur), Z_Construct_UClass_UBackgroundBlur_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_blur_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_blur_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCollidingObj_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCollidingObj = { "currentlyCollidingObj", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, currentlyCollidingObj), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCollidingObj_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCollidingObj_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentSubs_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentSubs = { "currentSubs", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, currentSubs), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentSubs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentSubs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_swapString_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_swapString = { "swapString", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, swapString), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_swapString_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_swapString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_narrationCounter_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_narrationCounter = { "narrationCounter", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, narrationCounter), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_narrationCounter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_narrationCounter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_counter_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_counter = { "counter", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, counter), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_counter_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_counter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_checkPointPos_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_checkPointPos = { "checkPointPos", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, checkPointPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_checkPointPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_checkPointPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentPlayerPos_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentPlayerPos = { "currentPlayerPos", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, currentPlayerPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentPlayerPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentPlayerPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasNewsPaper_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasNewsPaper_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->hasNewsPaper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasNewsPaper = { "hasNewsPaper", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasNewsPaper_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasNewsPaper_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasNewsPaper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isAtEnd_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isAtEnd_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isAtEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isAtEnd = { "isAtEnd", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isAtEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isAtEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasPressedXOnGamepad_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasPressedXOnGamepad_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->hasPressedXOnGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasPressedXOnGamepad = { "hasPressedXOnGamepad", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasPressedXOnGamepad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasPressedXOnGamepad_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasPressedXOnGamepad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isHoldingNewsPaper_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isHoldingNewsPaper_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isHoldingNewsPaper = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isHoldingNewsPaper = { "isHoldingNewsPaper", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isHoldingNewsPaper_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isHoldingNewsPaper_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isHoldingNewsPaper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isInCine_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isInCine_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isInCine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isInCine = { "isInCine", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isInCine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isInCine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isInCine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPressedX_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPressedX_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isPressedX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPressedX = { "isPressedX", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPressedX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPressedX_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPressedX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isGameOver_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isGameOver_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isGameOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isGameOver = { "isGameOver", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isGameOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isGameOver_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isGameOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_sequenceIsPlaying_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_sequenceIsPlaying_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->sequenceIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_sequenceIsPlaying = { "sequenceIsPlaying", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_sequenceIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_sequenceIsPlaying_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_sequenceIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canStartSubs_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canStartSubs_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->canStartSubs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canStartSubs = { "canStartSubs", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canStartSubs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canStartSubs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canStartSubs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canDisplayTest_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canDisplayTest_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->canDisplayTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canDisplayTest = { "canDisplayTest", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canDisplayTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canDisplayTest_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canDisplayTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isDone_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isDone_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isDone = { "isDone", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isDone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isDone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFadeToBlack_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFadeToBlack_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isFadeToBlack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFadeToBlack = { "isFadeToBlack", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFadeToBlack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFadeToBlack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFadeToBlack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isClear_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isClear_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isClear = { "isClear", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isClear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isClear_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isClear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_startFade_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_startFade_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->startFade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_startFade = { "startFade", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_startFade_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_startFade_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_startFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isTalking_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isTalking_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isTalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isTalking = { "isTalking", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isTalking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isTalking_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isTalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canJumped_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canJumped_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->canJumped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canJumped = { "canJumped", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canJumped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canJumped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canJumped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_playerStop_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_playerStop_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->playerStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_playerStop = { "playerStop", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_playerStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_playerStop_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_playerStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isSwapped_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isSwapped_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isSwapped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isSwapped = { "isSwapped", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isSwapped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isSwapped_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isSwapped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressXToContinue_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressXToContinue_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->pressXToContinue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressXToContinue = { "pressXToContinue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressXToContinue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressXToContinue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressXToContinue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPlayerScreenLocked_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPlayerScreenLocked_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isPlayerScreenLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPlayerScreenLocked = { "isPlayerScreenLocked", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPlayerScreenLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPlayerScreenLocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPlayerScreenLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerRotate_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerRotate_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->canPlayerRotate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerRotate = { "canPlayerRotate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerMove_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerMove_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->canPlayerMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerMove = { "canPlayerMove", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isOutro_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isOutro_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isOutro = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isOutro = { "isOutro", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isOutro_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isOutro_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isOutro_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isIntro_MetaData[] = {
		{ "Category", "MyGameInstance" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
		{ "ToolTip", "static UMyGameInstance* newGI;\nvoid ResetString(FString& x);\n variables that need to be accessable by blueprint so they can work with UI" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isIntro_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->isIntro = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isIntro = { "isIntro", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isIntro_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isIntro_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isIntro_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isWaitingForEndCinematic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_third,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_second,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_first,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_finishedInstructions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creditImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingImg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_screenFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_childLight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPutDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCarrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isCurrentlyPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_voiceActorsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_scriptText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_endingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_creators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_nextText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_exitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_prevButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_continueButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_blur,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentlyCollidingObj,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentSubs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_swapString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_narrationCounter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_counter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_checkPointPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_currentPlayerPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasNewsPaper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isAtEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_hasPressedXOnGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isHoldingNewsPaper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isInCine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPressedX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isGameOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_sequenceIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canStartSubs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canDisplayTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isFadeToBlack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isClear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_startFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isTalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canJumped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_playerStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isSwapped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_pressXToContinue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isPlayerScreenLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_canPlayerMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isOutro,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_isIntro,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGameInstance, 3539284292);
	template<> SENIORPROJECT_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/SeniorProject"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
