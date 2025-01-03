#ifndef UE4SS_SDK_GunTurretExplosion_HPP
#define UE4SS_SDK_GunTurretExplosion_HPP

class AGunTurretExplosion_C : public AWarExplosionEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0348 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_GunTurretExplosion(int32 EntryPoint);
}; // Size: 0x350

#endif
