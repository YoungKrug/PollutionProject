// Fill out your copyright notice in the Description page of Project Settings.

/**************TODO*******************
Allow the system to play all the audio in the audio array, and
allow for subtitles and skipping.
Still need to make the gameinstance global

*/
#include "DoYouCopySystem.h"
#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "Components/AudioComponent.h"

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
	//if (returned.Num() > 0)
	//	mainPlayer = returned[0];
	FString test = "hello";
	//GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 2.0F, FColor::Cyan, test); // How to Debug <-
	audio = NewObject<UAudioComponent>(this, "audio");
	//GI = NewObject<UMyGameInstance>(this, "GameInstance");
	GI = Cast<UMyGameInstance>(GetGameInstance());
	subTime = 0;
	timer = 0;
}
// Called every frame
void ADoYouCopySystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	timer += DeltaTime;
	bool close;
	if (!isPlaying)
	{
		close = isClose();
		GI->canStartSubs = false;
		ResetSubs();
	}

	if (isUpdatingSubs && subTime <= timer)
	{ 
		UpdateSubs(subIncr);
		subIncr++;
		subTime = timer + add;
	}

	if (close || isPlaying)
	{
		if (!audioIsPlaying)
		{
			PlaySequence(timer);
			//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::FString("Playing"));
			close = false;
		}
		if (isPlaying && timer >= audioDur)
		{
			audioIsPlaying = false;
			audio->Stop();
			TArray<FAudioInformation> audio = dial[narrationNum].audio;
			int audioCount = audio.Num();
			ResetSubs();
			if (audioCount - 1 > audioCounter)
			{
				audioCounter++;		

				//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::SanitizeFloat(audioCount).Append(FString::FString(" : ").Append(FString::SanitizeFloat(audioCounter))));

			}
			else
			{
				audioCounter = 0;
				RemovePoint();
				isPlaying = false;
				ResetBools(dial[narrationNum].audio[audioCounter]);
				ResetSubs();
			}
		}
	}
}
//O(n^2) make it O(N) if it lags but we are only dealing with less then 100 items so it shouldnt matter that much
bool ADoYouCopySystem::isClose()
{
	const int32 AlwaysAddKey = -1;
	FString test = "s";
	TArray<FGameObjectInfo> arr;
	if (GI->isIntro)
	{
		return false;
	}
	if (dial.Num() <= 0 || mainPlayer == nullptr)
	{
		return false;
	}
	for (int i = 0;  i < dial.Num(); i++)
	{
		if (dial[i].gameObject == nullptr)
			continue;
		FGameObjectInfo info;
		info.gameObject = dial[i].gameObject;
		info.distance = FVector::Distance(info.gameObject->GetActorLocation(), mainPlayer->GetActorLocation());
		info.narrationNum = dial[i].narrationNum;
		arr.Add(info);
	}
	arr = SortGameObjectInfoByDistance(arr);
	test = arr[0].gameObject->GetName();
	//GEngine->AddOnScreenDebugMessage(AlwaysAddKey, .1F, FColor::Cyan, test);
	//FString s = arr[0].gameObject->GetName();
	//FText text = arr[0].gameObject->GetName().GetCharArray();
	//UE_LOG(LogExec, Warning, TEXT();
	if (arr[0].distance < dist || GI->currentlyCollidingObj != nullptr && GI->currentlyCollidingObj == arr[0].gameObject)
	{
		narrationNum = arr[0].narrationNum;
		//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::SanitizeFloat(narrationNum));
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
void ADoYouCopySystem::PlaySequence(float deltaTime)
{
	isPlaying = true;
	if (!audioIsPlaying)
	{	
		ResetSubs();
		audioIsPlaying = true;
		audio->Sound = GetSound(); 
		if (audio->Sound != nullptr)
		{
			audioDur = audio->Sound->Duration + deltaTime + 1;
			FString test = FString::SanitizeFloat(audioDur);
			//GEngine->AddOnScreenDebugMessage(-1, 4.0F, FColor::Cyan, test);
			audio->Play();
		}
		else
			audioDur = 4;
		FString temp = dial[narrationNum].audio[audioCounter].subtitles.ToString();
		add = ((audioDur - deltaTime)-2) / temp.Len();
		subTime = deltaTime;
		SetSubs();
		SetBools(dial[narrationNum].audio[audioCounter]);
	}
}
void ADoYouCopySystem::SetBools(FAudioInformation &audio)
{
	GI->canPlayerMove = audio.isMovementLocked;
	GI->canPlayerRotate = audio.isRotationLocked;
	GI->isPlayerScreenLocked = audio.isScreenLocked;
	GI->canStartSubs = true;
	GI->currentSubs = subtitles;
}
void ADoYouCopySystem::ResetBools(FAudioInformation& audio)
{
	GI->canPlayerMove = false;
	GI->canPlayerRotate = false;
	GI->isPlayerScreenLocked = false;
	GI->canStartSubs = false;
}
USoundBase* ADoYouCopySystem::GetSound()
{
	TArray<FAudioInformation> audio = dial[narrationNum].audio;
	return audio[audioCounter].audio;
}
UMyGameInstance* ADoYouCopySystem::GetGameInstanceBase()
{
	UMyGameInstance* temp = GI;
	return temp;
}
void ADoYouCopySystem::RemovePoint()
{
	FVector currentLocation; 
	currentObject = dial[narrationNum].gameObject;
	currentLocation = currentObject->GetActorLocation();
	currentLocation.Z += 3000000;
	currentObject->SetActorLocation(currentLocation);
}

void ADoYouCopySystem::SetSubs()
{
	//subtitles = dial[narrationNum].audio[audioCounter].subtitles;
	subIncr = 0;
	isUpdatingSubs = true;
}
FText ADoYouCopySystem::GetSubs()
{
	return subtitles;
}
void ADoYouCopySystem::ResetSubs()
{
	GI->currentSubs = FText::FromString(FString::FString(""));
	subtitles = FText::FromString(FString::FString(""));
}
void ADoYouCopySystem::UpdateSubs(int i)
{
	const int32 AlwaysAddKey = -1;
	int subLen = dial[narrationNum].audio[audioCounter].subtitles.ToString().Len();
	if (i >= subLen)
	{
		return;
	}
	if (&dial[narrationNum].audio[audioCounter] == nullptr)
	{
		isUpdatingSubs = false;
		//FString test = "done";
		//GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 4.0F, FColor::Cyan, test);
		return;
	}
	char a = dial[narrationNum].audio[audioCounter].subtitles.ToString()[i];
	FString temp = subtitles.ToString();
	temp += a;
	FText text = FText::FromString(temp);
	subtitles = text;
	GI->currentSubs = subtitles;
	//FString test = temp; 
	//GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 2.0F, FColor::Cyan, subtitles.ToString()); // How to Debug <-
}
