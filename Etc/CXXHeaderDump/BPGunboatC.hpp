#ifndef UE4SS_SDK_BPGunboatC_HPP
#define UE4SS_SDK_BPGunboatC_HPP

class ABPGunboatC_C : public AGunboat
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1260 (size: 0x8)
    class USeatExitComponent* SpotterExit;                                            // 0x1268 (size: 0x8)
    class USeatTriggerComponent* SpotterTrigger;                                      // 0x1270 (size: 0x8)
    class UVehicleSeatComponent* SpotterSeat4;                                        // 0x1278 (size: 0x8)
    class UParticleSystemComponent* WaveBreakForeLeft;                                // 0x1280 (size: 0x8)
    class UParticleSystemComponent* WaveBreakAftRight;                                // 0x1288 (size: 0x8)
    class UParticleSystemComponent* WaveBreakAftLeft;                                 // 0x1290 (size: 0x8)
    class UParticleSystemComponent* WaveBreakForeRight;                               // 0x1298 (size: 0x8)
    class UParticleSystemComponent* WakeFore;                                         // 0x12A0 (size: 0x8)
    class UParticleSystemComponent* WakeAft;                                          // 0x12A8 (size: 0x8)
    class UBoatHullMeshComponent* BoatHullMesh;                                       // 0x12B0 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x12B8 (size: 0x8)
    class UParticleSystemComponent* Exhaust1;                                         // 0x12C0 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x12C8 (size: 0x8)
    class USeatExitComponent* StarboardGunnerExit;                                    // 0x12D0 (size: 0x8)
    class USeatExitComponent* PortGunnerExit;                                         // 0x12D8 (size: 0x8)
    class USeatExitComponent* BowGunnerExit;                                          // 0x12E0 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x12E8 (size: 0x8)
    class USeatTriggerComponent* StarboardGunnerTrigger;                              // 0x12F0 (size: 0x8)
    class UVehicleSeatComponent* PortGunnerSeat3;                                     // 0x12F8 (size: 0x8)
    class UVehicleSeatComponent* StarboardGunnerSeat2;                                // 0x1300 (size: 0x8)
    class UVehicleSeatComponent* BowGunnerSeat1;                                      // 0x1308 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1310 (size: 0x8)
    class USeatTriggerComponent* PortGunnerTrigger;                                   // 0x1318 (size: 0x8)
    class USeatTriggerComponent* BowGunnerTrigger;                                    // 0x1320 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1328 (size: 0x8)
    class UStaticMeshComponent* LightRight;                                           // 0x1330 (size: 0x8)
    class USpotLightComponent* SpotLightRight;                                        // 0x1338 (size: 0x8)
    class UStaticMeshComponent* LightLeft;                                            // 0x1340 (size: 0x8)
    class USpotLightComponent* SpotLightLeft;                                         // 0x1348 (size: 0x8)
    class UAudioComponent* idle;                                                      // 0x1350 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1358 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPGunboatC(int32 EntryPoint);
}; // Size: 0x1360

#endif
