#include "EngineRailVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "Net/UnrealNetwork.h"

AEngineRailVehicle::AEngineRailVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SteamGainRate = 1.00f;
    this->SteamVentRate = 1.00f;
    this->SteamActivateThreshold = 0.20f;
    this->SteamDeactivateThreshold = 0.00f;
    this->SteamPressure = 0.00f;
    this->bIsSteamSFXPrimed = false;
    this->SteamParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SteamParticleSystem"));
    this->BoostingParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("BoostingParticleSystem"));
    this->SteamVentCue = NULL;
    this->HornLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("HornLoop"));
    this->MaxHornDuration = 4.00f;
    this->BoostDuration = 5.00f;
    this->bHornActivated = false;
    this->HornLoop->SetupAttachment(RootComponent);
    this->SteamParticleSystem->SetupAttachment(RootComponent);
    this->BoostingParticleSystem->SetupAttachment(RootComponent);
}

void AEngineRailVehicle::ServerSetHornActivated_Implementation(bool InHornActivated) {
}
bool AEngineRailVehicle::ServerSetHornActivated_Validate(bool InHornActivated) {
    return true;
}

void AEngineRailVehicle::OnRep_HornActivated() {
}

void AEngineRailVehicle::ClientSetBoosting_Implementation(bool InBoosting) {
}

void AEngineRailVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEngineRailVehicle, bHornActivated);
}


