// Fill out your copyright notice in the Description page of Project Settings.

#include "LightSource.h"
#include "ShadowSpawner.h"

// Sets default values
AShadowSpawner::AShadowSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpawnerActive = true;
}

// Called when the game starts or when spawned
void AShadowSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShadowSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

