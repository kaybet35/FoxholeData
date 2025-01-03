#include "FacilityRefineryOrder.h"

FFacilityRefineryOrder::FFacilityRefineryOrder() {
    this->Index = 0;
    this->AccessLevel = EAccessLevel::Personal;
    this->bHasConsumedMaterials = false;
    this->bIsBlocked = false;
    this->State = EFacilityRefineryOrderState::None;
    this->ConsumeAmountModifier = 0.00f;
    this->ProgressNormalized = 0.00f;
    this->LastUseTime = 0;
}

