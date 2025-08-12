#ifndef UE4SS_SDK_BPMotorboat_HPP
#define UE4SS_SDK_BPMotorboat_HPP

class ABPMotorboat_C : public AMotorboat
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1120 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x1128 (size: 0x8)
    class UVehicleSeatComponent* FrontSeat;                                           // 0x1130 (size: 0x8)
    class UVehicleSeatComponent* CenterSeat;                                          // 0x1138 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x1140 (size: 0x8)
    class USeatExitComponent* FrontExit;                                              // 0x1148 (size: 0x8)
    class USeatExitComponent* CenterExit;                                             // 0x1150 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x1158 (size: 0x8)
    class USeatTriggerComponent* FrontTrigger;                                        // 0x1160 (size: 0x8)
    class USeatTriggerComponent* CenterTrigger;                                       // 0x1168 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x1170 (size: 0x8)
    class UBoxComponent* WorkVolume;                                                  // 0x1178 (size: 0x8)
    class UAudioComponent* Idle;                                                      // 0x1180 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x1188 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMotorboat(int32 EntryPoint);
}; // Size: 0x1190

#endif
