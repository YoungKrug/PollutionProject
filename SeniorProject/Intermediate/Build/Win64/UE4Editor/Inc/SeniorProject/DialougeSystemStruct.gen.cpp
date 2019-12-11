// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Public/DialougeSystemStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialougeSystemStruct() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADialougeSystemStruct_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_ADialougeSystemStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void ADialougeSystemStruct::StaticRegisterNativesADialougeSystemStruct()
	{
	}
	UClass* Z_Construct_UClass_ADialougeSystemStruct_NoRegister()
	{
		return ADialougeSystemStruct::StaticClass();
	}
	struct Z_Construct_UClass_ADialougeSystemStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADialougeSystemStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADialougeSystemStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialougeSystemStruct.h" },
		{ "ModuleRelativePath", "Public/DialougeSystemStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADialougeSystemStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADialougeSystemStruct>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADialougeSystemStruct_Statics::ClassParams = {
		&ADialougeSystemStruct::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADialougeSystemStruct_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADialougeSystemStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADialougeSystemStruct()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADialougeSystemStruct_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADialougeSystemStruct, 521467679);
	template<> SENIORPROJECT_API UClass* StaticClass<ADialougeSystemStruct>()
	{
		return ADialougeSystemStruct::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADialougeSystemStruct(Z_Construct_UClass_ADialougeSystemStruct, &ADialougeSystemStruct::StaticClass, TEXT("/Script/SeniorProject"), TEXT("ADialougeSystemStruct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADialougeSystemStruct);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
