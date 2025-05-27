#ifndef UE4SS_SDK_BPArmoredCarW_HPP
#define UE4SS_SDK_BPArmoredCarW_HPP

class ABPArmoredCarW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1378 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1380 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1388 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarW(int32 EntryPoint);
}; // Size: 0x1390

#endif
