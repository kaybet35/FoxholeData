#include "BorderBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "EStructureProfileType.h"
#include "Net/UnrealNetwork.h"

ABorderBase::ABorderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::ForwardBase;
    this->bIgnoreFriendlyFire = true;
    this->bIsBuiltNearBorder = true;
    this->OnSpawnedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("OnSpawnedPS"));
    this->OnSpawnedSFX = NULL;
    this->bIsUsable = false;
    this->OnSpawnedPS->SetupAttachment(RootComponent);
}

void ABorderBase::OnRep_IsUsable() {
}

void ABorderBase::MulticastOnSpawned_Implementation() {
}

void ABorderBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABorderBase, bIsUsable);
}


