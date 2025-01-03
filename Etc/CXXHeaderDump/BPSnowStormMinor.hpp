#ifndef UE4SS_SDK_BPSnowStormMinor_HPP
#define UE4SS_SDK_BPSnowStormMinor_HPP

class ABPSnowStormMinor_C : public AWeatherEffectsActor
{
    class UAudioComponent* Audio;                                                     // 0x0218 (size: 0x8)
    class USphereComponent* EditorOnlySphere;                                         // 0x0220 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

}; // Size: 0x238

#endif
