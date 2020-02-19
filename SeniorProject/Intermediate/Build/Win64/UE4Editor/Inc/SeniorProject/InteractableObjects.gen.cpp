// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/Public/InteractableObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableObjects() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UInteractableObjects_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UInteractableObjects();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UInteractableObjects::StaticRegisterNativesUInteractableObjects()
	{
	}
	UClass* Z_Construct_UClass_UInteractableObjects_NoRegister()
	{
		return UInteractableObjects::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableObjects_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractableObjects.h" },
		{ "ModuleRelativePath", "Public/InteractableObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableObjects>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractableObjects_Statics::ClassParams = {
		&UInteractableObjects::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableObjects_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteractableObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableObjects()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractableObjects_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractableObjects, 2904006044);
	template<> SENIORPROJECT_API UClass* StaticClass<UInteractableObjects>()
	{
		return UInteractableObjects::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractableObjects(Z_Construct_UClass_UInteractableObjects, &UInteractableObjects::StaticClass, TEXT("/Script/SeniorProject"), TEXT("UInteractableObjects"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableObjects);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
