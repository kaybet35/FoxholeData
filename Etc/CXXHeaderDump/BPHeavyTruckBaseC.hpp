#ifndef UE4SS_SDK_BPHeavyTruckBaseC_HPP
#define UE4SS_SDK_BPHeavyTruckBaseC_HPP

class ABPHeavyTruckBaseC_C : public ABPHeavyTruckBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13A0 (size: 0x8)
    class UStaticMeshComponent* RearLight_R2;                                         // 0x13A8 (size: 0x8)
    class UPointLightComponent* PointLight_R2;                                        // 0x13B0 (size: 0x8)
    class UStaticMeshComponent* RearLight_R1;                                         // 0x13B8 (size: 0x8)
    class UPointLightComponent* PointLight_R1;                                        // 0x13C0 (size: 0x8)
    class UStaticMeshComponent* RearLight_L2;                                         // 0x13C8 (size: 0x8)
    class UPointLightComponent* PointLight_L2;                                        // 0x13D0 (size: 0x8)
    class UStaticMeshComponent* RearLight_L1;                                         // 0x13D8 (size: 0x8)
    class UPointLightComponent* PointLight_L1;                                        // 0x13E0 (size: 0x8)
    class UStaticMeshComponent* Headlight_L;                                          // 0x13E8 (size: 0x8)
    class UStaticMeshComponent* Headlight_R;                                          // 0x13F0 (size: 0x8)
    class USpotLightComponent* SpotLight_L;                                           // 0x13F8 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1400 (size: 0x8)
    class UParticleSystemComponent* Exhaust_L;                                        // 0x1408 (size: 0x8)
    class UParticleSystemComponent* Exhaust_R;                                        // 0x1410 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHeavyTruckBaseC(int32 EntryPoint);
}; // Size: 0x1418

#endif
