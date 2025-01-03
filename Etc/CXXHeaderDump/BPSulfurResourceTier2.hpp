#ifndef UE4SS_SDK_BPSulfurResourceTier2_HPP
#define UE4SS_SDK_BPSulfurResourceTier2_HPP

class ABPSulfurResourceTier2_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Resource2;                                            // 0x02B8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02C0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Resource3;                                            // 0x02D0 (size: 0x8)
    FVector Timeline_0_NewTrack_0_FF8051C6402F3222175807A8A18B18EF;                   // 0x02D8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FF8051C6402F3222175807A8A18B18EF; // 0x02E4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSulfurResourceTier2(int32 EntryPoint);
}; // Size: 0x2F0

#endif
