#ifndef UE4SS_SDK_BPFortFirePitCommonFire_HPP
#define UE4SS_SDK_BPFortFirePitCommonFire_HPP

class ABPFortFirePitCommonFire_C : public ATemplate
{
    class UParticleSystemComponent* Fire1ParticleSystem;                              // 0x0218 (size: 0x8)
    class UTemperatureModifierBoxComponent* TemperatureModifierComponent;             // 0x0220 (size: 0x8)
    class UWarAudioComponent* FireSFXLoop;                                            // 0x0228 (size: 0x8)
    class UParticleSystemComponent* Fire2ParticleSystem;                              // 0x0230 (size: 0x8)
    class UParticleSystemComponent* Fire3ParticleSystem;                              // 0x0238 (size: 0x8)
    class UStaticMeshComponent* FireMesh;                                             // 0x0240 (size: 0x8)
    class UFirePitComponent* FirePit;                                                 // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)

}; // Size: 0x258

#endif
