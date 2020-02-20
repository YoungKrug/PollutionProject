// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "MyGameInstance.h"
#include "Components/CapsuleComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/AudioComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetOwner()->Tags[0] = "C_Player";
	
	//doYouCopyInst = doYouCopySystemActor->FindComponentByClass<ADoYouCopySystem
	// For intro make sure to set isIntro to true and make a function that sets hasPressX to true and false also set is clear, endgame/gameover
	//and isDisplayed etc... for loop

}

// Called when the game starts or when spawned
void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* p = UGameplayStatics::GetPlayerController(UObject::GetWorld(), 0);
	p->bShowMouseCursor = false;
	FString test;
	// Make sure you make this game instance in editor equal to your own game instance in code
	GI = Cast<UMyGameInstance>(GetGameInstance());
	//GI->canDisplayTest = true;
	//GI->isIntro = true;
	//test = GetOwner()->Tags[0].ToString();
	//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);

//	UCharacterMovementComponent::SetMovementMode(MODE_FLYING)
}

// Called every frame
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	timer += DeltaTime;
	if(soundIsPlaying && timer >= cooldown)
	{
		soundIsPlaying = false;
	}
	if (isRespawning && timer >= respawnTimer)
	{
		isRespawning = false;
		SetActorLocation(currentPlayerPos);
	}
}
FString AFirstPersonCharacter::StartRayCast()
{
	//Hit contains information about what the raycast hit.
	FHitResult Hit;
	TArray<FHitResult> hit;

	//The length of the ray in units.
	//For more flexibility you can expose a public variable in the editor
	float rayLength = rayLengthForSteps;

	//The Origin of the raycast
	FVector startLocation = GetActorLocation();

	//The EndLocation of the raycast
	FVector endLocation = startLocation + (GetActorLocation().DownVector * rayLength);

	//Collision parameters. The following syntax means that we don't want the trace to be complex
	FCollisionQueryParams collisionParameters;
	collisionParameters.AddIgnoredActor(this);
	collisionParameters.AddIgnoredActor(GetOwner());

	//Perform the line trace
	//The ECollisionChannel parameter is used in order to determine what we are looking for when performing the raycast
	//ActorLineTraceSingle(Hit, startLocation, endLocation, ECollisionChannel::ECC_WorldDynamic, collisionParameters);
	GetWorld()->LineTraceMultiByChannel(hit, startLocation, endLocation, ECollisionChannel::ECC_WorldDynamic, collisionParameters);
	for (int i = 0; i < hit.Num(); i++)
	{
		if (hit[i].Actor != nullptr)
		{
			if (hit[i].GetActor()->ActorHasTag("Floor"))
			{
				//SetActorLocation(currentPlayerPos);
				//FString test = "Floor";
				//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
				currentPlayerPos = GetActorLocation(); // Means they have not hit the water
				return FString::FString("Dock");
			}
			else if (hit[i].GetActor()->ActorHasTag("Dock"))
			{
			//	FString test = "Dock";
			//	GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
				currentPlayerPos = GetActorLocation();
				//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, GetActorLocation().ToString());
				return FString::FString("Dock");
			}
			else if (hit[i].GetActor()->ActorHasTag("Forest"))
			{
			//	FString test = "Forest";
				currentPlayerPos = GetActorLocation();
				//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, GetActorLocation().ToString());
				return FString::FString("Forest");
			}
			else if (hit[i].GetActor()->ActorHasTag("City"))
			{
				//FString test = "City";
			//	GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
				currentPlayerPos = GetActorLocation();
				return FString::FString("City");
			}
			
			//currentPlayerPos = GetActorLocation();
		}
	}
	//DrawDebugLine is used in order to see the raycast we performed
	//The boolean parameter used here means that we want the lines to be persistent so we can see the actual raycast
	//The last parameter is the width of the lines.
	//DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Green, true, -1, 0, 1.f);
	// If it does not break in the loop
	if(!isRespawning)
	for (int i = 0; i < hit.Num(); i++)
	{
		if (hit[i].Actor != nullptr)
		{
			if (hit[i].GetActor()->ActorHasTag("Water") && GetCharacterMovement()->MovementMode != EMovementMode::MOVE_Flying) // the water is underneath us
			{
				isRespawning = true;
				respawnTimer = timer + 1.0f;
				//SetActorLocation(currentPlayerPos);
			}
		}
	}


	return FString::FString("");
}
// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AFirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFirstPersonCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AFirstPersonCharacter::LookSide);
	PlayerInputComponent->BindAxis("LookUp", this, &AFirstPersonCharacter::LookUp);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AFirstPersonCharacter::Interact);
	PlayerInputComponent->BindAction("Skip", IE_Pressed, this, &AFirstPersonCharacter::ContinueDialogue);

}
//Add interact function soon **Newspaper etc.
void AFirstPersonCharacter::MoveForward(float val)
{
	if (canClimb && !isAtClimbEnd)
	{		
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		AddMovementInput(GetActorUpVector(), (speed / 2) * val);
		return;
		//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::FString("Climbing"));
	}
	else if (isAtClimbEnd)
	{
		AddMovementInput(GetActorForwardVector(), speed * val);
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	}
	if (!GI->canPlayerMove)
	{
		AddMovementInput(GetActorForwardVector(), speed * val);
	}
	if (val != 0)
	{
		DetermineSoundToPlay(StartRayCast());
		//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::FString("Moving"));
	}
}
void AFirstPersonCharacter::MoveRight(float val)
{
	if (canClimb && !isAtClimbEnd)
	{
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
		AddMovementInput(GetActorUpVector(), (speed / 2) * val);
		return;
		//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::FString("Climbing"));
	}
	else if (isAtClimbEnd)
	{
		AddMovementInput(GetActorRightVector(), speed * val);
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
	}

	if (!GI->canPlayerMove)
		AddMovementInput(GetActorRightVector(), speed * val);
	if (val != 0)
	{
		DetermineSoundToPlay(StartRayCast());
		//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::FString("Moving"));
	}
}
void AFirstPersonCharacter::LookSide(float val)
{
	if (!GI->canPlayerRotate)
		AddControllerYawInput(val);
}
void AFirstPersonCharacter::LookUp(float val)
{
	if (!GI->canPlayerRotate)
		AddControllerPitchInput(val);
}
void AFirstPersonCharacter::Interact()
{
	if (GI->isIntro && GI->isClear)
	{
		GI->isPressedX = true;
		GI->isIntro = false;		
	}
	else if(currentlyInteracting.Num() <= 0)
	{
		bool hasCalled = false;
	  //TArray<AActor*> collidedActors;
		for (int i = 0; i < interactableTags.Num(); i++)
		{
			TArray<AActor*> emptyCheck;
			emptyCheck.Empty();
			TArray<AActor*> returned;
			UGameplayStatics::GetAllActorsWithTag(UObject::GetWorld(), interactableTags[i], returned);
			TArray<FGameObjectInfo> info;
			interactableObjectsOrgPos.Empty();
			SafelyEmptyList(currentlyInteracting);
			if (returned == emptyCheck)
				return;
			for (int i = 0; i < returned.Num(); i++)
			{
				FGameObjectInfo s;
				s.distance = FVector::Dist(GetActorLocation(), returned[i]->GetActorLocation());
				s.gameObject = returned[i];
				info.Add(s);
			}
			SortGameObjectInfoByDistance(info);
			if (info[0].distance < 250.f) // if i am close to the objects I have found
			{
				FString test = "Carrying: " + info[0].gameObject->GetName();
				GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
				hasCalled = true;
				DetermineInteraction(interactableTags[i].ToString(), info[0].gameObject, info);
				break;
			}
		}		
		return;
	}
	int num = currentlyInteracting.Num();
	TArray<AActor*> a;
	a.Empty();
	if (currentlyInteracting != a && num > 0) // I am carrying objects
	{
		FString test = "Switch";
		GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
		if (currentlyInteracting.Num() == 1)
		{
			currentlyInteracting[0]->DetachRootComponentFromParent();
			currentlyInteracting[0]->SetActorLocationAndRotation(interactableObjectsOrgPos[0], interactableObjectsOrgRot[0]);
			currentlyInteracting[0] = nullptr;
			currentlyInteracting.Empty();
			interactableObjectsOrgPos.RemoveAt(0);
			interactableObjectsOrgRot.RemoveAt(0);
			GI->canPlayerMove = false;
			//GI->canPlayerRotate = false;
			return;
		}
		else // If i am carrying more then one object remove one at a time until the list is empty
		{
			currentlyInteracting[0]->DetachRootComponentFromParent();
			currentlyInteracting[0]->SetActorLocationAndRotation(interactableObjectsOrgPos[0], interactableObjectsOrgRot[0]);
			currentlyInteracting[0] = nullptr;
			currentlyInteracting.Remove(0);
			interactableObjectsOrgPos.RemoveAt(0);
			interactableObjectsOrgRot.RemoveAt(0);
		}
	}
	FString test = "Interact";
	//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
}

void AFirstPersonCharacter::SafelyEmptyList(TArray<AActor*>& arr) // method to dereference the pointers
{
	for (int i = 0; i < arr.Num(); i++)
	{
		AActor* temp = nullptr;
		arr[i] = temp;
	}

	arr.Empty();
}
AFirstPersonCharacter::AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Create a CameraComponent 
	firstPersonCameraComponent = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this, TEXT("FirstPersonCamera"));
	firstPersonCameraComponent->AttachToComponent(GetDefaultAttachComponent(), FAttachmentTransformRules::SnapToTargetIncludingScale);
	// Position the camera a bit above the eyes
	firstPersonCameraComponent->RelativeLocation = FVector(0, 0, 50.0f + BaseEyeHeight);
	// Allow the pawn to control rotation.
	firstPersonCameraComponent->bUsePawnControlRotation = true;
	triggerCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Trigger Capsule"));
	triggerCapsule->InitCapsuleSize(55.5f, 96.f);
	triggerCapsule->SetCollisionProfileName(TEXT("Trigger"));
	triggerCapsule->SetupAttachment(RootComponent);
	triggerCapsule->OnComponentBeginOverlap.AddDynamic(this, &AFirstPersonCharacter::OnOverlapBegin);
	triggerCapsule->OnComponentEndOverlap.AddDynamic(this, &AFirstPersonCharacter::OnOverlapEnd);
}
void AFirstPersonCharacter::ContinueDialogue()
{
	// Going to be the space bar
	//Send an event to the DoYouCopySystem

}

void AFirstPersonCharacter::DetermineInteraction(const FString str, AActor* act, TArray<FGameObjectInfo> info)
{
	if (currentlyInteracting.Num() <= 0)
	{
		if (str == "Newspaper")
		{
			for(int i = 0; i < info.Num(); i++)
			{
				if (info[i].distance < 250.f) //for every newspaper in this distance add it to our carry inven
				{
					interactableObjectsOrgPos.Add(info[i].gameObject->GetActorLocation());
					interactableObjectsOrgRot.Add(info[i].gameObject->GetActorRotation());
					//float offset = i * 20.f;
					act = info[i].gameObject;
					act->AttachToActor(GetOwner(), FAttachmentTransformRules::KeepRelativeTransform);
					FVector newPos = (GetActorLocation()) + (GetActorForwardVector() * 150.f);
					FQuat rot;
					act->SetActorLocation(newPos);
					rot.RotateVector(FVector(0,0,90.f));
					act->SetActorRotation(FRotator(0, 90.f, 0));
					currentlyInteracting.Add(act);
					GI->canPlayerMove = true;
				  //GI->canPlayerRotate = true;
				}
			}
			return;
		}
		else if (str == "Interactable")
		{
			// Playing with animations(Cinematics)
			TArray<USkeletalMeshComponent*> skele;
			act->GetComponents<USkeletalMeshComponent*>(skele);
		}
		else if (str == "Moveable Objects")
		{
			//Movable objects in the scene you can interact with
		}
		else if (str == "Radio")
		{
			//Interacting with the radio will call a different function, we want to be able to push buttons etc.
		}
	}
}
void AFirstPersonCharacter::DetermineSoundToPlay(FString str)
{
	if(soundIsPlaying)
		return;
	cooldown = timer + footStepCoolDown;
	soundIsPlaying = true;
	audio = NewObject<UAudioComponent>(this, "AutoDestroyAudio");
	audio->bAutoDestroy = true;
	FRandomStream rand;
	float randomNum = rand.RandRange(0.5f, 2.f);
	if (str == "Dock")
	{
		audio->Sound = dockStepSounds;	
		audio->SetPitchMultiplier(randomNum);
		audio->Play();
		return;
	}
	else if (str == "Forest")
	{
		audio->Sound = forestStepSounds;
		audio->SetPitchMultiplier(randomNum);
		audio->Play();
		return;
	}
	else if (str == "City")
	{
		audio->Sound = cityStepSounds;
		audio->SetPitchMultiplier(randomNum);
		audio->Play();
		return;
	}
}
//Sort Array
TArray<FGameObjectInfo> AFirstPersonCharacter::SortGameObjectInfoByDistance(TArray<FGameObjectInfo>& x)
{
	for (int i = 0; i < x.Num(); i++)
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
//For collision
void AFirstPersonCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::FString("Hit Object: ").Append(OtherActor->GetFName().ToString()));
		currentCollidedObj = OtherActor;
		isCollided = true;
		TArray<FName> name = OtherActor->Tags;
		for (int i = 0; i < name.Num(); i++)
		{
		//	GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, name[i].ToString());
			if (name[i] == "Climb")
			{
				canClimb = true;
				climbActor = OtherActor;	
				break;
				//Object we can climb;
			}
			if (name[i] == "ClimbEnd")
			{
				isAtClimbEnd = true;
			}
			if (name[i] == "Point")
			{
				GI->currentlyCollidingObj = OtherActor;
			}
		}
	}
}
void AFirstPersonCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor != this)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, FString::FString("Left Object: ").Append(OtherActor->GetFName().ToString()));
		AActor* actor = nullptr;
		currentCollidedObj = actor;
		isCollided = false;
		TArray<FName> name = OtherActor->Tags;
		for (int i = 0; i < name.Num(); i++)
		{
			//	GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, name[i].ToString());
			if (name[i] == "Climb")
			{
				canClimb = false;
				GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
				//Object we can climb;
			}
			if (name[i] == "ClimbEnd")
			{
				isAtClimbEnd = false;
				GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Walking);
			}
			if (name[i] == "Point")
			{
				GI->currentlyCollidingObj = nullptr;
			}
		}
	}
}


