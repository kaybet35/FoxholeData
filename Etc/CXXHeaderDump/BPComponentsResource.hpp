#ifndef UE4SS_SDK_BPComponentsResource_HPP
#define UE4SS_SDK_BPComponentsResource_HPP

class ABPComponentsResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Resource1;                                            // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Resource2;                                            // 0x02C8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Resource3;                                            // 0x02D8 (size: 0x8)
    FVector Timeline_0_NewTrack_0_6E986F224EDBB9D65E15E9B5A19DF826;                   // 0x02E0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6E986F224EDBB9D65E15E9B5A19DF826; // 0x02EC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02F0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPComponentsResource(int32 EntryPoint);
}; // Size: 0x2F8

#endif
