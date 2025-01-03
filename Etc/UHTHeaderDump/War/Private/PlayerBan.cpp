#include "PlayerBan.h"

FPlayerBan::FPlayerBan() {
    this->BanLiftTimeUnix = 0;
    this->UnderReviewLiftTimeUnix = 0;
    this->BanReason = EBanReason::CommsMisuse;
}

