#include "BaseBuildSite.h"
#include "EArmourType.h"
#include "GarrisonComponent.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

ABaseBuildSite::ABaseBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmourType = EArmourType::HeavyBuildSite;
    this->GarrisonComponent = CreateDefaultSubobject<UGarrisonComponent>(TEXT("GarrisonComponent"));
    this->bIsBuildSiteMapIconVisible = true;
    this->bIsStaticBase = false;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->bIsFirstTier = false;
    this->TunnelNodeProxyClass = NULL;
    this->TunnelNodeProxy = NULL;
    this->bIsBaseUpgrade = true;
    this->TunnelConnectionRange = 0;
}


