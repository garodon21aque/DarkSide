// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "Components/PointLightComponent.h"
#include "LightSource.h"
#include "ShadowSpawner.generated.h"

UCLASS()
class DARKSIDE_API AShadowSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShadowSpawner();
	

//	UPROPERTY(BlueprintReadWrite, Category = "Light")
	//	class ALightSource* LightSource;

	UPROPERTY(BlueprintReadWrite, Category = "Spawner")
		bool SpawnerActive;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	
};
