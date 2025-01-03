#include "ConcreteWall.h"
#include "EArmourType.h"

AConcreteWall::AConcreteWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ArmourType = EArmourType::Tier3Structure;
}


