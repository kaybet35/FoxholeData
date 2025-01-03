#ifndef UE4SS_SDK_BPFortCornerCommonMods_HPP
#define UE4SS_SDK_BPFortCornerCommonMods_HPP

class ABPFortCornerCommonMods_C : public ATemplate
{
    class UBPFortCornerUnderModSlot_C* UnderModSlot;                                  // 0x0218 (size: 0x8)
    class UBPFortWallModSlot_C* AngleModSlot;                                         // 0x0220 (size: 0x8)
    class UBPFortWallModSlot_C* BackModSlot;                                          // 0x0228 (size: 0x8)
    class UBPFortWallModSlot_C* LeftModSlot;                                          // 0x0230 (size: 0x8)
    class UBPFortInfraModSlot_C* AngleInfraModSlot;                                   // 0x0238 (size: 0x8)
    class UBPFortInfraModSlot_C* BackInfraModSlot;                                    // 0x0240 (size: 0x8)
    class UBPFortInfraModSlot_C* LeftInfraModSlot;                                    // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)

}; // Size: 0x258

#endif
