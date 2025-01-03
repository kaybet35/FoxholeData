#include "WarOpsStructure.h"

FWarOpsStructure::FWarOpsStructure() {
    this->FactionVariant = EFactionId::Colonials;
    this->TechID = ETechID::None;
    this->MapIconType = 0;
    this->bCanBePrototyped = false;
}

