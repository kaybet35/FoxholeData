#ifndef UE4SS_SDK_BPBattleTankDefensiveW_HPP
#define UE4SS_SDK_BPBattleTankDefensiveW_HPP

class ABPBattleTankDefensiveW_C : public ABPBattleTankBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1448 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1450 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1458 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1460 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1468 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankDefensiveW(int32 EntryPoint);
}; // Size: 0x1470

#endif
