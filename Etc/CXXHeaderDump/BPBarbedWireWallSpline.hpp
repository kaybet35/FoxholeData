#ifndef UE4SS_SDK_BPBarbedWireWallSpline_HPP
#define UE4SS_SDK_BPBarbedWireWallSpline_HPP

class ABPBarbedWireWallSpline_C : public ABarbedWire
{
    class USceneComponent* BarbedWireTarget;                                          // 0x07D0 (size: 0x8)
    class USplineConnectorComponent* BarbedWire;                                      // 0x07D8 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x07E0 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x07E8 (size: 0x8)

}; // Size: 0x7F0

#endif
