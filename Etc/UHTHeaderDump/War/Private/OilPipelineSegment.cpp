#include "OilPipelineSegment.h"
#include "EArmourType.h"
#include "EStructureProfileType.h"

AOilPipelineSegment::AOilPipelineSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ProfileType = EStructureProfileType::Trench;
    this->ArmourType = EArmourType::Tier3Structure;
    this->bIsConnector = true;
    this->bIsManualConnector = true;
}


