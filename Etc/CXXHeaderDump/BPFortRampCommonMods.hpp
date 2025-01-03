#ifndef UE4SS_SDK_BPFortRampCommonMods_HPP
#define UE4SS_SDK_BPFortRampCommonMods_HPP

class ABPFortRampCommonMods_C : public ATemplate
{
    class UBPFortWallModSlot_C* BackModSlot;                                          // 0x0218 (size: 0x8)
    class UBPFortWallModSlot_C* LeftModSlot;                                          // 0x0220 (size: 0x8)
    class UBPFortWallModSlot_C* RightModSlot;                                         // 0x0228 (size: 0x8)
    class UBPFortUnderModSlot_C* UnderModSlot;                                        // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

}; // Size: 0x240

#endif
