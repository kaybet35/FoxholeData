#ifndef UE4SS_SDK_BPFortCornerCommon_HPP
#define UE4SS_SDK_BPFortCornerCommon_HPP

class ABPFortCornerCommon_C : public ATemplate
{
    class UBPLandscapeCullStaticMeshComponent_C* BPLandscapeCullStaticMeshComponent;  // 0x0218 (size: 0x8)
    class UBPWaterStencilComponent_C* WaterStencil;                                   // 0x0220 (size: 0x8)
    class UDecalComponent* DecalFront;                                                // 0x0228 (size: 0x8)
    class UDecalComponent* DecalBack;                                                 // 0x0230 (size: 0x8)
    class UDecalComponent* DecalLeft;                                                 // 0x0238 (size: 0x8)
    class UBuildSocketComponent* FoundationSocket;                                    // 0x0240 (size: 0x8)
    class UBoxComponent* LandscapeHole;                                               // 0x0248 (size: 0x8)
    class UBoatHullComponent* BoatHull;                                               // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)

}; // Size: 0x260

#endif
