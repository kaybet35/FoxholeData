#ifndef UE4SS_SDK_BPFacilityMineOilRig_HPP
#define UE4SS_SDK_BPFacilityMineOilRig_HPP

class ABPFacilityMineOilRig_C : public AFacilityRefinery
{
    class UBoxComponent* RampAreaBlockingVolume3;                                     // 0x0A70 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume2;                                     // 0x0A78 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume1;                                     // 0x0A80 (size: 0x8)
    class USkeletalMeshComponent* MineMesh;                                           // 0x0A88 (size: 0x8)
    class UParticleSystemComponent* ProducingFX1;                                     // 0x0A90 (size: 0x8)
    class UParticleSystemComponent* ProducingFX;                                      // 0x0A98 (size: 0x8)
    class UDockComponent* DockingVolume1;                                             // 0x0AA0 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x0AA8 (size: 0x8)
    class UStaticMeshComponent* FacilityResourceLoadingPlatform;                      // 0x0AB0 (size: 0x8)
    class UStaticMeshComponent* FacilityMineOilRig;                                   // 0x0AB8 (size: 0x8)
    class UWarAudioComponent* ProducingSFX;                                           // 0x0AC0 (size: 0x8)

}; // Size: 0xAC8

#endif
