#ifndef UE4SS_SDK_BPTruckMobilityC_HPP
#define UE4SS_SDK_BPTruckMobilityC_HPP

class ABPTruckMobilityC_C : public ABPTruckBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13C0 (size: 0x8)
    class UPointLightComponent* LightRear_L;                                          // 0x13C8 (size: 0x8)
    class UStaticMeshComponent* RearLight_L;                                          // 0x13D0 (size: 0x8)
    class UPointLightComponent* LightRear_R;                                          // 0x13D8 (size: 0x8)
    class UStaticMeshComponent* RearLight_R;                                          // 0x13E0 (size: 0x8)
    class UTowHitchUseComponent* TowHitchUse;                                         // 0x13E8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckMobilityC(int32 EntryPoint);
}; // Size: 0x13F0

#endif
