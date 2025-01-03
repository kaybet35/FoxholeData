#ifndef UE4SS_SDK_BPArmoredCar2TwinW_HPP
#define UE4SS_SDK_BPArmoredCar2TwinW_HPP

class ABPArmoredCar2TwinW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1388 (size: 0x8)
    class UStaticMeshComponent* LightRear;                                            // 0x1390 (size: 0x8)
    class UPointLightComponent* LightRearEmitter;                                     // 0x1398 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x13A0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCar2TwinW(int32 EntryPoint);
}; // Size: 0x13A8

#endif
