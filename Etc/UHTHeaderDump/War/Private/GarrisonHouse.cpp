#include "GarrisonHouse.h"
#include "AITurretsControllerComponent.h"
#include "EArmourType.h"
#include "EMapIntelligenceType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"

AGarrisonHouse::AGarrisonHouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->ChassisName = FText::FromString(TEXT("Garrisoned House"));
    this->ProfileType = EStructureProfileType::GarrisonHouse;
    this->ArmourType = EArmourType::Tier1GarrisonHouse;
    this->MapIntelligenceType = EMapIntelligenceType::Defense;
    this->bIgnoreFriendlyFire = true;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
    this->TimeToStarvation = 600.00f;
    this->AITurretsController = CreateDefaultSubobject<UAITurretsControllerComponent>(TEXT("AITurretsControllerComponent"));
}

bool AGarrisonHouse::IsNeutralHouse() const {
    return false;
}


