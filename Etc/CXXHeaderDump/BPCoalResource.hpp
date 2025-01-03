#ifndef UE4SS_SDK_BPCoalResource_HPP
#define UE4SS_SDK_BPCoalResource_HPP

class ABPCoalResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* CoalPile;                                             // 0x02B8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Resource1;                                            // 0x02C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02D0 (size: 0x8)
    FVector Timeline_0_NewTrack_0_D3521A74464CB0BCF5D9B8AE945964CD;                   // 0x02D8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D3521A74464CB0BCF5D9B8AE945964CD; // 0x02E4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPCoalResource(int32 EntryPoint);
}; // Size: 0x2F0

#endif
