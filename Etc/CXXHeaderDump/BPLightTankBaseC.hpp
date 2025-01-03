#ifndef UE4SS_SDK_BPLightTankBaseC_HPP
#define UE4SS_SDK_BPLightTankBaseC_HPP

class ABPLightTankBaseC_C : public ABPLightTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1390 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1398 (size: 0x8)
    class UStaticMeshComponent* LightTurret;                                          // 0x13A0 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x13A8 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x13B0 (size: 0x8)
    class UStaticMeshComponent* lightL;                                               // 0x13B8 (size: 0x8)
    class UStaticMeshComponent* lightR;                                               // 0x13C0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x13C8 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x13D0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTankBaseC(int32 EntryPoint);
}; // Size: 0x13D8

#endif
