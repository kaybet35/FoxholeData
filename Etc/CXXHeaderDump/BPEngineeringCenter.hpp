#ifndef UE4SS_SDK_BPEngineeringCenter_HPP
#define UE4SS_SDK_BPEngineeringCenter_HPP

class ABPEngineeringCenter_C : public AEngineeringCenter
{
    class UPointLightComponent* PointLight;                                           // 0x0840 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0848 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0850 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0858 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0860 (size: 0x8)
    class UStaticMeshComponent* EngineeringCenter;                                    // 0x0868 (size: 0x8)

    void SetFacilityVisibility(class UStaticMeshComponent* FacilityMesh, bool IsVisible);
}; // Size: 0x870

#endif
