// Fill out your copyright notice in the Description page of Project Settings.


#include "GameObjectInformation.h"

// Sets default values
AGameObjectInformation::AGameObjectInformation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameObjectInformation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameObjectInformation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

