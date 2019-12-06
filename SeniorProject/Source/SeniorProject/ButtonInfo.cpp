// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonInfo.h"
#include "GameFramework/Actor.h"
//General Log
DEFINE_LOG_CATEGORY(LogMyGame);

// Sets default values for this component's properties
UButtonInfo::UButtonInfo()
{
	
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	//bluePrintClass->ClassGeneratedBy->
	
	// ...
}


// Called when the game starts
void UButtonInfo::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UButtonInfo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (FVector::Dist(player->GetActorLocation(), GetOwner()->GetActorLocation()) > distance)
	{
		UE_LOG(LogMyGame, Verbose, TEXT("UMyClass %s entering FireWeapon()"), *GetNameSafe(this));
	}
	// ...
}

