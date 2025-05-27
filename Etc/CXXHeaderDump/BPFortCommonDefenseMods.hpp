#ifndef UE4SS_SDK_BPFortCommonDefenseMods_HPP
#define UE4SS_SDK_BPFortCommonDefenseMods_HPP

class ABPFortCommonDefenseMods_C : public ATemplate
{
    class USceneComponent* BackDefenseModSlotTarget;                                  // 0x0220 (size: 0x8)
    class USceneComponent* RightDefenseModSlotTarget;                                 // 0x0228 (size: 0x8)
    class USceneComponent* LeftDefenseModSlotTarget;                                  // 0x0230 (size: 0x8)
    class USceneComponent* FrontDefenseModSlotTarget;                                 // 0x0238 (size: 0x8)
    class UBPFortDefenseModSlot_C* BackDefenseModSlot;                                // 0x0240 (size: 0x8)
    class UBPFortDefenseModSlot_C* FrontDefenseModSlot;                               // 0x0248 (size: 0x8)
    class UBPFortDefenseModSlot_C* LeftDefenseModSlot;                                // 0x0250 (size: 0x8)
    class UBPFortDefenseModSlot_C* RightDefenseModSlot;                               // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)

}; // Size: 0x268

#endif
