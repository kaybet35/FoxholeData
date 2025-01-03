#ifndef UE4SS_SDK_TownWLargeGS1BuildSite_HPP
#define UE4SS_SDK_TownWLargeGS1BuildSite_HPP

class ATownWLargeGS1BuildSite_C : public AGarrisonStationBuildSite
{
    class USpawnPointComponent* SpawnPoint2;                                          // 0x0800 (size: 0x8)
    class USpawnPointComponent* SpawnPoint;                                           // 0x0808 (size: 0x8)
    class UCameraComponent* ViewTargetCamera;                                         // 0x0810 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0818 (size: 0x8)
    class UBoxComponent* WorkVolume2;                                                 // 0x0820 (size: 0x8)
    class UBoxComponent* WorkVolume;                                                  // 0x0828 (size: 0x8)
    class UStaticMeshComponent* RoofMesh;                                             // 0x0830 (size: 0x8)
    class UStaticMeshComponent* HouseMesh;                                            // 0x0838 (size: 0x8)

    void OnEnterExit(bool Enter, class AActor* Actor);
}; // Size: 0x840

#endif
