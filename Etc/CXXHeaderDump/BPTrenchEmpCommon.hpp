#ifndef UE4SS_SDK_BPTrenchEmpCommon_HPP
#define UE4SS_SDK_BPTrenchEmpCommon_HPP

class ABPTrenchEmpCommon_C : public ATemplate
{
    class UBPLandscapeCullStaticMeshComponent_C* BackCull;                            // 0x0218 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* LeftCull;                            // 0x0220 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* RightCull;                           // 0x0228 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BackRightCull;                       // 0x0230 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BackLeftCull;                        // 0x0238 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* FrontRightCull;                      // 0x0240 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* FrontLeftCull;                       // 0x0248 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* FrontCull;                           // 0x0250 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BPLandscapeCullStaticMeshComponent;  // 0x0258 (size: 0x8)
    class UBPTrenchBlockerCapsule_C* BPTrenchBlockerCapsule;                          // 0x0260 (size: 0x8)
    class UBPWaterStencilComponent_C* WaterStencil;                                   // 0x0268 (size: 0x8)
    class UBoatHullComponent* BoatHull;                                               // 0x0270 (size: 0x8)
    class UBoxComponent* LandscapeOverlap;                                            // 0x0278 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0280 (size: 0x8)

}; // Size: 0x288

#endif
