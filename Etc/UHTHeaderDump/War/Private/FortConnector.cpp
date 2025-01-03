#include "FortConnector.h"
#include "EArmourType.h"
#include "EStructureProfileType.h"

AFortConnector::AFortConnector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Trench;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsConnector = true;
    this->bIsManualConnector = true;
    this->bConnectorCanSnapUnderRoads = true;
}


