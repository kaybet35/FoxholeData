#ifndef UE4SS_SDK_BPFortFirePitT1_HPP
#define UE4SS_SDK_BPFortFirePitT1_HPP

class ABPFortFirePitT1_C : public AFortFirePit
{
    class UStaticMeshComponent* RearWall;                                             // 0x0820 (size: 0x8)
    class UBPFortWallModSlotMinimal_C* FrontModSlot;                                  // 0x0828 (size: 0x8)
    class UBPFortWallModSlotMinimal_C* RightModSlot;                                  // 0x0830 (size: 0x8)
    class UBPFortWallModSlotMinimal_C* BackModSlot;                                   // 0x0838 (size: 0x8)
    class UBPFortUnderModSlot_C* UnderModSlot;                                        // 0x0840 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0848 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x0850 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x0858 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x0860 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x0868 (size: 0x8)
    class UStaticMeshComponent* FirePitMesh;                                          // 0x0870 (size: 0x8)
    class UTemplateComponent* FortFirePitCommonFire;                                  // 0x0878 (size: 0x8)
    class UTemplateComponent* FortCommonDirt;                                         // 0x0880 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x0888 (size: 0x8)
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMesh;                 // 0x0890 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0898 (size: 0x8)

}; // Size: 0x8A0

#endif
