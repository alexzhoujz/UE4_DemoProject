// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor01.generated.h"

UCLASS()
class DEMO01_API AMyActor01 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties

	AMyActor01();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCategory")
	FString YourName;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
