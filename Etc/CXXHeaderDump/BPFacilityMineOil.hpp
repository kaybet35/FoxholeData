#ifndef UE4SS_SDK_BPFacilityMineOil_HPP
#define UE4SS_SDK_BPFacilityMineOil_HPP

class ABPFacilityMineOil_C : public AFacilityRefinery
{
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x0A70 (size: 0x8)
    class UWarAudioComponent* ProducingSFX;                                           // 0x0A78 (size: 0x8)
    class UParticleSystemComponent* ProducingFX2;                                     // 0x0A80 (size: 0x8)
    class UParticleSystemComponent* ProducingFX3;                                     // 0x0A88 (size: 0x8)
    class UParticleSystemComponent* ProducingFX;                                      // 0x0A90 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0A98 (size: 0x8)
    class USkeletalMeshComponent* MineMesh;                                           // 0x0AA0 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0AA8 (size: 0x8)

}; // Size: 0xAB0

#endif
