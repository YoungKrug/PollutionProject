// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UMyGameInstance()
	{
		//if (newGI == nullptr)
			//newGI = NewObject<UMyGameInstance>(this, "game instance");
	}
	//static UMyGameInstance* newGI;
	//void ResetString(FString& x);
	bool isIntro, isOutro, canPlayerMove, canPlayerRotate, isPlayerScreenLocked,
		pressXToContinue, isSwapped, playerStop, canJumped, isTalking, startFade,
		isClear, isFadeToBlack, isDone, canDisplayTest, canStartSubs, sequenceIsPlaying,
		isGameOver, isPressedX, isInCine, isHoldingNewsPaper, hasPressedXOnGamepad,
		isAtEnd;
	FVector currentPlayerPos;
	FVector checkPointPos;
	int counter, narrationCounter;
	FText swapString;
	FText currentSubs;

};
