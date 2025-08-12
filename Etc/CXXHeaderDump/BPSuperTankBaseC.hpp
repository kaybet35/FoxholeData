#ifndef UE4SS_SDK_BPSuperTankBaseC_HPP
#define UE4SS_SDK_BPSuperTankBaseC_HPP

class ABPSuperTankBaseC_C : public ABPSuperTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F8 (size: 0x8)
    class USpotLightComponent* SpotLightBody;                                         // 0x1400 (size: 0x8)
    class UStaticMeshComponent* LightBody;                                            // 0x1408 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1410 (size: 0x8)
    class UParticleSystemComponent* ExhaustR;                                         // 0x1418 (size: 0x8)
    class UStaticMeshComponent* LightBodyR;                                           // 0x1420 (size: 0x8)
    class USpotLightComponent* SpotLightBodyR;                                        // 0x1428 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPSuperTankBaseC(int32 EntryPoint);
}; // Size: 0x1430

#endif
