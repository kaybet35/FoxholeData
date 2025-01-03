#include "LeakOffsetRange.h"

FLeakOffsetRange::FLeakOffsetRange() {
    this->RelativeStartX = 0.00f;
    this->RelativeEndX = 0.00f;
    this->Offset = 0.00f;
    this->Side = ELeakOffsetRangeSide::Both;
}

