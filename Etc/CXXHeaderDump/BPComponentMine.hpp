#ifndef UE4SS_SDK_BPComponentMine_HPP
#define UE4SS_SDK_BPComponentMine_HPP

class ABPComponentMine_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UBoxComponent* NoBuildArea;                                                 // 0x0838 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0840 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x0848 (size: 0x8)
    class UStaticMeshComponent* ScrapPiece_06;                                        // 0x0850 (size: 0x8)
    class UParticleSystemComponent* ScrapPile;                                        // 0x0858 (size: 0x8)
    class UParticleSystemComponent* Scrap;                                            // 0x0860 (size: 0x8)
    class UPointLightComponent* Level2Light;                                          // 0x0868 (size: 0x8)
    class UAudioComponent* ProducingSFX;                                              // 0x0870 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0878 (size: 0x8)
    class UParticleSystemComponent* Level2Smoke;                                      // 0x0880 (size: 0x8)
    class USkeletalMeshComponent* Level2;                                             // 0x0888 (size: 0x8)
    class UStaticMeshComponent* Wheelbarrow;                                          // 0x0890 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0898 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x08A0 (size: 0x8)
    class UParticleSystemComponent* Level1Smoke;                                      // 0x08A8 (size: 0x8)
    class USkeletalMeshComponent* MineMesh;                                           // 0x08B0 (size: 0x8)
    float ConveyerSpeed;                                                              // 0x08B8 (size: 0x4)
    float ConveyerTranslation;                                                        // 0x08BC (size: 0x4)
    class UMaterialInstanceDynamic* ConveyerMaterial;                                 // 0x08C0 (size: 0x8)
    bool bIsProducingSFXActive;                                                       // 0x08C8 (size: 0x1)

    void ReceiveBeginPlay();
    void UpdateVisuals_FastTick();
    void UpdateVisuals_SlowTick();
    void ExecuteUbergraph_BPComponentMine(int32 EntryPoint);
}; // Size: 0x8C9

class UPLACEHOLDER-CLASS__ABP_ComponentMine_C_2147482257
{
}; // Size: 0x0

#endif
