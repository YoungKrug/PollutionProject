#pragma once // werid
#include "DialogueSystemStruct.h"
#include "MyGameInstance.h"
#include "CoreMinimal.h"
#include "DoYouCopySystem.h"
#include "Camera/CameraActor.h"
#include "GameFramework/Character.h"
#include "Components/AudioComponent.h"
#include "Animation/AnimSequence.h"
#include "UMG/Public/Components/BackgroundBlur.h"
#include "Components/SkeletalMeshComponent.h"
#include "FirstPersonCharacter.generated.h" // If you regenerate the vs solution you are able to fix the generated body error
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
	FString StartRayCast();
	UFUNCTION()
	void Interact(); 
	UFUNCTION()
	void ContinueDialogue();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
	UCameraComponent* firstPersonCameraComponent;
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void DetermineSoundToPlay(FString);
	UFUNCTION()
	TArray<FGameObjectInfo> SortGameObjectInfoByDistance(TArray<FGameObjectInfo>& x);
	UFUNCTION()
	void DetermineInteraction(const FString str, AActor* act, TArray<FGameObjectInfo> info);
	UFUNCTION()
	void SafelyEmptyList(TArray<AActor*>& arr);
	UFUNCTION()
	void HandleIntro();
	UFUNCTION(BlueprintCallable, Category = "Blur")
	void SetBlur(UBackgroundBlur* backGroundBlur, bool isActive);
	UFUNCTION()
	void SetTextForNewPaper(int num);
	UFUNCTION()
	void ActivateNewPaperUI(bool activation);
	UFUNCTION()
	void GetNumbers();
	UFUNCTION()
	void NextPage();
	UFUNCTION()
	void PrevPage();
	UFUNCTION()
	void ExitNewsPaper();
	

private:
	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	class UCapsuleComponent* triggerCapsule;
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
	UPROPERTY(EditAnywhere, Category = "Character Values")
	float footStepCoolDown;
	float currentFOV;
	TArray<AActor*> currentlyInteracting;
	FVector startTrace;
	FVector currentNewsPaperPos;
	FVector currentNewsPaperRot;
	FVector currentPlayerPos;
	ADoYouCopySystem* doYouCopyInst;
	UMyGameInstance* GI;	
	AActor* currentCollidedObj;
	UPROPERTY(EditAnywhere, Category = "Foot Step Sounds")
	USoundBase* forestStepSounds;
	UPROPERTY(EditAnywhere, Category = "Foot Step Sounds")
	USoundBase* cityStepSounds;
	UPROPERTY(EditAnywhere, Category = "Foot Step Sounds")
	USoundBase* dockStepSounds;
	UPROPERTY(EditAnywhere, Category = "Foot Step Sounds")
	USoundBase* fireHouseStepSounds;
	bool isCollided;
	bool soundIsPlaying;
	float timer;
	float cooldown;
	UAudioComponent* audio;
	bool canClimb;
	bool isAtClimbEnd;
	AActor* climbActor;
	UPROPERTY(EditAnywhere, Category = "Foot Step Sounds")
	float rayLengthForSteps = 130;
	bool isRespawning;
	float respawnTimer;
	UPROPERTY(EditAnywhere, Category = "CollisionOverlaps")
	float sphereRadius = 5;
	UPROPERTY(EditAnywhere, Category = "Interactable Tags")
	TArray<FName> interactableTags;
	UPROPERTY(EditAnywhere, Category = "Interactable Tags")
	TArray<FVector> interactableObjectsOrgPos;
	TArray<FRotator> interactableObjectsOrgRot;
	UPROPERTY(EditAnywhere, Category = "Interactable Tags")
	TArray<FText> newsPaperText;
	USkeletalMeshComponent* currentInteractableAnim;
	float aniTimerForBoxes;
	UPROPERTY(EditAnywhere, Category = "Interactable Tags")
	float stopTimeForBoxes;
	bool hasInteracted;
	UPROPERTY(EditAnywhere, Category = "Intro Values")
	float phoneTimer;
	float introTimer;
	UPROPERTY(EditAnywhere, Category = "Intro Values")
	USoundBase* cellPhoneSound;
	UPROPERTY(EditAnywhere, Category = "Intro Values")
	USoundBase* recorderSound;
	UAudioComponent* introAudio;
	bool isWaitingForPhone;
	bool isWaitingForRecorder;
	bool isLadderDown;
	bool isLadderUp;
	UBackgroundBlur* blur;
	bool isReading;
	UPROPERTY(EditAnywhere, Category = "Character Values")
	TArray<FText> newsPaperTexts;
	TArray<int> newsPaperNums;
	float currentPaperNum;
};
