#ifndef UE4SS_SDK_MortarSHExplosionDirectFire_HPP
#define UE4SS_SDK_MortarSHExplosionDirectFire_HPP

class AMortarSHExplosionDirectFire_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0348 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MortarSHExplosionDirectFire(int32 EntryPoint);
}; // Size: 0x350

#endif
