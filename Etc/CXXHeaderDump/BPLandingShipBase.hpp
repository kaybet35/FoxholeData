#ifndef UE4SS_SDK_BPLandingShipBase_HPP
#define UE4SS_SDK_BPLandingShipBase_HPP

class ABPLandingShipBase_C : public ABargeShip
{
    class UBPEnterVehicleUseComponent_C* BPEnterVehicleUseComponent;                  // 0x1480 (size: 0x8)
    class UBPShippableUseComponent_C* BPShippableUseComponent;                        // 0x1488 (size: 0x8)
    class UParticleSystemComponent* WaveBreakAftRight;                                // 0x1490 (size: 0x8)
    class UParticleSystemComponent* WaveBreakAftLeft;                                 // 0x1498 (size: 0x8)
    class UParticleSystemComponent* WakeFore;                                         // 0x14A0 (size: 0x8)
    class UParticleSystemComponent* WakeAft;                                          // 0x14A8 (size: 0x8)
    class UParticleSystemComponent* WaveBreakForeRight;                               // 0x14B0 (size: 0x8)
    class UParticleSystemComponent* WaveBreakForeLeft;                                // 0x14B8 (size: 0x8)
    class UHatchComponent* Ladder1Right;                                              // 0x14C0 (size: 0x8)
    class UHatchComponent* Ladder1Left;                                               // 0x14C8 (size: 0x8)
    class UHatchComponent* Ladder1Deck;                                               // 0x14D0 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x14D8 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x14E0 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x14E8 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x14F0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x14F8 (size: 0x8)

}; // Size: 0x1500

#endif
