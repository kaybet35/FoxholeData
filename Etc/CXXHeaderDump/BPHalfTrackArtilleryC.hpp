#ifndef UE4SS_SDK_BPHalfTrackArtilleryC_HPP
#define UE4SS_SDK_BPHalfTrackArtilleryC_HPP

class ABPHalfTrackArtilleryC_C : public ABPHalfTrackBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1428 (size: 0x8)
    class USkeletalMeshComponent* MainBodyTop;                                        // 0x1430 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1438 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalfTrackArtilleryC(int32 EntryPoint);
}; // Size: 0x1440

#endif
