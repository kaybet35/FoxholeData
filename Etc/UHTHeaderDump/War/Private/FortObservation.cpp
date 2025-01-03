#include "FortObservation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "InfrastructureComponent.h"
#include "MapIntelligenceSourceComponent.h"
#include "Net/UnrealNetwork.h"
#include "TeamFlagMeshComponent.h"

AFortObservation::AFortObservation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->InfrastructureComponent = CreateDefaultSubobject<UInfrastructureComponent>(TEXT("InfrastructureComponent"));
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->MapIntelligenceSource = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSourceComponent"));
    this->TeamFlagMeshComponent = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("TeamFlagMesh"));
    this->KillVolume->SetupAttachment(RootComponent);
    this->TeamFlagMeshComponent->SetupAttachment(RootComponent);
}

void AFortObservation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortObservation, PowerInfo);
}


