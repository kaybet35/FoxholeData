#ifndef UE4SS_SDK_BPFieldPier_HPP
#define UE4SS_SDK_BPFieldPier_HPP

class ABPFieldPier_C : public AFieldPier
{
    class UBPKillVolume_C* BPKillVolume1;                                             // 0x07D0 (size: 0x8)
    class UBPKillVolume_C* BPKillVolume;                                              // 0x07D8 (size: 0x8)
    class UBoxComponent* RampFrontBuildFootprint;                                     // 0x07E0 (size: 0x8)
    class UDockComponent* Dock;                                                       // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* FrontRamp;                                            // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* BackRamp;                                             // 0x07F8 (size: 0x8)
    class UBoxComponent* RampBackBuildFootprint;                                      // 0x0800 (size: 0x8)
    class UStaticMeshComponent* PillarFront;                                          // 0x0808 (size: 0x8)
    class UStaticMeshComponent* PillarBack;                                           // 0x0810 (size: 0x8)
    class USceneComponent* Target;                                                    // 0x0818 (size: 0x8)
    class USplineConnectorComponent* Spline;                                          // 0x0820 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0828 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0830 (size: 0x8)

}; // Size: 0x838

#endif
