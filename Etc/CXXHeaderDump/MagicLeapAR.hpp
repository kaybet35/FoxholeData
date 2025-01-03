#ifndef UE4SS_SDK_MagicLeapAR_HPP
#define UE4SS_SDK_MagicLeapAR_HPP

#include "MagicLeapAR_enums.hpp"

struct FLuminARLightEstimate
{
    bool bIsValid;                                                                    // 0x0000 (size: 0x1)
    float PixelIntensity;                                                             // 0x0004 (size: 0x4)
    FVector RGBScaleFactor;                                                           // 0x0008 (size: 0xC)

}; // Size: 0x14

class ULuminARFrameFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool LuminARLineTrace(class UObject* WorldContextObject, const FVector2D& ScreenPosition, TSet<ELuminARLineTraceChannel> TraceChannels, TArray<FARTraceResult>& OutHitResults);
    ELuminARTrackingState GetTrackingState();
    void GetLightEstimation(FLuminARLightEstimate& OutLightEstimate);
}; // Size: 0x28

class ULuminARSessionConfig : public UARSessionConfig
{
    int32 MaxPlaneQueryResults;                                                       // 0x00A8 (size: 0x4)
    int32 MinPlaneArea;                                                               // 0x00AC (size: 0x4)
    bool bArbitraryOrientationPlaneDetection;                                         // 0x00B0 (size: 0x1)
    FVector PlaneSearchExtents;                                                       // 0x00B4 (size: 0xC)
    TArray<EMagicLeapPlaneQueryFlags> PlaneQueryFlags;                                // 0x00C0 (size: 0x10)
    bool bDiscardZeroExtentPlanes;                                                    // 0x00D0 (size: 0x1)

}; // Size: 0xD8

class ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void StartLuminARSession(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, class ULuminARSessionConfig* Configuration);
}; // Size: 0x28

class ULuminARUObjectManager : public UObject
{
    TArray<class UARPin*> AllAnchors;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x128

#endif
