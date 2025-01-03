#ifndef UE4SS_SDK_BPHalfTrackDefensiveC_HPP
#define UE4SS_SDK_BPHalfTrackDefensiveC_HPP

class ABPHalfTrackDefensiveC_C : public ABPHalfTrackBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1408 (size: 0x8)
    class UTowHitchUseComponent* TowHitchUse;                                         // 0x1410 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1418 (size: 0x8)
    class USkeletalMeshComponent* MainBodyTop;                                        // 0x1420 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackDefensiveC(int32 EntryPoint);
}; // Size: 0x1428

#endif
