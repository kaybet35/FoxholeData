#ifndef UE4SS_SDK_BPTrenchConnectorT2_HPP
#define UE4SS_SDK_BPTrenchConnectorT2_HPP

class ABPTrenchConnectorT2_C : public AFortConnector
{
    class USplineConnectorComponent* VisualSplineLeft;                                // 0x0850 (size: 0x8)
    class USplineConnectorComponent* VisualSplineRight;                               // 0x0858 (size: 0x8)
    class USplineConnectorComponent* FloorSplineConnector;                            // 0x0860 (size: 0x8)
    class UQuadrilateralCoverComponent* FloorQuadrilateralCover;                      // 0x0868 (size: 0x8)
    class UTemplateComponent* TrenchConnectorCommonT1T2;                              // 0x0870 (size: 0x8)
    class UTemplateComponent* TrenchConnectorCommon;                                  // 0x0878 (size: 0x8)
    class UTemplateComponent* TrenchConnectorCommonMods;                              // 0x0880 (size: 0x8)
    class UStaticMeshComponent* DirtCornerFrontLeft;                                  // 0x0888 (size: 0x8)
    class UStaticMeshComponent* DirtCornerBackLeft;                                   // 0x0890 (size: 0x8)
    class UStaticMeshComponent* DirtCornerBackRight;                                  // 0x0898 (size: 0x8)
    class UStaticMeshComponent* DirtCornerFrontRight;                                 // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* CornerFrontRight;                                     // 0x08A8 (size: 0x8)
    class UStaticMeshComponent* CornerFrontLeft;                                      // 0x08B0 (size: 0x8)
    class UStaticMeshComponent* CornerBackLeft;                                       // 0x08B8 (size: 0x8)
    class UStaticMeshComponent* CornerBackRight;                                      // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* WallRight;                                            // 0x08C8 (size: 0x8)
    class UStaticMeshComponent* WallLeft;                                             // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* WallBack;                                             // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* WallFront;                                            // 0x08E0 (size: 0x8)

}; // Size: 0x8E8

#endif
