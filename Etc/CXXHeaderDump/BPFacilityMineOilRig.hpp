#ifndef UE4SS_SDK_BPFacilityMineOilRig_HPP
#define UE4SS_SDK_BPFacilityMineOilRig_HPP

class ABPFacilityMineOilRig_C : public AFacilityRefinery
{
    class UBoxComponent* RampAreaBlockingVolume3;                                     // 0x0A20 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume2;                                     // 0x0A28 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume1;                                     // 0x0A30 (size: 0x8)
    class USkeletalMeshComponent* MineMesh;                                           // 0x0A38 (size: 0x8)
    class UParticleSystemComponent* ProducingFX1;                                     // 0x0A40 (size: 0x8)
    class UParticleSystemComponent* ProducingFX;                                      // 0x0A48 (size: 0x8)
    class UDockComponent* DockingVolume1;                                             // 0x0A50 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x0A58 (size: 0x8)
    class UStaticMeshComponent* FacilityResourceLoadingPlatform;                      // 0x0A60 (size: 0x8)
    class UStaticMeshComponent* FacilityMineOilRig;                                   // 0x0A68 (size: 0x8)
    class UWarAudioComponent* ProducingSFX;                                           // 0x0A70 (size: 0x8)

}; // Size: 0xA78

#endif
