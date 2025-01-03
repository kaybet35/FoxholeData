#ifndef UE4SS_SDK_BPTrenchBridge_HPP
#define UE4SS_SDK_BPTrenchBridge_HPP

class ABPTrenchBridge_C : public AModificationTemplate
{
    class UBPTrenchBlockerBox_C* BPTrenchBlockerBoxRight;                             // 0x0218 (size: 0x8)
    class UBPTrenchBlockerBox_C* BPTrenchBlockerBoxLeft;                              // 0x0220 (size: 0x8)
    class USceneComponent* SplineTargetBackRight;                                     // 0x0228 (size: 0x8)
    class USceneComponent* SplineTargetBackLeft;                                      // 0x0230 (size: 0x8)
    class USceneComponent* SplineTargetFrontRight;                                    // 0x0238 (size: 0x8)
    class USceneComponent* SplineTargetFrontLeft;                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* BridgeBase;                                           // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Bridge;                                               // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)

}; // Size: 0x260

#endif
