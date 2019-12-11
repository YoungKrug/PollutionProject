// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Audio.h"
#include "AudioInformationStruct.generated.h"

UCLASS()
class SENIORPROJECT_API AAudioInformationStruct : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAudioInformationStruct();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	USoundBase* audio;
	bool isScreenLocked;
	bool isMovementLocked;
	bool isRotationLocked;
	bool canContinue;
	FText subtitles;
};
