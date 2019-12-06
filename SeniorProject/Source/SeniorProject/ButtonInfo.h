// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "ButtonInfo.generated.h"

//General Log
DECLARE_LOG_CATEGORY_EXTERN(LogMyGame, Log, All);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SENIORPROJECT_API UButtonInfo : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UButtonInfo();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere)
	float distance;
	UPROPERTY(EditAnywhere)
	AActor* player;
	AActor* owner = GetOwner();
		
};
