#ifndef UE4SS_SDK_ATLaunchedGrenadeWExplosion_HPP
#define UE4SS_SDK_ATLaunchedGrenadeWExplosion_HPP

class AATLaunchedGrenadeWExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0348 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ATLaunchedGrenadeWExplosion(int32 EntryPoint);
}; // Size: 0x350

#endif
