#ifndef UE4SS_SDK_BPFortRampCommonDefenseMods_HPP
#define UE4SS_SDK_BPFortRampCommonDefenseMods_HPP

class ABPFortRampCommonDefenseMods_C : public ATemplate
{
    class UBPFortDefenseModSlot_C* FrontDefenseModSlot;                               // 0x0218 (size: 0x8)
    class UBPFortDefenseModSlot_C* LeftDefenseModSlot;                                // 0x0220 (size: 0x8)
    class UBPFortDefenseModSlot_C* RightDefenseModSlot;                               // 0x0228 (size: 0x8)
    class UBPFortDefenseModSlot_C* BackDefenseModSlot;                                // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

}; // Size: 0x240

#endif
