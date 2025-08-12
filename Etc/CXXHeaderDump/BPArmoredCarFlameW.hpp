#ifndef UE4SS_SDK_BPArmoredCarFlameW_HPP
#define UE4SS_SDK_BPArmoredCarFlameW_HPP

class ABPArmoredCarFlameW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13A8 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x13B0 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x13B8 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x13C0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarFlameW(int32 EntryPoint);
}; // Size: 0x13C8

#endif
