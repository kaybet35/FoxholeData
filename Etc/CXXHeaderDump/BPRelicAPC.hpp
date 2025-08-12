#ifndef UE4SS_SDK_BPRelicAPC_HPP
#define UE4SS_SDK_BPRelicAPC_HPP

class ABPRelicAPC_C : public ARelicAPC
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1140 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat7;                                      // 0x1148 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat6;                                      // 0x1150 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat5;                                      // 0x1158 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat4;                                      // 0x1160 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1168 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat1;                                         // 0x1170 (size: 0x8)
    class UVehicleSeatComponent* CommanderSeat3;                                      // 0x1178 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1180 (size: 0x8)
    class USeatExitComponent* BackExit;                                               // 0x1188 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1190 (size: 0x8)
    class USeatTriggerComponent* BackTrigger;                                         // 0x1198 (size: 0x8)
    class USeatTriggerComponent* RightTrigger;                                        // 0x11A0 (size: 0x8)
    class USeatTriggerComponent* LeftTrigger;                                         // 0x11A8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x11B0 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x11B8 (size: 0x8)
    class UAudioComponent* DriveIdle;                                                 // 0x11C0 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x11C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x11D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x11D8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x11E0 (size: 0x8)
    class UStaticMeshComponent* TestMesh;                                             // 0x11E8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x11F0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPRelicAPC(int32 EntryPoint);
}; // Size: 0x11F8

#endif
