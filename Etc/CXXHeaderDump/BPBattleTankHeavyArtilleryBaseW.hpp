#ifndef UE4SS_SDK_BPBattleTankHeavyArtilleryBaseW_HPP
#define UE4SS_SDK_BPBattleTankHeavyArtilleryBaseW_HPP

class ABPBattleTankHeavyArtilleryBaseW_C : public ABattleTank
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13A0 (size: 0x8)
    class UVehicleSeatComponent* EngineerSeat3;                                       // 0x13A8 (size: 0x8)
    class USeatExitComponent* EngineerExit;                                           // 0x13B0 (size: 0x8)
    class USeatTriggerComponent* EngineerTrigger;                                     // 0x13B8 (size: 0x8)
    class USpotLightComponent* FrontSpotLight;                                        // 0x13C0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13C8 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x13D0 (size: 0x8)
    class UStaticMeshComponent* FrontLight;                                           // 0x13D8 (size: 0x8)
    class USkeletalMeshComponent* mainBody;                                           // 0x13E0 (size: 0x8)
    class USeatExitComponent* CommanderExit;                                          // 0x13E8 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x13F0 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x13F8 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x1400 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x1408 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1410 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat2;                                      // 0x1418 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1420 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1428 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPBattleTankHeavyArtilleryBaseW(int32 EntryPoint);
}; // Size: 0x1430

#endif
