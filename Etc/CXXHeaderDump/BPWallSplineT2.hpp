#ifndef UE4SS_SDK_BPWallSplineT2_HPP
#define UE4SS_SDK_BPWallSplineT2_HPP

class ABPWallSplineT2_C : public AWall
{
    class UStaticMeshComponent* FrontPillar;                                          // 0x07E0 (size: 0x8)
    class UStaticMeshComponent* BackPIllar;                                           // 0x07E8 (size: 0x8)
    class UTemplateComponent* WallSplineCommon;                                       // 0x07F0 (size: 0x8)
    class USceneComponent* WallTarget;                                                // 0x07F8 (size: 0x8)
    class USplineConnectorComponent* Wall;                                            // 0x0800 (size: 0x8)

}; // Size: 0x808

#endif
