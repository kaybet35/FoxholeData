#include "MapIconStyle.h"

FMapIconStyle::FMapIconStyle() {
    this->Category = EMapIconCategory::None;
    this->bHideInSecureMap = false;
    this->bUseTeamSpecificIcon = false;
    this->IntelDetectionRadius = 0.00f;
    this->HalfDetectionAngle = 0.00f;
    this->SortOrder = 0;
}

