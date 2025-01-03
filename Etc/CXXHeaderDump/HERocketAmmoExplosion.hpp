#ifndef UE4SS_SDK_HERocketAmmoExplosion_HPP
#define UE4SS_SDK_HERocketAmmoExplosion_HPP

class AHERocketAmmoExplosion_C : public ALightArtilleryExplosion_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0360 (size: 0x8)
    class USceneComponent* RotationCorrection;                                        // 0x0368 (size: 0x8)
    float ProjectileTickRate;                                                         // 0x0370 (size: 0x4)
    FVector ProjectileVelocity;                                                       // 0x0374 (size: 0xC)

    void ReceiveDestroyed();
    void BPDetonate();
    void BPTelegraphProjectile(FVector ImpactVelocity, float TimeUntilDetonation);
    void MoveProjectileStep();
    void ExecuteUbergraph_HERocketAmmoExplosion(int32 EntryPoint);
}; // Size: 0x380

#endif
