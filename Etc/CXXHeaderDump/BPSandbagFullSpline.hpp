#ifndef UE4SS_SDK_BPSandbagFullSpline_HPP
#define UE4SS_SDK_BPSandbagFullSpline_HPP

class ABPSandbagFullSpline_C : public AWall
{
    class USceneComponent* SandbagTarget;                                             // 0x0810 (size: 0x8)
    class USplineConnectorComponent* Sandbag;                                         // 0x0818 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0820 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0828 (size: 0x8)

}; // Size: 0x830

#endif
