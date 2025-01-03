#ifndef UE4SS_SDK_BPOfflineCharacter_HPP
#define UE4SS_SDK_BPOfflineCharacter_HPP

class ABPOfflineCharacter_C : public AOfflineCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UParticleSystemComponent* Particle;                                         // 0x02A0 (size: 0x8)

    void UserConstructionScript();
    void BPApplyFatalHit();
    void ExecuteUbergraph_BPOfflineCharacter(int32 EntryPoint);
}; // Size: 0x2A8

#endif
