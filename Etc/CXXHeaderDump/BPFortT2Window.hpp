#ifndef UE4SS_SDK_BPFortT2Window_HPP
#define UE4SS_SDK_BPFortT2Window_HPP

class ABPFortT2Window_C : public AModificationTemplate
{
    class USeatTriggerComponent* GunnerSeatTrigger;                                   // 0x0218 (size: 0x8)
    class USkeletalMeshComponent* GunnerSeatMesh;                                     // 0x0220 (size: 0x8)
    class UStructureSeatComponent* GunnerSeat;                                        // 0x0228 (size: 0x8)
    class UBoxComponent* MovementBlocker;                                             // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif
