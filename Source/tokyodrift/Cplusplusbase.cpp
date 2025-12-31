// Fill out your copyright notice in the Description page of Project Settings.


#include "Cplusplusbase.h"

// Sets default values
ACplusplusbase::ACplusplusbase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACplusplusbase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACplusplusbase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

