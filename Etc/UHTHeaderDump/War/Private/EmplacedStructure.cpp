#include "EmplacedStructure.h"
#include "ESimScreen.h"
#include "EStructureProfileType.h"

AEmplacedStructure::AEmplacedStructure(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Shippable;
    this->ScreenToUse = ESimScreen::EmplacedStructure;
    this->EmplacedIncomingDamageModifier = 0.50f;
}


