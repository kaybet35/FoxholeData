#ifndef UE4SS_SDK_BPFacilityRefineryCoal_HPP
#define UE4SS_SDK_BPFacilityRefineryCoal_HPP

class ABPFacilityRefineryCoal_C : public AFacilityRefinery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A70 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent1;             // 0x0A78 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0A80 (size: 0x8)
    class UGeometryCacheComponent* CoalRefineryConveyorBeltCoalPile;                  // 0x0A88 (size: 0x8)
    class UGeometryCacheComponent* CoalRefineryConveyorBelt;                          // 0x0A90 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x0A98 (size: 0x8)
    class UWarAudioComponent* ProducingSFX;                                           // 0x0AA0 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0AA8 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0AB0 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0AB8 (size: 0x8)
    class UParticleSystemComponent* Smoke;                                            // 0x0AC0 (size: 0x8)
    class UStaticMeshComponent* MainMesh;                                             // 0x0AC8 (size: 0x8)

    void BPOnStateActive();
    void BPOnStateInactive();
    void ExecuteUbergraph_BPFacilityRefineryCoal(int32 EntryPoint);
}; // Size: 0xAD0

#endif
