#ifndef UE4SS_SDK_BPMediumTank3CBase_HPP
#define UE4SS_SDK_BPMediumTank3CBase_HPP

class ABPMediumTank3CBase_C : public ABPMediumTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F8 (size: 0x8)
    class UParticleSystemComponent* Exhaust_R;                                        // 0x1400 (size: 0x8)
    class USpotLightComponent* SpotLightBodyRight;                                    // 0x1408 (size: 0x8)
    class USpotLightComponent* SpotLightBodyLeft;                                     // 0x1410 (size: 0x8)
    class UStaticMeshComponent* Headlight_L;                                          // 0x1418 (size: 0x8)
    class UStaticMeshComponent* Headlight_R;                                          // 0x1420 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x1428 (size: 0x8)
    class UVehicleSeatComponent* Gunner2Seat2;                                        // 0x1430 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1438 (size: 0x8)
    class UVehicleSeatComponent* DriveSeat0;                                          // 0x1440 (size: 0x8)
    class USeatExitComponent* Gunner2Exit;                                            // 0x1448 (size: 0x8)
    class USeatTriggerComponent* Gunner2Trigger;                                      // 0x1450 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank3CBase(int32 EntryPoint);
}; // Size: 0x1458

#endif
