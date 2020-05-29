// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UImage;
class UChildActorComponent;
class UTextBlock;
#ifdef SENIORPROJECT_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define SENIORPROJECT_MyGameInstance_generated_h

#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartIntstructions) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timer); \
		P_GET_UBOOL(Z_Param_next); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIntstructions(Z_Param_timer,Z_Param_next); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToCredits) \
	{ \
		P_GET_OBJECT(UImage,Z_Param_fade); \
		P_GET_OBJECT(UImage,Z_Param_credits); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoToCredits(Z_Param_fade,Z_Param_credits,Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnOnLight) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_child); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnOnLight(Z_Param_child,Z_Param_visible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnding) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ending(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextVariables) \
	{ \
		P_GET_OBJECT(UImage,Z_Param_Ucreators); \
		P_GET_OBJECT(UImage,Z_Param_UendingText); \
		P_GET_OBJECT(UTextBlock,Z_Param_UscriptText); \
		P_GET_OBJECT(UTextBlock,Z_Param_UvoiceActorsText); \
		P_GET_OBJECT(UTextBlock,Z_Param_exitText); \
		P_GET_OBJECT(UTextBlock,Z_Param_prevText); \
		P_GET_OBJECT(UTextBlock,Z_Param_continueText); \
		P_GET_OBJECT(UImage,Z_Param_fadeBlock); \
		P_GET_OBJECT(UImage,Z_Param_endImg); \
		P_GET_OBJECT(UImage,Z_Param_endMenu); \
		P_GET_OBJECT(UImage,Z_Param_creditImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextVariables(Z_Param_Ucreators,Z_Param_UendingText,Z_Param_UscriptText,Z_Param_UvoiceActorsText,Z_Param_exitText,Z_Param_prevText,Z_Param_continueText,Z_Param_fadeBlock,Z_Param_endImg,Z_Param_endMenu,Z_Param_creditImage); \
		P_NATIVE_END; \
	}


#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartIntstructions) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_timer); \
		P_GET_UBOOL(Z_Param_next); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartIntstructions(Z_Param_timer,Z_Param_next); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToCredits) \
	{ \
		P_GET_OBJECT(UImage,Z_Param_fade); \
		P_GET_OBJECT(UImage,Z_Param_credits); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoToCredits(Z_Param_fade,Z_Param_credits,Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnOnLight) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_child); \
		P_GET_UBOOL(Z_Param_visible); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TurnOnLight(Z_Param_child,Z_Param_visible); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnding) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_time); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ending(Z_Param_time); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTextVariables) \
	{ \
		P_GET_OBJECT(UImage,Z_Param_Ucreators); \
		P_GET_OBJECT(UImage,Z_Param_UendingText); \
		P_GET_OBJECT(UTextBlock,Z_Param_UscriptText); \
		P_GET_OBJECT(UTextBlock,Z_Param_UvoiceActorsText); \
		P_GET_OBJECT(UTextBlock,Z_Param_exitText); \
		P_GET_OBJECT(UTextBlock,Z_Param_prevText); \
		P_GET_OBJECT(UTextBlock,Z_Param_continueText); \
		P_GET_OBJECT(UImage,Z_Param_fadeBlock); \
		P_GET_OBJECT(UImage,Z_Param_endImg); \
		P_GET_OBJECT(UImage,Z_Param_endMenu); \
		P_GET_OBJECT(UImage,Z_Param_creditImage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTextVariables(Z_Param_Ucreators,Z_Param_UendingText,Z_Param_UscriptText,Z_Param_UvoiceActorsText,Z_Param_exitText,Z_Param_prevText,Z_Param_continueText,Z_Param_fadeBlock,Z_Param_endImg,Z_Param_endMenu,Z_Param_creditImage); \
		P_NATIVE_END; \
	}


#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance)


#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_PRIVATE_PROPERTY_OFFSET
#define SeniorProject_Source_SeniorProject_MyGameInstance_h_15_PROLOG
#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_RPC_WRAPPERS \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_INCLASS \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SeniorProject_Source_SeniorProject_MyGameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_INCLASS_NO_PURE_DECLS \
	SeniorProject_Source_SeniorProject_MyGameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SeniorProject_Source_SeniorProject_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
