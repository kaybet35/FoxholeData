#ifndef UE4SS_SDK_BPOilResource_HPP
#define UE4SS_SDK_BPOilResource_HPP

class ABPOilResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Resource1;                                            // 0x02B8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02C0 (size: 0x8)
    FVector Timeline_0_NewTrack_0_AAC7D47F4777C9656C25519A5ECF757D;                   // 0x02C8 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_AAC7D47F4777C9656C25519A5ECF757D; // 0x02D4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02D8 (size: 0x8)

    void SetEnabled(bool IsEnabled, class UStaticMeshComponent* Mesh);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPOilResource(int32 EntryPoint);
}; // Size: 0x2E0

#endif
