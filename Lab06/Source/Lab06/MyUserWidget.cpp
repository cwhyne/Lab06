// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "Components/TextBlock.h"

void UMyUserWidget::ChangeText() {

	//if collision detected, update the text to say you found the wrong key
	if (keyText) {
		keyText->SetText(FText::FromString(TEXT("You Found the Wrong Key..")));
	}
}


