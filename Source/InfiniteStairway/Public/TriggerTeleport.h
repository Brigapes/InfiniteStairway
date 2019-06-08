// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "TriggerTeleport.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INFINITESTAIRWAY_API UTriggerTeleport : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTriggerTeleport();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	AActor* parent = nullptr;
	bool hasTeleported = false;

	UPROPERTY(EditAnywhere)
	ACharacter* CharacterToTransform = nullptr;

	
	UPROPERTY(EditAnywhere)
	FVector LocationToTeleportCurrentOffset = FVector(0,0,0);

};
