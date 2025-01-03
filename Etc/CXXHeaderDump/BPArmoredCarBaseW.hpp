#ifndef UE4SS_SDK_BPArmoredCarBaseW_HPP
#define UE4SS_SDK_BPArmoredCarBaseW_HPP

class ABPArmoredCarBaseW_C : public ABPArmoredCarBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1340 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1348 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1350 (size: 0x8)
    class UParticleSystemComponent* Exhaust_R;                                        // 0x1358 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1360 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1368 (size: 0x8)
    class UParticleSystemComponent* Exhaust_L;                                        // 0x1370 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x1378 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x1380 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarBaseW(int32 EntryPoint);
}; // Size: 0x1388

#endif
