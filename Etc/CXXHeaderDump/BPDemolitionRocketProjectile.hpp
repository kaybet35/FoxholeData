#ifndef UE4SS_SDK_BPDemolitionRocketProjectile_HPP
#define UE4SS_SDK_BPDemolitionRocketProjectile_HPP

class ABPDemolitionRocketProjectile_C : public ASpoolProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAudioComponent* RocketLaunch_Cue;                                          // 0x0378 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPDemolitionRocketProjectile(int32 EntryPoint);
}; // Size: 0x388

#endif
