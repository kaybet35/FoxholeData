#include "PowerGridInfo.h"

FPowerGridInfo::FPowerGridInfo() {
    this->PowerDelta = 0;
    this->MaxConnections = 0;
    this->bAllowDisabling = false;
    this->bIsDisabled = false;
    this->PowerProvided = 0;
    this->PowerConsumed = 0;
}

