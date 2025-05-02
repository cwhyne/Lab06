// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget2.generated.h"

/**
 * 
 */
UCLASS()
class LAB06_API UMyUserWidget2 : public UUserWidget
{
	GENERATED_BODY()
	
public:
	//change text function
	UFUNCTION(BlueprintCallable)
	void ChangeText();

	//text property
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* keyText;
};
