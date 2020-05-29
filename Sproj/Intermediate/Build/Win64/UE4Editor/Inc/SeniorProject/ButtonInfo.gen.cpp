// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/ButtonInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonInfo() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UButtonInfo_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UButtonInfo();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UButtonInfo::StaticRegisterNativesUButtonInfo()
	{
	}
	UClass* Z_Construct_UClass_UButtonInfo_NoRegister()
	{
		return UButtonInfo::StaticClass();
	}
	struct Z_Construct_UClass_UButtonInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bluePrintClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bluePrintClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ButtonInfo.h" },
		{ "ModuleRelativePath", "ButtonInfo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonInfo_Statics::NewProp_bluePrintClass_MetaData[] = {
		{ "Category", "ButtonInfo" },
		{ "ModuleRelativePath", "ButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UButtonInfo_Statics::NewProp_bluePrintClass = { "bluePrintClass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonInfo, bluePrintClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UButtonInfo_Statics::NewProp_bluePrintClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_UButtonInfo_Statics::NewProp_bluePrintClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonInfo_Statics::NewProp_player_MetaData[] = {
		{ "Category", "ButtonInfo" },
		{ "ModuleRelativePath", "ButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UButtonInfo_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonInfo, player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UButtonInfo_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UClass_UButtonInfo_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonInfo_Statics::NewProp_distance_MetaData[] = {
		{ "Category", "ButtonInfo" },
		{ "ModuleRelativePath", "ButtonInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UButtonInfo_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UButtonInfo, distance), METADATA_PARAMS(Z_Construct_UClass_UButtonInfo_Statics::NewProp_distance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UButtonInfo_Statics::NewProp_distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonInfo_Statics::NewProp_bluePrintClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonInfo_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonInfo_Statics::NewProp_distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UButtonInfo_Statics::ClassParams = {
		&UButtonInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UButtonInfo_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UButtonInfo_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonInfo_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UButtonInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UButtonInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UButtonInfo, 1104613288);
	template<> SENIORPROJECT_API UClass* StaticClass<UButtonInfo>()
	{
		return UButtonInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UButtonInfo(Z_Construct_UClass_UButtonInfo, &UButtonInfo::StaticClass, TEXT("/Script/SeniorProject"), TEXT("UButtonInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
