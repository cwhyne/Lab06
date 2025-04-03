// Fill out your copyright notice in the Description page of Project Settings.


#include "AMyCharacter.h"

// Sets default values
AAMyCharacter::AAMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

