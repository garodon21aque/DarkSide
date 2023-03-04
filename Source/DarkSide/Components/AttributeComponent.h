// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DARKSIDE_API UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttributeComponent();

	//Health
	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadWrite, Category = "Attributes")
		float Health;

	UPROPERTY(Replicated, EditDefaultsOnly, BlueprintReadWrite, Category = "Attributes", meta = (Clamp = 0, ClampMax = 10000))
		float MaxHealth;

protected:
	// Called when the game starts
	FTimerHandle TimerHandle;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	float ModifyHealth(const float Delta);

	UFUNCTION()
		void OnRep_Health(float OldHealth);

	UFUNCTION(BlueprintImplementableEvent)
		void OnHealthModified(const float HealthDelta);
		
};
