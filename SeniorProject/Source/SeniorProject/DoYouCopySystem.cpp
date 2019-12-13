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
	if (returned.Num() > 0)
		mainPlayer = returned[0];
	FString test = "s";
	GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 2.0F, FColor::Cyan, test); // How to Debug <-

}

// Called every frame
void ADoYouCopySystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	bool close = isClose();
}
//O(n^2) make it O(N) if it lags but we are only dealing with less then 100 items so it shouldnt matter that much
bool ADoYouCopySystem::isClose()
{
	const int32 AlwaysAddKey = -1;
	FString test = "s";
	
	TArray<FGameObjectInfo> arr;
	if (dial.Num() <= 0 || mainPlayer == nullptr)
	{
		return false;
	}
	for (int i = 0;  i < dial.Num(); i++)
	{
		FGameObjectInfo info;
		info.gameObject = dial[i].gameObject;
		info.distance = FVector::Distance(info.gameObject->GetActorLocation(), mainPlayer->GetActorLocation());
		arr.Add(info);
	}
	arr = SortGameObjectInfoByDistance(arr);
	test = arr[0].gameObject->GetName();
	GEngine->AddOnScreenDebugMessage(AlwaysAddKey, .1F, FColor::Cyan, test);
	//FString s = arr[0].gameObject->GetName();
	//FText text = arr[0].gameObject->GetName().GetCharArray();
	//UE_LOG(LogExec, Warning, TEXT();
	if (arr[0].distance < dist)
	{
		return true;
	}	
	return false;
}
TArray<FGameObjectInfo> ADoYouCopySystem::SortGameObjectInfoByDistance(TArray<FGameObjectInfo> &x)
{
	for (int i = 0; i < x.Num() ; i++)
	{
		for (int j = 0; j < x.Num(); j++)
		{
			if (x[i].distance < x[j].distance)
			{
				x.Swap(i, j);
				FString test = x[i].gameObject->GetName();
				//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
			}
		}
	}
	return x;
}

