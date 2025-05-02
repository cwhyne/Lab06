// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class LAB06_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	//function for changing the text
	UFUNCTION(BlueprintCallable)
	void ChangeText();

	//property for text
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* keyText;
	
};
