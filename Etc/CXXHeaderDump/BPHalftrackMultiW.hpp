#ifndef UE4SS_SDK_BPHalftrackMultiW_HPP
#define UE4SS_SDK_BPHalftrackMultiW_HPP

class ABPHalftrackMultiW_C : public AHalfTrack
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1360 (size: 0x8)
    class UParticleSystemComponent* Exhaust;                                          // 0x1368 (size: 0x8)
    class USpotLightComponent* SpotLight_R;                                           // 0x1370 (size: 0x8)
    class UStaticMeshComponent* Light_R;                                              // 0x1378 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh2;          // 0x1380 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh1;          // 0x1388 (size: 0x8)
    class USkeletalMeshComponent* chassis;                                            // 0x1390 (size: 0x8)
    class UPayloadInstancedStaticMeshComponent* PayloadInstancedStaticMesh0;          // 0x1398 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x13A0 (size: 0x8)
    class USeatTriggerComponent* PassengerTrigger;                                    // 0x13A8 (size: 0x8)
    class USeatExitComponent* PassengerExit;                                          // 0x13B0 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x13B8 (size: 0x8)
    class USeatExitComponent* DriverExit0;                                            // 0x13C0 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat0;                                         // 0x13C8 (size: 0x8)
    class UVehicleSeatComponent* PassengerSeat1;                                      // 0x13D0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPHalftrackMultiW(int32 EntryPoint);
}; // Size: 0x13D8

#endif
