// Fill out your copyright notice in the Description page of Project Settings.


#include "Character1111.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACharacter1111::ACharacter1111()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
}

// Called when the game starts or when spawned
void ACharacter1111::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter1111::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACharacter1111::Jump()
{
	Super::Jump();
}


// Called to bind functionality to input
void ACharacter1111::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACharacter1111::Aim(float InPitch, float InRoll)
{
	AddControllerYawInput(InRoll);
	AddControllerPitchInput(InPitch);
}

void ACharacter1111::Move(float InPitch, float InRoll)
{
	AddMovementInput(UKismetMathLibrary::GetRightVector(FRotator(0, GetControlRotation().Yaw, GetControlRotation().Roll)), InRoll, false);
	AddMovementInput(UKismetMathLibrary::GetForwardVector(FRotator(0, GetControlRotation().Yaw, 0)), InPitch, false);
}

void ACharacter1111::Jump11()
{
	Jump();
}


