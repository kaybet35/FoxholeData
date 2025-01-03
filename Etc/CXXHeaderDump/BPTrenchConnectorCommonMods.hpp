#ifndef UE4SS_SDK_BPTrenchConnectorCommonMods_HPP
#define UE4SS_SDK_BPTrenchConnectorCommonMods_HPP

class ABPTrenchConnectorCommonMods_C : public ATemplate
{
    class USceneComponent* RightModSlotSplineTarget;                                  // 0x0218 (size: 0x8)
    class USceneComponent* LeftModSlotSplineTarget;                                   // 0x0220 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* RightDefenseModSlot;                             // 0x0228 (size: 0x8)
    class UBPTrenchConnectorUnderModSlot_C* UnderModSlot;                             // 0x0230 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* LeftDefenseModSlot;                              // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif
