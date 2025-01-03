#ifndef UE4SS_SDK_BPScrapMine_HPP
#define UE4SS_SDK_BPScrapMine_HPP

class ABPScrapMine_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0840 (size: 0x8)
    class UBoxComponent* NoBuildArea;                                                 // 0x0848 (size: 0x8)
    class UStaticMeshComponent* ScrapPiece_07;                                        // 0x0850 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0858 (size: 0x8)
    class UStaticMeshComponent* ScrapPiece_06;                                        // 0x0860 (size: 0x8)
    class UParticleSystemComponent* Sparks;                                           // 0x0868 (size: 0x8)
    class UParticleSystemComponent* Steam;                                            // 0x0870 (size: 0x8)
    class UParticleSystemComponent* ScrapPile;                                        // 0x0878 (size: 0x8)
    class UParticleSystemComponent* Scrap;                                            // 0x0880 (size: 0x8)
    class UPointLightComponent* Level2Light;                                          // 0x0888 (size: 0x8)
    class UAudioComponent* ProducingSFX;                                              // 0x0890 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0898 (size: 0x8)
    class UStaticMeshComponent* FarmTools_Shovel;                                     // 0x08A0 (size: 0x8)
    class UParticleSystemComponent* Level2Smoke;                                      // 0x08A8 (size: 0x8)
    class USkeletalMeshComponent* Level2;                                             // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* Wheelbarrow;                                          // 0x08D0 (size: 0x8)
    class UBoxComponent* Collision04;                                                 // 0x08D8 (size: 0x8)
    class UBoxComponent* Collision03;                                                 // 0x08E0 (size: 0x8)
    class UBoxComponent* Collision02;                                                 // 0x08E8 (size: 0x8)
    class UBoxComponent* Collision01;                                                 // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0900 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0908 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0910 (size: 0x8)
    class UParticleSystemComponent* Level1Smoke;                                      // 0x0918 (size: 0x8)
    class USkeletalMeshComponent* MineMesh;                                           // 0x0920 (size: 0x8)
    float ConveyerSpeed;                                                              // 0x0928 (size: 0x4)
    float ConveyerTranslation;                                                        // 0x092C (size: 0x4)
    class UMaterialInstanceDynamic* ConveyerMaterial;                                 // 0x0930 (size: 0x8)
    bool bIsProducingSFXActive;                                                       // 0x0938 (size: 0x1)

    void ReceiveBeginPlay();
    void UpdateVisuals_FastTick();
    void UpdateVisuals_SlowTick();
    void ExecuteUbergraph_BPScrapMine(int32 EntryPoint);
}; // Size: 0x939

#endif
