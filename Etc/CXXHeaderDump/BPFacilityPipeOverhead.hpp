#ifndef UE4SS_SDK_BPFacilityPipeOverhead_HPP
#define UE4SS_SDK_BPFacilityPipeOverhead_HPP

class ABPFacilityPipeOverhead_C : public APipeline
{
    class UBoxComponent* UseAreaBox2;                                                 // 0x0830 (size: 0x8)
    class UBoxComponent* UseAreaBox1;                                                 // 0x0838 (size: 0x8)
    class UStaticMeshComponent* BackMeshConnected;                                    // 0x0840 (size: 0x8)
    class UStaticMeshComponent* FrontMeshConnected;                                   // 0x0848 (size: 0x8)
    class UStaticMeshComponent* FrontMesh;                                            // 0x0850 (size: 0x8)
    class UStaticMeshComponent* BackMesh;                                             // 0x0858 (size: 0x8)

}; // Size: 0x860

#endif
