#ifndef UE4SS_SDK_WaterExplosion_HPP
#define UE4SS_SDK_WaterExplosion_HPP

class AWaterExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_WaterExplosion(int32 EntryPoint);
}; // Size: 0x348

#endif
