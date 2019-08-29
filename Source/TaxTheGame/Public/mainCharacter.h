// Copyright 2019 SMD Technologies, s.r.o. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "mainCharacter.generated.h"

UCLASS()
class TAXTHEGAME_API AmainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AmainCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		UCameraComponent* camera;

	// printers, money, clock, taxes, power
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t1Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t2Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t3Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t4Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t5Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t6Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t7Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t8Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t9Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int t10Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int totalPrinterCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Money")
		int currentMoney;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Money")
		int clickIncrementValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Money")
		int clickIncrementBoostCount; // clickIncrementValue += clickIncrementBoostCount

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Clock")
		int overclockCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Clock")
		int currentClock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taxes")
		int taxTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taxes")
		int taxPerTime; // deduct this value every taxTime

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power")
		int powerConsumption;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power")
		int billTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power")
		int bill; // this value will be deducted every billTime





protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
