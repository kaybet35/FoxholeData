#include "SpecializedFactory.h"
#include "EArmourType.h"
#include "EStructureNetRelevancySize.h"
#include "EStructureProfileType.h"
#include "SpecializedFactoryComponent.h"

ASpecializedFactory::ASpecializedFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::LogiStructureWithValuableStorage;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsBuildSiteMapIconVisible = true;
    this->bIgnoreFriendlyFire = true;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Large;
    this->SpecializedFactoryComponent = CreateDefaultSubobject<USpecializedFactoryComponent>(TEXT("SpecializedFactoryComponent"));
}


