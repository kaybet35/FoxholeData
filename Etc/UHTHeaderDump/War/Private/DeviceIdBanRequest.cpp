#include "DeviceIdBanRequest.h"

FDeviceIdBanRequest::FDeviceIdBanRequest() {
    this->BanDurationSec = 0;
    this->UnderReviewDurationSec = 0;
    this->BanReason = EBanReason::CommsMisuse;
}

