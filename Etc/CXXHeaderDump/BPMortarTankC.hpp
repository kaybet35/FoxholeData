#ifndef UE4SS_SDK_BPMortarTankC_HPP
#define UE4SS_SDK_BPMortarTankC_HPP

class ABPMortarTankC_C : public ABPMortarTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1400 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat2;                                      // 0x1408 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1410 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1418 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1420 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMortarTankC(int32 EntryPoint);
}; // Size: 0x1428

#endif
