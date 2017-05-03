// Fill out your copyright notice in the Description page of Project Settings.

#include "RocketChef.h"
#include "RobotCharacter2.h"


// Sets default values
ARobotCharacter2::ARobotCharacter2()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobotCharacter2::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ARobotCharacter2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobotCharacter2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ARobotCharacter2::GetRecipe()
{
	FuelTempEnum = static_cast<EFuelTempEnum>(rand() % 2);
	FuelColorEnum = static_cast<EFuelColorEnum>(rand() % 7);
	FuelFlavorEnum = static_cast<EFuelFlavorEnum>(rand() % 4);
}

bool ARobotCharacter2::CheckRecipe(EFuelTempEnum fuelTemp, EFuelColorEnum fuelColor, EFuelFlavorEnum fuelFlavor)
{
	return (FuelTempEnum == fuelTemp) && (FuelColorEnum == fuelColor) && (FuelFlavorEnum == fuelFlavor);
}
