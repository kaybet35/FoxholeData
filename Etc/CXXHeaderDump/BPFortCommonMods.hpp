#ifndef UE4SS_SDK_BPFortCommonMods_HPP
#define UE4SS_SDK_BPFortCommonMods_HPP

class ABPFortCommonMods_C : public ATemplate
{
    class UBPFortInfraModSlot_C* BackInfraModSlot;                                    // 0x0218 (size: 0x8)
    class UBPFortWallModSlot_C* BackModSlot;                                          // 0x0220 (size: 0x8)
    class UBPFortInfraModSlot_C* RightInfraModSlot;                                   // 0x0228 (size: 0x8)
    class UBPFortWallModSlot_C* RightModSlot;                                         // 0x0230 (size: 0x8)
    class UBPFortInfraModSlot_C* LeftInfraModSlot;                                    // 0x0238 (size: 0x8)
    class UBPFortWallModSlot_C* LeftModSlot;                                          // 0x0240 (size: 0x8)
    class UBPFortWallModSlot_C* FrontModSlot;                                         // 0x0248 (size: 0x8)
    class UBPFortInfraModSlot_C* FrontInfraModSlot;                                   // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)

}; // Size: 0x260

#endif
