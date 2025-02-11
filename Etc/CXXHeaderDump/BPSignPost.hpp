#ifndef UE4SS_SDK_BPSignPost_HPP
#define UE4SS_SDK_BPSignPost_HPP

class ABPSignPost_C : public ASignPost
{
    class UBuildSocketComponent* LandscapeCheck1;                                     // 0x0810 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck;                                      // 0x0818 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0820 (size: 0x8)
    class UBoxComponent* DamageBox;                                                   // 0x0828 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0830 (size: 0x8)

}; // Size: 0x838

#endif
