#ifndef UE4SS_SDK_BPDestroyedFacilityMineOilRig_HPP
#define UE4SS_SDK_BPDestroyedFacilityMineOilRig_HPP

class ABPDestroyedFacilityMineOilRig_C : public ADestroyedFacilityRefinery
{
    class UBoxComponent* RampAreaBlockingVolume5;                                     // 0x0650 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume4;                                     // 0x0658 (size: 0x8)
    class UBoxComponent* RampAreaBlockingVolume3;                                     // 0x0660 (size: 0x8)
    class UDockComponent* DockingVolume1;                                             // 0x0668 (size: 0x8)
    class UDockComponent* DockingVolume;                                              // 0x0670 (size: 0x8)
    class UStaticMeshComponent* MineMesh;                                             // 0x0678 (size: 0x8)
    class UStaticMeshComponent* FacilityResourceLoadingPlatform;                      // 0x0680 (size: 0x8)
    class UStaticMeshComponent* FacilityMineOilRig;                                   // 0x0688 (size: 0x8)

}; // Size: 0x690

#endif
