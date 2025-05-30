#ifndef UE4SS_SDK_BPStaticCrane_HPP
#define UE4SS_SDK_BPStaticCrane_HPP

class ABPStaticCrane_C : public AStaticCrane
{
    class USeatTriggerComponent* CraneOccupiableComponentTrigger;                     // 0x08D0 (size: 0x8)
    class UStructureSeatComponent* CraneOccupiableComponent;                          // 0x08D8 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08E0 (size: 0x8)

}; // Size: 0x8E8

#endif
