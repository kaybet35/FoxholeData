#ifndef UE4SS_SDK_HeavyArtilleryExplosion_HPP
#define UE4SS_SDK_HeavyArtilleryExplosion_HPP

class AHeavyArtilleryExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0348 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0350 (size: 0x8)

    void ReceiveBeginPlay();
    void BPTelegraph();
    void ExecuteUbergraph_HeavyArtilleryExplosion(int32 EntryPoint);
}; // Size: 0x358

#endif
