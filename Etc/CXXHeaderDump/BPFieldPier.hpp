#ifndef UE4SS_SDK_BPFieldPier_HPP
#define UE4SS_SDK_BPFieldPier_HPP

class ABPFieldPier_C : public AFieldPier
{
    class UBPKillVolume_C* BPKillVolume1;                                             // 0x0830 (size: 0x8)
    class UBPKillVolume_C* BPKillVolume;                                              // 0x0838 (size: 0x8)
    class UBoxComponent* RampFrontBuildFootprint;                                     // 0x0840 (size: 0x8)
    class UDockComponent* Dock;                                                       // 0x0848 (size: 0x8)
    class UStaticMeshComponent* FrontRamp;                                            // 0x0850 (size: 0x8)
    class UStaticMeshComponent* BackRamp;                                             // 0x0858 (size: 0x8)
    class UBoxComponent* RampBackBuildFootprint;                                      // 0x0860 (size: 0x8)
    class UStaticMeshComponent* PillarFront;                                          // 0x0868 (size: 0x8)
    class UStaticMeshComponent* PillarBack;                                           // 0x0870 (size: 0x8)
    class USceneComponent* Target;                                                    // 0x0878 (size: 0x8)
    class USplineConnectorComponent* Spline;                                          // 0x0880 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0888 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0890 (size: 0x8)

}; // Size: 0x898

#endif
