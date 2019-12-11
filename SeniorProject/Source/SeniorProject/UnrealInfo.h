// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "Audio.h"
#include <vector>
/**
 * 
 */

USTRUCT()
struct FDialougeSystem
{
	GENERATED_BODY()
	int narrationNum;
	std::vector<FAudioClipInfo> audio;
	AActor* gameObject;
	bool hasPlayed;
};
struct FAudioClipInfo
{
	USoundBase* sound;
	bool isScreenLocked;
	bool isMovementLocked;
	bool isRotationLocked;
	bool canContinue;
	FText subtitles;
};
class SENIORPROJECT_API UnrealInfo
{
public:
	UnrealInfo();
	~UnrealInfo();
};
