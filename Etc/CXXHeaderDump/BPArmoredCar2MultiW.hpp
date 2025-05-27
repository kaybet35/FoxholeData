#ifndef UE4SS_SDK_BPArmoredCar2MultiW_HPP
#define UE4SS_SDK_BPArmoredCar2MultiW_HPP

class ABPArmoredCar2MultiW_C : public ABPArmoredCarBaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1378 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh;           // 0x1380 (size: 0x8)
    class UStaticMeshComponent* LightRear;                                            // 0x1388 (size: 0x8)
    class UPointLightComponent* LightRearEmitter;                                     // 0x1390 (size: 0x8)
    class USkeletalMeshComponent* mainBody;                                           // 0x1398 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCar2MultiW(int32 EntryPoint);
}; // Size: 0x13A0

#endif
