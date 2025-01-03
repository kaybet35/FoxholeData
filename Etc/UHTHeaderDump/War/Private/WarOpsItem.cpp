#include "WarOpsItem.h"

FWarOpsItem::FWarOpsItem() {
    this->FactionVariant = EFactionId::Colonials;
    this->TechID = ETechID::None;
    this->bCanBePrototyped = false;
}

