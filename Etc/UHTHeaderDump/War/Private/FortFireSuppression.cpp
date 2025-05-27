#include "FortFireSuppression.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
#include "FortFireSuppressionBuildSite.h"
#include "Net/UnrealNetwork.h"
#include "PowerConsumerComponent.h"

AFortFireSuppression::AFortFireSuppression(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIsTrackedClimbable = true;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bIsBlankFortPiece = true;
    this->BuildSiteClass = AFortFireSuppressionBuildSite::StaticClass();
    this->PowerConsumerComponent = CreateDefaultSubobject<UPowerConsumerComponent>(TEXT("PowerConsumerComponent"));
    this->bIsDispensingWater = false;
    this->SprinklerVFXComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("SprinklerVFX"));
    this->PumpingLoopComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PumpingLoopSFX"));
    this->SteamVFXComponent = NULL;
    this->DispenseAmountPerSec = 20.00f;
    this->KillVolume->SetupAttachment(RootComponent);
    this->SprinklerVFXComponent->SetupAttachment(RootComponent);
    this->PumpingLoopComponent->SetupAttachment(RootComponent);
}

void AFortFireSuppression::OnRep_IsDispensingWater() {
}

void AFortFireSuppression::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortFireSuppression, WaterTank);
    DOREPLIFETIME(AFortFireSuppression, bIsDispensingWater);
}


