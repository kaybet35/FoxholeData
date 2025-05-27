#ifndef UE4SS_SDK_BPRifleAIT1_HPP
#define UE4SS_SDK_BPRifleAIT1_HPP

class ABPRifleAIT1_C : public AFortTurret
{
    class UStructureSeatComponent* OccupyComponent;                                   // 0x08A0 (size: 0x8)
    class UTemplateComponent* FortCommonT1BreachedWalls;                              // 0x08A8 (size: 0x8)
    class UBoxComponent* BlockBuildSiteMovement;                                      // 0x08B0 (size: 0x8)
    class USeatTriggerComponent* OccupiableTriggerVolume;                             // 0x08B8 (size: 0x8)
    class UTemplateComponent* FortCommonMods;                                         // 0x08C0 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x08C8 (size: 0x8)
    class UTemplateComponent* FortCommonDirt;                                         // 0x08D0 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x08D8 (size: 0x8)
    class UStaticMeshComponent* FortT1GunAI;                                          // 0x08E0 (size: 0x8)

}; // Size: 0x8E8

#endif
