#ifndef UE4SS_SDK_BPArmoredCarC_HPP
#define UE4SS_SDK_BPArmoredCarC_HPP

class ABPArmoredCarC_C : public ABPArmoredCarBaseC_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x13A8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x13B0 (size: 0x8)

    void BPOnVehicleOn(bool IsOn);
    void ExecuteUbergraph_BPArmoredCarC(int32 EntryPoint);
}; // Size: 0x13B8

#endif
