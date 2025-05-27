#ifndef UE4SS_SDK_BPTrenchIntCommonMods_HPP
#define UE4SS_SDK_BPTrenchIntCommonMods_HPP

class ABPTrenchIntCommonMods_C : public ATemplate
{
    class UBPTrenchDefenseModSlot_C* RightMiddleDefenseModSlot;                       // 0x0220 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* FrontDefenseModSlot;                             // 0x0228 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* BackDefenseModSlot;                              // 0x0230 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* LeftMiddleDefenseModSlot;                        // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif
