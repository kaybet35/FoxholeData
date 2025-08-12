#ifndef UE4SS_SDK_BPEmplacedMultiC_HPP
#define UE4SS_SDK_BPEmplacedMultiC_HPP

class ABPEmplacedMultiC_C : public AEmplacedArtillery
{
    class USeatTriggerComponent* RotatorTrigger;                                      // 0x08F0 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x08F8 (size: 0x8)
    class UStructureSeatComponent* RotatorOccupiableComponent;                        // 0x0900 (size: 0x8)
    class UStructureSeatComponent* OccupiableComponent;                               // 0x0908 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh;           // 0x0910 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0918 (size: 0x8)

}; // Size: 0x920

#endif
