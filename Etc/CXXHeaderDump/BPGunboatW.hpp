#ifndef UE4SS_SDK_BPGunboatW_HPP
#define UE4SS_SDK_BPGunboatW_HPP

class ABPGunboatW_C : public AGunboat
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
    class USpotLightComponent* SpotLight2;                                            // 0x12C0 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x12C8 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x12D0 (size: 0x8)
    class USceneComponent* Lights;                                                    // 0x12D8 (size: 0x8)
    class UBPStructureInteriorArea_C* BPStructureInteriorArea1;                       // 0x12E0 (size: 0x8)
    class UParticleSystemComponent* ExhaustRight;                                     // 0x12E8 (size: 0x8)
    class USkeletalMeshComponent* RoofMesh;                                           // 0x12F0 (size: 0x8)
    class UParticleSystemComponent* ExhaustLeft;                                      // 0x12F8 (size: 0x8)
    class USeatExitComponent* MainGunnerExit;                                         // 0x1300 (size: 0x8)
    class USeatExitComponent* SternGunnerExit;                                        // 0x1308 (size: 0x8)
    class USeatExitComponent* BowGunnerExit;                                          // 0x1310 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x1318 (size: 0x8)
    class USeatTriggerComponent* MainGunnerTrigger;                                   // 0x1320 (size: 0x8)
    class UVehicleSeatComponent* SternGunnerSeat3;                                    // 0x1328 (size: 0x8)
    class UVehicleSeatComponent* MainGunnerSeat2;                                     // 0x1330 (size: 0x8)
    class UVehicleSeatComponent* BowGunnerSeat1;                                      // 0x1338 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1340 (size: 0x8)
    class USeatTriggerComponent* SternGunnerTrigger;                                  // 0x1348 (size: 0x8)
    class USeatTriggerComponent* BowGunnerTrigger;                                    // 0x1350 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1358 (size: 0x8)
    class UStaticMeshComponent* Light;                                                // 0x1360 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x1368 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x1370 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1378 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPGunboatW(int32 EntryPoint);
}; // Size: 0x1380

#endif
