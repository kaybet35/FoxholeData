#ifndef UE4SS_SDK_BPTrenchConnectorCommon_HPP
#define UE4SS_SDK_BPTrenchConnectorCommon_HPP

class ABPTrenchConnectorCommon_C : public ATemplate
{
    class USplineConnectorComponent* PlacementSplineConnector;                        // 0x0218 (size: 0x8)
    class UBPTrenchBlockerBox_C* BPTrenchBlockerBox;                                  // 0x0220 (size: 0x8)
    class UBPWaterStencilComponent_C* WaterStencil;                                   // 0x0228 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0230 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0238 (size: 0x8)
    class USceneComponent* ReferenceD;                                                // 0x0240 (size: 0x8)
    class USceneComponent* ReferenceC;                                                // 0x0248 (size: 0x8)
    class USceneComponent* ReferenceB;                                                // 0x0250 (size: 0x8)
    class USceneComponent* ReferenceA;                                                // 0x0258 (size: 0x8)
    class UBoatHullComponent* BoatHull;                                               // 0x0260 (size: 0x8)
    class UBoxComponent* LandscapeOverlap;                                            // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)

}; // Size: 0x278

#endif
