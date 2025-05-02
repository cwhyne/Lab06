// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget2.h"
#include "Components/TextBlock.h"

void UMyUserWidget2::ChangeText() {

	//if you collide with the key, you win
	if (keyText) {
		keyText->SetText(FText::FromString(TEXT("You Win!")));

	}
}
