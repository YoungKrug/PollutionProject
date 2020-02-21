// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Public/FirstPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGameObjectInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_Interact();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_LookSide();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_LookUp();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_MoveForward();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_MoveRight();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
		UClass* Class = AFirstPersonCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ContinueDialogue", &AFirstPersonCharacter::execContinueDialogue },
			{ "DetermineInteraction", &AFirstPersonCharacter::execDetermineInteraction },
			{ "HandleIntro", &AFirstPersonCharacter::execHandleIntro },
			{ "Interact", &AFirstPersonCharacter::execInteract },
			{ "LookSide", &AFirstPersonCharacter::execLookSide },
			{ "LookUp", &AFirstPersonCharacter::execLookUp },
			{ "MoveForward", &AFirstPersonCharacter::execMoveForward },
			{ "MoveRight", &AFirstPersonCharacter::execMoveRight },
			{ "OnOverlapBegin", &AFirstPersonCharacter::execOnOverlapBegin },
			{ "OnOverlapEnd", &AFirstPersonCharacter::execOnOverlapEnd },
			{ "SafelyEmptyList", &AFirstPersonCharacter::execSafelyEmptyList },
			{ "SortGameObjectInfoByDistance", &AFirstPersonCharacter::execSortGameObjectInfoByDistance },
			{ "StartRayCast", &AFirstPersonCharacter::execStartRayCast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "ContinueDialogue", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics
	{
		struct FirstPersonCharacter_eventDetermineInteraction_Parms
		{
			FString str;
			AActor* act;
			TArray<FGameObjectInfo> info;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_info;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_info_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_act;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventDetermineInteraction_Parms, info), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_info_Inner = { "info", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameObjectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_act = { "act", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventDetermineInteraction_Parms, act), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventDetermineInteraction_Parms, str), METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_str_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_str_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_info_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_act,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "DetermineInteraction", sizeof(FirstPersonCharacter_eventDetermineInteraction_Parms), Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "HandleIntro", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_Interact_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "Interact", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_Interact_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics
	{
		struct FirstPersonCharacter_eventLookSide_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventLookSide_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "LookSide", sizeof(FirstPersonCharacter_eventLookSide_Parms), Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_LookSide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_LookSide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics
	{
		struct FirstPersonCharacter_eventLookUp_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventLookUp_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "LookUp", sizeof(FirstPersonCharacter_eventLookUp_Parms), Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_LookUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_LookUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics
	{
		struct FirstPersonCharacter_eventMoveForward_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventMoveForward_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "MoveForward", sizeof(FirstPersonCharacter_eventMoveForward_Parms), Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics
	{
		struct FirstPersonCharacter_eventMoveRight_Parms
		{
			float val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::NewProp_val = { "val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventMoveRight_Parms, val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::NewProp_val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "MoveRight", sizeof(FirstPersonCharacter_eventMoveRight_Parms), Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics
	{
		struct FirstPersonCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((FirstPersonCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FirstPersonCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "OnOverlapBegin", sizeof(FirstPersonCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics
	{
		struct FirstPersonCharacter_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "OnOverlapEnd", sizeof(FirstPersonCharacter_eventOnOverlapEnd_Parms), Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics
	{
		struct FirstPersonCharacter_eventSafelyEmptyList_Parms
		{
			TArray<AActor*> arr;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arr;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_arr_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::NewProp_arr = { "arr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventSafelyEmptyList_Parms, arr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::NewProp_arr_Inner = { "arr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::NewProp_arr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::NewProp_arr_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "SafelyEmptyList", sizeof(FirstPersonCharacter_eventSafelyEmptyList_Parms), Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics
	{
		struct FirstPersonCharacter_eventSortGameObjectInfoByDistance_Parms
		{
			TArray<FGameObjectInfo> x;
			TArray<FGameObjectInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_x_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventSortGameObjectInfoByDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameObjectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventSortGameObjectInfoByDistance_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_x_Inner = { "x", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameObjectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::NewProp_x_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "SortGameObjectInfoByDistance", sizeof(FirstPersonCharacter_eventSortGameObjectInfoByDistance_Parms), Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics
	{
		struct FirstPersonCharacter_eventStartRayCast_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FirstPersonCharacter_eventStartRayCast_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFirstPersonCharacter, nullptr, "StartRayCast", sizeof(FirstPersonCharacter_eventStartRayCast_Parms), Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_recorderSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_recorderSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cellPhoneSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cellPhoneSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_phoneTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_phoneTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stopTimeForBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stopTimeForBoxes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newsPaperText_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_newsPaperText;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_newsPaperText_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactableObjectsOrgPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_interactableObjectsOrgPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactableObjectsOrgPos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactableTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_interactableTags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_interactableTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sphereRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rayLengthForSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rayLengthForSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireHouseStepSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireHouseStepSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dockStepSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dockStepSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cityStepSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cityStepSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_forestStepSounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_forestStepSounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_footStepCoolDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_footStepCoolDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_doYouCopySystemActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_doYouCopySystemActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_baseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_triggerCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_firstPersonCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFirstPersonCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFirstPersonCharacter_ContinueDialogue, "ContinueDialogue" }, // 29390116
		{ &Z_Construct_UFunction_AFirstPersonCharacter_DetermineInteraction, "DetermineInteraction" }, // 4118446
		{ &Z_Construct_UFunction_AFirstPersonCharacter_HandleIntro, "HandleIntro" }, // 4230943743
		{ &Z_Construct_UFunction_AFirstPersonCharacter_Interact, "Interact" }, // 1780806731
		{ &Z_Construct_UFunction_AFirstPersonCharacter_LookSide, "LookSide" }, // 2819758198
		{ &Z_Construct_UFunction_AFirstPersonCharacter_LookUp, "LookUp" }, // 33048402
		{ &Z_Construct_UFunction_AFirstPersonCharacter_MoveForward, "MoveForward" }, // 1659129491
		{ &Z_Construct_UFunction_AFirstPersonCharacter_MoveRight, "MoveRight" }, // 2891570342
		{ &Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 299696162
		{ &Z_Construct_UFunction_AFirstPersonCharacter_OnOverlapEnd, "OnOverlapEnd" }, // 3449750689
		{ &Z_Construct_UFunction_AFirstPersonCharacter_SafelyEmptyList, "SafelyEmptyList" }, // 3720783970
		{ &Z_Construct_UFunction_AFirstPersonCharacter_SortGameObjectInfoByDistance, "SortGameObjectInfoByDistance" }, // 3748554121
		{ &Z_Construct_UFunction_AFirstPersonCharacter_StartRayCast, "StartRayCast" }, // 3897720143
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_recorderSound_MetaData[] = {
		{ "Category", "Intro Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_recorderSound = { "recorderSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, recorderSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_recorderSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_recorderSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cellPhoneSound_MetaData[] = {
		{ "Category", "Intro Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cellPhoneSound = { "cellPhoneSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, cellPhoneSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cellPhoneSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cellPhoneSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_phoneTimer_MetaData[] = {
		{ "Category", "Intro Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_phoneTimer = { "phoneTimer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, phoneTimer), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_phoneTimer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_phoneTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_stopTimeForBoxes_MetaData[] = {
		{ "Category", "Interactable Tags" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_stopTimeForBoxes = { "stopTimeForBoxes", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, stopTimeForBoxes), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_stopTimeForBoxes_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_stopTimeForBoxes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_newsPaperText_MetaData[] = {
		{ "Category", "Interactable Tags" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_newsPaperText = { "newsPaperText", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, newsPaperText), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_newsPaperText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_newsPaperText_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_newsPaperText_Inner = { "newsPaperText", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableObjectsOrgPos_MetaData[] = {
		{ "Category", "Interactable Tags" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableObjectsOrgPos = { "interactableObjectsOrgPos", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, interactableObjectsOrgPos), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableObjectsOrgPos_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableObjectsOrgPos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableObjectsOrgPos_Inner = { "interactableObjectsOrgPos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableTags_MetaData[] = {
		{ "Category", "Interactable Tags" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableTags = { "interactableTags", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, interactableTags), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableTags_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableTags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableTags_Inner = { "interactableTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_sphereRadius_MetaData[] = {
		{ "Category", "CollisionOverlaps" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_sphereRadius = { "sphereRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, sphereRadius), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_sphereRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_sphereRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_rayLengthForSteps_MetaData[] = {
		{ "Category", "Foot Step Sounds" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_rayLengthForSteps = { "rayLengthForSteps", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, rayLengthForSteps), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_rayLengthForSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_rayLengthForSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_fireHouseStepSounds_MetaData[] = {
		{ "Category", "Foot Step Sounds" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_fireHouseStepSounds = { "fireHouseStepSounds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, fireHouseStepSounds), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_fireHouseStepSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_fireHouseStepSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_dockStepSounds_MetaData[] = {
		{ "Category", "Foot Step Sounds" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_dockStepSounds = { "dockStepSounds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, dockStepSounds), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_dockStepSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_dockStepSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cityStepSounds_MetaData[] = {
		{ "Category", "Foot Step Sounds" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cityStepSounds = { "cityStepSounds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, cityStepSounds), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cityStepSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cityStepSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_forestStepSounds_MetaData[] = {
		{ "Category", "Foot Step Sounds" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_forestStepSounds = { "forestStepSounds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, forestStepSounds), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_forestStepSounds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_forestStepSounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_footStepCoolDown_MetaData[] = {
		{ "Category", "Character Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_footStepCoolDown = { "footStepCoolDown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, footStepCoolDown), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_footStepCoolDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_footStepCoolDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_doYouCopySystemActor_MetaData[] = {
		{ "Category", "Character Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_doYouCopySystemActor = { "doYouCopySystemActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, doYouCopySystemActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_doYouCopySystemActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_doYouCopySystemActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Character Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_offset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "Character Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, speed), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseLookUpRate_MetaData[] = {
		{ "Category", "Character Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseLookUpRate = { "baseLookUpRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, baseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseTurnRate_MetaData[] = {
		{ "Category", "Character Values" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseTurnRate = { "baseTurnRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, baseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_triggerCapsule_MetaData[] = {
		{ "Category", "Trigger Capsule" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_triggerCapsule = { "triggerCapsule", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, triggerCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_triggerCapsule_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_triggerCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_firstPersonCameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_firstPersonCameraComponent = { "firstPersonCameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, firstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_firstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_firstPersonCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_recorderSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cellPhoneSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_phoneTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_stopTimeForBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_newsPaperText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_newsPaperText_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableObjectsOrgPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableObjectsOrgPos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_interactableTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_sphereRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_rayLengthForSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_fireHouseStepSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_dockStepSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_cityStepSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_forestStepSounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_footStepCoolDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_doYouCopySystemActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_baseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_triggerCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_firstPersonCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonCharacter, 3808232793);
	template<> SENIORPROJECT_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonCharacter(Z_Construct_UClass_AFirstPersonCharacter, &AFirstPersonCharacter::StaticClass, TEXT("/Script/SeniorProject"), TEXT("AFirstPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
