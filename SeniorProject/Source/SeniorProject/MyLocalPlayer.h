// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "MyLocalPlayer.generated.h"

/**
 * 
 */
UCLASS()
class SENIORPROJECT_API UMyLocalPlayer : public ULocalPlayer
{
	GENERATED_BODY()
public:
		FSceneView* CalcSceneView(class FSceneViewFamily* ViewFamily,
			FVector&OutViewLocation,
			FRotator& OutViewRotation,
			FViewport* Viewport,
			class FViewElementDrawer* ViewDrawer = NULL,
			EStereoscopicPass StereoPass = eSSP_FULL) override;
};
