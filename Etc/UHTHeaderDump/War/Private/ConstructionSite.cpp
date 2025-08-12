#include "ConstructionSite.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "CraneSpawnLocationComponent.h"
#include "EArmourType.h"
#include "EStructureProfileType.h"

AConstructionSite::AConstructionSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::LogiStructure;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsBuildSiteMapIconVisible = true;
    this->bIgnoreFriendlyFire = true;
    this->bAllowsShippablePlacement = true;
    this->BuildLocationFilter = EBuildLocationType::None;
    this->GarageFootprintComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("GarageFootprint"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->FullRepairCost = 100;
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
    this->GarageFootprintComponent->SetupAttachment(RootComponent);
}

bool AConstructionSite::ValidateMapBuildLocation() const {
    return false;
}


