#include "DestroyedGarrisonStation.h"
#include "EStructureProfileType.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

ADestroyedGarrisonStation::ADestroyedGarrisonStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::DestroyedStructure;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
    this->LastSpawnPointID = 0;
}


