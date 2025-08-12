#ifndef UE4SS_SDK_BPLightTank2InfantryC_HPP
#define UE4SS_SDK_BPLightTank2InfantryC_HPP

class ABPLightTank2InfantryC_C : public ABPMortarTankBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1400 (size: 0x8)
    class USeatExitComponent* Passenger4Exit;                                         // 0x1408 (size: 0x8)
    class USeatTriggerComponent* Passenger4Trigger;                                   // 0x1410 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x1418 (size: 0x8)
    class USeatExitComponent* Passenger3Exit;                                         // 0x1420 (size: 0x8)
    class USeatTriggerComponent* Passenger3Trigger;                                   // 0x1428 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat3;                                      // 0x1430 (size: 0x8)
    class USeatExitComponent* Gunner2Exit;                                            // 0x1438 (size: 0x8)
    class USeatTriggerComponent* Gunner2Trigger;                                      // 0x1440 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1448 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1450 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1458 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1460 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPLightTank2InfantryC(int32 EntryPoint);
}; // Size: 0x1468

#endif
