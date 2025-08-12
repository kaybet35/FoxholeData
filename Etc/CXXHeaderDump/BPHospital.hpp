#ifndef UE4SS_SDK_BPHospital_HPP
#define UE4SS_SDK_BPHospital_HPP

class ABPHospital_C : public AHospital
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0880 (size: 0x8)
    class USpawnPointComponent* Spawn7;                                               // 0x0888 (size: 0x8)
    class USpawnPointComponent* Spawn6;                                               // 0x0890 (size: 0x8)
    class USpawnPointComponent* Spawn5;                                               // 0x0898 (size: 0x8)
    class USpawnPointComponent* Spawn4;                                               // 0x08A0 (size: 0x8)
    class USpawnPointComponent* Spawn3;                                               // 0x08A8 (size: 0x8)
    class USpawnPointComponent* Spawn2;                                               // 0x08B0 (size: 0x8)
    class USpawnPointComponent* Spawn1;                                               // 0x08B8 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x08C0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0900 (size: 0x8)
    class USceneComponent* Curtains;                                                  // 0x0908 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0910 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0918 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedRoof;                           // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Flag2;                                                // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0930 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedBase;                           // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Bed8;                                                 // 0x0940 (size: 0x8)
    class UStaticMeshComponent* Bed7;                                                 // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Bed6;                                                 // 0x0950 (size: 0x8)
    class UStaticMeshComponent* Bed5;                                                 // 0x0958 (size: 0x8)
    class UStaticMeshComponent* Bed4;                                                 // 0x0960 (size: 0x8)
    class UStaticMeshComponent* Bed3;                                                 // 0x0968 (size: 0x8)
    class UStaticMeshComponent* Bed2;                                                 // 0x0970 (size: 0x8)
    class UStaticMeshComponent* Bed1;                                                 // 0x0978 (size: 0x8)
    class UVisibilityToggleAreaComponent* VisibilityToggleArea;                       // 0x0980 (size: 0x8)
    class UStaticMeshComponent* HospitalRoof;                                         // 0x0988 (size: 0x8)
    class UStaticMeshComponent* Hospital;                                             // 0x0990 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPHospital(int32 EntryPoint);
}; // Size: 0x998

#endif
