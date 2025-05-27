#ifndef UE4SS_SDK_BPFortSpotLight_HPP
#define UE4SS_SDK_BPFortSpotLight_HPP

class ABPFortSpotLight_C : public ATemplate
{
    class UStaticMeshComponent* TopMesh;                                              // 0x0220 (size: 0x8)
    class UTurretLightComponent* TurretLight;                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x0230 (size: 0x8)
    class USpotLightComponent* Light;                                                 // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif
