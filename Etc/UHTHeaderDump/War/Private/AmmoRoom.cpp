#include "AmmoRoom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "ESimScreen.h"
#include "EStructureProfileType.h"
#include "ReplicatedGenericStockpileComponent.h"

AAmmoRoom::AAmmoRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::FortRotatableUpgrade;
    this->KillVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("KillVolume"));
    this->bIsTrackedClimbable = true;
    this->ScreenToUse = ESimScreen::SimpleStockpile;
    this->bProvidesBasedShelter = true;
    this->bHasMeshVisibilityComponent = true;
    this->bIsBlankFortPiece = true;
    this->GenericStockpileComponent = CreateDefaultSubobject<UReplicatedGenericStockpileComponent>(TEXT("GenericStockpileComponent"));
    this->KillVolume->SetupAttachment(RootComponent);
}


