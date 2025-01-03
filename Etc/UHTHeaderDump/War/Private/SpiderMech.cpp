#include "SpiderMech.h"
#include "Net/UnrealNetwork.h"

ASpiderMech::ASpiderMech(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GunnerYaw = 0.00f;
    this->StashedAmmo = 0;
    this->AltStashedAmmo = 0;
}

void ASpiderMech::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpiderMech, GunnerYaw);
    DOREPLIFETIME(ASpiderMech, AltGunnerYawAndPitch);
}


