#ifndef UE4SS_SDK_BPBarbedWireWallSpline_HPP
#define UE4SS_SDK_BPBarbedWireWallSpline_HPP

class ABPBarbedWireWallSpline_C : public ABarbedWire
{
    class USceneComponent* BarbedWireTarget;                                          // 0x0820 (size: 0x8)
    class USplineConnectorComponent* BarbedWire;                                      // 0x0828 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0830 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0838 (size: 0x8)

}; // Size: 0x840

#endif
