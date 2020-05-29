// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AudioInformationStruct.h"
#include "DialogueSystemStruct.generated.h"

USTRUCT(BlueprintType)
struct FAudioInformation
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	USoundBase* audio;
	UPROPERTY(EditAnywhere)
	bool isScreenLocked;
	UPROPERTY(EditAnywhere)
	bool isMovementLocked;
	UPROPERTY(EditAnywhere)
	bool isRotationLocked;
	UPROPERTY(EditAnywhere)
	bool canContinue;
	UPROPERTY(EditAnywhere)
	FText subtitles;
};
USTRUCT(BlueprintType)
struct FDialougeSystem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	AActor* gameObject;
	UPROPERTY(EditAnywhere)
	int narrationNum;
	UPROPERTY(EditAnywhere)
	TArray<FAudioInformation> audio;
	//UPROPERTY(EditAnywhere)
	bool hasPlayed;
};

USTRUCT(BlueprintType)
struct FGameObjectInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	AActor* gameObject;
	UPROPERTY(EditAnywhere)
	float distance;
	UPROPERTY(EditAnywhere)
	int narrationNum;
	//UPROPERTY(EditAnywhere)
	bool hasPlayed;

};


UCLASS()
class SENIORPROJECT_API ADialogueSystemStruct : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ADialogueSystemStruct();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	AActor* gameObject;
	int narrationNum;
	TArray<AAudioInformationStruct*> audio;
	bool hasPlayed;

};
