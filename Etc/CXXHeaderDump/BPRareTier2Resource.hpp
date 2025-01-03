#ifndef UE4SS_SDK_BPRareTier2Resource_HPP
#define UE4SS_SDK_BPRareTier2Resource_HPP

class ABPRareTier2Resource_C : public AWorldResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Resource1;                                            // 0x02B8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02C0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02C8 (size: 0x8)
    FVector Timeline_0_NewTrack_0_A5CB40B741E00B21F046AF871574E2BF;                   // 0x02D0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_A5CB40B741E00B21F046AF871574E2BF; // 0x02DC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPRareTier2Resource(int32 EntryPoint);
}; // Size: 0x2E8

#endif
