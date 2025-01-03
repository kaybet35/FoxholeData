#include "MagicLeapEyeTrackerFunctionLibrary.h"

UMagicLeapEyeTrackerFunctionLibrary::UMagicLeapEyeTrackerFunctionLibrary() {
}

bool UMagicLeapEyeTrackerFunctionLibrary::GetFixationComfort(FMagicLeapFixationComfort& FixationComfort) {
    return false;
}

bool UMagicLeapEyeTrackerFunctionLibrary::GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState) {
    return false;
}

EMagicLeapEyeTrackingCalibrationStatus UMagicLeapEyeTrackerFunctionLibrary::GetCalibrationStatus() {
    return EMagicLeapEyeTrackingCalibrationStatus::None;
}


