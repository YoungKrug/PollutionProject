// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Public/GameObjectInformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameObjectInformation() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_AGameObjectInformation_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_AGameObjectInformation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void AGameObjectInformation::StaticRegisterNativesAGameObjectInformation()
	{
	}
	UClass* Z_Construct_UClass_AGameObjectInformation_NoRegister()
	{
		return AGameObjectInformation::StaticClass();
	}
	struct Z_Construct_UClass_AGameObjectInformation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameObjectInformation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameObjectInformation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameObjectInformation.h" },
		{ "ModuleRelativePath", "Public/GameObjectInformation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameObjectInformation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameObjectInformation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameObjectInformation_Statics::ClassParams = {
		&AGameObjectInformation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameObjectInformation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameObjectInformation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameObjectInformation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameObjectInformation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameObjectInformation, 307835093);
	template<> SENIORPROJECT_API UClass* StaticClass<AGameObjectInformation>()
	{
		return AGameObjectInformation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameObjectInformation(Z_Construct_UClass_AGameObjectInformation, &AGameObjectInformation::StaticClass, TEXT("/Script/SeniorProject"), TEXT("AGameObjectInformation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameObjectInformation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
