#ifndef UE4SS_SDK_BPHeavyTruckBaseW_HPP
#define UE4SS_SDK_BPHeavyTruckBaseW_HPP

class ABPHeavyTruckBaseW_C : public ABPHeavyTruckBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13A0 (size: 0x8)
    class UStaticMeshComponent* RearLight;                                            // 0x13A8 (size: 0x8)
    class UParticleSystemComponent* Exhaust_L;                                        // 0x13B0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x13B8 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x13C0 (size: 0x8)
    class UStaticMeshComponent* Headlight_R;                                          // 0x13C8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHeavyTruckBaseW(int32 EntryPoint);
}; // Size: 0x13D0

#endif
