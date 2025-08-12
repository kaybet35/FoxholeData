#ifndef UE4SS_SDK_BPFacilityPowerDiesel_HPP
#define UE4SS_SDK_BPFacilityPowerDiesel_HPP

class ABPFacilityPowerDiesel_C : public APowerPlant
{
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0A70 (size: 0x8)
    class UStaticMeshComponent* PowerLineConnector;                                   // 0x0A78 (size: 0x8)
    class UWarAudioComponent* ProducingSFX;                                           // 0x0A80 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0A88 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x0A90 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0A98 (size: 0x8)
    class USceneComponent* Lights;                                                    // 0x0AA0 (size: 0x8)
    class UDecalComponent* FoundationDecal;                                           // 0x0AA8 (size: 0x8)
    class UParticleSystemComponent* ProducingFX;                                      // 0x0AB0 (size: 0x8)
    class UDecalComponent* InputDecal0;                                               // 0x0AB8 (size: 0x8)
    class UStaticMeshComponent* InputMesh0;                                           // 0x0AC0 (size: 0x8)
    class UBuildSocketComponent* PipeInput0;                                          // 0x0AC8 (size: 0x8)
    class UStaticMeshComponent* MainMesh;                                             // 0x0AD0 (size: 0x8)

}; // Size: 0xAD8

#endif
