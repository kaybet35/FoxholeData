#ifndef UE4SS_SDK_BPHomeRegionBase_HPP
#define UE4SS_SDK_BPHomeRegionBase_HPP

class ABPHomeRegionBase_C : public AHomeRegionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08C0 (size: 0x8)
    class USpawnPointComponent* SpawnPoint10;                                         // 0x08C8 (size: 0x8)
    class USpawnPointComponent* SpawnPoint9;                                          // 0x08D0 (size: 0x8)
    class USpawnPointComponent* SpawnPoint8;                                          // 0x08D8 (size: 0x8)
    class USpawnPointComponent* SpawnPoint7;                                          // 0x08E0 (size: 0x8)
    class USpawnPointComponent* SpawnPoint6;                                          // 0x08E8 (size: 0x8)
    class USpawnPointComponent* SpawnPoint5;                                          // 0x08F0 (size: 0x8)
    class USpawnPointComponent* SpawnPoint4;                                          // 0x08F8 (size: 0x8)
    class USpawnPointComponent* SpawnPoint3;                                          // 0x0900 (size: 0x8)
    class USpawnPointComponent* SpawnPoint2;                                          // 0x0908 (size: 0x8)
    class USpawnPointComponent* SpawnPoint1;                                          // 0x0910 (size: 0x8)
    class USpawnPointComponent* SpawnPoint;                                           // 0x0918 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0920 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0928 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Light;                                                // 0x0938 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x0940 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0948 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0950 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0958 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0960 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0968 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0970 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0978 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0980 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0988 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0990 (size: 0x8)
    float Timeline_2_Intensity_D46A184A499B36ECF5473A8929BF58DD;                      // 0x0998 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_D46A184A499B36ECF5473A8929BF58DD; // 0x099C (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x09A0 (size: 0x8)
    float Timeline_0_Emissive_2817AA6448D8119AC585B0BC2FC5BCEF;                       // 0x09A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_2817AA6448D8119AC585B0BC2FC5BCEF; // 0x09AC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x09B0 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void ReceiveBeginPlay();
    void UpdateLights();
    void ExecuteUbergraph_BPHomeRegionBase(int32 EntryPoint);
}; // Size: 0x9B8

#endif
