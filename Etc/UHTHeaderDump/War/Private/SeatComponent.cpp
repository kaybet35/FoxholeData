#include "SeatComponent.h"

USeatComponent::USeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Index = 0;
    this->Trigger = NULL;
    this->Exit = NULL;
    this->bIsExposed = false;
    this->bExposedSeatRequiresLoS = false;
    this->MountComponent = NULL;
    this->ItemHolderIndex = 0;
    this->bOverrideHandIK = false;
    this->bUsableWhenAnchored = true;
    this->bUsableWhenSubmerged = true;
    this->bIsEnabled = true;
    this->PC = NULL;
    this->Character = NULL;
}


