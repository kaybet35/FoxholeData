#ifndef UE4SS_SDK_BPRelicBase_HPP
#define UE4SS_SDK_BPRelicBase_HPP

class ABPRelicBase_C : public ARelicBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08F0 (size: 0x8)
    class UStaticMeshComponent* Flag4;                                                // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* Flag3;                                                // 0x0900 (size: 0x8)
    class UStaticMeshComponent* Flag2;                                                // 0x0908 (size: 0x8)
    class UStaticMeshComponent* Flag;                                                 // 0x0910 (size: 0x8)
    class UCameraComponent* ViewTargetCamera;                                         // 0x0918 (size: 0x8)
    class UMultiplexedStaticMeshComponent* MultiplexedStaticMesh;                     // 0x0920 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPRelicBase(int32 EntryPoint);
}; // Size: 0x928

#endif
