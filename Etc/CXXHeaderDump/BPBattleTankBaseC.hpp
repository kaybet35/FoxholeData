#ifndef UE4SS_SDK_BPBattleTankBaseC_HPP
#define UE4SS_SDK_BPBattleTankBaseC_HPP

class ABPBattleTankBaseC_C : public ABattleTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1408 (size: 0x8)
    class USkeletalMeshComponent* mainBody;                                           // 0x1410 (size: 0x8)
    class UParticleSystemComponent* ExhaustRight;                                     // 0x1418 (size: 0x8)
    class UParticleSystemComponent* ExhaustLeft;                                      // 0x1420 (size: 0x8)
    class UStaticMeshComponent* TurretLightHeadlight;                                 // 0x1428 (size: 0x8)
    class UStaticMeshComponent* FrontLightLeftHeadlight;                              // 0x1430 (size: 0x8)
    class UStaticMeshComponent* FrontLightRightHeadlight;                             // 0x1438 (size: 0x8)
    class USpotLightComponent* TurretLight;                                           // 0x1440 (size: 0x8)
    class USpotLightComponent* FrontLightLeft;                                        // 0x1448 (size: 0x8)
    class USpotLightComponent* FrontLightRight;                                       // 0x1450 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankBaseC(int32 EntryPoint);
}; // Size: 0x1458

#endif
