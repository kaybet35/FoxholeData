#ifndef UE4SS_SDK_TownCLargeGarrisonGS1BuildSite_HPP
#define UE4SS_SDK_TownCLargeGarrisonGS1BuildSite_HPP

class ATownCLargeGarrisonGS1BuildSite_C : public AGarrisonStationBuildSite
{
    class USpawnPointComponent* SpawnPoint2;                                          // 0x0830 (size: 0x8)
    class USpawnPointComponent* SpawnPoint;                                           // 0x0838 (size: 0x8)
    class UCameraComponent* ViewTargetCamera;                                         // 0x0840 (size: 0x8)
    class UBoxComponent* WorkVolume;                                                  // 0x0848 (size: 0x8)
    class UStaticMeshComponent* RoofMesh;                                             // 0x0850 (size: 0x8)
    class UStaticMeshComponent* HouseMesh;                                            // 0x0858 (size: 0x8)

    void OnEnterExit(bool Enter, class AActor* Actor);
}; // Size: 0x860

#endif
