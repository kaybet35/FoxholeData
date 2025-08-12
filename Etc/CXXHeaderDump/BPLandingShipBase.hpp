#ifndef UE4SS_SDK_BPLandingShipBase_HPP
#define UE4SS_SDK_BPLandingShipBase_HPP

class ABPLandingShipBase_C : public ABargeShip
{
    class UBPEnterVehicleUseComponent_C* BPEnterVehicleUseComponent;                  // 0x14F0 (size: 0x8)
    class UBPShippableUseComponent_C* BPShippableUseComponent;                        // 0x14F8 (size: 0x8)
    class UParticleSystemComponent* WaveBreakAftRight;                                // 0x1500 (size: 0x8)
    class UParticleSystemComponent* WaveBreakAftLeft;                                 // 0x1508 (size: 0x8)
    class UParticleSystemComponent* WakeFore;                                         // 0x1510 (size: 0x8)
    class UParticleSystemComponent* WakeAft;                                          // 0x1518 (size: 0x8)
    class UParticleSystemComponent* WaveBreakForeRight;                               // 0x1520 (size: 0x8)
    class UParticleSystemComponent* WaveBreakForeLeft;                                // 0x1528 (size: 0x8)
    class UHatchComponent* Ladder1Right;                                              // 0x1530 (size: 0x8)
    class UHatchComponent* Ladder1Left;                                               // 0x1538 (size: 0x8)
    class UHatchComponent* Ladder1Deck;                                               // 0x1540 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x1548 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1550 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1558 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x1560 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1568 (size: 0x8)

}; // Size: 0x1570

#endif
