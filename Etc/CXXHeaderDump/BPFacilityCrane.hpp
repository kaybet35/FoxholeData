#ifndef UE4SS_SDK_BPFacilityCrane_HPP
#define UE4SS_SDK_BPFacilityCrane_HPP

class ABPFacilityCrane_C : public AStaticCrane
{
    class USeatTriggerComponent* CraneOccupiableComponentTrigger;                     // 0x0900 (size: 0x8)
    class UStructureSeatComponent* CraneOccupiableComponent;                          // 0x0908 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0910 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x0918 (size: 0x8)
    class UStaticMeshComponent* SpotlightCone3;                                       // 0x0920 (size: 0x8)
    class UStaticMeshComponent* FVFLight2;                                            // 0x0928 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0930 (size: 0x8)
    class UStaticMeshComponent* FVFLight1;                                            // 0x0938 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0940 (size: 0x8)
    class UStaticMeshComponent* FVFLight;                                             // 0x0948 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0950 (size: 0x8)

}; // Size: 0x958

#endif
