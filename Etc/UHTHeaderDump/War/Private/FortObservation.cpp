#include "FortObservation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "InfrastructureComponent.h"
#include "MapIntelligenceSourceComponent.h"
#include "ModularMountsComponent.h"
#include "PowerConsumerComponent.h"
#include "TeamFlagMeshComponent.h"

AFortObservation::AFortObservation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->ModularMountsComponent = CreateDefaultSubobject<UModularMountsComponent>(TEXT("ModularMountsComponent"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bCanBlockAIUpgrade = true;
    this->MapIntelligenceSource = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSourceComponent"));
    this->PowerConsumerComponent = CreateDefaultSubobject<UPowerConsumerComponent>(TEXT("PowerConsumerComponent"));
    this->TeamFlagMeshComponent = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("TeamFlagMesh"));
    this->KillVolume->SetupAttachment(RootComponent);
    this->TeamFlagMeshComponent->SetupAttachment(RootComponent);
}


