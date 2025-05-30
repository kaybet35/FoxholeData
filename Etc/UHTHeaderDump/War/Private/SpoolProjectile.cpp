#include "SpoolProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "Net/UnrealNetwork.h"

ASpoolProjectile::ASpoolProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FiringAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("FiringAudioComponent"));
    this->SpoolDuration = 0.00f;
    this->LerpStartDistance = 200.00f;
    this->LerpDuration = 0.50f;
    this->FiringAudioComponent->SetupAttachment(RootComponent);
}

void ASpoolProjectile::OnRep_InitialVelocity() {
}

void ASpoolProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASpoolProjectile, AccuracyModifiedVelocity);
    DOREPLIFETIME(ASpoolProjectile, InitialVelocity);
}


