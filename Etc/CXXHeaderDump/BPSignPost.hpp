#ifndef UE4SS_SDK_BPSignPost_HPP
#define UE4SS_SDK_BPSignPost_HPP

class ABPSignPost_C : public ASignPost
{
    class UBuildSocketComponent* LandscapeCheck1;                                     // 0x0840 (size: 0x8)
    class UBuildSocketComponent* LandscapeCheck;                                      // 0x0848 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* BPBuildFootprintBoxComponent;              // 0x0850 (size: 0x8)
    class UBoxComponent* DamageBox;                                                   // 0x0858 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0860 (size: 0x8)

}; // Size: 0x868

#endif
