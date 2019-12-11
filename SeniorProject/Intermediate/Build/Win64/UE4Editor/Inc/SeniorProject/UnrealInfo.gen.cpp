// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/UnrealInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealInfo() {}
// Cross Module References
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDialougeSystem();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
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
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialougeSystem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnrealInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialougeSystem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialougeSystem>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialougeSystem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
		nullptr,
		&NewStructOps,
		"DialougeSystem",
		sizeof(FDialougeSystem),
		alignof(FDialougeSystem),
		nullptr,
		0,
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
	uint32 Get_Z_Construct_UScriptStruct_FDialougeSystem_Hash() { return 967011871U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
