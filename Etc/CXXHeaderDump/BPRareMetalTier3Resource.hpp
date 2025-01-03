#ifndef UE4SS_SDK_BPRareMetalTier3Resource_HPP
#define UE4SS_SDK_BPRareMetalTier3Resource_HPP

class ABPRareMetalTier3Resource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Resource;                                             // 0x02B8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02C0 (size: 0x8)
    FVector Timeline_0_NewTrack_0_4F960DA3486951035C0E76961D5E0E34;                   // 0x02C8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_4F960DA3486951035C0E76961D5E0E34; // 0x02D4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02D8 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPRareMetalTier3Resource(int32 EntryPoint);
}; // Size: 0x2E0

#endif
