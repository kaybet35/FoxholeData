#include "Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "ESimScreen.h"
#include "EStructureNetRelevancySize.h"
#include "ETunnelNodeType.h"
#include "GenericItemStockpileComponent.h"
#include "Net/UnrealNetwork.h"
#include "TechTreeComponent.h"

ABase::ABase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsBuildSiteMapIconVisible = true;
    this->ScreenToUse = ESimScreen::Base;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
    this->TunnelNodeType = ETunnelNodeType::Source;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->SirenLoop = CreateDefaultSubobject<UAudioComponent>(TEXT("SirenLoop"));
    this->GarrisonLevel = 0;
    this->BaseTunnelConnectionRange = 10000;
    this->SirenLoop->SetupAttachment(RootComponent);
}

void ABase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABase, DecayInfo);
}


