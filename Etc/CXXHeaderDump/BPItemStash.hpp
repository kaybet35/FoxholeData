#ifndef UE4SS_SDK_BPItemStash_HPP
#define UE4SS_SDK_BPItemStash_HPP

class ABPItemStash_C : public AItemStash
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0860 (size: 0x8)
    class UStaticMeshComponent* BackpackPickup;                                       // 0x0868 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPItemStash(int32 EntryPoint);
}; // Size: 0x870

#endif
