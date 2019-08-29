// Copyright 2019 SMD Technologies, s.r.o. All rights reserved.


#include "mainCharacter.h"

// Sets default values
AmainCharacter::AmainCharacter()
{
 	// Set this character to call Tick() every frame.  Turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	camera = CreateDefaultSubobject<UCameraComponent>("Camera");
		camera->SetupAttachment(RootComponent);

	int t1Count = 0;
	int t2Count = 0;
	int t3Count = 0;
	int t4Count = 0;
	int t5Count = 0;
	int t6Count = 0;
	int t7Count = 0;
	int t8Count = 0;
	int t9Count = 0;
	int t10Count = 0;
	int totalPrinterCount = t1Count + t2Count + t3Count + t4Count + t5Count + t6Count + t7Count + t8Count + t9Count + t10Count;
	int currentMoney = 0;
	int clickIncrementValue = 1;
	int clickIncrementBoostCount = 0;
	int overclockCount = 0;
	int currentClock = 1000;
	int taxTime = 20;
	int taxPerTime = totalPrinterCount / 4 * 100;
	int powerConsumption = 0;
	int billTime = 60;
	int bill = totalPrinterCount / 2 * powerConsumption;
}

// Called when the game starts or when spawned
void AmainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AmainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AmainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
}

