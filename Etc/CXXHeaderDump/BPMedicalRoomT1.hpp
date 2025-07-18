#ifndef UE4SS_SDK_BPMedicalRoomT1_HPP
#define UE4SS_SDK_BPMedicalRoomT1_HPP

class ABPMedicalRoomT1_C : public AHospital
{
    class UBoxComponent* BuildSiteLadderBlockVolume;                                  // 0x0850 (size: 0x8)
    class UTemplateComponent* FortCommonThreeWallsMods;                               // 0x0858 (size: 0x8)
    class UTemplateComponent* FortCommonT1BreachedWalls;                              // 0x0860 (size: 0x8)
    class UTemplateComponent* FortCommonDirtT1T2;                                     // 0x0868 (size: 0x8)
    class UStaticMeshComponent* Blanket;                                              // 0x0870 (size: 0x8)
    class UTemplateComponent* MedicalRoomSpawnPoints;                                 // 0x0878 (size: 0x8)
    class UTemplateComponent* FortLadderComponent;                                    // 0x0880 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0888 (size: 0x8)
    class UStaticMeshComponent* SideLeft;                                             // 0x0890 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x0898 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x08C8 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* MedicalRoomMesh;                                      // 0x08D8 (size: 0x8)

    void UpdateAmmoInstanceMesh(int32 AmmoCount);
}; // Size: 0x8E0

#endif
