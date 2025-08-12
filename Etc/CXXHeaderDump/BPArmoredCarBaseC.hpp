#ifndef UE4SS_SDK_BPArmoredCarBaseC_HPP
#define UE4SS_SDK_BPArmoredCarBaseC_HPP

class ABPArmoredCarBaseC_C : public ABPArmoredCarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1370 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1378 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1380 (size: 0x8)
    class UStaticMeshComponent* LightRear_L;                                          // 0x1388 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1390 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1398 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x13A0 (size: 0x8)
    class UStaticMeshComponent* LightRear_R;                                          // 0x13A8 (size: 0x8)
    class UPointLightComponent* LightRear;                                            // 0x13B0 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x13B8 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x13C0 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x13C8 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x13D0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarBaseC(int32 EntryPoint);
}; // Size: 0x13D8

#endif
