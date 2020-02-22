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
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
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
		nullptr,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
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
	IMPLEMENT_CLASS(UMyGameInstance, 1014955748);
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
