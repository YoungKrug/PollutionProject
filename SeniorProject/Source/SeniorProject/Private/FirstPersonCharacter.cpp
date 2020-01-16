// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "MyGameInstance.h"
// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetOwner()->Tags[0] = "C_Player";
	
	//doYouCopyInst = doYouCopySystemActor->FindComponentByClass<ADoYouCopySystem>();
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
	//test = GetOwner()->Tags[0].ToString();
	//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
}

// Called every frame
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AFirstPersonCharacter::StartRayCast()
{
	//Hit contains information about what the raycast hit.
	FHitResult Hit;
	TArray<FHitResult> hit;

	//The length of the ray in units.
	//For more flexibility you can expose a public variable in the editor
	float rayLength = 220;

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
	/*if (Hit.Actor != nullptr)
	{
		FString test = Hit.GetActor()->GetName();
		GEngine->AddOnScreenDebugMessage(-1, .2F, FColor::Cyan, test);
		if (Hit.GetActor()->ActorHasTag("Water"))
		{
			test = "Water";
			GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
		}
	}*/
	for (int i = 0; i < hit.Num(); i++)
	{
		if (hit[i].Actor != nullptr)
		{
			if (hit[i].GetActor()->ActorHasTag("Water"))
			{
				//SetActorLocation(currentPlayerPos);
				FString test = "Water";
				GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
				break;
			}
			currentPlayerPos = GetActorLocation();
		}
	}
	//DrawDebugLine is used in order to see the raycast we performed
	//The boolean parameter used here means that we want the lines to be persistent so we can see the actual raycast
	//The last parameter is the width of the lines.
	DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Green, true, -1, 0, 1.f);
	currentPlayerPos = GetActorLocation();
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
	if(!GI->canPlayerMove)
		AddMovementInput(GetActorForwardVector(), speed * val);
	StartRayCast();
}
void AFirstPersonCharacter::MoveRight(float val)
{
	if (!GI->canPlayerMove)
		AddMovementInput(GetActorRightVector(), speed * val);
	StartRayCast();
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
}
void AFirstPersonCharacter::ContinueDialogue()
{
	// Going to be the space bar
	//Send an event to the DoYouCopySystem

}

