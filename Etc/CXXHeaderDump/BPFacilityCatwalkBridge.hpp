#ifndef UE4SS_SDK_BPFacilityCatwalkBridge_HPP
#define UE4SS_SDK_BPFacilityCatwalkBridge_HPP

class ABPFacilityCatwalkBridge_C : public ACatWalk
{
    class USplineConnectorComponent* SplineConnector;                                 // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* BackLeftCorner;                                       // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* BackRightCorner;                                      // 0x0800 (size: 0x8)
    class UStaticMeshComponent* FrontRightCorner;                                     // 0x0808 (size: 0x8)
    class UStaticMeshComponent* FrontLeftCorner;                                      // 0x0810 (size: 0x8)
    class UStaticMeshComponent* FrontRailing;                                         // 0x0818 (size: 0x8)
    class UStaticMeshComponent* BackRailing;                                          // 0x0820 (size: 0x8)
    class UStaticMeshComponent* FrontSupport;                                         // 0x0828 (size: 0x8)
    class UStaticMeshComponent* BackSupport;                                          // 0x0830 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0838 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0840 (size: 0x8)

}; // Size: 0x848

#endif
