#include "LorePickup.h"
#include "ReadableTextComponent.h"

ALorePickup::ALorePickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisName = FText::FromString(TEXT("Lore Item"));
    this->ReadableTextComponent = CreateDefaultSubobject<UReadableTextComponent>(TEXT("ReadableTextComponent"));
}


