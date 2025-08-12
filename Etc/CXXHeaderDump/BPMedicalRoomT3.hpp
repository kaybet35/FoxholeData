#ifndef UE4SS_SDK_BPMedicalRoomT3_HPP
#define UE4SS_SDK_BPMedicalRoomT3_HPP

class ABPMedicalRoomT3_C : public AHospital
{
    class UBoxComponent* BuildSiteLadderBlockVolume;                                  // 0x0860 (size: 0x8)
    class UTemplateComponent* FortCommonThreeWallsMods;                               // 0x0868 (size: 0x8)
    class UTemplateComponent* FortCommonT3BreachWalls;                                // 0x0870 (size: 0x8)
    class UTemplateComponent* FortCommonDirtT3;                                       // 0x0878 (size: 0x8)
    class UStaticMeshComponent* Blanket;                                              // 0x0880 (size: 0x8)
    class UTemplateComponent* MedicalRoomSpawnPoints;                                 // 0x0888 (size: 0x8)
    class UTemplateComponent* FortLadderComponent;                                    // 0x0890 (size: 0x8)
    class UTemplateComponent* FortCommonT2T3ModsMinimal;                              // 0x0898 (size: 0x8)
    class UTemplateComponent* FortCommonDefenseMods;                                  // 0x08A0 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* MedicalRoomMesh;                                      // 0x08B0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x08B8 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* SideLeft;                                             // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x08F8 (size: 0x8)

    void UpdateAmmoInstanceMesh(int32 AmmoCount);
}; // Size: 0x900

#endif
