#include "ModificationSlotComponent.h"

UModificationSlotComponent::UModificationSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLinkedToSocket = false;
    this->bIsBlockedByLinkedSocket = false;
    this->bOverrideSplineTarget = false;
    this->bIgnoreSocketModSiblings = false;
    this->bIgnoreConcreteMaterial = false;
    this->bIsBuildableUnderRoads = false;
    this->bPreviewAllInGhost = false;
    this->ActiveType = EFortModificationType::None;
    this->bRevertedToDefault = false;
    this->NumMaskBits = 0;
    this->MaskStartBit = 0;
}


