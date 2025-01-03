#ifndef UE4SS_SDK_BPCraterMedium_HPP
#define UE4SS_SDK_BPCraterMedium_HPP

class ABPCraterMedium_C : public ACrater
{
    class UBPStructurePuddleMesh_C* BPStructurePuddleMesh;                            // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* CraterSmall01;                                        // 0x07F8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0800 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0808 (size: 0x8)
    class UBoxComponent* Hole;                                                        // 0x0810 (size: 0x8)

}; // Size: 0x818

#endif
