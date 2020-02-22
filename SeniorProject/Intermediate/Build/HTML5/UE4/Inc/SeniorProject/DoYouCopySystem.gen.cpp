// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/DoYouCopySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoYouCopySystem() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADoYouCopySystem_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADoYouCopySystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	SENIORPROJECT_API UFunction* Z_Construct_UFunction_ADoYouCopySystem_GetSubs();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	SENIORPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDialougeSystem();
// End Cross Module References
	void ADoYouCopySystem::StaticRegisterNativesADoYouCopySystem()
	{
		UClass* Class = ADoYouCopySystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSubs", &ADoYouCopySystem::execGetSubs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics
	{
		struct DoYouCopySystem_eventGetSubs_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DoYouCopySystem_eventGetSubs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::Function_MetaDataParams[] = {
		{ "Category", "DoYouCopy" },
		{ "ModuleRelativePath", "DoYouCopySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoYouCopySystem, nullptr, "GetSubs", sizeof(DoYouCopySystem_eventGetSubs_Parms), Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoYouCopySystem_GetSubs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADoYouCopySystem_GetSubs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADoYouCopySystem_NoRegister()
	{
		return ADoYouCopySystem::StaticClass();
	}
	struct Z_Construct_UClass_ADoYouCopySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_audio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dial_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_dial;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dial_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mainPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mainPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoYouCopySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoYouCopySystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoYouCopySystem_GetSubs, "GetSubs" }, // 1628521515
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoYouCopySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoYouCopySystem.h" },
		{ "ModuleRelativePath", "DoYouCopySystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_currentObject_MetaData[] = {
		{ "Category", "DoYouCopySystem" },
		{ "ModuleRelativePath", "DoYouCopySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_currentObject = { "currentObject", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoYouCopySystem, currentObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_currentObject_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_currentObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_audio_MetaData[] = {
		{ "Category", "DoYouCopySystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DoYouCopySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_audio = { "audio", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoYouCopySystem, audio), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_audio_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_audio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dist_MetaData[] = {
		{ "Category", "DoYouCopySystem" },
		{ "ModuleRelativePath", "DoYouCopySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dist = { "dist", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoYouCopySystem, dist), METADATA_PARAMS(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dist_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dial_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "DoYouCopySystem.h" },
		{ "ToolTip", "Player to use methods on" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dial = { "dial", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoYouCopySystem, dial), METADATA_PARAMS(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dial_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dial_Inner = { "dial", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialougeSystem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_mainPlayer_MetaData[] = {
		{ "Category", "DoYouCopySystem" },
		{ "ModuleRelativePath", "DoYouCopySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_mainPlayer = { "mainPlayer", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoYouCopySystem, mainPlayer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_mainPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_mainPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoYouCopySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_currentObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_audio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_dial_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoYouCopySystem_Statics::NewProp_mainPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoYouCopySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoYouCopySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoYouCopySystem_Statics::ClassParams = {
		&ADoYouCopySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoYouCopySystem_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADoYouCopySystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADoYouCopySystem_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADoYouCopySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoYouCopySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoYouCopySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoYouCopySystem, 208276883);
	template<> SENIORPROJECT_API UClass* StaticClass<ADoYouCopySystem>()
	{
		return ADoYouCopySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoYouCopySystem(Z_Construct_UClass_ADoYouCopySystem, &ADoYouCopySystem::StaticClass, TEXT("/Script/SeniorProject"), TEXT("ADoYouCopySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoYouCopySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
