#include "MaintenanceTunnel.h"
#include "ESimScreen.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "GenericStockpileComponent.h"
#include "Net/UnrealNetwork.h"

AMaintenanceTunnel::AMaintenanceTunnel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->ProfileType = EStructureProfileType::FieldLogiStructure;
    this->ScreenToUse = ESimScreen::MaintenanceTunnel;
    this->bIgnoreFriendlyFire = true;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Custom;
    this->bIsBuiltOnFoundation = true;
    this->bUsesImpactsMaterial = true;
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->MinRange = 0.00f;
    this->MaxRange = 7500.00f;
    this->GrassCullRadius = 200.00f;
    this->Range = -1.00f;
    this->Filter = 65535;
}

void AMaintenanceTunnel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMaintenanceTunnel, DecayInfo);
    DOREPLIFETIME(AMaintenanceTunnel, Range);
    DOREPLIFETIME(AMaintenanceTunnel, Filter);
}


