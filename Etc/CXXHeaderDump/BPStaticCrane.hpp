#ifndef UE4SS_SDK_BPStaticCrane_HPP
#define UE4SS_SDK_BPStaticCrane_HPP

class ABPStaticCrane_C : public AStaticCrane
{
    class USeatTriggerComponent* CraneOccupiableComponentTrigger;                     // 0x0900 (size: 0x8)
    class UStructureSeatComponent* CraneOccupiableComponent;                          // 0x0908 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0910 (size: 0x8)

}; // Size: 0x918

#endif
