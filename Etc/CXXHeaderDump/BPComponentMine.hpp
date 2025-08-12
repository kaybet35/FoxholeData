#ifndef UE4SS_SDK_BPComponentMine_HPP
#define UE4SS_SDK_BPComponentMine_HPP

class ABPComponentMine_C : public AResourceMine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08A0 (size: 0x8)
    class UBoxComponent* NoBuildArea;                                                 // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* ScrapPiece_06;                                        // 0x08C0 (size: 0x8)
    class UParticleSystemComponent* ScrapPile;                                        // 0x08C8 (size: 0x8)
    class UParticleSystemComponent* Scrap;                                            // 0x08D0 (size: 0x8)
    class UPointLightComponent* Level2Light;                                          // 0x08D8 (size: 0x8)
    class UAudioComponent* ProducingSFX;                                              // 0x08E0 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08E8 (size: 0x8)
    class UParticleSystemComponent* Level2Smoke;                                      // 0x08F0 (size: 0x8)
    class USkeletalMeshComponent* Level2;                                             // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* Wheelbarrow;                                          // 0x0900 (size: 0x8)
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
    void ExecuteUbergraph_BPComponentMine(int32 EntryPoint);
}; // Size: 0x939

class UPLACEHOLDER-CLASS__ABP_ComponentMine_C_2147482258
{
}; // Size: 0x0

#endif
