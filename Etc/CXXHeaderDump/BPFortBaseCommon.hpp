#ifndef UE4SS_SDK_BPFortBaseCommon_HPP
#define UE4SS_SDK_BPFortBaseCommon_HPP

class ABPFortBaseCommon_C : public ATemplate
{
    class UBPLandscapeCullStaticMeshComponent_C* LandscapeCullFront;                  // 0x0218 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* LandscapeCull;                       // 0x0220 (size: 0x8)
    class UBoxComponent* LandscapeHoleFront;                                          // 0x0228 (size: 0x8)
    class UBoxComponent* LandscapeHole;                                               // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

}; // Size: 0x240

#endif
