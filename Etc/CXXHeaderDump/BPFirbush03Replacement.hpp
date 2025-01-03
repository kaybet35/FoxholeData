#ifndef UE4SS_SDK_BPFirbush03Replacement_HPP
#define UE4SS_SDK_BPFirbush03Replacement_HPP

class ABPFirbush03Replacement_C : public AClientFoliageReplacement
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    EClientFoliageReplacementState NewVar_0;                                          // 0x0298 (size: 0x1)

    void OnStateChanged(EClientFoliageReplacementState State);
    void ExecuteUbergraph_BPFirbush03Replacement(int32 EntryPoint);
}; // Size: 0x299

#endif
