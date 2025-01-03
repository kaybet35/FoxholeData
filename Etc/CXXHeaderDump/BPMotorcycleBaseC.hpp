#ifndef UE4SS_SDK_BPMotorcycleBaseC_HPP
#define UE4SS_SDK_BPMotorcycleBaseC_HPP

class ABPMotorcycleBaseC_C : public ABPMotorcycleBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x12D0 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x12D8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x12E0 (size: 0x8)
    class UPointLightComponent* RearPointLight_L;                                     // 0x12E8 (size: 0x8)
    class UStaticMeshComponent* RearLight_L;                                          // 0x12F0 (size: 0x8)
    class UStaticMeshComponent* Light_L;                                              // 0x12F8 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1300 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1308 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1310 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x1318 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMotorcycleBaseC(int32 EntryPoint);
}; // Size: 0x1320

#endif
