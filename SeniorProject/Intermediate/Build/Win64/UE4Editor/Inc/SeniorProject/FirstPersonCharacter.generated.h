// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FGameObjectInfo;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SENIORPROJECT_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define SENIORPROJECT_FirstPersonCharacter_generated_h

#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleIntro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSafelyEmptyList) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SafelyEmptyList(Z_Param_Out_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetermineInteraction) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_GET_OBJECT(AActor,Z_Param_act); \
		P_GET_TARRAY(FGameObjectInfo,Z_Param_info); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetermineInteraction(Z_Param_str,Z_Param_act,Z_Param_info); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortGameObjectInfoByDistance) \
	{ \
		P_GET_TARRAY_REF(FGameObjectInfo,Z_Param_Out_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameObjectInfo>*)Z_Param__Result=P_THIS->SortGameObjectInfoByDistance(Z_Param_Out_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContinueDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinueDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRayCast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->StartRayCast(); \
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


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleIntro) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleIntro(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSafelyEmptyList) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_arr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SafelyEmptyList(Z_Param_Out_arr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDetermineInteraction) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_str); \
		P_GET_OBJECT(AActor,Z_Param_act); \
		P_GET_TARRAY(FGameObjectInfo,Z_Param_info); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DetermineInteraction(Z_Param_str,Z_Param_act,Z_Param_info); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortGameObjectInfoByDistance) \
	{ \
		P_GET_TARRAY_REF(FGameObjectInfo,Z_Param_Out_x); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FGameObjectInfo>*)Z_Param__Result=P_THIS->SortGameObjectInfoByDistance(Z_Param_Out_x); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execContinueDialogue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ContinueDialogue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartRayCast) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->StartRayCast(); \
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


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SeniorProject"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_STANDARD_CONSTRUCTORS \
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


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter)


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__triggerCapsule() { return STRUCT_OFFSET(AFirstPersonCharacter, triggerCapsule); } \
	FORCEINLINE static uint32 __PPO__baseTurnRate() { return STRUCT_OFFSET(AFirstPersonCharacter, baseTurnRate); } \
	FORCEINLINE static uint32 __PPO__baseLookUpRate() { return STRUCT_OFFSET(AFirstPersonCharacter, baseLookUpRate); } \
	FORCEINLINE static uint32 __PPO__speed() { return STRUCT_OFFSET(AFirstPersonCharacter, speed); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(AFirstPersonCharacter, offset); } \
	FORCEINLINE static uint32 __PPO__doYouCopySystemActor() { return STRUCT_OFFSET(AFirstPersonCharacter, doYouCopySystemActor); } \
	FORCEINLINE static uint32 __PPO__footStepCoolDown() { return STRUCT_OFFSET(AFirstPersonCharacter, footStepCoolDown); } \
	FORCEINLINE static uint32 __PPO__forestStepSounds() { return STRUCT_OFFSET(AFirstPersonCharacter, forestStepSounds); } \
	FORCEINLINE static uint32 __PPO__cityStepSounds() { return STRUCT_OFFSET(AFirstPersonCharacter, cityStepSounds); } \
	FORCEINLINE static uint32 __PPO__dockStepSounds() { return STRUCT_OFFSET(AFirstPersonCharacter, dockStepSounds); } \
	FORCEINLINE static uint32 __PPO__fireHouseStepSounds() { return STRUCT_OFFSET(AFirstPersonCharacter, fireHouseStepSounds); } \
	FORCEINLINE static uint32 __PPO__rayLengthForSteps() { return STRUCT_OFFSET(AFirstPersonCharacter, rayLengthForSteps); } \
	FORCEINLINE static uint32 __PPO__sphereRadius() { return STRUCT_OFFSET(AFirstPersonCharacter, sphereRadius); } \
	FORCEINLINE static uint32 __PPO__interactableTags() { return STRUCT_OFFSET(AFirstPersonCharacter, interactableTags); } \
	FORCEINLINE static uint32 __PPO__interactableObjectsOrgPos() { return STRUCT_OFFSET(AFirstPersonCharacter, interactableObjectsOrgPos); } \
	FORCEINLINE static uint32 __PPO__newsPaperText() { return STRUCT_OFFSET(AFirstPersonCharacter, newsPaperText); } \
	FORCEINLINE static uint32 __PPO__stopTimeForBoxes() { return STRUCT_OFFSET(AFirstPersonCharacter, stopTimeForBoxes); } \
	FORCEINLINE static uint32 __PPO__phoneTimer() { return STRUCT_OFFSET(AFirstPersonCharacter, phoneTimer); } \
	FORCEINLINE static uint32 __PPO__cellPhoneSound() { return STRUCT_OFFSET(AFirstPersonCharacter, cellPhoneSound); } \
	FORCEINLINE static uint32 __PPO__recorderSound() { return STRUCT_OFFSET(AFirstPersonCharacter, recorderSound); }


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_13_PROLOG
#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_RPC_WRAPPERS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_INCLASS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_INCLASS_NO_PURE_DECLS \
	SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SENIORPROJECT_API UClass* StaticClass<class AFirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SeniorProject_Source_SeniorProject_Public_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
