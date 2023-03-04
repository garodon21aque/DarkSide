// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/ShadowCreature.h"

// Sets default values
AShadowCreature::AShadowCreature()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShadowCreature::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShadowCreature::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShadowCreature::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

