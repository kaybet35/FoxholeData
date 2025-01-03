#ifndef UE4SS_SDK_BPMediumTank2IndirectW_HPP
#define UE4SS_SDK_BPMediumTank2IndirectW_HPP

class ABPMediumTank2IndirectW_C : public ABPMediumTank2BaseW_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F8 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh0;                            // 0x1400 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh7;                            // 0x1408 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh6;                            // 0x1410 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh5;                            // 0x1418 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh4;                            // 0x1420 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh3;                            // 0x1428 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh2;                            // 0x1430 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh1;                            // 0x1438 (size: 0x8)
    class UParticleSystemComponent* Exhaust2;                                         // 0x1440 (size: 0x8)
    class USpotLightComponent* SpotLightTurret;                                       // 0x1448 (size: 0x8)
    class UStaticMeshComponent* LightTurret;                                          // 0x1450 (size: 0x8)
    class USeatExitComponent* Gunner2Exit;                                            // 0x1458 (size: 0x8)
    class USeatTriggerComponent* Gunner2Trigger;                                      // 0x1460 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1468 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2IndirectW(int32 EntryPoint);
}; // Size: 0x1470

#endif
