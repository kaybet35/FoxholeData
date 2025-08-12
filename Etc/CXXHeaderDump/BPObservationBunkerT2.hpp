#ifndef UE4SS_SDK_BPObservationBunkerT2_HPP
#define UE4SS_SDK_BPObservationBunkerT2_HPP

class ABPObservationBunkerT2_C : public AFortObservation
{
    class UTemplateComponent* FortCommonT2Corners;                                    // 0x0850 (size: 0x8)
    class UStaticMeshComponent* BreachedBack;                                         // 0x0858 (size: 0x8)
    class UStaticMeshComponent* BreachedRight;                                        // 0x0860 (size: 0x8)
    class UStaticMeshComponent* BreachedFront;                                        // 0x0868 (size: 0x8)
    class UStaticMeshComponent* BreachedLeft;                                         // 0x0870 (size: 0x8)
    class USceneComponent* BreachedMeshes;                                            // 0x0878 (size: 0x8)
    class UBoxComponent* BlockBuildSiteMovement;                                      // 0x0880 (size: 0x8)
    class USeatTriggerComponent* SeatTriggerComponent;                                // 0x0888 (size: 0x8)
    class UStructureSeatComponent* OccupyComponent;                                   // 0x0890 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0898 (size: 0x8)
    class UStaticMeshComponent* ObservationBunkerT2;                                  // 0x08A0 (size: 0x8)
    class UTemplateComponent* FortCommonDirtT2;                                       // 0x08A8 (size: 0x8)
    class UTemplateComponent* FortCommonDefenseMods;                                  // 0x08B0 (size: 0x8)
    class UTemplateComponent* FortCommonMods;                                         // 0x08B8 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x08C0 (size: 0x8)
    class ULocationMultiplexedMeshComponent* LocationMultiplexedMeshFloor;            // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x08D0 (size: 0x8)

}; // Size: 0x8D8

#endif
