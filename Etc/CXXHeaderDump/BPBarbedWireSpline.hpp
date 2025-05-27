#ifndef UE4SS_SDK_BPBarbedWireSpline_HPP
#define UE4SS_SDK_BPBarbedWireSpline_HPP

class ABPBarbedWireSpline_C : public ABarbedWire
{
    class UStaticMeshComponent* PillarFront;                                          // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* PillarBack;                                           // 0x07F8 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0800 (size: 0x8)
    class USceneComponent* WireTarget;                                                // 0x0808 (size: 0x8)
    class USplineConnectorComponent* Wire;                                            // 0x0810 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0818 (size: 0x8)

}; // Size: 0x820

#endif
