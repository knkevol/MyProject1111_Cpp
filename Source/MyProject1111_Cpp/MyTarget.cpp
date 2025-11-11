// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTarget.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyTarget::AMyTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	RootComponent = Box;
	Target = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Target"));
	Target->SetupAttachment(Box);

	Tags.Add(TEXT("Target"));

}

// Called when the game starts or when spawned
void AMyTarget::BeginPlay()
{
	Super::BeginPlay();

	OnTakeAnyDamage.AddDynamic(this, &AMyTarget::ProcessTakeDamage);
	
}

// Called every frame
void AMyTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyTarget::ProcessTakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	//float Damage = Super::TakeDamage(Damage, DamagedActor, InstigatedBy, DamageCauser);
	UE_LOG(LogTemp, Warning, TEXT("ProcessTakeDamage"));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Particle, GetActorLocation());

	DoDesigner(); //BP Use
	DoDesigner2(); //Cpp Use
	//DoDesigner2_Implementation();
	K2_DestroyActor();
}

void AMyTarget::DoDesigner2_Implementation()
{
}
