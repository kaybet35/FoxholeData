#include "Gunboat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "EServerAnimTickMode.h"
#include "Net/UnrealNetwork.h"

AGunboat::AGunboat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRestrictMovementFromItems = true;
    this->ServerAnimTickMode = EServerAnimTickMode::TickWhenOccupied;
    this->WorkVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("WorkVolume"));
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->WorkVolume->SetupAttachment(RootComponent);
    this->KillVolume->SetupAttachment(RootComponent);
}

void AGunboat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGunboat, GunnerInfos);
}


