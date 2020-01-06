// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define SENIORPROJECT_FirstPersonCharacter_generated_h

#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartRayCast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRayCast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookSide) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookSide(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_val); \
		P_NATIVE_END; \
	}


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartRayCast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartRayCast(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookSide) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookSide(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_val); \
		P_NATIVE_END; \
	}


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public:


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter)


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__baseTurnRate() { return STRUCT_OFFSET(AFirstPersonCharacter, baseTurnRate); } \
	FORCEINLINE static uint32 __PPO__baseLookUpRate() { return STRUCT_OFFSET(AFirstPersonCharacter, baseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__speed() { return STRUCT_OFFSET(AFirstPersonCharacter, speed); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(AFirstPersonCharacter, offset); }


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_9_PROLOG
#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_RPC_WRAPPERS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_INCLASS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_INCLASS_NO_PURE_DECLS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AFirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
