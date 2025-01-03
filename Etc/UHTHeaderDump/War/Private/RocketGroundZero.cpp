#include "RocketGroundZero.h"

ARocketGroundZero::ARocketGroundZero(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = DORM_DormantAll;
    this->DamageDuration = 1.00f;
}


