#ifndef UE4SS_SDK_BPFacilityMineOil_HPP
#define UE4SS_SDK_BPFacilityMineOil_HPP

class ABPFacilityMineOil_C : public AFacilityRefinery
{
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x0A20 (size: 0x8)
    class UWarAudioComponent* ProducingSFX;                                           // 0x0A28 (size: 0x8)
    class UParticleSystemComponent* ProducingFX2;                                     // 0x0A30 (size: 0x8)
    class UParticleSystemComponent* ProducingFX3;                                     // 0x0A38 (size: 0x8)
    class UParticleSystemComponent* ProducingFX;                                      // 0x0A40 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0A48 (size: 0x8)
    class USkeletalMeshComponent* MineMesh;                                           // 0x0A50 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0A58 (size: 0x8)

}; // Size: 0xA60

#endif
