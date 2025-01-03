#include "TankBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "EServerAnimTickMode.h"

ATankBase::ATankBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanDriveOverTrenches = true;
    this->ServerAnimTickMode = EServerAnimTickMode::TickWhenOccupied;
    this->DisabledFuelTankFX = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DisabledFuelTankFX"));
    this->DisabledFuelTankFX->SetupAttachment(RootComponent);
}


