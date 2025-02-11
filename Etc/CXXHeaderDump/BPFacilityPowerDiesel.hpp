#ifndef UE4SS_SDK_BPFacilityPowerDiesel_HPP
#define UE4SS_SDK_BPFacilityPowerDiesel_HPP

class ABPFacilityPowerDiesel_C : public APowerPlant
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x0A28 (size: 0x8)
    class UWarAudioComponent* ProducingSFX;                                           // 0x0A30 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0A38 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0A40 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0A48 (size: 0x8)
    class USceneComponent* Lights;                                                    // 0x0A50 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0A58 (size: 0x8)
    class UParticleSystemComponent* ProducingFX;                                      // 0x0A60 (size: 0x8)
    class UDecalComponent* InputDecal0;                                               // 0x0A68 (size: 0x8)
    class UStaticMeshComponent* InputMesh0;                                           // 0x0A70 (size: 0x8)
    class UBuildSocketComponent* PipeInput0;                                          // 0x0A78 (size: 0x8)
    class UStaticMeshComponent* MainMesh;                                             // 0x0A80 (size: 0x8)

}; // Size: 0xA88

#endif
