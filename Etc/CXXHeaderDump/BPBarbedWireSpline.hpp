#ifndef UE4SS_SDK_BPBarbedWireSpline_HPP
#define UE4SS_SDK_BPBarbedWireSpline_HPP

class ABPBarbedWireSpline_C : public ABarbedWire
{
    class UStaticMeshComponent* PillarFront;                                          // 0x0820 (size: 0x8)
    class UStaticMeshComponent* PillarBack;                                           // 0x0828 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0830 (size: 0x8)
    class USceneComponent* WireTarget;                                                // 0x0838 (size: 0x8)
    class USplineConnectorComponent* Wire;                                            // 0x0840 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0848 (size: 0x8)

}; // Size: 0x850

#endif
