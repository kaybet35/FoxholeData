#ifndef UE4SS_SDK_BPTrainEngine_HPP
#define UE4SS_SDK_BPTrainEngine_HPP

class ABPTrainEngine_C : public AEngineRailVehicle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1270 (size: 0x8)
    class USeatTriggerComponent* FiremanTrigger;                                      // 0x1278 (size: 0x8)
    class USeatExitComponent* FiremanExit;                                            // 0x1280 (size: 0x8)
    class UVehicleSeatComponent* FiremanSeat;                                         // 0x1288 (size: 0x8)
    class UParticleSystemComponent* Exhaust03;                                        // 0x1290 (size: 0x8)
    class UParticleSystemComponent* Exhaust02;                                        // 0x1298 (size: 0x8)
    class UParticleSystemComponent* SparksDrive04;                                    // 0x12A0 (size: 0x8)
    class UParticleSystemComponent* SparksDrive03;                                    // 0x12A8 (size: 0x8)
    class UParticleSystemComponent* SparksDrive02;                                    // 0x12B0 (size: 0x8)
    class UParticleSystemComponent* SparksDrive01;                                    // 0x12B8 (size: 0x8)
    class UParticleSystemComponent* BrakeSparksL;                                     // 0x12C0 (size: 0x8)
    class UParticleSystemComponent* BrakeSparksR;                                     // 0x12C8 (size: 0x8)
    class UParticleSystemComponent* Exhaust01;                                        // 0x12D0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x12D8 (size: 0x8)
    class UVehicleSeatComponent* DriverSeat;                                          // 0x12E0 (size: 0x8)
    class USeatExitComponent* DriverExit;                                             // 0x12E8 (size: 0x8)
    class USeatTriggerComponent* DriverTrigger;                                       // 0x12F0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPTrainEngine(int32 EntryPoint);
}; // Size: 0x12F8

#endif
