#ifndef UE4SS_SDK_BPDeployedSatchelChargeT_HPP
#define UE4SS_SDK_BPDeployedSatchelChargeT_HPP

class ABPDeployedSatchelChargeT_C : public ADeployedWeapon
{
    class UExplodeOnDeathComponent* ExplodeOnDeath;                                   // 0x0840 (size: 0x8)
    class UBoxComponent* CollisionBox;                                                // 0x0848 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0850 (size: 0x8)

}; // Size: 0x858

#endif
