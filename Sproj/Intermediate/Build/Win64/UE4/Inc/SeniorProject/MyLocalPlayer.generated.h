// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_MyLocalPlayer_generated_h
#error "MyLocalPlayer.generated.h already included, missing '#pragma once' in MyLocalPlayer.h"
#endif
#define SENIORPROJECT_MyLocalPlayer_generated_h

#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_RPC_WRAPPERS
#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyLocalPlayer(); \
	friend struct Z_Construct_UClass_UMyLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UMyLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMyLocalPlayer)


#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMyLocalPlayer(); \
	friend struct Z_Construct_UClass_UMyLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UMyLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMyLocalPlayer)


#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyLocalPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyLocalPlayer(UMyLocalPlayer&&); \
	NO_API UMyLocalPlayer(const UMyLocalPlayer&); \
public:


#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyLocalPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyLocalPlayer(UMyLocalPlayer&&); \
	NO_API UMyLocalPlayer(const UMyLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyLocalPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyLocalPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyLocalPlayer)


#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_PRIVATE_PROPERTY_OFFSET
#define Sproj_Source_SeniorProject_MyLocalPlayer_h_11_PROLOG
#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_PRIVATE_PROPERTY_OFFSET \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_RPC_WRAPPERS \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_INCLASS \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sproj_Source_SeniorProject_MyLocalPlayer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_PRIVATE_PROPERTY_OFFSET \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_INCLASS_NO_PURE_DECLS \
	Sproj_Source_SeniorProject_MyLocalPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UMyLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sproj_Source_SeniorProject_MyLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
