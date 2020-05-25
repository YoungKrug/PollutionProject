// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UMG/Public/Components/BackgroundBlur.h"
#include "UMG/Public/Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Styling/SlateColor.h"
#include "UMG/Public/Components/Image.h"
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
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
	void SetTextVariables(UImage* Ucreators, UImage* UendingText, UTextBlock* UscriptText, UTextBlock* UvoiceActorsText, UTextBlock* exitText, UTextBlock* prevText,
	UTextBlock* continueText, UImage* fadeBlock, UImage* endImg, UImage* endMenu, UImage* creditImage);
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
	void Ending(float time);
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
	void TurnOnLight(UChildActorComponent* child, bool visible);
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
	void GoToCredits(UImage* fade, UImage* credits, float time);
	UFUNCTION(BlueprintCallable, Category = "GameInstance")
	void StartIntstructions(float timer, bool next);
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
	UPROPERTY(BlueprintReadWrite)
	AActor* currentlyCollidingObj;
	UPROPERTY(BlueprintReadWrite)
	UBackgroundBlur* blur;
	UPROPERTY(BlueprintReadWrite)
	UTextBlock* currentTextBlock;
	UPROPERTY(BlueprintReadWrite)
	UImage* continueButton;
	UPROPERTY(BlueprintReadWrite)
	UImage* prevButton;
	UPROPERTY(BlueprintReadWrite)
	UImage* exitButton;
	UPROPERTY(BlueprintReadWrite)
	UTextBlock* exitText;
	UPROPERTY(BlueprintReadWrite)
	UTextBlock* prevText;
	UPROPERTY(BlueprintReadWrite)
	UTextBlock* nextText;
	UPROPERTY(BlueprintReadWrite)
	UImage* creators;
	UPROPERTY(BlueprintReadWrite)
	UImage* endingText; 
	UPROPERTY(BlueprintReadWrite)
	UImage* endMenu;
	UPROPERTY(BlueprintReadWrite)
	UTextBlock* scriptText; 
	UPROPERTY(BlueprintReadWrite)
	UTextBlock* voiceActorsText;
	UPROPERTY(BlueprintReadWrite)
	bool isFinished;
	UPROPERTY(BlueprintReadWrite)
	bool isCurrentlyPaused;
	UPROPERTY(BlueprintReadWrite)
	bool currentlyCarrying;
	UPROPERTY(BlueprintReadWrite)
	bool canPutDown;
	UPROPERTY(BlueprintReadWrite)
	UChildActorComponent* childLight;
	UPROPERTY(BlueprintReadWrite)
	UImage* screenFade;
	UPROPERTY(BlueprintReadWrite)
	UImage* endingImg;
	UPROPERTY(BlueprintReadWrite)
	UImage* creditImage;
	UPROPERTY(BlueprintReadWrite)
	bool finishedInstructions;
	float introTime = 0.f;
	UPROPERTY(BlueprintReadWrite)
	UImage* first;
	UPROPERTY(BlueprintReadWrite)
	UImage* second;
	UPROPERTY(BlueprintReadWrite)
	UImage* third;
	UPROPERTY(BlueprintReadWrite)
	bool pressX;
	UPROPERTY(BlueprintReadWrite)
	bool isWaitingForEndCinematic;
	UPROPERTY(BlueprintReadWrite)
	bool clickedGoToCredits;
	float alphaAmount = 0;
	UPROPERTY(BlueprintReadWrite)
	AActor* highlightedObj;
	UPROPERTY(BlueprintReadWrite)
	float timerTwo = 0;
};
