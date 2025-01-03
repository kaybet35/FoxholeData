#ifndef UE4SS_SDK_BPStaticCrane_HPP
#define UE4SS_SDK_BPStaticCrane_HPP

class ABPStaticCrane_C : public AStaticCrane
{
    class USeatTriggerComponent* CraneOccupiableComponentTrigger;                     // 0x08A0 (size: 0x8)
    class UStructureSeatComponent* CraneOccupiableComponent;                          // 0x08A8 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08B0 (size: 0x8)

}; // Size: 0x8B8

#endif
