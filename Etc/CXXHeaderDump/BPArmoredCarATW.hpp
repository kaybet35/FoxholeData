#ifndef UE4SS_SDK_BPArmoredCarATW_HPP
#define UE4SS_SDK_BPArmoredCarATW_HPP

class ABPArmoredCarATW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1378 (size: 0x8)
    class UStaticMeshComponent* Light_Turret;                                         // 0x1380 (size: 0x8)
    class USpotLightComponent* SpotLight_Turret;                                      // 0x1388 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1390 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarATW(int32 EntryPoint);
}; // Size: 0x1398

#endif
