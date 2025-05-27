#include "SpoolProjectile.h"
#include "Net/UnrealNetwork.h"

ASpoolProjectile::ASpoolProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpoolDuration = 0.00f;
    this->LerpStartDistance = 200.00f;
    this->LerpDuration = 0.50f;
}

void ASpoolProjectile::OnRep_InitialVelocity() {
}

void ASpoolProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpoolProjectile, AccuracyModifiedVelocity);
    DOREPLIFETIME(ASpoolProjectile, InitialVelocity);
}


