#ifndef UE4SS_SDK_BPRefinery_HPP
#define UE4SS_SDK_BPRefinery_HPP

class ABPRefinery_C : public ARefinery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08C0 (size: 0x8)
    class UBPLoadingAreaBox_C* BPLoadingAreaBox;                                      // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh15;                                         // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh13;                                         // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh12;                                         // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh10;                                         // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh9;                                          // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh8;                                          // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh14;                                         // 0x0900 (size: 0x8)
    class UStaticMeshComponent* StaticMesh16;                                         // 0x0908 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0910 (size: 0x8)
    class UChildActorComponent* ChildActor1;                                          // 0x0918 (size: 0x8)
    class UStaticMeshComponent* StaticMesh11;                                         // 0x0920 (size: 0x8)
    class UStaticMeshComponent* StaticMesh7;                                          // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0930 (size: 0x8)
    class UStaticMeshComponent* FmatsPacked;                                          // 0x0938 (size: 0x8)
    class UPointLightComponent* PointLight4;                                          // 0x0940 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0948 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0950 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0958 (size: 0x8)
    class UAudioComponent* ProducingSFX;                                              // 0x0960 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0968 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0970 (size: 0x8)
    class UStaticMeshComponent* BasicCrates;                                          // 0x0978 (size: 0x8)
    class UStaticMeshComponent* EmatsPacked;                                          // 0x0980 (size: 0x8)
    class UStaticMeshComponent* BmatsPacked;                                          // 0x0988 (size: 0x8)
    class UStaticMeshComponent* RmatsPacked;                                          // 0x0990 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0998 (size: 0x8)
    class UStaticMeshComponent* BulwarkKeepInteriorWheel;                             // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh6;                                          // 0x09A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh5;                                          // 0x09B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x09B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh4;                                          // 0x09C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x09C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x09D0 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x09D8 (size: 0x8)
    class UDecalComponent* DirtPatch;                                                 // 0x09E0 (size: 0x8)
    class UStaticMeshComponent* Tarp02;                                               // 0x09E8 (size: 0x8)
    class UStaticMeshComponent* RefineryBuilding;                                     // 0x09F0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x09F8 (size: 0x8)
    bool bIsProducingSFXActive;                                                       // 0x0A00 (size: 0x1)

    void ReceiveBeginPlay();
    void UpdateVisuals_SlowTick();
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPRefinery(int32 EntryPoint);
}; // Size: 0xA01

#endif
