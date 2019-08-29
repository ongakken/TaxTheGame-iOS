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
		int32 t1Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t2Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t3Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t4Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t5Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t6Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t7Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t8Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t9Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 t10Count;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Printers")
		int32 totalPrinterCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Money")
		int32 currentMoney;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Money")
		int32 clickIncrementValue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Money")
		int32 clickIncrementBoostCount; // clickIncrementValue += clickIncrementBoostCount

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Clock")
		float overclockCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Clock")
		float currentClock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taxes")
		int32 taxTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Taxes")
		int32 taxPerTime; // deduct this value every taxTime

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power")
		int32 powerConsumption;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power")
		int32 billTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power")
		int32 bill; // this value will be deducted every billTime





protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
