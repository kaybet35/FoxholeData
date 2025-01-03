#ifndef UE4SS_SDK_BPRifleAIT2_HPP
#define UE4SS_SDK_BPRifleAIT2_HPP

class ABPRifleAIT2_C : public AFortTurret
{
    class UBoxComponent* BlockBuildSiteMovement;                                      // 0x08B0 (size: 0x8)
    class USeatTriggerComponent* OccupiableTriggerVolume;                             // 0x08B8 (size: 0x8)
    class UStructureSeatComponent* OccupyComponent;                                   // 0x08C0 (size: 0x8)
    class UTemplateComponent* FortSpotLight;                                          // 0x08C8 (size: 0x8)
    class UTemplateComponent* FortCommonMods;                                         // 0x08D0 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x08D8 (size: 0x8)
    class UTemplateComponent* FortCommonDirt;                                         // 0x08E0 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* FortT1GunAI;                                          // 0x08F0 (size: 0x8)

}; // Size: 0x8F8

#endif
