#ifndef UE4SS_SDK_BPScoutVehicleBaseW_HPP
#define UE4SS_SDK_BPScoutVehicleBaseW_HPP

class ABPScoutVehicleBaseW_C : public ABPScoutVehicleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1320 (size: 0x8)
    class USkeletalMeshComponent* Cabin;                                              // 0x1328 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x1330 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1338 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1340 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutVehicleBaseW(int32 EntryPoint);
}; // Size: 0x1348

#endif
