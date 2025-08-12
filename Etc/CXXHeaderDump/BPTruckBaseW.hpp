#ifndef UE4SS_SDK_BPTruckBaseW_HPP
#define UE4SS_SDK_BPTruckBaseW_HPP

class ABPTruckBaseW_C : public ABPTruckBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13D0 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x13D8 (size: 0x8)
    class UPointLightComponent* Light_Rear;                                           // 0x13E0 (size: 0x8)
    class UStaticMeshComponent* RearLight;                                            // 0x13E8 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x13F0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTruckBaseW(int32 EntryPoint);
}; // Size: 0x13F8

#endif
