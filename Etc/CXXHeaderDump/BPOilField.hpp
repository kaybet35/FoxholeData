#ifndef UE4SS_SDK_BPOilField_HPP
#define UE4SS_SDK_BPOilField_HPP

class ABPOilField_C : public AResourceField
{
    class USphereComponent* RapidDecayPreventer;                                      // 0x0900 (size: 0x8)
    class UDecalComponent* WornDecal1;                                                // 0x0908 (size: 0x8)
    class UDecalComponent* WornDecal;                                                 // 0x0910 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0918 (size: 0x8)

}; // Size: 0x920

#endif
