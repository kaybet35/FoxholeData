#ifndef UE4SS_SDK_BPFortBreachedCommon_HPP
#define UE4SS_SDK_BPFortBreachedCommon_HPP

class ABPFortBreachedCommon_C : public ATemplate
{
    class UBPFoliageCullStaticMeshComponent_C* BPFoliageCullStaticMeshComponent;      // 0x0218 (size: 0x8)
    class UBPLandscapeCullStaticMeshComponent_C* BPLandscapeCullStaticMeshComponent;  // 0x0220 (size: 0x8)
    class UDecalComponent* DecalFront;                                                // 0x0228 (size: 0x8)
    class UDecalComponent* DecalRight;                                                // 0x0230 (size: 0x8)
    class UDecalComponent* DecalBack;                                                 // 0x0238 (size: 0x8)
    class UDecalComponent* DecalLeft;                                                 // 0x0240 (size: 0x8)
    class UBPLeftFortSocket_C* LeftFortSocket;                                        // 0x0248 (size: 0x8)
    class UBoatHullComponent* BoatHull;                                               // 0x0250 (size: 0x8)
    class UBoxComponent* LandscapeHole;                                               // 0x0258 (size: 0x8)
    class UBuildSocketComponent* FoundationSocket;                                    // 0x0260 (size: 0x8)
    class UBPFrontFortSocket_C* FrontFortSocket;                                      // 0x0268 (size: 0x8)
    class UBPRightFortSocket_C* RightFortSocket;                                      // 0x0270 (size: 0x8)
    class UBPBackFortSocket_C* BackFortSocket;                                        // 0x0278 (size: 0x8)
    class UBPWaterStencilComponent_C* WaterStencil;                                   // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)

}; // Size: 0x290

#endif
