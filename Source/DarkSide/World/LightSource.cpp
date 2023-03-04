// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSource.h"

// Sets default values
ALightSource::ALightSource()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	LightOn = false;
}

// Called when the game starts or when spawned
void ALightSource::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALightSource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

