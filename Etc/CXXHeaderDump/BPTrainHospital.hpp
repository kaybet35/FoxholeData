#ifndef UE4SS_SDK_BPTrainHospital_HPP
#define UE4SS_SDK_BPTrainHospital_HPP

class ABPTrainHospital_C : public ARailVehicleHospital
{
    class USpawnPointComponent* Spawn3;                                               // 0x12A0 (size: 0x8)
    class USpawnPointComponent* Spawn2;                                               // 0x12A8 (size: 0x8)
    class USpawnPointComponent* Spawn1;                                               // 0x12B0 (size: 0x8)
    class USpawnPointComponent* Spawn;                                                // 0x12B8 (size: 0x8)
    class UBoxComponent* FrontBogieCollision;                                         // 0x12C0 (size: 0x8)
    class UBoxComponent* RearBogieCollision;                                          // 0x12C8 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat;                                          // 0x12D0 (size: 0x8)
    class UDeployUseComponent* DeployUse;                                             // 0x12D8 (size: 0x8)
    class USeatExitComponent* RightExit;                                              // 0x12E0 (size: 0x8)
    class USeatTriggerComponent* RightTrigger;                                        // 0x12E8 (size: 0x8)
    class UBoxComponent* UseVolume;                                                   // 0x12F0 (size: 0x8)

}; // Size: 0x12F8

#endif
