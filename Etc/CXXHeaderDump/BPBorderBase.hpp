#ifndef UE4SS_SDK_BPBorderBase_HPP
#define UE4SS_SDK_BPBorderBase_HPP

class ABPBorderBase_C : public ABorderBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08F0 (size: 0x8)
    class USpawnPointComponent* SpawnPoint15;                                         // 0x08F8 (size: 0x8)
    class USpawnPointComponent* SpawnPoint14;                                         // 0x0900 (size: 0x8)
    class USpawnPointComponent* SpawnPoint13;                                         // 0x0908 (size: 0x8)
    class USpawnPointComponent* SpawnPoint12;                                         // 0x0910 (size: 0x8)
    class USpawnPointComponent* SpawnPoint11;                                         // 0x0918 (size: 0x8)
    class USpawnPointComponent* SpawnPoint10;                                         // 0x0920 (size: 0x8)
    class USpawnPointComponent* SpawnPoint9;                                          // 0x0928 (size: 0x8)
    class USpawnPointComponent* SpawnPoint;                                           // 0x0930 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0938 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0940 (size: 0x8)
    class UStaticMeshComponent* Light1;                                               // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Light;                                                // 0x0950 (size: 0x8)
    class UBoxComponent* NoBuildVolume;                                               // 0x0958 (size: 0x8)
    class UCameraComponent* ViewTargetCamera;                                         // 0x0960 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0968 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0970 (size: 0x8)
    class UStaticMeshComponent* FlagMesh;                                             // 0x0978 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPBorderBase(int32 EntryPoint);
}; // Size: 0x980

#endif
