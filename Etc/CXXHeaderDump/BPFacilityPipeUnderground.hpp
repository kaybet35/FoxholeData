#ifndef UE4SS_SDK_BPFacilityPipeUnderground_HPP
#define UE4SS_SDK_BPFacilityPipeUnderground_HPP

class ABPFacilityPipeUnderground_C : public APipeline
{
    class UBoxComponent* UseAreaBox1;                                                 // 0x0860 (size: 0x8)
    class UBuildSocketComponent* FrontSurfaceCheckSocket;                             // 0x0868 (size: 0x8)
    class UBuildSocketComponent* BackSurfaceCheckSocket;                              // 0x0870 (size: 0x8)
    class UStaticMeshComponent* FrontMesh;                                            // 0x0878 (size: 0x8)
    class UStaticMeshComponent* BackMesh;                                             // 0x0880 (size: 0x8)

}; // Size: 0x888

#endif
