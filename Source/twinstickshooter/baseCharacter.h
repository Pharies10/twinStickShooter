// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "baseCharacter.generated.h"

UCLASS(Blueprintable)
class TWINSTICKSHOOTER_API AbaseCharacter : public ACharacter
{
	GENERATED_BODY()





public: 
	// make a health prop
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "baseCharacter")
		float Health = 100;


	// make an isDead prop
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "baseCharacter")
		bool isDead = false;


	// calc death func
	virtual void CalculateDead();


	// create calc func
	UFUNCTION(BlueprintCallable, Category = "baseCharacter")
		virtual void CalculateHealth(float delta);

#if WITH_EDITOR
	// edior center code for changing props
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif





public:
	// Sets default values for this character's properties
	AbaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
