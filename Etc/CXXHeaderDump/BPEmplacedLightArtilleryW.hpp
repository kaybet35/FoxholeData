#ifndef UE4SS_SDK_BPEmplacedLightArtilleryW_HPP
#define UE4SS_SDK_BPEmplacedLightArtilleryW_HPP

class ABPEmplacedLightArtilleryW_C : public AEmplacedArtillery
{
    class USeatTriggerComponent* RotatorTrigger;                                      // 0x08B0 (size: 0x8)
    class UStructureSeatComponent* RotatorOccupiableComponent;                        // 0x08B8 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x08C0 (size: 0x8)
    class UStructureSeatComponent* OccupiableComponent;                               // 0x08C8 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08D0 (size: 0x8)

}; // Size: 0x8D8

#endif
