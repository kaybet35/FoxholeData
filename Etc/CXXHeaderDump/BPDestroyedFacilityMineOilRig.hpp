#ifndef UE4SS_SDK_BPDestroyedFacilityMineOilRig_HPP
#define UE4SS_SDK_BPDestroyedFacilityMineOilRig_HPP

class ABPDestroyedFacilityMineOilRig_C : public ADestroyedFacilityRefinery
{
    class UBoxComponent* RampAreaBlockingVolume5;                                     // 0x0680 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume4;                                     // 0x0688 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume3;                                     // 0x0690 (size: 0x8)
    class UDockComponent* DockingVolume1;                                             // 0x0698 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x06A0 (size: 0x8)
    class UStaticMeshComponent* MineMesh;                                             // 0x06A8 (size: 0x8)
    class UStaticMeshComponent* FacilityResourceLoadingPlatform;                      // 0x06B0 (size: 0x8)
    class UStaticMeshComponent* FacilityMineOilRig;                                   // 0x06B8 (size: 0x8)

}; // Size: 0x6C0

#endif
