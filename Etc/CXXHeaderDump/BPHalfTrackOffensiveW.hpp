#ifndef UE4SS_SDK_BPHalfTrackOffensiveW_HPP
#define UE4SS_SDK_BPHalfTrackOffensiveW_HPP

class ABPHalfTrackOffensiveW_C : public ABPHalfTrackBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1420 (size: 0x8)
    class UStaticMeshComponent* LightTop;                                             // 0x1428 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1430 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1438 (size: 0x8)
    class USkeletalMeshComponent* MainBodyTop;                                        // 0x1440 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackOffensiveW(int32 EntryPoint);
}; // Size: 0x1448

#endif
