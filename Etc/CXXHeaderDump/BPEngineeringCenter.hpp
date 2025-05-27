#ifndef UE4SS_SDK_BPEngineeringCenter_HPP
#define UE4SS_SDK_BPEngineeringCenter_HPP

class ABPEngineeringCenter_C : public AEngineeringCenter
{
    class UPointLightComponent* PointLight;                                           // 0x0810 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0818 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0820 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0828 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0830 (size: 0x8)
    class UStaticMeshComponent* EngineeringCenter;                                    // 0x0838 (size: 0x8)

    void SetFacilityVisibility(class UStaticMeshComponent* FacilityMesh, bool IsVisible);
}; // Size: 0x840

#endif
