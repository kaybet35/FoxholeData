#ifndef UE4SS_SDK_BPMassProduction_HPP
#define UE4SS_SDK_BPMassProduction_HPP

class ABPMassProduction_C : public AMassProductionFactory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0858 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0860 (size: 0x8)
    class USpotLightComponent* SpotLight2;                                            // 0x0868 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0870 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x0878 (size: 0x8)
    class UChildActorComponent* ChildActor1;                                          // 0x0880 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x0888 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0890 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x0898 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x08A0 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x08D8 (size: 0x8)
    class UAudioComponent* ProducingSFX;                                              // 0x08E0 (size: 0x8)
    class UParticleSystemComponent* Smoke;                                            // 0x08E8 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x08F0 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x08F8 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0900 (size: 0x8)
    class UStaticMeshComponent* FactoryMesh;                                          // 0x0908 (size: 0x8)
    bool bIsProducingSFXActive;                                                       // 0x0910 (size: 0x1)

    void SetFacilityVisibility(class UStaticMeshComponent* FacilityMesh, bool IsVisible);
    void UpdateVisuals_SlowTick();
    void ReceiveBeginPlay();
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPMassProduction(int32 EntryPoint);
}; // Size: 0x911

#endif
