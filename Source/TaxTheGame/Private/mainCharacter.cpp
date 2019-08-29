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

	t1Count = 0;
	t2Count = 0;
	t3Count = 0;
	t4Count = 0;
	t5Count = 0;
	t6Count = 0;
	t7Count = 0;
	t8Count = 0;
	t9Count = 0;
	t10Count = 0;
	totalPrinterCount = t1Count + t2Count + t3Count + t4Count + t5Count + t6Count + t7Count + t8Count + t9Count + t10Count;
	currentMoney = 0;
	clickIncrementValue = 1;
	clickIncrementBoostCount = 1;
	overclockCount = 1.f;
	currentClock = 1000.f;
	taxTime = 20;
	taxPerTime = totalPrinterCount / 4 * 100;
	powerConsumption = 0;
	billTime = 60;
	bill = totalPrinterCount / 2 * powerConsumption;

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

