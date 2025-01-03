#ifndef UE4SS_SDK_BPRocket_HPP
#define UE4SS_SDK_BPRocket_HPP

class ABPRocket_C : public ARocket
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08E0 (size: 0x8)
    class UMultiplexedSkeletalMeshComponent* MultiplexedSkeletalMesh;                 // 0x08E8 (size: 0x8)

    void BPBeginLaunch();
    void ExecuteUbergraph_BPRocket(int32 EntryPoint);
}; // Size: 0x8F0

#endif
