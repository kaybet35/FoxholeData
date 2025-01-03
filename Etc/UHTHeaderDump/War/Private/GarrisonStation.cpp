#include "GarrisonStation.h"
#include "EArmourType.h"
#include "EMapIntelligenceType.h"
#include "EStructureProfileType.h"
#include "GarrisonComponent.h"
#include "GenericItemStockpileComponent.h"
#include "MapIntelligenceSourceComponent.h"
#include "Net/UnrealNetwork.h"
#include "TechTreeComponent.h"

AGarrisonStation::AGarrisonStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::StaticBase;
    this->ArmourType = EArmourType::Tier3Structure;
    this->GarrisonComponent = CreateDefaultSubobject<UGarrisonComponent>(TEXT("GarrisonComponent"));
    this->bIsBuildSiteMapIconVisible = true;
    this->MapIntelligenceType = EMapIntelligenceType::None;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->MapIntelligenceSourceComponent = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSource"));
    this->TunnelConnectionRange = 0.00f;
}

void AGarrisonStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGarrisonStation, DecayInfo);
}


