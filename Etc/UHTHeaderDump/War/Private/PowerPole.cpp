#include "PowerPole.h"
#include "BuildSocketComponent.h"
#include "FacilityLightComponent.h"
#include "Net/UnrealNetwork.h"

APowerPole::APowerPole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreFriendlyFire = true;
    this->bIsBuiltOnFoundation = true;
    this->bUsesImpactsMaterial = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->PowerSocket = CreateDefaultSubobject<UBuildSocketComponent>(TEXT("PowerSocket"));
    this->LightComponent = CreateDefaultSubobject<UFacilityLightComponent>(TEXT("LightComponent"));
    this->CableMaterial = NULL;
    this->bAutoConnectToNearby = false;
    this->AutoConnectSearchRadius = 1000.00f;
    this->PowerSocket->SetupAttachment(RootComponent);
}

void APowerPole::OnRep_PowerGridInfo() {
}

void APowerPole::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APowerPole, PowerGridInfo);
}


