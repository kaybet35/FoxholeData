#ifndef UE4SS_SDK_BPFortEngineRoomMods_HPP
#define UE4SS_SDK_BPFortEngineRoomMods_HPP

class ABPFortEngineRoomMods_C : public ATemplate
{
    class UBPFortEngineRoomModSlot_C* BackModSlot;                                    // 0x0218 (size: 0x8)
    class UBPFortEngineRoomModSlot_C* RightModSlot;                                   // 0x0220 (size: 0x8)
    class UBPFortEngineRoomModSlot_C* FrontModSlot;                                   // 0x0228 (size: 0x8)
    class UBPFortEngineRoomModSlot_C* LeftModSlot;                                    // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

}; // Size: 0x240

#endif
