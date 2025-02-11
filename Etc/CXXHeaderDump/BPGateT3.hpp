#ifndef UE4SS_SDK_BPGateT3_HPP
#define UE4SS_SDK_BPGateT3_HPP

class ABPGateT3_C : public AGate
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0830 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* RightLowerBuildFootprint;                  // 0x0838 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* LeftLowerBuildFootprint;                   // 0x0840 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* LowerBuildFootprint;                       // 0x0848 (size: 0x8)
    class UBPBuildFootprintBoxComponent_C* LandscapeBuildFootprint;                   // 0x0850 (size: 0x8)
    class UBoxComponent* DamageBoxRight;                                              // 0x0858 (size: 0x8)
    class UBoxComponent* DamageBoxLeft;                                               // 0x0860 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x0868 (size: 0x8)
    class UStaticMeshComponent* PillarRight;                                          // 0x0870 (size: 0x8)
    class UStaticMeshComponent* PillarLeft;                                           // 0x0878 (size: 0x8)
    class UBuildSocketComponent* LeftSocket;                                          // 0x0880 (size: 0x8)
    class UBuildSocketComponent* RightSocket;                                         // 0x0888 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0890 (size: 0x8)
    class UStaticMeshComponent* FlagMesh;                                             // 0x0898 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPGateT3(int32 EntryPoint);
}; // Size: 0x8A0

#endif
