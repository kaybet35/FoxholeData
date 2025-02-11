#ifndef UE4SS_SDK_BPFacilityPipeUnderground_HPP
#define UE4SS_SDK_BPFacilityPipeUnderground_HPP

class ABPFacilityPipeUnderground_C : public APipeline
{
    class UBoxComponent* UseAreaBox1;                                                 // 0x0830 (size: 0x8)
    class UBuildSocketComponent* FrontSurfaceCheckSocket;                             // 0x0838 (size: 0x8)
    class UBuildSocketComponent* BackSurfaceCheckSocket;                              // 0x0840 (size: 0x8)
    class UStaticMeshComponent* FrontMesh;                                            // 0x0848 (size: 0x8)
    class UStaticMeshComponent* BackMesh;                                             // 0x0850 (size: 0x8)

}; // Size: 0x858

#endif
