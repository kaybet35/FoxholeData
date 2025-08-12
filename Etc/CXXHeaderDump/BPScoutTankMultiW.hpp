#ifndef UE4SS_SDK_BPScoutTankMultiW_HPP
#define UE4SS_SDK_BPScoutTankMultiW_HPP

class ABPScoutTankMultiW_C : public AScoutTank
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1360 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh1;          // 0x1368 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh0;          // 0x1370 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1378 (size: 0x8)
    class UParticleSystemComponent* ExhaustR;                                         // 0x1380 (size: 0x8)
    class UParticleSystemComponent* ExhaustL;                                         // 0x1388 (size: 0x8)
    class UStaticMeshComponent* LightBody;                                            // 0x1390 (size: 0x8)
    class USpotLightComponent* SpotLightBody;                                         // 0x1398 (size: 0x8)
    class USeatExitComponent* GunnerExit;                                             // 0x13A0 (size: 0x8)
    class USeatTriggerComponent* GunnerTrigger;                                       // 0x13A8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x13B0 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x13B8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13C0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13C8 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x13D0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPScoutTankMultiW(int32 EntryPoint);
}; // Size: 0x13D8

#endif
