#ifndef UE4SS_SDK_BPLightTankBaseW_HPP
#define UE4SS_SDK_BPLightTankBaseW_HPP

class ABPLightTankBaseW_C : public ABPLightTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13B0 (size: 0x8)
    class UStaticMeshComponent* LightTurret;                                          // 0x13B8 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x13C0 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x13C8 (size: 0x8)
    class UStaticMeshComponent* lightR;                                               // 0x13D0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x13D8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankBaseW(int32 EntryPoint);
}; // Size: 0x13E0

#endif
