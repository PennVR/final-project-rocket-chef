// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "RobotCharacter2.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ERobotColorEnum : uint8
{
	RC_Red 		UMETA(DisplayName = "Red"),
	RC_Yellow 	UMETA(DisplayName = "Yellow"),
	RC_Green 	UMETA(DisplayName = "Green"),
	RC_Blue	 	UMETA(DisplayName = "Blue"),
	RC_None		UMETA(DisplayName = "None")
};

UCLASS()
class ROCKETCHEF_API ARobotCharacter2 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARobotCharacter2();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		ERobotColorEnum RobotColorEnum;

};
