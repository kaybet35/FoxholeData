#ifndef UE4SS_SDK_BPTrenchIntCommon_HPP
#define UE4SS_SDK_BPTrenchIntCommon_HPP

class ABPTrenchIntCommon_C : public ATemplate
{
    class UBPFoliageCullStaticMeshComponent_C* BPFoliageCullStaticMeshComponent;      // 0x0218 (size: 0x8)
    class UBoxComponent* LeftLandscapeOverlap;                                        // 0x0220 (size: 0x8)
    class UBoxComponent* BackLandscapeOverlap;                                        // 0x0228 (size: 0x8)
    class UBoxComponent* RightLandscapeOverlap;                                       // 0x0230 (size: 0x8)
    class UBoxComponent* FrontLandscapeOverlap;                                       // 0x0238 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* LeftCull;                            // 0x0240 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BackCull;                            // 0x0248 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* RightCull;                           // 0x0250 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* FrontCull;                           // 0x0258 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BPLandscapeCullStaticMeshComponent;  // 0x0260 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0268 (size: 0x8)
    class UBPWaterStencilComponent_C* WaterStencil;                                   // 0x0270 (size: 0x8)
    class UBuildSocketComponent* RightSocket;                                         // 0x0278 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0280 (size: 0x8)
    class UBuildSocketComponent* LeftSocket;                                          // 0x0288 (size: 0x8)
    class UBoxComponent* LandscapeOverlap;                                            // 0x0290 (size: 0x8)
    class UBoatHullComponent* BoatHull;                                               // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

}; // Size: 0x2A8

#endif
