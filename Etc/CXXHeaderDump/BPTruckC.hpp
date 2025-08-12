#ifndef UE4SS_SDK_BPTruckC_HPP
#define UE4SS_SDK_BPTruckC_HPP

class ABPTruckC_C : public ABPTruckBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F0 (size: 0x8)
    class UPointLightComponent* LightRear_R;                                          // 0x13F8 (size: 0x8)
    class UPointLightComponent* LightRear_L;                                          // 0x1400 (size: 0x8)
    class UStaticMeshComponent* RearLight_R;                                          // 0x1408 (size: 0x8)
    class UStaticMeshComponent* RearLight_L;                                          // 0x1410 (size: 0x8)
    class UTowHitchUseComponent* TowHitchUse;                                         // 0x1418 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckC(int32 EntryPoint);
}; // Size: 0x1420

#endif
