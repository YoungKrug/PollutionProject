// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Public/DialogueSystemStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueSystemStruct() {}
// Cross Module References
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGameObjectInfo();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDialougeSystem();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAudioInformation();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADialogueSystemStruct_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADialogueSystemStruct();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
// End Cross Module References
class UScriptStruct* FGameObjectInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SENIORPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FGameObjectInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameObjectInfo, Z_Construct_UPackage__Script_SeniorProject(), TEXT("GameObjectInfo"), sizeof(FGameObjectInfo), Get_Z_Construct_UScriptStruct_FGameObjectInfo_Hash());
	}
	return Singleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FGameObjectInfo>()
{
	return FGameObjectInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameObjectInfo(FGameObjectInfo::StaticStruct, TEXT("/Script/SeniorProject"), TEXT("GameObjectInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SeniorProject_StaticRegisterNativesFGameObjectInfo
{
	FScriptStruct_SeniorProject_StaticRegisterNativesFGameObjectInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameObjectInfo")),new UScriptStruct::TCppStructOps<FGameObjectInfo>);
	}
} ScriptStruct_SeniorProject_StaticRegisterNativesFGameObjectInfo;
	struct Z_Construct_UScriptStruct_FGameObjectInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_narrationNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_narrationNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameObjectInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_narrationNum_MetaData[] = {
		{ "Category", "GameObjectInfo" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_narrationNum = { "narrationNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameObjectInfo, narrationNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_narrationNum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_narrationNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "GameObjectInfo" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameObjectInfo, distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_distance_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_gameObject_MetaData[] = {
		{ "Category", "GameObjectInfo" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_gameObject = { "gameObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameObjectInfo, gameObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_gameObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_gameObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameObjectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_narrationNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameObjectInfo_Statics::NewProp_gameObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"GameObjectInfo",
		sizeof(FGameObjectInfo),
		alignof(FGameObjectInfo),
		Z_Construct_UScriptStruct_FGameObjectInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FGameObjectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameObjectInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameObjectInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SeniorProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameObjectInfo"), sizeof(FGameObjectInfo), Get_Z_Construct_UScriptStruct_FGameObjectInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameObjectInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameObjectInfo_Hash() { return 2418472620U; }
class UScriptStruct* FDialougeSystem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SENIORPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FDialougeSystem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialougeSystem, Z_Construct_UPackage__Script_SeniorProject(), TEXT("DialougeSystem"), sizeof(FDialougeSystem), Get_Z_Construct_UScriptStruct_FDialougeSystem_Hash());
	}
	return Singleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FDialougeSystem>()
{
	return FDialougeSystem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDialougeSystem(FDialougeSystem::StaticStruct, TEXT("/Script/SeniorProject"), TEXT("DialougeSystem"), false, nullptr, nullptr);
static struct FScriptStruct_SeniorProject_StaticRegisterNativesFDialougeSystem
{
	FScriptStruct_SeniorProject_StaticRegisterNativesFDialougeSystem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DialougeSystem")),new UScriptStruct::TCppStructOps<FDialougeSystem>);
	}
} ScriptStruct_SeniorProject_StaticRegisterNativesFDialougeSystem;
	struct Z_Construct_UScriptStruct_FDialougeSystem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_audio;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_audio_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_narrationNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_narrationNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_gameObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialougeSystem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialougeSystem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_audio_MetaData[] = {
		{ "Category", "DialougeSystem" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_audio = { "audio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialougeSystem, audio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_audio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_audio_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_audio_Inner = { "audio", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAudioInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_narrationNum_MetaData[] = {
		{ "Category", "DialougeSystem" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_narrationNum = { "narrationNum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialougeSystem, narrationNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_narrationNum_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_narrationNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_gameObject_MetaData[] = {
		{ "Category", "DialougeSystem" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_gameObject = { "gameObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialougeSystem, gameObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_gameObject_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_gameObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialougeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_audio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_audio_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_narrationNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewProp_gameObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialougeSystem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"DialougeSystem",
		sizeof(FDialougeSystem),
		alignof(FDialougeSystem),
		Z_Construct_UScriptStruct_FDialougeSystem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDialougeSystem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialougeSystem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDialougeSystem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialougeSystem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDialougeSystem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SeniorProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DialougeSystem"), sizeof(FDialougeSystem), Get_Z_Construct_UScriptStruct_FDialougeSystem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDialougeSystem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDialougeSystem_Hash() { return 3409290232U; }
class UScriptStruct* FAudioInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SENIORPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FAudioInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioInformation, Z_Construct_UPackage__Script_SeniorProject(), TEXT("AudioInformation"), sizeof(FAudioInformation), Get_Z_Construct_UScriptStruct_FAudioInformation_Hash());
	}
	return Singleton;
}
template<> SENIORPROJECT_API UScriptStruct* StaticStruct<FAudioInformation>()
{
	return FAudioInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAudioInformation(FAudioInformation::StaticStruct, TEXT("/Script/SeniorProject"), TEXT("AudioInformation"), false, nullptr, nullptr);
static struct FScriptStruct_SeniorProject_StaticRegisterNativesFAudioInformation
{
	FScriptStruct_SeniorProject_StaticRegisterNativesFAudioInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AudioInformation")),new UScriptStruct::TCppStructOps<FAudioInformation>);
	}
} ScriptStruct_SeniorProject_StaticRegisterNativesFAudioInformation;
	struct Z_Construct_UScriptStruct_FAudioInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_subtitles_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_subtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canContinue_MetaData[];
#endif
		static void NewProp_canContinue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canContinue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isRotationLocked_MetaData[];
#endif
		static void NewProp_isRotationLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRotationLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMovementLocked_MetaData[];
#endif
		static void NewProp_isMovementLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMovementLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isScreenLocked_MetaData[];
#endif
		static void NewProp_isScreenLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isScreenLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_subtitles_MetaData[] = {
		{ "Category", "AudioInformation" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_subtitles = { "subtitles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioInformation, subtitles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_subtitles_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_subtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_canContinue_MetaData[] = {
		{ "Category", "AudioInformation" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_canContinue_SetBit(void* Obj)
	{
		((FAudioInformation*)Obj)->canContinue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_canContinue = { "canContinue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioInformation), &Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_canContinue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_canContinue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_canContinue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isRotationLocked_MetaData[] = {
		{ "Category", "AudioInformation" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isRotationLocked_SetBit(void* Obj)
	{
		((FAudioInformation*)Obj)->isRotationLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isRotationLocked = { "isRotationLocked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioInformation), &Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isRotationLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isRotationLocked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isRotationLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isMovementLocked_MetaData[] = {
		{ "Category", "AudioInformation" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isMovementLocked_SetBit(void* Obj)
	{
		((FAudioInformation*)Obj)->isMovementLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isMovementLocked = { "isMovementLocked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioInformation), &Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isMovementLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isMovementLocked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isMovementLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isScreenLocked_MetaData[] = {
		{ "Category", "AudioInformation" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isScreenLocked_SetBit(void* Obj)
	{
		((FAudioInformation*)Obj)->isScreenLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isScreenLocked = { "isScreenLocked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAudioInformation), &Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isScreenLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isScreenLocked_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isScreenLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_audio_MetaData[] = {
		{ "Category", "AudioInformation" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_audio = { "audio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAudioInformation, audio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_audio_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_audio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_canContinue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isRotationLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isMovementLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_isScreenLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioInformation_Statics::NewProp_audio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"AudioInformation",
		sizeof(FAudioInformation),
		alignof(FAudioInformation),
		Z_Construct_UScriptStruct_FAudioInformation_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioInformation_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAudioInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SeniorProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AudioInformation"), sizeof(FAudioInformation), Get_Z_Construct_UScriptStruct_FAudioInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAudioInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAudioInformation_Hash() { return 2554079714U; }
	void ADialogueSystemStruct::StaticRegisterNativesADialogueSystemStruct()
	{
	}
	UClass* Z_Construct_UClass_ADialogueSystemStruct_NoRegister()
	{
		return ADialogueSystemStruct::StaticClass();
	}
	struct Z_Construct_UClass_ADialogueSystemStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADialogueSystemStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialogueSystemStruct_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DialogueSystemStruct.h" },
		{ "ModuleRelativePath", "Public/DialogueSystemStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADialogueSystemStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADialogueSystemStruct>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADialogueSystemStruct_Statics::ClassParams = {
		&ADialogueSystemStruct::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADialogueSystemStruct_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADialogueSystemStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADialogueSystemStruct()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADialogueSystemStruct_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADialogueSystemStruct, 1686902348);
	template<> SENIORPROJECT_API UClass* StaticClass<ADialogueSystemStruct>()
	{
		return ADialogueSystemStruct::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADialogueSystemStruct(Z_Construct_UClass_ADialogueSystemStruct, &ADialogueSystemStruct::StaticClass, TEXT("/Script/SeniorProject"), TEXT("ADialogueSystemStruct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADialogueSystemStruct);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
