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
}
FString AFirstPersonCharacter::StartRayCast()
{
	//Hit contains information about what the raycast hit.
	FHitResult Hit;
	TArray<FHitResult> hit;

	//The length of the ray in units.
	//For more flexibility you can expose a public variable in the editor
	float rayLength = 145;

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
				GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, GetActorLocation().ToString());
				return FString::FString("Dock");
			}
			else if (hit[i].GetActor()->ActorHasTag("Forest"))
			{
			//	FString test = "Forest";
				currentPlayerPos = GetActorLocation();
				GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, GetActorLocation().ToString());
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
	for (int i = 0; i < hit.Num(); i++)
	{
		if (hit[i].Actor != nullptr)
		{
			if (hit[i].GetActor()->ActorHasTag("Water") && GetCharacterMovement()->MovementMode != EMovementMode::MOVE_Flying) // the water is underneath us
			{
				SetActorLocation(currentPlayerPos);
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
	if (GI->isIntro)
	{
		GI->isPressedX = true;
		GI->isIntro = false;		
	}
	FString test = "Interact";
	GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
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
		}
	}
}


