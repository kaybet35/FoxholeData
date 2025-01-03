#ifndef UE4SS_SDK_BPFacilityCrane_HPP
#define UE4SS_SDK_BPFacilityCrane_HPP

class ABPFacilityCrane_C : public AStaticCrane
{
    class USeatTriggerComponent* CraneOccupiableComponentTrigger;                     // 0x08A0 (size: 0x8)
    class UStructureSeatComponent* CraneOccupiableComponent;                          // 0x08A8 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* SpotlightCone3;                                       // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* FVFLight2;                                            // 0x08C8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* FVFLight1;                                            // 0x08D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* FVFLight;                                             // 0x08E8 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x08F0 (size: 0x8)

}; // Size: 0x8F8

#endif
