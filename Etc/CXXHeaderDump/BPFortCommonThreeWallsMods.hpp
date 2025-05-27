#ifndef UE4SS_SDK_BPFortCommonThreeWallsMods_HPP
#define UE4SS_SDK_BPFortCommonThreeWallsMods_HPP

class ABPFortCommonThreeWallsMods_C : public ATemplate
{
    class UBPFortWallModSlotMinimal_C* BackModSlot;                                   // 0x0220 (size: 0x8)
    class UBPFortWallModSlotMinimal_C* RightModSlot;                                  // 0x0228 (size: 0x8)
    class UBPFortWallModSlotMinimal_C* FrontModSlot;                                  // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

}; // Size: 0x240

#endif
