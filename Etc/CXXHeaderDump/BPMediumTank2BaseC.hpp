#ifndef UE4SS_SDK_BPMediumTank2BaseC_HPP
#define UE4SS_SDK_BPMediumTank2BaseC_HPP

class ABPMediumTank2BaseC_C : public ABattleTank
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1380 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1388 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1390 (size: 0x8)
    class USpotLightComponent* SpotLightBody;                                         // 0x1398 (size: 0x8)
    class UStaticMeshComponent* LightBody;                                            // 0x13A0 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13A8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13B0 (size: 0x8)
    class USeatExitComponent* CommanderExit;                                          // 0x13B8 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x13C0 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x13C8 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x13D0 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x13D8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13E0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13E8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2BaseC(int32 EntryPoint);
}; // Size: 0x13F0

#endif
