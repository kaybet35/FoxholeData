#ifndef UE4SS_SDK_UniqueWWarehouseG2BuildSite_HPP
#define UE4SS_SDK_UniqueWWarehouseG2BuildSite_HPP

class AUniqueWWarehouseG2BuildSite_C : public AGarrisonStationBuildSite
{
    class UStaticMeshComponent* EntranceRampBack;                                     // 0x0810 (size: 0x8)
    class UStaticMeshComponent* EntranceRampFront;                                    // 0x0818 (size: 0x8)
    class USpawnPointComponent* SpawnPoint;                                           // 0x0820 (size: 0x8)
    class USpawnPointComponent* SpawnPoint2;                                          // 0x0828 (size: 0x8)
    class UCameraComponent* ViewTargetCamera;                                         // 0x0830 (size: 0x8)
    class UBoxComponent* WorkVolume;                                                  // 0x0838 (size: 0x8)
    class UStaticMeshComponent* RoofMesh;                                             // 0x0840 (size: 0x8)
    class UStaticMeshComponent* HouseMesh;                                            // 0x0848 (size: 0x8)

    void OnEnterExit(bool Enter, class AActor* Actor);
}; // Size: 0x850

#endif
