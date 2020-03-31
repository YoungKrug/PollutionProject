// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "MyGameInstance.h"
#include "UnrealInfo.h"
#include "DialogueSystemStruct.h"
#include "GameFramework/Actor.h"
#include "Components/AudioComponent.h"
#include "DoYouCopySystem.generated.h"

UCLASS()
class SENIORPROJECT_API ADoYouCopySystem : public AActor
{
	GENERATED_BODY()

public:	

	// Sets default values for this actor's properties
	ADoYouCopySystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	TSubclassOf<AActor*>* player; // Safely accessedPlayer
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//UPROPERTY(EditAnywhere, Category = "Dialogue")
	UMyGameInstance* GI;
	bool isClose();
	void PlaySequence(float);
	TArray<FGameObjectInfo> SortGameObjectInfoByDistance(TArray<FGameObjectInfo>&);
	void SetBools(FAudioInformation&);
	void ResetBools(FAudioInformation&);
	USoundBase* GetSound();
	UMyGameInstance* GetGameInstanceBase();
	void RemovePoint();
	void UpdateSubs(int i);
	void SetSubs();
	UFUNCTION(BlueprintCallable, Category = "DoYouCopy")
	FText GetSubs();
	void ResetSubs();
private:
	UPROPERTY(EditAnywhere)
	AActor* mainPlayer;//Player to use methods on
	UPROPERTY(EditAnywhere, Category = "Dialogue")
	TArray<FDialougeSystem> dial;
	UPROPERTY(EditAnywhere)
	float dist;
	bool isPlaying;
	bool isDone;
	int narrationNum;
	float audioDur;
	bool audioIsPlaying;
	int audioCounter = 0;
	float timer = 0;
	UPROPERTY(EditAnywhere)
	UAudioComponent* audio;
	UPROPERTY(EditAnywhere)
	AActor* currentObject;
	FText subtitles;
	bool isUpdatingSubs;
	float subTime;
	int subIncr = 0;
	float add;
	bool isPaused;
	bool stopPause;
};
