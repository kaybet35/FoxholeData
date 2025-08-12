#ifndef UE4SS_SDK_BPRifleAIT2_HPP
#define UE4SS_SDK_BPRifleAIT2_HPP

class ABPRifleAIT2_C : public AFortTurret
{
    class UStructureSeatComponent* OccupyComponent;                                   // 0x08D0 (size: 0x8)
    class UPowerConsumerComponent* PowerConsumer;                                     // 0x08D8 (size: 0x8)
    class UTemplateComponent* FortCommonT2BreachedWalls;                              // 0x08E0 (size: 0x8)
    class UBoxComponent* BlockBuildSiteMovement;                                      // 0x08E8 (size: 0x8)
    class USeatTriggerComponent* OccupiableTriggerVolume;                             // 0x08F0 (size: 0x8)
    class UTemplateComponent* FortSpotLight;                                          // 0x08F8 (size: 0x8)
    class UTemplateComponent* FortCommonMods;                                         // 0x0900 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x0908 (size: 0x8)
    class UTemplateComponent* FortCommonDirtT2;                                       // 0x0910 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x0918 (size: 0x8)
    class UStaticMeshComponent* FortT1GunAI;                                          // 0x0920 (size: 0x8)

}; // Size: 0x928

#endif
