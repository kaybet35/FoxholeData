#ifndef UE4SS_SDK_BPEmplacedMultiC_HPP
#define UE4SS_SDK_BPEmplacedMultiC_HPP

class ABPEmplacedMultiC_C : public AEmplacedArtillery
{
    class USeatTriggerComponent* RotatorTrigger;                                      // 0x08C0 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x08C8 (size: 0x8)
    class UStructureSeatComponent* RotatorOccupiableComponent;                        // 0x08D0 (size: 0x8)
    class UStructureSeatComponent* OccupiableComponent;                               // 0x08D8 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh;           // 0x08E0 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08E8 (size: 0x8)

}; // Size: 0x8F0

#endif
