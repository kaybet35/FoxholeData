#include "ShippableInfo.h"

FShippableInfo::FShippableInfo() {
    this->Type = EShippableType::None;
    this->bAllowShippableTransfer = false;
    this->MaxSupportedSize = EShippableType::None;
}

