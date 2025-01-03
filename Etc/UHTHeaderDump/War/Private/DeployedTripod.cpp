#include "DeployedTripod.h"

ADeployedTripod::ADeployedTripod(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeBuiltIndoors = true;
    this->BaseItemCodeName = TEXT("Tripod");
}


