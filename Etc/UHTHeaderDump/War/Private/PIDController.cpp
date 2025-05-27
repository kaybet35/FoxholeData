#include "PIDController.h"

FPIDController::FPIDController() {
    this->IntegralSaturation = 0.00f;
    this->OutputSaturation = 0.00f;
    this->bUseValueRate = false;
}

