#ifndef UE4SS_SDK_BPFacilityCatwalkPlatform_HPP
#define UE4SS_SDK_BPFacilityCatwalkPlatform_HPP

class ABPFacilityCatwalkPlatform_C : public ACatWalk
{
    class UStaticMeshComponent* BackLeftCorner;                                       // 0x07E0 (size: 0x8)
    class UStaticMeshComponent* BackRightCorner;                                      // 0x07E8 (size: 0x8)
    class UStaticMeshComponent* FrontRightCorner;                                     // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* FrontLeftCorner;                                      // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* RightRailing;                                         // 0x0800 (size: 0x8)
    class UStaticMeshComponent* BackRailing;                                          // 0x0808 (size: 0x8)
    class UStaticMeshComponent* LeftRailing;                                          // 0x0810 (size: 0x8)
    class UStaticMeshComponent* FrontRailing;                                         // 0x0818 (size: 0x8)
    class UBuildSocketComponent* RightSocket;                                         // 0x0820 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0828 (size: 0x8)
    class UBuildSocketComponent* LeftSocket;                                          // 0x0830 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0838 (size: 0x8)
    class UStaticMeshComponent* FacilityCatwalkRamp;                                  // 0x0840 (size: 0x8)

}; // Size: 0x848

#endif
