#ifndef UE4SS_SDK_BPMediumTank2TwinC_HPP
#define UE4SS_SDK_BPMediumTank2TwinC_HPP

class ABPMediumTank2TwinC_C : public ABPMediumTank2BaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13F0 (size: 0x8)
    class USpotLightComponent* SpotLightTurret;                                       // 0x13F8 (size: 0x8)
    class UStaticMeshComponent* LightBodyTurret;                                      // 0x1400 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh3;                            // 0x1408 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh2;                            // 0x1410 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh1;                            // 0x1418 (size: 0x8)
    class UPayloadStaticMeshComponent* PayloadStaticMesh0;                            // 0x1420 (size: 0x8)
    class USpotLightComponent* SpotLightBodyLeft;                                     // 0x1428 (size: 0x8)
    class UStaticMeshComponent* LightBodyLeft;                                        // 0x1430 (size: 0x8)
    class UVehicleSeatComponent* GunnerSeat2;                                         // 0x1438 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPMediumTank2TwinC(int32 EntryPoint);
}; // Size: 0x1440

#endif
