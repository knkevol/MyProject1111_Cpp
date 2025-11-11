// Fill out your copyright notice in the Description page of Project Settings.


#include "PC1111.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"

APC1111::APC1111()
{
}

APC1111::~APC1111()
{
}

void APC1111::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	if (IsLocalPlayerController())
	{
		if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
		{
			if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem< UEnhancedInputLocalPlayerSubsystem>())
			{
				InputSystem->AddMappingContext(IMC_Default1111, 0);
				InputSystem->AddMappingContext(IMC_MouseLook, 0);
			}
		}
	}
}

void APC1111::OnUnPossess()
{
	Super::OnUnPossess();

	if (IsLocalPlayerController())
	{
		if (ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player))
		{
			if (UEnhancedInputLocalPlayerSubsystem* InputSystem = LocalPlayer->GetSubsystem< UEnhancedInputLocalPlayerSubsystem>())
			{
				InputSystem->RemoveMappingContext(IMC_Default1111);
				InputSystem->RemoveMappingContext(IMC_MouseLook);
			}
		}
	}
}
