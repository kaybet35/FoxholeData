#ifndef UE4SS_SDK_PistolImpactEffect_HPP
#define UE4SS_SDK_PistolImpactEffect_HPP

class APistolImpactEffect_C : public AImpactEffect
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0288 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_PistolImpactEffect(int32 EntryPoint);
}; // Size: 0x298

#endif
