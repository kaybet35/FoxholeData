#ifndef UE4SS_SDK_BPFortT2Stairs_HPP
#define UE4SS_SDK_BPFortT2Stairs_HPP

class ABPFortT2Stairs_C : public AModificationTemplate
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0218 (size: 0x8)
    class UStaticMeshComponent* Roof;                                                 // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPFortT2Stairs(int32 EntryPoint);
}; // Size: 0x230

#endif
