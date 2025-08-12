#ifndef UE4SS_SDK_BPFacilityPipeOverhead_HPP
#define UE4SS_SDK_BPFacilityPipeOverhead_HPP

class ABPFacilityPipeOverhead_C : public APipeline
{
    class UBoxComponent* UseAreaBox2;                                                 // 0x0880 (size: 0x8)
    class UBoxComponent* UseAreaBox1;                                                 // 0x0888 (size: 0x8)
    class UStaticMeshComponent* BackMeshConnected;                                    // 0x0890 (size: 0x8)
    class UStaticMeshComponent* FrontMeshConnected;                                   // 0x0898 (size: 0x8)
    class UStaticMeshComponent* FrontMesh;                                            // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* BackMesh;                                             // 0x08A8 (size: 0x8)

}; // Size: 0x8B0

#endif
