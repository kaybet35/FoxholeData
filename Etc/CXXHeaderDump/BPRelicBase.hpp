#ifndef UE4SS_SDK_BPRelicBase_HPP
#define UE4SS_SDK_BPRelicBase_HPP

class ABPRelicBase_C : public ARelicBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* Flag4;                                                // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* Flag3;                                                // 0x08E0 (size: 0x8)
    class UStaticMeshComponent* Flag2;                                                // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x08F0 (size: 0x8)
    class UCameraComponent* ViewTargetCamera;                                         // 0x08F8 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0900 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPRelicBase(int32 EntryPoint);
}; // Size: 0x908

#endif
