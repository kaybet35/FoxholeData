#include "DestroyedBase.h"
#include "EStructureProfileType.h"
#include "GenericItemStockpileComponent.h"
#include "TechTreeComponent.h"

ADestroyedBase::ADestroyedBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::DestroyedForwardBase;
    this->LastSpawnPointID = 0;
    this->bIsStaticBase = false;
    this->GenericStockpileComponent = CreateDefaultSubobject<UGenericItemStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TechTreeComponent = CreateDefaultSubobject<UTechTreeComponent>(TEXT("TechTreeComponent"));
}


