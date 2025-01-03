#ifndef UE4SS_SDK_BPRareResource_HPP
#define UE4SS_SDK_BPRareResource_HPP

class ABPRareResource_C : public AWorldResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Resource1;                                            // 0x02B8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02C0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02C8 (size: 0x8)
    FVector Timeline_0_NewTrack_0_52892B784AC8CBC8E941B1BB187B9F66;                   // 0x02D0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_52892B784AC8CBC8E941B1BB187B9F66; // 0x02DC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02E0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPRareResource(int32 EntryPoint);
}; // Size: 0x2E8

#endif
