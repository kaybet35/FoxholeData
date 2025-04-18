#ifndef UE4SS_SDK_BPLRArtillery_HPP
#define UE4SS_SDK_BPLRArtillery_HPP

class ABPLRArtillery_C : public ALongRangeArtillery
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0890 (size: 0x8)
    class USeatTriggerComponent* OccupiableTrigger;                                   // 0x0898 (size: 0x8)
    class UStructureSeatComponent* OccupiableComponent;                               // 0x08A0 (size: 0x8)
    class UBPFortUnderModSlot_C* UnderModSlot;                                        // 0x08A8 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x08B0 (size: 0x8)
    class UBoxComponent* LandscapeHole;                                               // 0x08B8 (size: 0x8)
    class UBoatHullComponent* BoatHull;                                               // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* Flag2;                                                // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* RoofMesh;                                             // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* FloorMesh;                                            // 0x08E0 (size: 0x8)
    class UBuildSocketComponent* FrontFortSocket;                                     // 0x08E8 (size: 0x8)
    class UBuildSocketComponent* RightFortSocket;                                     // 0x08F0 (size: 0x8)
    class UBuildSocketComponent* BackFortSocket;                                      // 0x08F8 (size: 0x8)
    class UBuildSocketComponent* LeftFortSocket;                                      // 0x0900 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0908 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPLRArtillery(int32 EntryPoint);
}; // Size: 0x910

#endif
