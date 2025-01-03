#ifndef UE4SS_SDK_BPStructureFlame_HPP
#define UE4SS_SDK_BPStructureFlame_HPP

class ABPStructureFlame_C : public AFlameActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class UAudioComponent* FireLoopSFX;                                               // 0x0238 (size: 0x8)
    class UParticleSystemComponent* FireBlazing;                                      // 0x0240 (size: 0x8)
    class UParticleSystemComponent* FireHigh;                                         // 0x0248 (size: 0x8)
    class UParticleSystemComponent* FireMedium;                                       // 0x0250 (size: 0x8)
    class UParticleSystemComponent* FireLow;                                          // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    TArray<class UParticleSystemComponent*> Flames;                                   // 0x0268 (size: 0x10)

    void ReceiveBeginPlay();
    void BPOnFireIntensityChanged(uint8 Previous, uint8 NewIntensity);
    void BPDeactivate();
    void ExecuteUbergraph_BPStructureFlame(int32 EntryPoint);
}; // Size: 0x278

#endif
