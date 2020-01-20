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
	// variables that need to be accessable by blueprint so they can work with UI
	UPROPERTY(BlueprintReadWrite)
	bool isIntro = true;
	UPROPERTY(BlueprintReadWrite)
	bool isOutro;
	UPROPERTY(BlueprintReadWrite)
	bool canPlayerMove;
	UPROPERTY(BlueprintReadWrite)
	bool canPlayerRotate;
	UPROPERTY(BlueprintReadWrite)
	bool isPlayerScreenLocked;
	UPROPERTY(BlueprintReadWrite)
	bool pressXToContinue;
	UPROPERTY(BlueprintReadWrite)
	bool isSwapped;
	UPROPERTY(BlueprintReadWrite)
	bool playerStop;
	UPROPERTY(BlueprintReadWrite)
	bool canJumped;
	UPROPERTY(BlueprintReadWrite)
	bool isTalking;
	UPROPERTY(BlueprintReadWrite)
	bool startFade;
	UPROPERTY(BlueprintReadWrite)
	bool isClear;
	UPROPERTY(BlueprintReadWrite)
	bool isFadeToBlack;
	UPROPERTY(BlueprintReadWrite)
	bool isDone;
	UPROPERTY(BlueprintReadWrite)
	bool canDisplayTest;
	UPROPERTY(BlueprintReadWrite)
	bool canStartSubs;
	UPROPERTY(BlueprintReadWrite)
	bool sequenceIsPlaying;
	UPROPERTY(BlueprintReadWrite)
	bool isGameOver;
	UPROPERTY(BlueprintReadWrite)
	bool isPressedX;
	UPROPERTY(BlueprintReadWrite)
	bool isInCine;
	UPROPERTY(BlueprintReadWrite)
	bool isHoldingNewsPaper;
	UPROPERTY(BlueprintReadWrite)
	bool hasPressedXOnGamepad;
	UPROPERTY(BlueprintReadWrite)
	bool isAtEnd;
	UPROPERTY(BlueprintReadWrite)
	bool hasNewsPaper;
	UPROPERTY(BlueprintReadWrite)
	FVector currentPlayerPos;
	UPROPERTY(BlueprintReadWrite)
	FVector checkPointPos;
	UPROPERTY(BlueprintReadWrite)
	int counter = 0;
	UPROPERTY(BlueprintReadWrite)
	int narrationCounter;
	UPROPERTY(BlueprintReadWrite)
	FText swapString;
	UPROPERTY(BlueprintReadWrite)
	FText currentSubs;

};
