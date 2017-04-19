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

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EFuelTempEnum : uint8
{
	FT_Cold UMETA(DisplayName = "Cold"),
	FT_Hot 	UMETA(DisplayName = "Hot"),
	FT_None UMETA(DisplayName = "None")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EFuelColorEnum : uint8
{
	FC_Red 		UMETA(DisplayName = "Red"),
	FC_Yellow 	UMETA(DisplayName = "Yellow"),
	FC_Blue 	UMETA(DisplayName = "Blue"),
	FC_Green	UMETA(DisplayName = "Green"),
	FC_Orange 	UMETA(DisplayName = "Orange"),
	FC_Purple 	UMETA(DisplayName = "Purple"),
	FC_Black    UMETA(DisplayName = "Black"),
	FC_None		UMETA(DisplayName = "None")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class EFuelFlavorEnum : uint8
{
	FF_Salty 	UMETA(DisplayName = "Salty"),
	FF_Sugary 	UMETA(DisplayName = "Sugary"),
	FF_Spicy 	UMETA(DisplayName = "Spicy"),
	FF_Peppery	UMETA(DisplayName = "Peppery"),
	FF_None		UMETA(DisplayName = "None")
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EFuelTempEnum FuelTempEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EFuelColorEnum FuelColorEnum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EFuelFlavorEnum FuelFlavorEnum;

	UFUNCTION(BlueprintCallable, Category = "Robot")
		void GetRecipe();

};
