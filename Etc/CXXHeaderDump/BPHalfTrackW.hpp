#ifndef UE4SS_SDK_BPHalfTrackW_HPP
#define UE4SS_SDK_BPHalfTrackW_HPP

class ABPHalfTrackW_C : public ABPHalfTrackBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1400 (size: 0x8)
    class UStaticMeshComponent* LightTop;                                             // 0x1408 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1410 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1418 (size: 0x8)
    class USkeletalMeshComponent* MainBodyTop;                                        // 0x1420 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackW(int32 EntryPoint);
}; // Size: 0x1428

#endif
