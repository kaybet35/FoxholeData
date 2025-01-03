#ifndef UE4SS_SDK_BPSulfurResource_HPP
#define UE4SS_SDK_BPSulfurResource_HPP

class ABPSulfurResource_C : public AResource
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Resource1;                                            // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Resource2;                                            // 0x02C0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Resource3;                                            // 0x02D8 (size: 0x8)
    FVector Timeline_0_NewTrack_0_F3D1FD0D40F5E5263DFF59A717B60DAC;                   // 0x02E0 (size: 0xC)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_F3D1FD0D40F5E5263DFF59A717B60DAC; // 0x02EC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02F0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
    void ExecuteUbergraph_BPSulfurResource(int32 EntryPoint);
}; // Size: 0x2F8

#endif
