#ifndef UE4SS_SDK_BPTrenchCommonMods_HPP
#define UE4SS_SDK_BPTrenchCommonMods_HPP

class ABPTrenchCommonMods_C : public ATemplate
{
    class UBPTrenchDefenseModSlot_C* RightMiddleDefenseModSlot;                       // 0x0218 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* RightBackDefenseModSlot;                         // 0x0220 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* RightFrontDefenseModSlot;                        // 0x0228 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* FrontDefenseModSlot;                             // 0x0230 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* BackDefenseModSlot;                              // 0x0238 (size: 0x8)
    class UBPTrenchBridgeModSlot_C* BridgeModSlot;                                    // 0x0240 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* LeftFrontDefenseModSlot;                         // 0x0248 (size: 0x8)
    class UBPTrenchEndModSlot_C* FrontEndModSlot;                                     // 0x0250 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* LeftMiddleDefenseModSlot;                        // 0x0258 (size: 0x8)
    class UBPTrenchEndModSlot_C* BackEndModSlot;                                      // 0x0260 (size: 0x8)
    class UBPTrenchDefenseModSlot_C* LeftBackDefenseModSlot;                          // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)

}; // Size: 0x278

#endif
