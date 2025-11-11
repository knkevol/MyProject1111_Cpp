// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Character1111.generated.h"


class USpringArmComponent;
class UCameraComponent;

UCLASS()
class MYPROJECT1111_CPP_API ACharacter1111 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter1111();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void Jump() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "1111")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "1111")
	TObjectPtr<UCameraComponent> FollowCamera;

	UFUNCTION(BlueprintCallable, Category = "1111")
	void Aim(float InPitch, float InRoll);

	UFUNCTION(BlueprintCallable, Category = "1111")
	void Move(float InPitch, float InRoll);

	UFUNCTION(BlueprintCallable, Category = "1111")
	void Jump11();
};
