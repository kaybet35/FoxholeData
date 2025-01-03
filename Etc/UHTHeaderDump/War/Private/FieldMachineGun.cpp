#include "FieldMachineGun.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "EServerAnimTickMode.h"
#include "Net/UnrealNetwork.h"

AFieldMachineGun::AFieldMachineGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ServerAnimTickMode = EServerAnimTickMode::TickWhenOccupied;
    this->MuzzleFlashPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MuzzleFlashPS"));
    this->FiringSound = NULL;
    this->StashedAmmo = 0;
    this->MuzzleFlashPS->SetupAttachment(RootComponent);
}

bool AFieldMachineGun::GetIsFiring() const {
    return false;
}

FVector2D AFieldMachineGun::GetGunnerYawAndPitch(int32 GunnerIndex) const {
    return FVector2D{};
}

void AFieldMachineGun::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFieldMachineGun, GunnerYawAndPitch);
    DOREPLIFETIME(AFieldMachineGun, StashedAmmoType);
}


