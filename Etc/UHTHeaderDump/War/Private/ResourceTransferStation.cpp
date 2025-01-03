#include "ResourceTransferStation.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EFortTier.h"
#include "ReplicatedGenericStockpileComponent.h"
#include "ResourceTransferStationBuildSite.h"

AResourceTransferStation::AResourceTransferStation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnoreFriendlyFire = true;
    this->Tier = EFortTier::T1;
    this->bIsBuiltOnFoundation = true;
    this->BuildSiteClass = AResourceTransferStationBuildSite::StaticClass();
    this->bCanBeFlaggedForDisruptivePlacement = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->TransferLocation->SetupAttachment(RootComponent);
}


