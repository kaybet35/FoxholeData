#ifndef UE4SS_SDK_BPBarbedWireWallSpline_HPP
#define UE4SS_SDK_BPBarbedWireWallSpline_HPP

class ABPBarbedWireWallSpline_C : public ABarbedWire
{
    class USceneComponent* BarbedWireTarget;                                          // 0x07F0 (size: 0x8)
    class USplineConnectorComponent* BarbedWire;                                      // 0x07F8 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0800 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0808 (size: 0x8)

}; // Size: 0x810

#endif
