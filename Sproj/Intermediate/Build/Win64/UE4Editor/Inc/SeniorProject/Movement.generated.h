// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SENIORPROJECT_Movement_generated_h
#error "Movement.generated.h already included, missing '#pragma once' in Movement.h"
#endif
#define SENIORPROJECT_Movement_generated_h

#define Sproj_Source_SeniorProject_Movement_h_13_RPC_WRAPPERS
#define Sproj_Source_SeniorProject_Movement_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Sproj_Source_SeniorProject_Movement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovement(); \
	friend struct Z_Construct_UClass_UMovement_Statics; \
public: \
	DECLARE_CLASS(UMovement, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMovement)


#define Sproj_Source_SeniorProject_Movement_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMovement(); \
	friend struct Z_Construct_UClass_UMovement_Statics; \
public: \
	DECLARE_CLASS(UMovement, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMovement)


#define Sproj_Source_SeniorProject_Movement_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovement(UMovement&&); \
	NO_API UMovement(const UMovement&); \
public:


#define Sproj_Source_SeniorProject_Movement_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovement(UMovement&&); \
	NO_API UMovement(const UMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMovement)


#define Sproj_Source_SeniorProject_Movement_h_13_PRIVATE_PROPERTY_OFFSET
#define Sproj_Source_SeniorProject_Movement_h_10_PROLOG
#define Sproj_Source_SeniorProject_Movement_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sproj_Source_SeniorProject_Movement_h_13_PRIVATE_PROPERTY_OFFSET \
	Sproj_Source_SeniorProject_Movement_h_13_RPC_WRAPPERS \
	Sproj_Source_SeniorProject_Movement_h_13_INCLASS \
	Sproj_Source_SeniorProject_Movement_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Sproj_Source_SeniorProject_Movement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Sproj_Source_SeniorProject_Movement_h_13_PRIVATE_PROPERTY_OFFSET \
	Sproj_Source_SeniorProject_Movement_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Sproj_Source_SeniorProject_Movement_h_13_INCLASS_NO_PURE_DECLS \
	Sproj_Source_SeniorProject_Movement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Sproj_Source_SeniorProject_Movement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
