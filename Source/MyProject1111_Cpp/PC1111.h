// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC1111.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class MYPROJECT1111_CPP_API APC1111 : public APlayerController
{
	GENERATED_BODY()

public:
	APC1111();
	virtual ~APC1111();

	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "1111")
	TObjectPtr<UInputMappingContext> IMC_Default1111;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "1111")
	TObjectPtr<UInputMappingContext> IMC_MouseLook;

	
};
