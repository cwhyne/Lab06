// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCoins.h"

// Sets default values
AMyCoins::AMyCoins()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCoins::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCoins::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

