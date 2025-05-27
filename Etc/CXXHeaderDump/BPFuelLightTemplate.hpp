#ifndef UE4SS_SDK_BPFuelLightTemplate_HPP
#define UE4SS_SDK_BPFuelLightTemplate_HPP

class ABPFuelLightTemplate_C : public ATemplate
{
    class UStaticMeshComponent* FuelLightMesh3;                                       // 0x0220 (size: 0x8)
    class UStaticMeshComponent* FuelLightMesh2;                                       // 0x0228 (size: 0x8)
    class UStaticMeshComponent* FuelLightMesh1;                                       // 0x0230 (size: 0x8)
    class UStaticMeshComponent* FuelLightMesh0;                                       // 0x0238 (size: 0x8)
    class UFacilityFuelLightComponent* FacilityFuelLight;                             // 0x0240 (size: 0x8)
    class UStaticMeshComponent* FacilityIndicatorFrame;                               // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)

}; // Size: 0x258

#endif
