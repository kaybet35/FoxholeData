#ifndef UE4SS_SDK_BPBirch01Replacement_HPP
#define UE4SS_SDK_BPBirch01Replacement_HPP

class ABPBirch01Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* Splinter;                                                  // 0x0298 (size: 0x8)
    class UParticleSystemComponent* NoMansLandTreeFire;                               // 0x02A0 (size: 0x8)
    class UAudioComponent* Fire;                                                      // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* NoMansLandSplinter;                               // 0x02B0 (size: 0x8)
    EClientFoliageReplacementState NewVar_0;                                          // 0x02B8 (size: 0x1)

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPBirch01Replacement(int32 EntryPoint);
}; // Size: 0x2B9

#endif
