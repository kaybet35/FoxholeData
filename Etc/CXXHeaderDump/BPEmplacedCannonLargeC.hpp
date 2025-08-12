#ifndef UE4SS_SDK_BPEmplacedCannonLargeC_HPP
#define UE4SS_SDK_BPEmplacedCannonLargeC_HPP

class ABPEmplacedCannonLargeC_C : public AEmplacedWeaponWithShieldedSeat
{
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x0900 (size: 0x8)
    class USeatTriggerComponent* ShieldedTrigger;                                     // 0x0908 (size: 0x8)
    class UStructureSeatComponent* ShieldedOccupiableComponent;                       // 0x0910 (size: 0x8)
    class UStructureSeatComponent* OccupiableComponent;                               // 0x0918 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0920 (size: 0x8)

}; // Size: 0x928

#endif
