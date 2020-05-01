// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
//#include "Components/ChildActorComponent.h"
void UMyGameInstance::SetTextVariables(UImage* Ucreators, UImage* UendingText, UTextBlock* UscriptText, UTextBlock* UvoiceActorsText, UTextBlock* exitText, UTextBlock* prevText,
	UTextBlock* continueText, UImage* fadeBlock, UImage* endImg, UImage* endMenu, UImage* creditImage)
{
	this->creators = Ucreators;
	this->endingText = UendingText;
	this->scriptText = UscriptText;
	this->voiceActorsText = UvoiceActorsText;
	this->exitText = exitText;
	this->prevText = prevText;
	this->nextText = continueText;
	this->screenFade = fadeBlock;
	this->endingImg = endImg;
	this->endMenu = endMenu;
	this->creditImage = creditImage;
}
void UMyGameInstance::Ending(float time)
{
	//Fade first
	if (time < 3.f)
	{
		FSlateColor col = this->screenFade->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A < .99f)
		{
			lin.A += 0.03f;
			col = lin;
			this->screenFade->SetVisibility(ESlateVisibility::Visible);
			this->screenFade->SetColorAndOpacity(lin);
		}
		else
		{
			if (!endingImg->IsVisible())
				endingImg->SetVisibility(ESlateVisibility::Visible);
		}
	}
	if (time > 3.5f)
	{

		FSlateColor col = this->screenFade->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A > 0.02f)
		{
			lin.A -= 0.04f;
			col = lin;
			this->screenFade->SetVisibility(ESlateVisibility::Visible);
			this->screenFade->SetColorAndOpacity(lin);
		}	
	}

	if (time > 6.5f)
	{
		
		FSlateColor col = this->endingImg->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A < 0.92f)
		{
			lin.A += 0.05f;
			col = lin;
			this->endingImg->SetVisibility(ESlateVisibility::Visible);
			this->endingImg->SetColorAndOpacity(lin);
		}
	}
	if (time > 8.5f)
	{
		FSlateColor col = this->creators->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A < 0.92f)
		{
			lin.A += 0.03f;
			col = lin;
			
			this->creators->SetVisibility(ESlateVisibility::Visible);
			this->creators->SetColorAndOpacity(lin);
		}
	}
	if (time > 11.5f)
	{
	//	FSlateColor col = this->endMenu->ColorAndOpacity;
	//	FLinearColor lin = col.GetSpecifiedColor();
	//	if (lin.A < 0.92f)
		//{
	///		lin.A += 0.03f;
	//		col = lin;
		//	this->endMenu->SetVisibility(ESlateVisibility::Visible);
		//	this->endMenu->SetColorAndOpacity(lin);
			APlayerController* p = UGameplayStatics::GetPlayerController(UObject::GetWorld(), 0);
			//FInputModeUIOnly* a;
			//a->SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			if (p != nullptr)
			{
				p->SetInputMode(FInputModeUIOnly::FInputModeUIOnly());
				p->bShowMouseCursor = true;
			}
		//}
	}
	//this->endingText->SetVisibility(ESlateVisibility::Visible);
//	this->scriptText->SetVisibility(ESlateVisibility::Visible);
	//this->voiceActorsText->SetVisibility(ESlateVisibility::Visible);
	this->canPlayerMove = true;
	this->canPlayerRotate = true;
}
void UMyGameInstance::TurnOnLight(UChildActorComponent* child, bool visible)
{
	child->SetVisibility(visible);
}
void UMyGameInstance::GoToCredits(UImage* fade, UImage* credits, float time)
{
	if (time < 3.f)
	{
		FSlateColor col = fade->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A < .99f)
		{
			lin.A += 0.03f;
			col = lin;
			fade->SetVisibility(ESlateVisibility::Visible);
			fade->SetColorAndOpacity(lin);
		}
		else
		{
			if (!credits->IsVisible())
				credits->SetVisibility(ESlateVisibility::Visible);
		}
	}
	if (time > 3.5f && time < 10)
	{

		FSlateColor col = fade->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A > 0.02f)
		{
			lin.A -= 0.04f;
			col = lin;
			fade->SetVisibility(ESlateVisibility::Visible);
			fade->SetColorAndOpacity(lin);
		}
	}
	if (time > 12.f && time < 16)
	{
		FSlateColor col = fade->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A < .99f)
		{
			lin.A += 0.03f;
			col = lin;
			fade->SetVisibility(ESlateVisibility::Visible);
			fade->SetColorAndOpacity(lin);
		}
		else
		{
			if (credits->IsVisible())
				credits->SetVisibility(ESlateVisibility::Hidden);
		}
	}
	if (time > 15.5f)
	{

		FSlateColor col = fade->ColorAndOpacity;
		FLinearColor lin = col.GetSpecifiedColor();
		if (lin.A > 0.02f)
		{
			lin.A -= 0.04f;
			col = lin;
			fade->SetVisibility(ESlateVisibility::Visible);
			fade->SetColorAndOpacity(lin);
		}
	}
}
void UMyGameInstance::StartIntstructions(float timer, bool next)
{
	if (first == nullptr || second == nullptr || third == nullptr)
		return;
	if (introTime <= 0)
	{
		introTime = timer;
	}
	if (timer - introTime < 8)
	{
		if (!first->IsVisible())
		{
			first->SetVisibility(ESlateVisibility::Visible);
		}
	}
	if (timer - introTime < 16 && timer - introTime > 8)
	{
		if (!second->IsVisible())
		{
			first->SetVisibility(ESlateVisibility::Hidden);
			second->SetVisibility(ESlateVisibility::Visible);
		}
	}
	if (timer - introTime < 25 && timer - introTime> 16)
	{
		//if (!third->IsVisible())
		{
		//	second->SetVisibility(ESlateVisibility::Hidden);
			//third->SetVisibility(ESlateVisibility::Visible);
		}
	}
	if (timer - introTime > 16)
	{
		second->SetVisibility(ESlateVisibility::Hidden);
		finishedInstructions = true;
	}
	pressX = false;
}