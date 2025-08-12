#ifndef UE4SS_SDK_BPBattleTankW_HPP
#define UE4SS_SDK_BPBattleTankW_HPP

class ABPBattleTankW_C : public ABPBattleTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1448 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1450 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1458 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1460 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1468 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankW(int32 EntryPoint);
}; // Size: 0x1470

#endif
