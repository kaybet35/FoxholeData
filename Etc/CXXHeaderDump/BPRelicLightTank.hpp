#ifndef UE4SS_SDK_BPRelicLightTank_HPP
#define UE4SS_SDK_BPRelicLightTank_HPP

class ABPRelicLightTank_C : public ALightTank
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1360 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat2;                                      // 0x1368 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1370 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1378 (size: 0x8)
    class USeatExitComponent* CommanderExit;                                          // 0x1380 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x1388 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1390 (size: 0x8)
    class USeatTriggerComponent* CommanderTrigger;                                    // 0x1398 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x13A0 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13A8 (size: 0x8)
    class UParticleSystemComponent* ExhaustR;                                         // 0x13B0 (size: 0x8)
    class UStaticMeshComponent* TurretLightMesh;                                      // 0x13B8 (size: 0x8)
    class USpotLightComponent* TurretLight;                                           // 0x13C0 (size: 0x8)
    class UParticleSystemComponent* ExhaustL;                                         // 0x13C8 (size: 0x8)
    class UAudioComponent* DriveIdle;                                                 // 0x13D0 (size: 0x8)
    class UStaticMeshComponent* FrontLightMesh;                                       // 0x13D8 (size: 0x8)
    class USpotLightComponent* FrontLight;                                            // 0x13E0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13E8 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicLightTank(int32 EntryPoint);
}; // Size: 0x13F0

#endif
