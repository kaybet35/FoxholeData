#ifndef UE4SS_SDK_BPFacilityCatwalkBridge_HPP
#define UE4SS_SDK_BPFacilityCatwalkBridge_HPP

class ABPFacilityCatwalkBridge_C : public ACatWalk
{
    class USplineConnectorComponent* SplineConnector;                                 // 0x0810 (size: 0x8)
    class UStaticMeshComponent* BackLeftCorner;                                       // 0x0818 (size: 0x8)
    class UStaticMeshComponent* BackRightCorner;                                      // 0x0820 (size: 0x8)
    class UStaticMeshComponent* FrontRightCorner;                                     // 0x0828 (size: 0x8)
    class UStaticMeshComponent* FrontLeftCorner;                                      // 0x0830 (size: 0x8)
    class UStaticMeshComponent* FrontRailing;                                         // 0x0838 (size: 0x8)
    class UStaticMeshComponent* BackRailing;                                          // 0x0840 (size: 0x8)
    class UStaticMeshComponent* FrontSupport;                                         // 0x0848 (size: 0x8)
    class UStaticMeshComponent* BackSupport;                                          // 0x0850 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0858 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0860 (size: 0x8)

}; // Size: 0x868

#endif
