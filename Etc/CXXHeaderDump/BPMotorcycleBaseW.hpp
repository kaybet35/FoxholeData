#ifndef UE4SS_SDK_BPMotorcycleBaseW_HPP
#define UE4SS_SDK_BPMotorcycleBaseW_HPP

class ABPMotorcycleBaseW_C : public ABPMotorcycleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1300 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x1308 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1310 (size: 0x8)
    class UPointLightComponent* RearPointLight_L;                                     // 0x1318 (size: 0x8)
    class UStaticMeshComponent* RearLight_L;                                          // 0x1320 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x1328 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1330 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x1338 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMotorcycleBaseW(int32 EntryPoint);
}; // Size: 0x1340

#endif
