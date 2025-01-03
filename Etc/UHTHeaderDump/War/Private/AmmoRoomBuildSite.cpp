#include "AmmoRoomBuildSite.h"
#include "ReplicatedGenericStockpileComponent.h"

AAmmoRoomBuildSite::AAmmoRoomBuildSite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
}


