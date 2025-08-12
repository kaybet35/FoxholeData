#ifndef UE4SS_SDK_BPEmplacedCannonLargeC_HPP
#define UE4SS_SDK_BPEmplacedCannonLargeC_HPP

class ABPEmplacedCannonLargeC_C : public AEmplacedWeaponWithShieldedSeat
{
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x08E0 (size: 0x8)
    class USeatTriggerComponent* ShieldedTrigger;                                     // 0x08E8 (size: 0x8)
    class UStructureSeatComponent* ShieldedOccupiableComponent;                       // 0x08F0 (size: 0x8)
    class UStructureSeatComponent* OccupiableComponent;                               // 0x08F8 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0900 (size: 0x8)

}; // Size: 0x908

#endif
