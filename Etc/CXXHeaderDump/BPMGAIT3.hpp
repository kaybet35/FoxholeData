#ifndef UE4SS_SDK_BPMGAIT3_HPP
#define UE4SS_SDK_BPMGAIT3_HPP

class ABPMGAIT3_C : public AFortTurretMG
{
    class UStructureSeatComponent* OccupyComponent;                                   // 0x08B0 (size: 0x8)
    class UPowerConsumerComponent* PowerConsumer;                                     // 0x08B8 (size: 0x8)
    class UTemplateComponent* FortCommonT3BreachWalls;                                // 0x08C0 (size: 0x8)
    class UBoxComponent* BlockBuildSiteMovement;                                      // 0x08C8 (size: 0x8)
    class USeatTriggerComponent* OccupiableTriggerVolume;                             // 0x08D0 (size: 0x8)
    class UTemplateComponent* FortCommonT3Mods;                                       // 0x08D8 (size: 0x8)
    class UTemplateComponent* FortSpotLight;                                          // 0x08E0 (size: 0x8)
    class UTemplateComponent* FortCommonAIT3;                                         // 0x08E8 (size: 0x8)
    class UStaticMeshComponent* Floor;                                                // 0x08F0 (size: 0x8)
    class UTemplateComponent* FortCommonDirtT3;                                       // 0x08F8 (size: 0x8)
    class UTemplateComponent* FortCommonMods;                                         // 0x0900 (size: 0x8)
    class UTemplateComponent* FortCommon;                                             // 0x0908 (size: 0x8)

}; // Size: 0x910

#endif
