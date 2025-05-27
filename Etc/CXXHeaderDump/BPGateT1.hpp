#ifndef UE4SS_SDK_BPGateT1_HPP
#define UE4SS_SDK_BPGateT1_HPP

class ABPGateT1_C : public AGate
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0860 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* RightLowerBuildFootprint;                  // 0x0868 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* LeftLowerBuildFootprint;                   // 0x0870 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* LowerBuildFootprint;                       // 0x0878 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* LandscapeBuildFootprint;                   // 0x0880 (size: 0x8)
    class UBoxComponent* DamageBoxRight;                                              // 0x0888 (size: 0x8)
    class UBoxComponent* DamageBoxLeft;                                               // 0x0890 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0898 (size: 0x8)
    class UStaticMeshComponent* PillarRight;                                          // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* PillarLeft;                                           // 0x08A8 (size: 0x8)
    class UBuildSocketComponent* LeftSocket;                                          // 0x08B0 (size: 0x8)
    class UBuildSocketComponent* RightSocket;                                         // 0x08B8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* FlagMesh;                                             // 0x08C8 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPGateT1(int32 EntryPoint);
}; // Size: 0x8D0

#endif
