#ifndef UE4SS_SDK_BPBarbedWireWallSpline_HPP
#define UE4SS_SDK_BPBarbedWireWallSpline_HPP

class ABPBarbedWireWallSpline_C : public ABarbedWire
{
    class USceneComponent* BarbedWireTarget;                                          // 0x0800 (size: 0x8)
    class USplineConnectorComponent* BarbedWire;                                      // 0x0808 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0810 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0818 (size: 0x8)

}; // Size: 0x820

#endif
