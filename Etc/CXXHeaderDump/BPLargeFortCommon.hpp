#ifndef UE4SS_SDK_BPLargeFortCommon_HPP
#define UE4SS_SDK_BPLargeFortCommon_HPP

class ABPLargeFortCommon_C : public ATemplate
{
    class UBoatHullComponent* BoatHull;                                               // 0x0220 (size: 0x8)
    class UBPWaterStencilComponent_C* BPWaterStencilComponent;                        // 0x0228 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BPLandscapeCullStaticMeshComponent;  // 0x0230 (size: 0x8)
    class UBoxComponent* LandscapeHole;                                               // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)

}; // Size: 0x248

#endif
