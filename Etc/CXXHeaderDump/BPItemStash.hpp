#ifndef UE4SS_SDK_BPItemStash_HPP
#define UE4SS_SDK_BPItemStash_HPP

class ABPItemStash_C : public AItemStash
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0810 (size: 0x8)
    class UStaticMeshComponent* BackpackPickup;                                       // 0x0818 (size: 0x8)

    void BPSetTeamVisuals(const int32 VisualTeamId);
    void ExecuteUbergraph_BPItemStash(int32 EntryPoint);
}; // Size: 0x820

#endif