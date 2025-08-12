#ifndef UE4SS_SDK_BPATPillbox_HPP
#define UE4SS_SDK_BPATPillbox_HPP

class ABPATPillbox_C : public AFoxholeTurret
{
    class USeatTriggerComponent* SeatTriggerComponent;                                // 0x08D0 (size: 0x8)
    class UStructureSeatComponent* SeatComponent0;                                    // 0x08D8 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck5;                                     // 0x08E0 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck4;                                     // 0x08E8 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck3;                                     // 0x08F0 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck2;                                     // 0x08F8 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck1;                                     // 0x0900 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck;                                      // 0x0908 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0910 (size: 0x8)
    class UStaticMeshComponent* ATPillbox;                                            // 0x0918 (size: 0x8)

}; // Size: 0x920

#endif
