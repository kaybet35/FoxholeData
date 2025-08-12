#ifndef UE4SS_SDK_BPSulfurField_HPP
#define UE4SS_SDK_BPSulfurField_HPP

class ABPSulfurField_C : public AResourceField
{
    class UParticleSystemComponent* SulfurSmoke;                                      // 0x0900 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0908 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0910 (size: 0x8)

}; // Size: 0x918

#endif
