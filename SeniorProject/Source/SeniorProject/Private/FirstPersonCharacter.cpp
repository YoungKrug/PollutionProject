// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* p = UGameplayStatics::GetPlayerController(UObject::GetWorld(), 0);
	p->bShowMouseCursor = false;
	FString test;
	if (p->bShowMouseCursor)
	{
		test = "true";
	}
	else
		test = false;
	GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
}

// Called every frame
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AFirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFirstPersonCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AFirstPersonCharacter::LookSide);
	PlayerInputComponent->BindAxis("LookUp", this, &AFirstPersonCharacter::LookUp);

}

void AFirstPersonCharacter::MoveForward(float val)
{
	AddMovementInput(GetActorForwardVector(), speed * val);
	//FString test = FString::SanitizeFloat(val);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
}
void AFirstPersonCharacter::MoveRight(float val)
{
	//FString test = FString::SanitizeFloat(val);
	AddMovementInput(GetActorRightVector(), speed * val);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
}
void AFirstPersonCharacter::LookSide(float val)
{
	//FString test = "LookToSide";
	AddControllerYawInput(val);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
}
void AFirstPersonCharacter::LookUp(float val)
{
	//FString test = "LookUp";
	AddControllerPitchInput(val);
	//GEngine->AddOnScreenDebugMessage(-1, 2.0F, FColor::Cyan, test);
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

