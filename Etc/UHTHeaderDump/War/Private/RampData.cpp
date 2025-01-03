#include "RampData.h"

FRampData::FRampData() {
    this->bUseGangwayRampTransformAsPivot = false;
    this->MaxExtension = 0.00f;
    this->SurfaceOffset = 0.00f;
    this->Width = 0.00f;
    this->MinimumAngle = 0.00f;
    this->MaximumAngle = 0.00f;
    this->AnimationAngleOffset = 0.00f;
    this->bCanOpenWithoutSurface = false;
    this->RampAngleWithNoDock = 0.00f;
    this->bRequireSandWhenNotAtDock = false;
}

