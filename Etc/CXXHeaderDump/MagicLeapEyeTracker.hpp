#ifndef UE4SS_SDK_MagicLeapEyeTracker_HPP
#define UE4SS_SDK_MagicLeapEyeTracker_HPP

#include "MagicLeapEyeTracker_enums.hpp"

struct FMagicLeapEyeBlinkState
{
    bool LeftEyeBlinked;                                                              // 0x0000 (size: 0x1)
    bool RightEyeBlinked;                                                             // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMagicLeapFixationComfort
{
    bool FixationDepthIsUncomfortable;                                                // 0x0000 (size: 0x1)
    bool FixationDepthViolationHasOccurred;                                           // 0x0001 (size: 0x1)
    float RemainingTimeAtUncomfortableDepth;                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

class UMagicLeapEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool GetFixationComfort(FMagicLeapFixationComfort& FixationComfort);
    bool GetEyeBlinkState(FMagicLeapEyeBlinkState& BlinkState);
    EMagicLeapEyeTrackingCalibrationStatus GetCalibrationStatus();
}; // Size: 0x28

#endif
