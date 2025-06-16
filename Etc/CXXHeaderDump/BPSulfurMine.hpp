#ifndef UE4SS_SDK_BPSulfurMine_HPP
#define UE4SS_SDK_BPSulfurMine_HPP

class ABPSulfurMine_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UBoxComponent* NoBuildArea;                                                 // 0x0878 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0880 (size: 0x8)
    class UParticleSystemComponent* SulfurSteam2;                                     // 0x0888 (size: 0x8)
    class UParticleSystemComponent* Steam;                                            // 0x0890 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x0898 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x08A0 (size: 0x8)
    class UAudioComponent* ProducingSFX;                                              // 0x08A8 (size: 0x8)
    class UDecalComponent* Decal3;                                                    // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* SulfurResource02;                                     // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* Wheelbarrow;                                          // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* FarmTools_Shovel;                                     // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x08F0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* Sulfur;                                               // 0x0900 (size: 0x8)
    class UParticleSystemComponent* SulfurSmoke;                                      // 0x0908 (size: 0x8)
    class UStaticMeshComponent* SulfurResource03;                                     // 0x0910 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x0918 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0928 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0930 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0938 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0940 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0948 (size: 0x8)
    class UStaticMeshComponent* BaseStone;                                            // 0x0950 (size: 0x8)
    class UParticleSystemComponent* Smoke;                                            // 0x0958 (size: 0x8)
    class USkeletalMeshComponent* Level2;                                             // 0x0960 (size: 0x8)
    class USkeletalMeshComponent* MineMesh;                                           // 0x0968 (size: 0x8)
    bool bIsProducingSFXActive;                                                       // 0x0970 (size: 0x1)

    void UpdateVisuals_FastTick();
    void ReceiveBeginPlay();
    void UpdateVisuals_SlowTick();
    void ExecuteUbergraph_BPSulfurMine(int32 EntryPoint);
}; // Size: 0x971

class UPLACEHOLDER-CLASS__ABP_SulfurMine_C_2147482253
{
}; // Size: 0x0

#endif
