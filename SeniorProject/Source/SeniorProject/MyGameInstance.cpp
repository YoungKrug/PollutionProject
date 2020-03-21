// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::SetTextVariables(UTextBlock* Ucreators, UTextBlock* UendingText, UTextBlock* UscriptText, UTextBlock* UvoiceActorsText)
{
	this->creators = Ucreators;
	this->endingText = UendingText;
	this->scriptText = UscriptText;
	this->voiceActorsText = UvoiceActorsText;
}
void UMyGameInstance::Ending()
{
	this->creators->SetVisibility(ESlateVisibility::Visible);
	this->endingText->SetVisibility(ESlateVisibility::Visible);
	this->scriptText->SetVisibility(ESlateVisibility::Visible);
	this->voiceActorsText->SetVisibility(ESlateVisibility::Visible);
	this->canPlayerMove = true;
}