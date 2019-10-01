// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SeniorProject/MyLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLocalPlayer() {}
// Cross Module References
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyLocalPlayer_NoRegister();
	SENIORPROJECT_API UClass* Z_Construct_UClass_UMyLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_SeniorProject();
// End Cross Module References
	void UMyLocalPlayer::StaticRegisterNativesUMyLocalPlayer()
	{
	}
	UClass* Z_Construct_UClass_UMyLocalPlayer_NoRegister()
	{
		return UMyLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UMyLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_SeniorProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyLocalPlayer.h" },
		{ "ModuleRelativePath", "MyLocalPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyLocalPlayer_Statics::ClassParams = {
		&UMyLocalPlayer::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UMyLocalPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyLocalPlayer, 105448574);
	template<> SENIORPROJECT_API UClass* StaticClass<UMyLocalPlayer>()
	{
		return UMyLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyLocalPlayer(Z_Construct_UClass_UMyLocalPlayer, &UMyLocalPlayer::StaticClass, TEXT("/Script/SeniorProject"), TEXT("UMyLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
