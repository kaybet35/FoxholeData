#ifndef UE4SS_SDK_BPCoalResourceTier3_HPP
#define UE4SS_SDK_BPCoalResourceTier3_HPP

class ABPCoalResourceTier3_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Resource3;                                            // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* CoalPile;                                             // 0x02C0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02D0 (size: 0x8)
    FVector Timeline_0_NewTrack_0_D6346FAE476D024EFB3B3CA49E390BD3;                   // 0x02D8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D6346FAE476D024EFB3B3CA49E390BD3; // 0x02E4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPCoalResourceTier3(int32 EntryPoint);
}; // Size: 0x2F0

#endif
