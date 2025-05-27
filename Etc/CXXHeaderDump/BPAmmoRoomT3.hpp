#ifndef UE4SS_SDK_BPAmmoRoomT3_HPP
#define UE4SS_SDK_BPAmmoRoomT3_HPP

class ABPAmmoRoomT3_C : public AAmmoRoom
{
    class UTemplateComponent* FortCommonThreeWallsMods;                               // 0x0820 (size: 0x8)
    class UTemplateComponent* FortCommonT3BreachWalls;                                // 0x0828 (size: 0x8)
    class UTemplateComponent* FortCommonDirtT3;                                       // 0x0830 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0838 (size: 0x8)
    class UItemGroupRenderComponent* ItemGroupRender;                                 // 0x0840 (size: 0x8)
    class UBoxComponent* BuildSiteWorkVolume;                                         // 0x0848 (size: 0x8)
    class UTemplateComponent* FortCommonT2T3ModsMinimal;                              // 0x0850 (size: 0x8)
    class UTemplateComponent* FortCommonDefenseMods;                                  // 0x0858 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x0860 (size: 0x8)
    class UStaticMeshComponent* AmmoRoom;                                             // 0x0868 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0870 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x0878 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0880 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x0888 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x0890 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x0898 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* SideLeft;                                             // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x08B0 (size: 0x8)

    void UpdateAmmoInstanceMesh(int32 AmmoCount);
}; // Size: 0x8B8

#endif
