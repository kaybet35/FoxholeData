#ifndef UE4SS_SDK_MagicLeapImageTracker_HPP
#define UE4SS_SDK_MagicLeapImageTracker_HPP

struct FMagicLeapImageTrackerTarget
{
}; // Size: 0xA0

class UMagicLeapImageTrackerComponent : public USceneComponent
{
    class UTexture2D* TargetImageTexture;                                             // 0x01F0 (size: 0x8)
    FString Name;                                                                     // 0x01F8 (size: 0x10)
    float LongerDimension;                                                            // 0x0208 (size: 0x4)
    bool bIsStationary;                                                               // 0x020C (size: 0x1)
    bool bUseUnreliablePose;                                                          // 0x020D (size: 0x1)
    FMagicLeapImageTrackerComponentOnSetImageTargetSucceeded OnSetImageTargetSucceeded; // 0x0210 (size: 0x10)
    void SetImageTargetSucceededMulti();
    FMagicLeapImageTrackerComponentOnSetImageTargetFailed OnSetImageTargetFailed;     // 0x0220 (size: 0x10)
    void SetImageTargetFailedMulti();
    FMagicLeapImageTrackerComponentOnImageTargetFound OnImageTargetFound;             // 0x0230 (size: 0x10)
    void ImageTargetFoundMulti();
    FMagicLeapImageTrackerComponentOnImageTargetLost OnImageTargetLost;               // 0x0240 (size: 0x10)
    void ImageTargetLostMulti();
    FMagicLeapImageTrackerComponentOnImageTargetUnreliableTracking OnImageTargetUnreliableTracking; // 0x0250 (size: 0x10)
    void ImageTargetUnreliableTrackingMulti(const FVector& LastTrackedLocation, const FRotator& LastTrackedRotation, const FVector& NewUnreliableLocation, const FRotator& NewUnreliableRotation);

    bool SetTargetAsync(class UTexture2D* ImageTarget);
    bool RemoveTargetAsync();
}; // Size: 0x270

class UMagicLeapImageTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetMaxSimultaneousTargets(int32 MaxSimultaneousTargets);
    bool IsImageTrackingEnabled();
    int32 GetMaxSimultaneousTargets();
    void EnableImageTracking(bool bEnable);
}; // Size: 0x28

#endif
