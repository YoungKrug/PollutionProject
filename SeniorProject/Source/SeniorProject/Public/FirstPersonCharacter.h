// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "MyGameInstance.h"
#include "CoreMinimal.h"
#include "DoYouCopySystem.h"
#include "Camera/CameraActor.h"
#include "GameFramework/Character.h"
#include "FirstPersonCharacter.generated.h"
UCLASS()
class SENIORPROJECT_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPersonCharacter();
	// Constructor for AFPSCharacter
	AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UFUNCTION()
	void MoveForward(float val);
	UFUNCTION()
	void MoveRight(float val);
	UFUNCTION()
	void LookUp(float val);
	UFUNCTION()
	void LookSide(float val);
	UFUNCTION()
	void StartRayCast();
	UFUNCTION()
	void Interact(); 
	UFUNCTION()
	void ContinueDialogue();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	UCameraComponent* firstPersonCameraComponent;
	
	

private:
	UPROPERTY(EditAnywhere, Category = "Character Values")
	float baseTurnRate;
	UPROPERTY(EditAnywhere, Category = "Character Values")
	float baseLookUpRate;
	UPROPERTY(EditAnywhere, Category = "Character Values")
	float speed;
	UPROPERTY(EditAnywhere, Category = "Character Values")
	FVector offset;
	UPROPERTY(EditAnywhere, Category = "Character Values")
	AActor* doYouCopySystemActor;
	float currentFOV;
	FVector startTrace;
	FVector currentNewsPaperPos;
	FVector currentNewsPaperRot;
	FVector currentPlayerPos;
	ADoYouCopySystem* doYouCopyInst;
	UMyGameInstance* GI;
};
