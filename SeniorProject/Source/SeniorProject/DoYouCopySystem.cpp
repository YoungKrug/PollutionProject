// Fill out your copyright notice in the Description page of Project Settings.


#include "DoYouCopySystem.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"

// Sets default values
ADoYouCopySystem::ADoYouCopySystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void ADoYouCopySystem::BeginPlay()
{
	const int32 AlwaysAddKey = -1;
	Super::BeginPlay();
	TArray<AActor*> returned;
	UGameplayStatics::GetAllActorsWithTag(UObject::GetWorld(), (FName)"C_Player", returned);
	mainPlayer = returned[0];
	//GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 2.0F, FColor::Cyan, test); // How to Debug <-

}

// Called every frame
void ADoYouCopySystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
bool ADoYouCopySystem::isClose()
{
	return false;
}

