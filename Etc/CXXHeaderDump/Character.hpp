#ifndef UE4SS_SDK_Character_HPP
#define UE4SS_SDK_Character_HPP

class ACharacter_C : public APlayerCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x16F0 (size: 0x8)
    class UParticleSystemComponent* PlayerFire;                                       // 0x16F8 (size: 0x8)
    FVector IKLeftHandLocation;                                                       // 0x1700 (size: 0xC)
    bool LeftHandHit;                                                                 // 0x170C (size: 0x1)

    void IK Trace(FName SocketName, float Distance, FVector& Out Hit Location, bool& Is WallHit);
    void BPUpdateHeatVisuals(bool bState);
    void ReceiveTick(float DeltaSeconds);
    void BPUpdateMaterialParameters(const FVector& Position);
    void ExecuteUbergraph_Character(int32 EntryPoint);
}; // Size: 0x170D

#endif
