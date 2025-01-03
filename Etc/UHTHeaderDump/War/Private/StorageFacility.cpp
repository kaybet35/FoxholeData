#include "StorageFacility.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "AITurretsControllerComponent.h"
#include "CraneSpawnLocationComponent.h"
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "GenericStockpileComponent.h"
#include "ReserveStockpileComponent.h"

AStorageFacility::AStorageFacility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::LogiStructureWithValuableStorage;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsBuildSiteMapIconVisible = true;
    this->bIgnoreFriendlyFire = true;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->ReserveStockpileComponent = CreateDefaultSubobject<UReserveStockpileComponent>(TEXT("ReserveStockpileComponent"));
    this->CraneSpawnLocationComponent = CreateDefaultSubobject<UCraneSpawnLocationComponent>(TEXT("CraneSpawnLocationComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->AITurretsController = CreateDefaultSubobject<UAITurretsControllerComponent>(TEXT("AITurretsControllerComponent"));
    this->CraneSpawnLocationComponent->SetupAttachment(RootComponent);
    this->TransferLocation->SetupAttachment(RootComponent);
}


