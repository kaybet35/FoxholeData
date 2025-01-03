#include "PlayerCharacter.h"

APlayerCharacter::APlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EquipmentItemHolderItems.AddDefaulted(8);
}


