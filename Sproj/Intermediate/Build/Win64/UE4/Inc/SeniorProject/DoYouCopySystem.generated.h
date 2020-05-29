// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_DoYouCopySystem_generated_h
#error "DoYouCopySystem.generated.h already included, missing '#pragma once' in DoYouCopySystem.h"
#endif
#define SENIORPROJECT_DoYouCopySystem_generated_h

#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSubs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSubs(); \
		P_NATIVE_END; \
	}


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSubs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSubs(); \
		P_NATIVE_END; \
	}


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoYouCopySystem(); \
	friend struct Z_Construct_UClass_ADoYouCopySystem_Statics; \
public: \
	DECLARE_CLASS(ADoYouCopySystem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ADoYouCopySystem)


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesADoYouCopySystem(); \
	friend struct Z_Construct_UClass_ADoYouCopySystem_Statics; \
public: \
	DECLARE_CLASS(ADoYouCopySystem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(ADoYouCopySystem)


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoYouCopySystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoYouCopySystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoYouCopySystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoYouCopySystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoYouCopySystem(ADoYouCopySystem&&); \
	NO_API ADoYouCopySystem(const ADoYouCopySystem&); \
public:


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoYouCopySystem(ADoYouCopySystem&&); \
	NO_API ADoYouCopySystem(const ADoYouCopySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoYouCopySystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoYouCopySystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoYouCopySystem)


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mainPlayer() { return STRUCT_OFFSET(ADoYouCopySystem, mainPlayer); } \
	FORCEINLINE static uint32 __PPO__dial() { return STRUCT_OFFSET(ADoYouCopySystem, dial); } \
	FORCEINLINE static uint32 __PPO__stopSubs() { return STRUCT_OFFSET(ADoYouCopySystem, stopSubs); } \
	FORCEINLINE static uint32 __PPO__dist() { return STRUCT_OFFSET(ADoYouCopySystem, dist); } \
	FORCEINLINE static uint32 __PPO__audio() { return STRUCT_OFFSET(ADoYouCopySystem, audio); } \
	FORCEINLINE static uint32 __PPO__currentObject() { return STRUCT_OFFSET(ADoYouCopySystem, currentObject); }


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_11_PROLOG
#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_PRIVATE_PROPERTY_OFFSET \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_RPC_WRAPPERS \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_INCLASS \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sproj_Source_SeniorProject_DoYouCopySystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_PRIVATE_PROPERTY_OFFSET \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_INCLASS_NO_PURE_DECLS \
	Sproj_Source_SeniorProject_DoYouCopySystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class ADoYouCopySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sproj_Source_SeniorProject_DoYouCopySystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
