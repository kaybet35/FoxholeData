#ifndef UE4SS_SDK_BPCraterMedium_HPP
#define UE4SS_SDK_BPCraterMedium_HPP

class ABPCraterMedium_C : public ACrater
{
    class UBPFoliageCullStaticMeshComponent_C* BPFoliageCullStaticMeshComponent;      // 0x0820 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BPLandscapeCullStaticMeshComponent;  // 0x0828 (size: 0x8)
    class UBPStructurePuddleMesh_C* BPStructurePuddleMesh;                            // 0x0830 (size: 0x8)
    class UStaticMeshComponent* CraterSmall01;                                        // 0x0838 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0840 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0848 (size: 0x8)
    class UBoxComponent* Hole;                                                        // 0x0850 (size: 0x8)

}; // Size: 0x858

#endif
