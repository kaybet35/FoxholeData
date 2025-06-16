#ifndef UE4SS_SDK_War_HPP
#define UE4SS_SDK_War_HPP

#include "War_enums.hpp"

struct FAcceptInviteToRegimentMessage
{
    FInviteToRegimentMessage InviteToAccept;                                          // 0x0000 (size: 0x60)
    FString TargetPlayerName;                                                         // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FAcceptJoinSquadWarMessage
{
    FJoinSquadWarMessage JoinMessage;                                                 // 0x0000 (size: 0x40)

}; // Size: 0x40

struct FAcceptSquadInviteWarMessage
{
    FSquadInviteInfo SquadInviteInfo;                                                 // 0x0000 (size: 0x58)
    FString NewMemberName;                                                            // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FActionStyle
{
    FButtonStyle ButtonStyle;                                                         // 0x0000 (size: 0x278)
    FText ToolTipText;                                                                // 0x0278 (size: 0x18)
    FText ToolTipDescription;                                                         // 0x0290 (size: 0x18)

}; // Size: 0x2A8

struct FActionsStyle
{
    FActionStyle AllStyles;                                                           // 0x0000 (size: 0xACA8)

}; // Size: 0xACA8

struct FActivateSquadWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FActivityIndicatorStyle
{
    class UCurveFloat* AlphaCurve;                                                    // 0x0000 (size: 0x8)
    class UCurveFloat* ScaleCurve;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FActivityResource
{
    float AmountC;                                                                    // 0x0000 (size: 0x4)
    float AmountW;                                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FActivityStateChange
{
    uint8 LastAckedSequence;                                                          // 0x0000 (size: 0x1)
    uint8 Sequence;                                                                   // 0x0001 (size: 0x1)
    ECharacterActivityState State;                                                    // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FActivityStateDebugTrace
{
    double Timestamp;                                                                 // 0x0000 (size: 0x8)
    TEnumAsByte<ENetRole> Role;                                                       // 0x0008 (size: 0x1)
    EActivityStateDebugTraceType Type;                                                // 0x0009 (size: 0x1)
    ECharacterActivityState ActivityState;                                            // 0x000A (size: 0x1)
    uint8 SequenceNumber;                                                             // 0x000B (size: 0x1)

}; // Size: 0x10

struct FActivityStateInfo
{
    class UAnimMontage* ActivityMontage;                                              // 0x0000 (size: 0x8)
    bool IsLooping;                                                                   // 0x0008 (size: 0x1)
    bool bIsReversed;                                                                 // 0x0009 (size: 0x1)
    float Duration;                                                                   // 0x000C (size: 0x4)
    FName SectionName;                                                                // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FActorLog
{
    TArray<FActorLogEntry> Entries;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FActorLogEntry
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)
    EActorLogEntryType Type;                                                          // 0x0020 (size: 0x1)
    uint16 AltType;                                                                   // 0x0022 (size: 0x2)
    int32 Value;                                                                      // 0x0024 (size: 0x4)
    FDateTime EventTime;                                                              // 0x0028 (size: 0x8)
    FName CodeName;                                                                   // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FActorLogPage
{
    TArray<FActorLogEntry> EntryList;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAddGlobalLogEntryRequest
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)
    EGlobalLogEntryType Type;                                                         // 0x0020 (size: 0x1)
    int8 MapId;                                                                       // 0x0021 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0022 (size: 0x1)
    int32 Value;                                                                      // 0x0024 (size: 0x4)
    int64 Timestamp;                                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FAdminCommandHttpResponse
{
    FString Result;                                                                   // 0x0000 (size: 0x10)
    FString Message;                                                                  // 0x0010 (size: 0x10)
    FString ServerName;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FAdminCommandHttpResponseGroup
{
    TArray<FAdminCommandHttpResponse> ResponseList;                                   // 0x0000 (size: 0x10)
    FString AdminOnlineID;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAdminCommandPlayerContext
{
    class UWorld* World;                                                              // 0x0000 (size: 0x8)
    class ASimPlayerController* AdminSimController;                                   // 0x0008 (size: 0x8)
    FString AdminOnlineID;                                                            // 0x0010 (size: 0x10)
    FString AdminPlayerName;                                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FAdminCommandResult
{
    FString Result;                                                                   // 0x0000 (size: 0x10)
    FString Message;                                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAdminSteamInfo
{
    FString steamId;                                                                  // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAlert
{
}; // Size: 0x60

struct FAlertAllPlayersOnTeamRPCInfo
{
    FString AlertText;                                                                // 0x0000 (size: 0x10)
    float Duration_Sec;                                                               // 0x0010 (size: 0x4)
    uint8 TeamId;                                                                     // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FAlertAllPlayersRPCInfo
{
    FString AlertText;                                                                // 0x0000 (size: 0x10)
    float Duration_Sec;                                                               // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAlertTownBuiltRPCInfo
{
    FString TownName;                                                                 // 0x0000 (size: 0x10)
    EWorldConquestMapId MapId;                                                        // 0x0010 (size: 0x1)
    uint8 TeamId;                                                                     // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FAlertTownDestroyedRPCInfo
{
    FString TownName;                                                                 // 0x0000 (size: 0x10)
    EWorldConquestMapId MapId;                                                        // 0x0010 (size: 0x1)
    uint8 TeamId;                                                                     // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FAlertTownUnderAttackRPCInfo
{
    FString TownName;                                                                 // 0x0000 (size: 0x10)
    EWorldConquestMapId MapId;                                                        // 0x0010 (size: 0x1)
    uint8 TeamId;                                                                     // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FAlertWarOpsMessageRPCInfo
{
    EWarOpsAlertMessage MessageType;                                                  // 0x0000 (size: 0x1)
    bool bVar1Set;                                                                    // 0x0001 (size: 0x1)
    bool bVar2Set;                                                                    // 0x0002 (size: 0x1)
    int32 Var1;                                                                       // 0x0004 (size: 0x4)
    int32 Var2;                                                                       // 0x0008 (size: 0x4)
    float DurationSecs;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FAmmoDynamicData : public FTableRowBase
{
    float Damage;                                                                     // 0x0008 (size: 0x4)
    float Suppression;                                                                // 0x000C (size: 0x4)
    float ExplosionRadius;                                                            // 0x0010 (size: 0x4)
    TSubclassOf<class UDamageType> DamageType;                                        // 0x0018 (size: 0x8)
    float DamageInnerRadius;                                                          // 0x0020 (size: 0x4)
    float DamageFalloff;                                                              // 0x0024 (size: 0x4)
    float AccuracyRadius;                                                             // 0x0028 (size: 0x4)
    int16 EnvironmentImpactAmount;                                                    // 0x002C (size: 0x2)
    float AddedBurning;                                                               // 0x0030 (size: 0x4)
    float AddedHeat;                                                                  // 0x0034 (size: 0x4)
    float BreachingModifier;                                                          // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FAnalayticsReleaseReserveStockpileItemInfo
{
    FString StockpileName;                                                            // 0x0000 (size: 0x10)
    FName CodeName;                                                                   // 0x0010 (size: 0x8)
    int32 QuantityReleased;                                                           // 0x0018 (size: 0x4)
    int32 TotalQuantity;                                                              // 0x001C (size: 0x4)

}; // Size: 0x20

struct FAnalyticsChatInfo
{
    EChatChannel ChatChannel;                                                         // 0x0000 (size: 0x1)
    EChatLanguage ChatLanguage;                                                       // 0x0001 (size: 0x1)
    FString Message;                                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAnalyticsEvent
{
    FString WarId;                                                                    // 0x0000 (size: 0x10)
    EAnalyticsEventType EventType;                                                    // 0x0010 (size: 0x2)
    int64 UnixTimeStamp;                                                              // 0x0018 (size: 0x8)
    EAnalyticsAccessLevel AccessLevel;                                                // 0x0020 (size: 0x1)
    EWorldConquestMapId MapId;                                                        // 0x0021 (size: 0x1)
    FString ServerName;                                                               // 0x0028 (size: 0x10)
    float WorldPosX;                                                                  // 0x0038 (size: 0x4)
    float WorldPosY;                                                                  // 0x003C (size: 0x4)
    float WorldPosZ;                                                                  // 0x0040 (size: 0x4)
    FString OnlineID;                                                                 // 0x0048 (size: 0x10)
    FString PlayerName;                                                               // 0x0058 (size: 0x10)
    FString DeviceID;                                                                 // 0x0068 (size: 0x10)
    uint8 TeamId;                                                                     // 0x0078 (size: 0x1)
    FString JsonPayload;                                                              // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FAnalyticsFactoryOrderCompleteInfo
{
    TArray<FSpecializedFactoryOrderItem> OrderItems;                                  // 0x0000 (size: 0x10)
    EFactoryOrderAccess AccessLevel;                                                  // 0x0010 (size: 0x1)
    int16 SquadId;                                                                    // 0x0012 (size: 0x2)

}; // Size: 0x18

struct FAnalyticsItem
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    int32 Quantity;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAnalyticsItemList
{
    TArray<FAnalyticsItem> ItemList;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAnalyticsModBanInfo
{
    FString AdminPlayerName;                                                          // 0x0000 (size: 0x10)
    FString AdminOnlineID;                                                            // 0x0010 (size: 0x10)
    float DurationMins;                                                               // 0x0020 (size: 0x4)
    EBanReason BanReason;                                                             // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FAnalyticsPlayerRestrictedInfo
{
    FFriendlyFireStats FriendlyFireStats;                                             // 0x0000 (size: 0x14)
    FString RestrictionType;                                                          // 0x0018 (size: 0x10)
    float DurationMins;                                                               // 0x0028 (size: 0x4)
    bool bWasRestrictedByAdmin;                                                       // 0x002C (size: 0x1)

}; // Size: 0x30

struct FAnalyticsPrototypeResult
{
    FName PrototypeCodeName;                                                          // 0x0000 (size: 0x8)
    bool bPrototypeComplete;                                                          // 0x0008 (size: 0x1)
    bool bPrototypeSucceeded;                                                         // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FAnalyticsReserveItem
{
    FString StockpileName;                                                            // 0x0000 (size: 0x10)
    FAnalyticsItem Item;                                                              // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FAnalyticsReserveItemList
{
    FString StockpileName;                                                            // 0x0000 (size: 0x10)
    FAnalyticsItemList ItemList;                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAnalyticsTeamKillInfo
{
    FString DeadPlayerName;                                                           // 0x0000 (size: 0x10)
    FString DeadPlayerOnlineID;                                                       // 0x0010 (size: 0x10)
    FString TeamKillSource;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FAnalyticsUnstuckInfo
{
    FVector NewLocation;                                                              // 0x0000 (size: 0xC)
    int32 NumUnstuckCommandsUsed;                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FAnalyticsVehicleWrenchUnlockedInfo
{
    FName VehicleCodeName;                                                            // 0x0000 (size: 0x8)
    int16 SquadId;                                                                    // 0x0008 (size: 0x2)
    EFactionId FactionId;                                                             // 0x000A (size: 0x1)
    FString LastDriverOnlineID;                                                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAnalyticsWhisperInfo
{
    EChatLanguage ChatLanguage;                                                       // 0x0000 (size: 0x1)
    FString TargetOnlineID;                                                           // 0x0008 (size: 0x10)
    FString TargetPlayerName;                                                         // 0x0018 (size: 0x10)
    FString Message;                                                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FArmourDirectionBoneNamesList
{
    EArmourDirection ArmourDirection;                                                 // 0x0000 (size: 0x1)
    TArray<FName> BoneNamesList;                                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FArmourProfile : public FTableRowBase
{
    float SuppressionModifier;                                                        // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FAssemblyItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int32 Duration;                                                                   // 0x0008 (size: 0x4)
    FName RequiredCodeName;                                                           // 0x000C (size: 0x8)

}; // Size: 0x14

struct FAssemblyModification
{
    TArray<FAssemblyItem> AssemblyItems;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAssignSquadOfficerToLeaderWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString OfficerOnlineId;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBallastInfo
{
    EBallastType Type;                                                                // 0x0000 (size: 0x1)
    FVector Offset;                                                                   // 0x0004 (size: 0xC)
    float FloodRate;                                                                  // 0x0010 (size: 0x4)
    float BlowRate;                                                                   // 0x0014 (size: 0x4)
    float BlowRateNoElectricity;                                                      // 0x0018 (size: 0x4)
    float BlowElectricityCost;                                                        // 0x001C (size: 0x4)
    float FloodedMass;                                                                // 0x0020 (size: 0x4)
    float TargetFloodPercent;                                                         // 0x0024 (size: 0x4)
    float FloodPercent;                                                               // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FBanReasonInfo
{
    EBanReason BanReason;                                                             // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FBaseStyle : public FSlateWidgetStyle
{
    FBuildStyle BuildStyle;                                                           // 0x0008 (size: 0x4C8)
    FContainerStyle ContainerStyle;                                                   // 0x04D0 (size: 0x338)
    FFacilityStyle FacilityStyle;                                                     // 0x0808 (size: 0xAF0)
    FFuelStyle FuelStyle;                                                             // 0x12F8 (size: 0x278)
    FSlateBrush ListEntryBGImage;                                                     // 0x1570 (size: 0x88)
    FSlateBrush ListEntryHighlightBGImage;                                            // 0x15F8 (size: 0x88)
    FSlateBrush AlternatingRowLightColour;                                            // 0x1680 (size: 0x88)
    FSlateBrush EquipmentSilhouetteMale;                                              // 0x1708 (size: 0x88)
    FSlateBrush EquipmentSilhouetteFemale;                                            // 0x1790 (size: 0x88)
    FScrollBarStyle BasicScrollBarStyle;                                              // 0x1818 (size: 0x4D0)
    FButtonStyle BasicIconButtonStyle;                                                // 0x1CE8 (size: 0x278)
    FButtonStyle InvariantBasicIconButtonStyle;                                       // 0x1F60 (size: 0x278)
    FButtonStyle ExpandButtonStyle;                                                   // 0x21D8 (size: 0x278)
    FButtonStyle CollapseButtonStyle;                                                 // 0x2450 (size: 0x278)
    FButtonStyle NextButtonStyle;                                                     // 0x26C8 (size: 0x278)
    FButtonStyle PrevButtonStyle;                                                     // 0x2940 (size: 0x278)
    FButtonStyle NoBGIconButtonStyle;                                                 // 0x2BB8 (size: 0x278)
    FButtonStyles ButtonStyles;                                                       // 0x2E30 (size: 0x9E0)
    FTextStyles TextStyles;                                                           // 0x3810 (size: 0x1CF0)
    FLogStyle LogStyle;                                                               // 0x5500 (size: 0xA0)
    FQueueStyle QueueStyle;                                                           // 0x55A0 (size: 0x1410)
    FIconsStyle IconsStyle;                                                           // 0x69B0 (size: 0xE58)
    FInputStyle InputStyle;                                                           // 0x7808 (size: 0x110)
    FInventoryStyle InventoryStyle;                                                   // 0x7918 (size: 0xB8)
    FItemStyle ItemStyle;                                                             // 0x79D0 (size: 0x1A0)
    FItemSubtypeStyle ItemSubtypeStyle;                                               // 0x7B70 (size: 0x38)
    FStatusStyle StatusEntriesStyle;                                                  // 0x7BA8 (size: 0x908)
    FActionsStyle ActionEntriesStyle;                                                 // 0x84B0 (size: 0xACA8)
    FColorsStyle ColorsStyle;                                                         // 0x13158 (size: 0x300)
    FDialogBoxStyle DialogBoxStyle;                                                   // 0x13458 (size: 0xD78)
    FProgressBarButtonStyle ProgressBarButtonStyle;                                   // 0x141D0 (size: 0x388)
    FButtonStyle PrototypeButtonStyle;                                                // 0x14558 (size: 0x278)
    FHelpToolTipStyle HelpToolTipStyle;                                               // 0x147D0 (size: 0x300)
    FHelpToolTipStyle ShortWarHelpToolTipStyle;                                       // 0x14AD0 (size: 0x300)
    FRocketSiteStyle RocketSiteStyle;                                                 // 0x14DD0 (size: 0x230)
    FStaticCheckBoxStyle StaticCheckBoxStyle;                                         // 0x15000 (size: 0x110)
    FInteractContextMenuStyle InteractContextMenuStyle;                               // 0x15110 (size: 0x198)
    float XSpaceBetweenColumns;                                                       // 0x152A8 (size: 0x4)
    float YSpaceBetweenWidgets;                                                       // 0x152AC (size: 0x4)
    float SimScreenSideColumnWidth;                                                   // 0x152B0 (size: 0x4)
    float SimScreenCenterColumnWidth;                                                 // 0x152B4 (size: 0x4)
    float SimScreenColumnHeight;                                                      // 0x152B8 (size: 0x4)
    float BackgroundBlurStrength;                                                     // 0x152BC (size: 0x4)
    FComboBoxStyle DropdownStyle;                                                     // 0x152C0 (size: 0x3D8)
    FTableRowStyle DropdownRowStyle;                                                  // 0x15698 (size: 0x7C8)
    FListViewStyle ListViewStyle;                                                     // 0x15E60 (size: 0xB70)
    FFactionSelectStyle FactionSelectStyle;                                           // 0x169D0 (size: 0x5A0)
    FLobbyStyle LobbyStyle;                                                           // 0x16F70 (size: 0x3B0)
    FSquadStyle SquadStyle;                                                           // 0x17320 (size: 0x1738)
    FTechTreeStyle TechTreeComponentStyle;                                            // 0x18A58 (size: 0x660)
    FTechTreeStyle TechTreeStyle;                                                     // 0x190B8 (size: 0x660)
    FHospitalStyle HospitalStyle;                                                     // 0x19718 (size: 0x198)
    FInfrastructuresStyle InfrastructuresStyle;                                       // 0x198B0 (size: 0x23A0)
    FWarStandardColour StandardColour;                                                // 0x1BC50 (size: 0x70)
    FReserveStockpileStyle ReserveStockpileStyle;                                     // 0x1BCC0 (size: 0x1078)
    FWarAchievementsStyle WarAchievementsStyle;                                       // 0x1CD38 (size: 0x98)
    FSlateBrush FactionIcons;                                                         // 0x1CDD0 (size: 0x110)
    FSlateBrush PlayerOnlineStatusIcons;                                              // 0x1CEE0 (size: 0x220)
    FGeneralPurposeIcons GeneralPurposeIcons;                                         // 0x1D100 (size: 0x88)
    FWeatherStyle WeatherStyle;                                                       // 0x1D188 (size: 0x778)
    FListeningAreaStyle ListeningAreaStyle;                                           // 0x1D900 (size: 0x88)
    FGearboxStyle GearboxStyle;                                                       // 0x1D988 (size: 0x110)
    FButtonStyle ItemHolderSortButtonStyle;                                           // 0x1DA98 (size: 0x278)
    FSearchBarStyle MapSearchBarStyle;                                                // 0x1DD10 (size: 0x1170)

}; // Size: 0x1EE80

struct FBatchModifiedRegimentIdMessage
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    int8 FactionId;                                                                   // 0x0004 (size: 0x1)
    TArray<FString> OnlineIdList;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBatchRegimentIdRequest
{
    int32 RequestID;                                                                  // 0x0000 (size: 0x4)
    TArray<FString> OnlineIds;                                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBatchRegimentIdResponse
{
    int32 RequestID;                                                                  // 0x0000 (size: 0x4)
    TArray<int32> RegimentIds;                                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBenchmarkReplay
{
    FVector StartPosition;                                                            // 0x0000 (size: 0xC)
    FRotator StartRotation;                                                           // 0x000C (size: 0xC)
    TArray<FBenchmarkReplayFrame> Frames;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FBenchmarkReplayFrame
{
    int32 Frame;                                                                      // 0x0000 (size: 0x4)
    FVector Input;                                                                    // 0x0004 (size: 0xC)
    bool bWantsToSprint;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FBorderBaseInfo
{
    EWorldConquestMapId BorderMapID;                                                  // 0x0000 (size: 0x1)
    EHexDirection HexDirection;                                                       // 0x0001 (size: 0x1)
    uint8 RoadID;                                                                     // 0x0002 (size: 0x1)
    FDateTime NextClaimTime;                                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FBridgeSideState
{
    bool bIsControlEnabled;                                                           // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FBuildFootprintInfo
{
    bool bCheckForLandscape;                                                          // 0x0000 (size: 0x1)
    bool bCheckForObstructions;                                                       // 0x0001 (size: 0x1)
    uint8 IgnoreMask;                                                                 // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FBuildResponse
{
    EBuildResponse Result;                                                            // 0x0000 (size: 0x1)
    EPlacementStatus PlacementStatus;                                                 // 0x0001 (size: 0x1)
    class AStructure* Structure;                                                      // 0x0008 (size: 0x8)
    FName CodeName;                                                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FBuildSocketTag
{
    int64 SocketTypeMask;                                                             // 0x0000 (size: 0x8)
    int64 SocketTypeCategory;                                                         // 0x0008 (size: 0x8)
    FName Tag;                                                                        // 0x0010 (size: 0x8)
    FName ShowsTag;                                                                   // 0x0018 (size: 0x8)
    FName ShowsTagBoth;                                                               // 0x0020 (size: 0x8)
    FName ShowsTagHigher;                                                             // 0x0028 (size: 0x8)
    FName HidesTagBoth;                                                               // 0x0030 (size: 0x8)
    FName HidesTagHigher;                                                             // 0x0038 (size: 0x8)
    float MaxZOffset;                                                                 // 0x0040 (size: 0x4)
    EBuildSocketTagRule ApplicationRule;                                              // 0x0044 (size: 0x4)
    FName ConnectorAttachmentTag;                                                     // 0x0048 (size: 0x8)
    bool bIgnoreHidesTag;                                                             // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FBuildStyle
{
    FSlateBrush Categories;                                                           // 0x0000 (size: 0x4C8)

}; // Size: 0x4C8

struct FButtonStyles
{
    FButtonStyle OrangeHighlight;                                                     // 0x0000 (size: 0x278)
    FButtonStyle NoBGOrangeHighlight;                                                 // 0x0278 (size: 0x278)
    FButtonStyle Grey;                                                                // 0x04F0 (size: 0x278)
    FButtonStyle Red;                                                                 // 0x0768 (size: 0x278)

}; // Size: 0x9E0

struct FCachedLandscape
{
    FTransform LandscapeActorToWorld;                                                 // 0x0000 (size: 0x30)
    FBox Bounds;                                                                      // 0x0030 (size: 0x1C)
    class ALandscapeProxy* Proxy;                                                     // 0x0050 (size: 0x8)

}; // Size: 0x60

struct FCachedPlayerState
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)
    int32 RegimentID;                                                                 // 0x0020 (size: 0x4)
    int32 SquadId;                                                                    // 0x0024 (size: 0x4)
    int8 Level;                                                                       // 0x0028 (size: 0x1)
    int8 Rank;                                                                        // 0x0029 (size: 0x1)
    FString PlayerName;                                                               // 0x0030 (size: 0x10)
    int8 TeamId;                                                                      // 0x0040 (size: 0x1)
    float RecentTeamKills;                                                            // 0x0044 (size: 0x4)
    float RecentFriendlyCharacterDamage;                                              // 0x0048 (size: 0x4)
    float RecentFriendlyStructureDamage;                                              // 0x004C (size: 0x4)
    float RecentFriendlyVehicleDamage;                                                // 0x0050 (size: 0x4)
    int16 RecentNameChanges;                                                          // 0x0054 (size: 0x2)
    FDateTime TimeWhenCached;                                                         // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FCachedWorldStructure
{
    TSubclassOf<class AStructure> StructureClass;                                     // 0x0000 (size: 0x8)
    FVector WorldPosition;                                                            // 0x0008 (size: 0xC)

}; // Size: 0x18

struct FCalloutInfo
{
    FText Message;                                                                    // 0x0000 (size: 0x18)
    bool RequiresWorldMarker;                                                         // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FCharacterConditions
{
    EEquippedWeaponGripType GripType;                                                 // 0x0000 (size: 0x1)
    EWeatherType WeatherType;                                                         // 0x0001 (size: 0x1)
    float MaxVelocity;                                                                // 0x0004 (size: 0x4)
    float TriggerChance;                                                              // 0x0008 (size: 0x4)
    bool bRequiresGripType;                                                           // 0x000C (size: 0x1)
    bool bRequiresWeather;                                                            // 0x000D (size: 0x1)
    bool bRequiresWarming;                                                            // 0x000E (size: 0x1)

}; // Size: 0x10

struct FCharacterCustomizationInfo
{
    bool bIsFemale;                                                                   // 0x0000 (size: 0x1)
    int8 SkinTone;                                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FCharacterInvokeInfo
{
    FVector_NetQuantize ImpactPoint;                                                  // 0x0000 (size: 0xC)
    FMuzzleOffsetVector_NetQuantize MuzzleOffset;                                     // 0x000C (size: 0xC)
    FQuantizedTimestamp RenderTimestamp;                                              // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FCharacterRenderInfo
{
    class USkeletalMesh* Torso;                                                       // 0x0000 (size: 0x8)
    class UMaterialInterface* TorsoMaterial;                                          // 0x0008 (size: 0x8)
    class USkeletalMesh* Legs;                                                        // 0x0010 (size: 0x8)
    class UMaterialInterface* LegsMaterial;                                           // 0x0018 (size: 0x8)
    class USkeletalMesh* Back;                                                        // 0x0020 (size: 0x8)
    class UMaterialInterface* BackMaterial;                                           // 0x0028 (size: 0x8)
    class USkeletalMesh* Head;                                                        // 0x0030 (size: 0x8)
    class UMaterialInterface* HeadMaterial;                                           // 0x0038 (size: 0x8)
    class USkeletalMesh* Hands;                                                       // 0x0040 (size: 0x8)
    class UMaterialInterface* HandsMaterial;                                          // 0x0048 (size: 0x8)
    class USkeletalMesh* Helmet;                                                      // 0x0050 (size: 0x8)
    bool bCanUpdateHeadSkinTone;                                                      // 0x0058 (size: 0x1)
    bool bCanUpdateHandSkinTone;                                                      // 0x0059 (size: 0x1)

}; // Size: 0x60

struct FCharacterSkinToneInfo
{
    class UMaterialInstance* HeadMaterial;                                            // 0x0000 (size: 0x8)
    class UMaterialInstance* HandsMaterial;                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FChatChannelStyle
{
    FRichTextFieldColor Color;                                                        // 0x0000 (size: 0x20)
    FRichTextFieldColor MessageColor;                                                 // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FChatStyle
{
    TMap<class EChatChannel, class FChatChannelStyle> ChannelStyleMap;                // 0x0000 (size: 0x50)
    FRichTextFieldColor EnemyNameColor;                                               // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FCheatDisbandRegimentRequest
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    int32 RegimentID;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCheatDisbandRegimentResponse
{
    FCheatDisbandRegimentRequest Request;                                             // 0x0000 (size: 0xC)
    FString RegimentName;                                                             // 0x0010 (size: 0x10)
    FString RegimentTag;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FCheatEditRegimentRequest
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    int32 RegimentID;                                                                 // 0x0008 (size: 0x4)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Tag;                                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FCheatEditRegimentResponse
{
    FCheatEditRegimentRequest Request;                                                // 0x0000 (size: 0x30)

}; // Size: 0x30

struct FCheatGetRegimentInfoRequest
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    ERegimentQueryType QueryType;                                                     // 0x0008 (size: 0x1)
    FString QueryValue;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCheatGetRegimentInfoResponse
{
    FCheatGetRegimentInfoRequest Request;                                             // 0x0000 (size: 0x20)
    TArray<FRegiment> RegimentList;                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FCheatGetSquadInfoRequest
{
    FString AdminOnlineID;                                                            // 0x0000 (size: 0x10)
    FString TargetOnlineID;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCheatGetSquadInfoResponse
{
    FCheatGetSquadInfoRequest CheatGetSquadInfoRequest;                               // 0x0000 (size: 0x20)
    int32 ExpectedSquadId;                                                            // 0x0020 (size: 0x4)
    TArray<int32> ColonialSquadIds;                                                   // 0x0028 (size: 0x10)
    TArray<int32> WardenSquadIds;                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FCheatMakeRegimentCommanderRequest
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    FString CurrentCommanderOnlineID;                                                 // 0x0008 (size: 0x10)
    FString NewCommanderOnlineID;                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FCheatMakeRegimentCommanderResponse
{
    FCheatMakeRegimentCommanderRequest Request;                                       // 0x0000 (size: 0x28)
    bool bIsSuccess;                                                                  // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FCheatRemoveFromRegimentRequest
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    FString TargetOnlineID;                                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FCheatRemoveFromRegimentResponse
{
    FCheatRemoveFromRegimentRequest Request;                                          // 0x0000 (size: 0x18)
    bool bIsSuccess;                                                                  // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FCheatRemoveFromSquadRequest
{
    FString AdminOnlineID;                                                            // 0x0000 (size: 0x10)
    FString TargetOnlineID;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCheatRemoveFromSquadResponse
{
    FCheatRemoveFromSquadRequest CheatRemoveFromSquadRequest;                         // 0x0000 (size: 0x20)
    TArray<int32> RemovedFromColonialSquadIds;                                        // 0x0020 (size: 0x10)
    TArray<int32> RemovedFromWardenSquadIds;                                          // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FCheatViewRegimentInfoRequest
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    int32 RegimentID;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCheatViewRegimentInfoResponse
{
    FCheatViewRegimentInfoRequest Request;                                            // 0x0000 (size: 0xC)
    FString RegimentName;                                                             // 0x0010 (size: 0x10)
    FString RegimentTag;                                                              // 0x0020 (size: 0x10)
    FString Link;                                                                     // 0x0030 (size: 0x10)
    EFactionId FactionId;                                                             // 0x0040 (size: 0x1)
    int32 Members;                                                                    // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FCheatViewSquadInfoRequest
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    int32 SquadId;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCheatViewSquadInfoResponse
{
    FUObjectHandle Admin;                                                             // 0x0000 (size: 0x8)
    int32 SquadId;                                                                    // 0x0008 (size: 0x4)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString LeaderOnlineID;                                                           // 0x0020 (size: 0x10)
    FString LeaderName;                                                               // 0x0030 (size: 0x10)
    int16 MemberCount;                                                                // 0x0040 (size: 0x2)
    int16 InactiveMemberCount;                                                        // 0x0042 (size: 0x2)

}; // Size: 0x48

struct FClaimStatus
{
    bool bIsEnabled;                                                                  // 0x0000 (size: 0x1)
    bool bAllowReclaim;                                                               // 0x0001 (size: 0x1)
    bool bCanBeDemolished;                                                            // 0x0002 (size: 0x1)
    bool bCanBuildSiteBeDemolished;                                                   // 0x0003 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0004 (size: 0x1)
    int32 SquadId;                                                                    // 0x0008 (size: 0x4)
    int64 ClaimTime;                                                                  // 0x0010 (size: 0x8)
    int64 OriginalBuildTime;                                                          // 0x0018 (size: 0x8)
    int16 ClaimDurationHours;                                                         // 0x0020 (size: 0x2)
    int16 DemolishDurationHours;                                                      // 0x0022 (size: 0x2)

}; // Size: 0x28

struct FClearSquadsConditionalWarMessage
{
    int32 MinAgeMinutes;                                                              // 0x0000 (size: 0x4)
    int32 MaxHistoricalPlayers;                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FClientShardConfig
{
    int32 PopulationCap;                                                              // 0x0000 (size: 0x4)
    int32 RequiredVictoryTowns;                                                       // 0x0004 (size: 0x4)
    int32 ShortRequiredVictoryTowns;                                                  // 0x0008 (size: 0x4)
    FDateTime ScheduledConquestStartTime;                                             // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FCodeNameQuantity
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int32 Quantity;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FCodeNameSmallQuantity
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int16 Quantity;                                                                   // 0x0008 (size: 0x2)

}; // Size: 0xC

struct FColorsStyle
{
    FSlateBrush ButtonBackground;                                                     // 0x0000 (size: 0x88)
    FButtonStyle Button;                                                              // 0x0088 (size: 0x278)

}; // Size: 0x300

struct FCommendHistory
{
    FString CommendedPlayerID;                                                        // 0x0000 (size: 0x10)
    int32 NumCommends;                                                                // 0x0010 (size: 0x4)
    int64 LastCommendUnixTimestamp;                                                   // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FCommsRating
{
    ECommsRatingCondition Condition;                                                  // 0x0010 (size: 0x1)

}; // Size: 0x20

struct FCommsRatingChatVoteInfo
{
}; // Size: 0x18

struct FConcreteSettler
{
    int64 StartTimeDateTimeTicks;                                                     // 0x0000 (size: 0x8)
    bool bEnabled;                                                                    // 0x0008 (size: 0x1)
    float ConcreteSettleDurationMins;                                                 // 0x000C (size: 0x4)
    float RoughnessStart;                                                             // 0x0010 (size: 0x4)
    float RoughnessEnd;                                                               // 0x0014 (size: 0x4)
    FLinearColor ColourStart;                                                         // 0x0018 (size: 0x10)
    FLinearColor ColourEnd;                                                           // 0x0028 (size: 0x10)

}; // Size: 0x48

struct FConnectionRule
{
    bool bDirectional;                                                                // 0x0000 (size: 0x1)
    ESocketDirection Direction;                                                       // 0x0004 (size: 0x4)
    int64 SocketTypeMask;                                                             // 0x0008 (size: 0x8)
    TArray<FName> ShowsTags;                                                          // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FConnectorConfiguration
{
    int8 SocketIndex;                                                                 // 0x0000 (size: 0x1)
    FVector TargetLocation;                                                           // 0x0004 (size: 0xC)
    FQuat TargetRotation;                                                             // 0x0010 (size: 0x10)
    uint8 CustomData;                                                                 // 0x0020 (size: 0x1)
    EConnectorConfigurationFlag Flags;                                                // 0x0021 (size: 0x1)

}; // Size: 0x30

struct FConquestOverNotificationInfo
{
    uint8 ConquestWinner;                                                             // 0x0000 (size: 0x1)
    int8 NumColonialAchievements;                                                     // 0x0001 (size: 0x1)
    int8 NumWardenAchievements;                                                       // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FConstructionEquipmentConfig
{
    float MaxDeltaAngleToIgnoreRotation;                                              // 0x0000 (size: 0x4)
    float ScoopingAnimHalfwayDuration;                                                // 0x0004 (size: 0x4)
    float ScoopingAnimCompletionDuration;                                             // 0x0008 (size: 0x4)
    float MinAnimDuration;                                                            // 0x000C (size: 0x4)
    float MaxAnimDuration;                                                            // 0x0010 (size: 0x4)
    float ScoopDoorOpenDuration;                                                      // 0x0014 (size: 0x4)
    float MaterialDropDuration;                                                       // 0x0018 (size: 0x4)
    float MinScoopRotation;                                                           // 0x001C (size: 0x4)
    float MaxScoopRotation;                                                           // 0x0020 (size: 0x4)
    float MinScoopDoorRotation;                                                       // 0x0024 (size: 0x4)
    float MaxScoopDoorRotation;                                                       // 0x0028 (size: 0x4)
    float MinDistance;                                                                // 0x002C (size: 0x4)
    float MaxDistance;                                                                // 0x0030 (size: 0x4)
    float MinHeight;                                                                  // 0x0034 (size: 0x4)
    float MaxHeight;                                                                  // 0x0038 (size: 0x4)
    float StartingScoopDoorRotation;                                                  // 0x003C (size: 0x4)
    float StartingScoopRotation;                                                      // 0x0040 (size: 0x4)
    float StartingHeight;                                                             // 0x0044 (size: 0x4)
    float StartingDistance;                                                           // 0x0048 (size: 0x4)
    float StartingRotation;                                                           // 0x004C (size: 0x4)
    float ScoopingAnimStartHeight;                                                    // 0x0050 (size: 0x4)
    float ScoopingAnimMidHeight;                                                      // 0x0054 (size: 0x4)
    float ScoopingAnimStartDistance;                                                  // 0x0058 (size: 0x4)
    float ScoopingAnimEndDistance;                                                    // 0x005C (size: 0x4)
    float ScoopingAnimStartScoopRotation;                                             // 0x0060 (size: 0x4)
    float ScoopingAnimEndScoopRotation;                                               // 0x0064 (size: 0x4)
    float DumpMaterialHeight;                                                         // 0x0068 (size: 0x4)
    int32 GhostMaterialIndices;                                                       // 0x006C (size: 0x8)
    class UMaterial* GhostMaterial;                                                   // 0x0078 (size: 0x8)
    class UStaticMesh* ScoopMaterialMesh;                                             // 0x0080 (size: 0x8)
    FVector2D ArmHalfDimensions;                                                      // 0x0088 (size: 0x8)
    float ScoopRadius;                                                                // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FConstructionEquipmentServerState
{
    TWeakObjectPtr<class ABuildSite> TargetBuildSite;                                 // 0x0000 (size: 0x8)
    float ServerTimestamp;                                                            // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FContainerStyle
{
    float HeaderHeight;                                                               // 0x0000 (size: 0x4)
    FSlateBrush HeaderImage;                                                          // 0x0008 (size: 0x88)
    FSlateBrush VeryLightContentImage;                                                // 0x0090 (size: 0x88)
    FSlateBrush LightContentImage;                                                    // 0x0118 (size: 0x88)
    FSlateBrush ContentImage;                                                         // 0x01A0 (size: 0x88)
    FSlateBrush DarkContentImage;                                                     // 0x0228 (size: 0x88)
    FSlateBrush CategoryImage;                                                        // 0x02B0 (size: 0x88)

}; // Size: 0x338

struct FContextMenuStyle
{
    FSlateBrush WhisperOnIcon;                                                        // 0x0000 (size: 0x88)
    FSlateBrush CommendOnIcon;                                                        // 0x0088 (size: 0x88)
    FSlateBrush VoteKickOnIcon;                                                       // 0x0110 (size: 0x88)
    FSlateBrush ViolationLogIcon;                                                     // 0x0198 (size: 0x88)
    FSlateBrush VoiceMuteOnIcon;                                                      // 0x0220 (size: 0x88)
    FSlateBrush VoiceMuteOffIcon;                                                     // 0x02A8 (size: 0x88)
    FSlateBrush MuteOffIcon;                                                          // 0x0330 (size: 0x88)
    FSlateBrush MuteOnIcon;                                                           // 0x03B8 (size: 0x88)
    FSlateBrush SquadInviteOnIcon;                                                    // 0x0440 (size: 0x88)
    FSlateBrush RegimentInviteIcon;                                                   // 0x04C8 (size: 0x88)
    FSlateBrush RegimentPromoteIcon;                                                  // 0x0550 (size: 0x88)
    FSlateBrush RegimentDemoteIcon;                                                   // 0x05D8 (size: 0x88)
    FSlateBrush RegimentDischargeIcon;                                                // 0x0660 (size: 0x88)
    FTextBlockStyle MenuLabel;                                                        // 0x06E8 (size: 0x268)
    FTextBlockStyle MenuHeading;                                                      // 0x0950 (size: 0x268)
    FSlateBrush MenuBackground;                                                       // 0x0BB8 (size: 0x88)
    FTextBlockStyle MenuKeybinding;                                                   // 0x0C40 (size: 0x268)
    FCheckBoxStyle MenuCheckbox;                                                      // 0x0EA8 (size: 0x580)

}; // Size: 0x1428

struct FControlSurface
{
    FVector Verts;                                                                    // 0x0000 (size: 0x30)
    FVector Pivot;                                                                    // 0x0030 (size: 0xC)
    FVector2D Dimensions;                                                             // 0x003C (size: 0x8)
    bool bVertical;                                                                   // 0x0044 (size: 0x1)
    bool bInvertedControls;                                                           // 0x0045 (size: 0x1)

}; // Size: 0x48

struct FControlsPage
{
    TArray<FControlsPageRow> MainColumn;                                              // 0x0000 (size: 0x10)
    TArray<FControlsPageRow> AltColumn;                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FControlsPageEntry
{
    TArray<FControlsPageEntryHotkey> Hotkeys;                                         // 0x0000 (size: 0x10)
    FSlateBrush OptionalImage;                                                        // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FControlsPageEntryHotkey
{
    FSlateBrush Icon;                                                                 // 0x0000 (size: 0x88)
    FText IconText;                                                                   // 0x0088 (size: 0x18)
    FText Text;                                                                       // 0x00A0 (size: 0x18)

}; // Size: 0xB8

struct FControlsPageRow
{
    TArray<FControlsPageEntry> Entries;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConversionItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int32 Quantity;                                                                   // 0x0008 (size: 0x4)
    int32 Limit;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FConversionLiquid
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    float Quantity;                                                                   // 0x0008 (size: 0x4)
    float Limit;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FCraneComponentConfig
{
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;                      // 0x0000 (size: 0x8)
    TSubclassOf<class ACraneMarker> AimMarker;                                        // 0x0008 (size: 0x8)
    class UMaterial* GhostMaterial;                                                   // 0x0010 (size: 0x8)
    int32 GhostMaterialIndices;                                                       // 0x0018 (size: 0x8)
    class USoundCue* ArmMovementSFXLoop;                                              // 0x0020 (size: 0x8)
    class USoundCue* DeployingSFXLoop;                                                // 0x0028 (size: 0x8)
    class USoundCue* PulleyMovementSFXLoop;                                           // 0x0030 (size: 0x8)
    class USoundCue* DeployedSFXTrigger;                                              // 0x0038 (size: 0x8)
    class USoundCue* PickUpSFXTrigger;                                                // 0x0040 (size: 0x8)
    class USoundCue* DropOffSFXTrigger;                                               // 0x0048 (size: 0x8)
    EShippableType MaxUndeployedShippableSize;                                        // 0x0050 (size: 0x1)
    float DeployedCameraViewRadius;                                                   // 0x0054 (size: 0x4)
    float MinHorizontalDistanceToTarget;                                              // 0x0058 (size: 0x4)
    float MaxHorizontalDistanceToTarget;                                              // 0x005C (size: 0x4)
    float MaxHeight;                                                                  // 0x0060 (size: 0x4)
    float PulleyOffset;                                                               // 0x0064 (size: 0x4)
    float DefaultCabRotationZ;                                                        // 0x0068 (size: 0x4)
    float MinCabRotationZ;                                                            // 0x006C (size: 0x4)
    float MaxCabRotationZ;                                                            // 0x0070 (size: 0x4)
    float CabRotationSpeed;                                                           // 0x0074 (size: 0x4)
    float CabRotationSpeedWithShippable;                                              // 0x0078 (size: 0x4)
    float HorizontalArmSpeed;                                                         // 0x007C (size: 0x4)
    float HorizontalArmSpeedWithShippable;                                            // 0x0080 (size: 0x4)
    float VerticalArmSpeed;                                                           // 0x0084 (size: 0x4)
    float VerticalArmSpeedWithShippable;                                              // 0x0088 (size: 0x4)
    float PulleySpeed;                                                                // 0x008C (size: 0x4)
    float PulleySpeedWithShippable;                                                   // 0x0090 (size: 0x4)
    float HookRotationSpeed;                                                          // 0x0094 (size: 0x4)
    float HookRotationSpeedWithShippable;                                             // 0x0098 (size: 0x4)
    FVector2D ArmHalfDimensions;                                                      // 0x009C (size: 0x8)
    FName ArmStartSocketName;                                                         // 0x00A4 (size: 0x8)
    FName ArmEndSocketName;                                                           // 0x00AC (size: 0x8)
    bool bIsAlwaysDeployed;                                                           // 0x00B4 (size: 0x1)
    bool bRequiresPower;                                                              // 0x00B5 (size: 0x1)
    bool bUseClosestCabRotationZ;                                                     // 0x00B6 (size: 0x1)
    bool bAllowsInventoryAccess;                                                      // 0x00B7 (size: 0x1)

}; // Size: 0xB8

struct FCraneComponents
{
    class USkeletalMeshComponent* MainMesh;                                           // 0x0000 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x0008 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x0010 (size: 0x8)
    class UBoxComponent* ShippableCollision;                                          // 0x0018 (size: 0x8)
    class UAudioComponent* ArmMovementSFXLoop;                                        // 0x0020 (size: 0x8)
    class UAudioComponent* DeployingSFXLoop;                                          // 0x0028 (size: 0x8)
    class UAudioComponent* PulleyMovementSFXLoop;                                     // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FCraterInfo
{
    TSubclassOf<class ACrater> Crater;                                                // 0x0000 (size: 0x8)
    TArray<class UPhysicalMaterial*> BlockingPhysicalMaterials;                       // 0x0008 (size: 0x10)
    float Radius;                                                                     // 0x0018 (size: 0x4)
    float OuterRadius;                                                                // 0x001C (size: 0x4)
    float SpawnWeight;                                                                // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FCraterMeshStop
{
    float Length;                                                                     // 0x0000 (size: 0x4)
    class UStaticMesh* StaticMesh;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FCreateDebugMapPostRequest
{
    FCreateMapPostRequest Request;                                                    // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FCreateMapPostRequest
{
    FString Text;                                                                     // 0x0000 (size: 0x10)
    FVector2D NormalizedMapCoords;                                                    // 0x0010 (size: 0x8)
    int8 MapId;                                                                       // 0x0018 (size: 0x1)
    EMapPostType MapPostType;                                                         // 0x0019 (size: 0x1)
    EFacilityMapPostType FacilityMapPostType;                                         // 0x001A (size: 0x1)
    bool bIsModModeOn;                                                                // 0x001B (size: 0x1)
    int32 GroupId;                                                                    // 0x001C (size: 0x4)

}; // Size: 0x20

struct FCreateRegimentWarMessage
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Tag;                                                                      // 0x0010 (size: 0x10)
    FString Link;                                                                     // 0x0020 (size: 0x10)
    int8 FactionId;                                                                   // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FCreateSquadWarMessage
{
    FString Name;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCrossRegionActorData
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FVector2D OriginLocation;                                                         // 0x0004 (size: 0x8)
    float OriginLocationZ;                                                            // 0x000C (size: 0x4)
    FRotator Rotation;                                                                // 0x0010 (size: 0xC)
    TArray<uint8> Serialized;                                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FCrossRegionSerializedActor
{
    UClass* ActorClass;                                                               // 0x0000 (size: 0x8)
    TArray<uint8> ActorBytes;                                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FCursorStyle
{
    FSlateBrush Brush;                                                                // 0x0000 (size: 0x88)
    FVector2D Offset;                                                                 // 0x0088 (size: 0x8)

}; // Size: 0x90

struct FDamageAttributes
{
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;                               // 0x0000 (size: 0x8)
    TSubclassOf<class AImpactEffect> ImpactEffect;                                    // 0x0008 (size: 0x8)
    TSubclassOf<class USimDamageType> DamageType;                                     // 0x0010 (size: 0x8)
    class USoundCue* ShotSoundCue;                                                    // 0x0018 (size: 0x8)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x0020 (size: 0x8)
    float WeaponDamage;                                                               // 0x0028 (size: 0x4)
    float BestJitterConeHalfAngle;                                                    // 0x002C (size: 0x4)
    float WorstJitterConeHalfAngle;                                                   // 0x0030 (size: 0x4)
    float FiringPeriod;                                                               // 0x0034 (size: 0x4)
    float TimeToFullFireRateAndAccuracy;                                              // 0x0038 (size: 0x4)
    float EnemyPursueDuration;                                                        // 0x003C (size: 0x4)
    float ArmourDamageModifier;                                                       // 0x0040 (size: 0x4)
    float TargetStabilityReductionPerShot;                                            // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FDamageMitigation
{
    float Mitigation;                                                                 // 0x0000 (size: 0x4)
    class USoundBase* SFX;                                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDamageProfile : public FTableRowBase
{
    float LightVehicle;                                                               // 0x0008 (size: 0x4)
    float Tier1Tank;                                                                  // 0x000C (size: 0x4)
    float Tier2Tank;                                                                  // 0x0010 (size: 0x4)
    float Tier0Structure;                                                             // 0x0014 (size: 0x4)
    float Tier1Structure;                                                             // 0x0018 (size: 0x4)
    float Tier2Structure;                                                             // 0x001C (size: 0x4)
    float Tier2BStructure;                                                            // 0x0020 (size: 0x4)
    float Tier3Structure;                                                             // 0x0024 (size: 0x4)
    float Tier3BStructure;                                                            // 0x0028 (size: 0x4)
    float HeavyBuildSite;                                                             // 0x002C (size: 0x4)
    float Tier1GarrisonHouse;                                                         // 0x0030 (size: 0x4)
    float Tier2GarrisonHouse;                                                         // 0x0034 (size: 0x4)
    float Tier3GarrisonHouse;                                                         // 0x0038 (size: 0x4)
    float Trench;                                                                     // 0x003C (size: 0x4)
    float Tier1LargeShip;                                                             // 0x0040 (size: 0x4)
    float Tier1Ship;                                                                  // 0x0044 (size: 0x4)
    float WorldStructureHusk;                                                         // 0x0048 (size: 0x4)
    float Ice;                                                                        // 0x004C (size: 0x4)

}; // Size: 0x50

struct FDayNightCycleCubemapInfo
{
    float SunHeight;                                                                  // 0x0000 (size: 0x4)
    class UTextureCube* CubeMap;                                                      // 0x0008 (size: 0x8)
    float WhiteBalanceTemp;                                                           // 0x0010 (size: 0x4)
    FLinearColor FilmTint;                                                            // 0x0014 (size: 0x10)
    FLinearColor FilmTintShadow;                                                      // 0x0024 (size: 0x10)
    float Saturation;                                                                 // 0x0034 (size: 0x4)
    float Contrast;                                                                   // 0x0038 (size: 0x4)
    float CrushShadows;                                                               // 0x003C (size: 0x4)
    float CrushHighlights;                                                            // 0x0040 (size: 0x4)
    float Toe;                                                                        // 0x0044 (size: 0x4)
    float DirectionalLightTemperature;                                                // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FDecalData
{
    class UMaterialInterface* DecalMaterial;                                          // 0x0000 (size: 0x8)
    FVector DecalSize;                                                                // 0x0008 (size: 0xC)
    float LifeSpan;                                                                   // 0x0014 (size: 0x4)
    float FadeScreenSize;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FDecayInfo
{
    float FractionalSuppliesConsumed;                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FDecayPreventionStructureCounts
{
    int32 PossibleStructureCount;                                                     // 0x0000 (size: 0x4)
    int32 ClosestStructureCount;                                                      // 0x0004 (size: 0x4)
    int32 PreferredStructureCount;                                                    // 0x0008 (size: 0x4)
    int32 PreferredSuppliesPerTick;                                                   // 0x000C (size: 0x4)

}; // Size: 0x10

struct FDeleteMapPostRequest
{
    FString OriginalPosterOnlineId;                                                   // 0x0000 (size: 0x10)
    FString RequesterOnlineID;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDeleteMapPostResponse
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)
    FString DeletedPostOwnerOnlineID;                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FDenySquadOfficerToLeaderWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FDeployHistory
{
    FDateTime LastDeployTime;                                                         // 0x0000 (size: 0x8)
    FDateTime LastDeployTimeAlt;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDeploymentQueueEntry
{
    class ASimPlayerController* Controller;                                           // 0x0000 (size: 0x8)
    EWorldConquestMapId TargetMapID;                                                  // 0x0008 (size: 0x1)
    FSpawnPoint TravelPoint;                                                          // 0x000C (size: 0x4)
    bool bIsRecovery;                                                                 // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FDeviceIdBanRequest
{
    FString TargetDeviceId;                                                           // 0x0000 (size: 0x10)
    int64 BanDurationSec;                                                             // 0x0010 (size: 0x8)
    int64 UnderReviewDurationSec;                                                     // 0x0018 (size: 0x8)
    EBanReason BanReason;                                                             // 0x0020 (size: 0x1)
    FString AdminOnlineID;                                                            // 0x0028 (size: 0x10)
    FString AdminPlayerName;                                                          // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FDeviceIdBannedMessage
{
    FDeviceIdBanRequest DeviceIdBanRequest;                                           // 0x0000 (size: 0x48)
    bool bIsSenderServer;                                                             // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FDialogBoxStyle
{
    FSlateBrush BackgroundImage;                                                      // 0x0000 (size: 0x88)
    FTextBlockStyle MessageTextStyle;                                                 // 0x0088 (size: 0x268)
    FEditableTextBoxStyle TextInputBoxStyle;                                          // 0x02F0 (size: 0x7F0)
    FTextBlockStyle ButtonTextStyle;                                                  // 0x0AE0 (size: 0x268)
    FSlateColor BackgroundFillColour;                                                 // 0x0D48 (size: 0x28)
    float BackgroundBlurStrength;                                                     // 0x0D70 (size: 0x4)

}; // Size: 0xD78

struct FDisbandRegimentMessage
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FDynamicState
{
    float OpenAnimationDuration;                                                      // 0x0000 (size: 0x4)
    float ClosedAnimationDuration;                                                    // 0x0004 (size: 0x4)
    EDynamicState State;                                                              // 0x0008 (size: 0x1)

}; // Size: 0x18

struct FDynamicTierInfo
{
    bool bIsEnabled;                                                                  // 0x0000 (size: 0x1)
    TSubclassOf<class UWindowMeshSet> WindowMeshSet;                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FEmoteActivityOptions
{
    bool bLockStance;                                                                 // 0x0000 (size: 0x1)
    bool bHideWeapon;                                                                 // 0x0001 (size: 0x1)
    TArray<ESimCharacterStance> AllowedStances;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FEncumbranceManager
{
    bool bEnableItemEncumbrance;                                                      // 0x0000 (size: 0x1)
    bool bEnableMudEncumbrance;                                                       // 0x0001 (size: 0x1)
    FEncumbranceModifiers EncumbranceModifiers;                                       // 0x0004 (size: 0x50)
    int32 CurrentItemEncumbrance;                                                     // 0x0054 (size: 0x4)
    int32 CurrentMudEncumbrance;                                                      // 0x0058 (size: 0x4)

}; // Size: 0x88

struct FEncumbranceModifiers
{
    int32 BaselineEnc;                                                                // 0x0000 (size: 0x4)
    int32 MaxEnc;                                                                     // 0x0004 (size: 0x4)
    float ZeroEncTurnRateMod;                                                         // 0x0008 (size: 0x4)
    float ZeroEncMoveSpeedMod;                                                        // 0x000C (size: 0x4)
    float MaxEncTurnRateMod;                                                          // 0x0010 (size: 0x4)
    float MaxEncWalkingSpeedMod;                                                      // 0x0014 (size: 0x4)
    float MaxEncSprintingStaminaDrainMod;                                             // 0x0018 (size: 0x4)
    float MaxEncStaminaRestoreMod;                                                    // 0x001C (size: 0x4)
    float MaxEncEngineForceModifier;                                                  // 0x0020 (size: 0x4)
    float OverEncWalkingSpeedMod;                                                     // 0x0024 (size: 0x4)
    float OverEncTurnRateMod;                                                         // 0x0028 (size: 0x4)
    float OverEncSprintingStaminaDrainMod;                                            // 0x002C (size: 0x4)
    float OverEncStaminaRestoreMod;                                                   // 0x0030 (size: 0x4)
    float CurrentMaxSpeedMod;                                                         // 0x0034 (size: 0x4)
    float CurrentMaxSprintSpeedMod;                                                   // 0x0038 (size: 0x4)
    float CurrentTurnMod;                                                             // 0x003C (size: 0x4)
    float CurrentSprintingStaminaDrainMod;                                            // 0x0040 (size: 0x4)
    float CurrentStaminaRestoreMod;                                                   // 0x0044 (size: 0x4)
    float CurrentMassAlpha;                                                           // 0x0048 (size: 0x4)
    float CurrentEngineForceModifier;                                                 // 0x004C (size: 0x4)

}; // Size: 0x50

struct FEnvironmentModificationKey
{
}; // Size: 0x8

struct FExplosionMaterialOverride
{
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;                                    // 0x0000 (size: 0x1)
    class UParticleSystem* ExplosionFX;                                               // 0x0008 (size: 0x8)
    class USoundCue* ExplosionSFX;                                                    // 0x0010 (size: 0x8)
    FDecalData Decal;                                                                 // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FExternalWarServiceReplicatedState
{
    FRegimentClientReplicatedState RegimentClientReplicatedState;                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FFacilityLightRenderInfo
{
    class UMeshComponent* MeshComponent;                                              // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FFacilityModification
{
    TArray<FMultiConversionInfo> ConversionEntries;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FFacilityRefineryOrder
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)
    TArray<FCodeNameQuantity> Input;                                                  // 0x0020 (size: 0x10)
    TArray<FCodeNameQuantity> CrateInput;                                             // 0x0030 (size: 0x10)
    TArray<FFuelQuantity> FuelInput;                                                  // 0x0040 (size: 0x10)
    TArray<FCodeNameQuantity> Output;                                                 // 0x0050 (size: 0x10)
    TArray<FCodeNameQuantity> CrateOutput;                                            // 0x0060 (size: 0x10)
    TArray<FFuelQuantity> FuelOutput;                                                 // 0x0070 (size: 0x10)
    int8 Index;                                                                       // 0x0080 (size: 0x1)
    EAccessLevel AccessLevel;                                                         // 0x0081 (size: 0x1)
    bool bHasConsumedMaterials;                                                       // 0x0082 (size: 0x1)
    bool bIsBlocked;                                                                  // 0x0083 (size: 0x1)
    EFacilityRefineryOrderState State;                                                // 0x0084 (size: 0x1)
    float ConsumeAmountModifier;                                                      // 0x0088 (size: 0x4)
    float ProgressNormalized;                                                         // 0x008C (size: 0x4)
    int64 LastUseTime;                                                                // 0x0090 (size: 0x8)

}; // Size: 0xA0

struct FFacilityStyle
{
    FSlateBrush ArrowBrush;                                                           // 0x0000 (size: 0x88)
    FSlateBrush PowerBrush;                                                           // 0x0088 (size: 0x88)
    FButtonStyle DisabledButtonStyle;                                                 // 0x0110 (size: 0x278)
    FButtonStyle PausedButtonStyle;                                                   // 0x0388 (size: 0x278)
    FButtonStyle EnabledButtonStyle;                                                  // 0x0600 (size: 0x278)
    FButtonStyle ConversionInfoStyle;                                                 // 0x0878 (size: 0x278)

}; // Size: 0xAF0

struct FFactionResourceState
{
    int32 AluminumAmount;                                                             // 0x0000 (size: 0x4)
    int32 TargetAluminumAmount;                                                       // 0x0004 (size: 0x4)
    int32 CopperAmount;                                                               // 0x0008 (size: 0x4)
    int32 TargetCopperAmount;                                                         // 0x000C (size: 0x4)
    int32 IronAmount;                                                                 // 0x0010 (size: 0x4)
    int32 TargetIronAmount;                                                           // 0x0014 (size: 0x4)
    int32 RareMetalAmount;                                                            // 0x0018 (size: 0x4)
    int32 TargetRareMetalAmount;                                                      // 0x001C (size: 0x4)
    double ActivityAmount;                                                            // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FFactionSelectStyle
{
    FButtonStyle ColonialButtonStyle;                                                 // 0x0000 (size: 0x278)
    FButtonStyle WardenButtonStyle;                                                   // 0x0278 (size: 0x278)
    FText ColonialHeader;                                                             // 0x04F0 (size: 0x18)
    FText WardenHeader;                                                               // 0x0508 (size: 0x18)
    FSlateColor FactionHeadTextColour;                                                // 0x0520 (size: 0x28)
    FText ColonialFlavourText;                                                        // 0x0548 (size: 0x18)
    FText WardenFlavourText;                                                          // 0x0560 (size: 0x18)
    FSlateColor QueueWarningImageColour;                                              // 0x0578 (size: 0x28)

}; // Size: 0x5A0

struct FFactoryProductionCategory
{
    EFactoryQueueType Type;                                                           // 0x0000 (size: 0x1)
    TArray<FFactoryProductionItem> CategoryItems;                                     // 0x0008 (size: 0x10)

}; // Size: 0x20

struct FFactoryProductionItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FFactoryQueue
{
    EFactoryQueueType Type;                                                           // 0x0000 (size: 0x1)
    float CraftingProgress;                                                           // 0x0004 (size: 0x4)
    float CraftingSpeedFactor;                                                        // 0x0008 (size: 0x4)
    TArray<FSpecializedFactoryOrder> Orders;                                          // 0x0010 (size: 0x10)
    TArray<FSpecializedFactoryOrder> CompletedOrders;                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FFestivalRenderInfo
{
    TArray<FMaterialOverride> MaterialOverrides;                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FFireIntensityThreshold
{
    EFireIntensity Intensity;                                                         // 0x0000 (size: 0x1)
    float DamageThreshold;                                                            // 0x0004 (size: 0x4)
    float FlamesPerSquareMeter;                                                       // 0x0008 (size: 0x4)
    float CharacterBurn;                                                              // 0x000C (size: 0x4)
    float FireDamageBaseGainRate;                                                     // 0x0010 (size: 0x4)
    float FireDamageBaseDecayRate;                                                    // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FFlameImpactFXInfo
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    bool bActive;                                                                     // 0x000C (size: 0x1)

}; // Size: 0x10

struct FFoliageModificationInfo
{
    class UStaticMesh* OriginalMesh;                                                  // 0x0000 (size: 0x8)
    TSubclassOf<class AClientFoliageReplacement> Replacement;                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFootPrintActorInfo
{
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0000 (size: 0x8)
    TSubclassOf<class ADecalActor> FootPrintActorLeft;                                // 0x0008 (size: 0x8)
    TSubclassOf<class ADecalActor> FootPrintActorRight;                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FFortEmpConfig
{
    class UStaticMesh* FirstLRArtillerySegmentMesh;                                   // 0x0000 (size: 0x8)
    class UStaticMesh* SecondLRArtillerySegmentMesh;                                  // 0x0008 (size: 0x8)
    class UStaticMesh* FirstIntelCenterSegmentMesh;                                   // 0x0010 (size: 0x8)
    class UStaticMesh* SecondIntelCenterSegmentMesh;                                  // 0x0018 (size: 0x8)
    class UStaticMesh* FirstWeatherStationSegmentMesh;                                // 0x0020 (size: 0x8)
    class UStaticMesh* SecondWeatherStationSegmentMesh;                               // 0x0028 (size: 0x8)
    class UStaticMesh* FirstFortGarrisonSegmentMesh;                                  // 0x0030 (size: 0x8)
    class UStaticMesh* SecondFortGarrisonSegmentMesh;                                 // 0x0038 (size: 0x8)
    FName LRArtilleryPartCodeName;                                                    // 0x0040 (size: 0x8)
    FName WeatherStationPartCodeName;                                                 // 0x0048 (size: 0x8)
    FName IntelCenterPartCodeName;                                                    // 0x0050 (size: 0x8)
    FName FortGarrisonPartCodeName;                                                   // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FFreighterCargo
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    FSavedShippableData SavedData;                                                    // 0x0008 (size: 0xD0)

}; // Size: 0xD8

struct FFriendlyFireStats
{
    int32 TeamKills;                                                                  // 0x0000 (size: 0x4)
    int32 CharacterDamage;                                                            // 0x0004 (size: 0x4)
    int32 StructureDamage;                                                            // 0x0008 (size: 0x4)
    int32 VehicleDamage;                                                              // 0x000C (size: 0x4)
    int32 NameChanges;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FFuelInfo
{
    FFuelTank Tank;                                                                   // 0x0000 (size: 0x14)
    float ConsumptionRate;                                                            // 0x0014 (size: 0x4)

}; // Size: 0x20

struct FFuelQuantity
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    float Quantity;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FFuelStyle
{
    FButtonStyle Button;                                                              // 0x0000 (size: 0x278)

}; // Size: 0x278

struct FFuelTank
{
    float RemainingFuel;                                                              // 0x0000 (size: 0x4)
    float FuelCapacity;                                                               // 0x0004 (size: 0x4)
    FName FuelItemCodeName;                                                           // 0x0008 (size: 0x8)
    bool bCanRefuelFromTanker;                                                        // 0x0010 (size: 0x1)
    bool bCanSiphon;                                                                  // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FFuelTankerInfo
{
    class AActor* OwnerActor;                                                         // 0x0000 (size: 0x8)
    class UItemHolderComponent* OwnerItemHolder;                                      // 0x0008 (size: 0x8)
    class UGenericStockpileComponent* OwnerGenericStockpile;                          // 0x0010 (size: 0x8)
    class UStealthComponent* OwnerStealthComponent;                                   // 0x0018 (size: 0x8)
    class UAudioComponent* RefuelAudioComponent;                                      // 0x0020 (size: 0x8)
    float AmountRefueledPerSecond;                                                    // 0x0028 (size: 0x4)
    float RefuelCycleDuration;                                                        // 0x002C (size: 0x4)
    FVector FuelLocation;                                                             // 0x0030 (size: 0xC)
    class USoundCue* RefuelActivateSound;                                             // 0x0040 (size: 0x8)
    class USoundCue* RefuelSoundLoop;                                                 // 0x0048 (size: 0x8)
    class UMaterialInterface* RefuelCableMaterial;                                    // 0x0050 (size: 0x8)
    class UCableComponent* RefuelCableComponent;                                      // 0x0058 (size: 0x8)
    class AActor* TargetActorToRefuel;                                                // 0x0060 (size: 0x8)
    FFuelQuantity FuelBuffer;                                                         // 0x0068 (size: 0xC)
    bool bEnabled;                                                                    // 0x0091 (size: 0x1)

}; // Size: 0x98

struct FGameServerProfile
{
    TMap<EUserVoteKickCategory, int32> VoteKickCategoryCountMap;                      // 0x0000 (size: 0x50)
    FDateTime TimeOfLastVoteKickAgainstMe;                                            // 0x0050 (size: 0x8)
    int64 TimeOfLastVoteKick;                                                         // 0x0058 (size: 0x8)
    FDateTime FirstMonthlyVoteKickTime;                                               // 0x0060 (size: 0x8)
    uint16 MonthlyVoteKickCount;                                                      // 0x0068 (size: 0x2)
    FDateTime FirstDailyVoteKickTime;                                                 // 0x0070 (size: 0x8)
    uint16 DailyVoteKickCount;                                                        // 0x0078 (size: 0x2)
    FDateTime LastLogin;                                                              // 0x0080 (size: 0x8)
    FString LastVersion;                                                              // 0x0088 (size: 0x10)
    FDateTime LastFriendlyFire;                                                       // 0x0098 (size: 0x8)
    float RecentTeamKills;                                                            // 0x00A0 (size: 0x4)
    float RecentFriendlyCharacterDamage;                                              // 0x00A4 (size: 0x4)
    float RecentFriendlyStructureDamage;                                              // 0x00A8 (size: 0x4)
    float RecentFriendlyVehicleDamage;                                                // 0x00AC (size: 0x4)
    int16 RecentNameChanges;                                                          // 0x00B0 (size: 0x2)
    uint8 RestrictedState;                                                            // 0x00B2 (size: 0x1)
    TArray<FDateTime> RestrictionClearTimes;                                          // 0x00B8 (size: 0x10)
    FString PreviousPlayerName;                                                       // 0x00C8 (size: 0x10)
    FDateTime LastFreshLoginTime;                                                     // 0x00D8 (size: 0x8)
    int32 RecentLoginCount;                                                           // 0x00E0 (size: 0x4)
    FString UniqueDeviceID;                                                           // 0x00E8 (size: 0x10)
    FPlayerWarState PlayerWarState;                                                   // 0x00F8 (size: 0xA8)
    FSavedCharacterInventory CharacterInventory;                                      // 0x01A0 (size: 0x28)
    float Health;                                                                     // 0x01C8 (size: 0x4)
    bool IsBleeding;                                                                  // 0x01CC (size: 0x1)
    uint8 PlayerFlags;                                                                // 0x01CD (size: 0x1)
    bool bIsGodMode;                                                                  // 0x01CE (size: 0x1)
    int32 NumSelfServeFactionUnlocksUsed;                                             // 0x01D0 (size: 0x4)
    FString OfflineCharacterServer;                                                   // 0x01D8 (size: 0x10)
    FDateTime OfflineCharacterCreationTime;                                           // 0x01E8 (size: 0x8)
    float NormalizedStamina;                                                          // 0x01F0 (size: 0x4)
    EOutfitType OutfitType;                                                           // 0x01F4 (size: 0x1)
    FCharacterCustomizationInfo CharacterCustomizationInfo;                           // 0x01F5 (size: 0x2)
    FDateTime VoteKickImmunityTime;                                                   // 0x01F8 (size: 0x8)

}; // Size: 0x200

struct FGameplayFlags
{
    int32 Flags;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FGameplayParams
{
    float SuppressMultiplier;                                                         // 0x0000 (size: 0x4)
    float SuppressLossRate;                                                           // 0x0004 (size: 0x4)
    float StabilityGainRateMultiplier;                                                // 0x0008 (size: 0x4)
    float CoverFactorFloor;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGangwayRampSaveState
{
    ERampState State;                                                                 // 0x0000 (size: 0x1)
    float RampAngle;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGatherResult
{
    FName ResourceCodeName;                                                           // 0x0000 (size: 0x8)
    int32 GatheredAmount;                                                             // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGearboxStyle
{
    FSlateBrush GearboxLow;                                                           // 0x0000 (size: 0x88)
    FSlateBrush GearboxHigh;                                                          // 0x0088 (size: 0x88)

}; // Size: 0x110

struct FGeneralPurposeIcons
{
    FSlateBrush DownwardTriangle;                                                     // 0x0000 (size: 0x88)

}; // Size: 0x88

struct FGenericStockpileConfig
{
    EStockpileEntryType Type;                                                         // 0x0000 (size: 0x1)
    int32 QuantityLimit;                                                              // 0x0004 (size: 0x4)
    int32 TotalQuantityLimit;                                                         // 0x0008 (size: 0x4)
    TMap<FName, int32> QuantityOverrides;                                             // 0x0010 (size: 0x50)
    TMap<FName, int32> TotalQuantityOverrides;                                        // 0x0060 (size: 0x50)
    TArray<FName> ValidEntriesOverride;                                               // 0x00B0 (size: 0x10)
    TArray<FStockpileEntry> PreStockedEntries;                                        // 0x00C0 (size: 0x10)
    TMap<FName, float> RetrieveDurationModifiers;                                     // 0x00D0 (size: 0x50)

}; // Size: 0x120

struct FGetAnalyticsEventsRequest
{
    FString WarId;                                                                    // 0x0000 (size: 0x10)
    EAnalyticsEventType EventType;                                                    // 0x0010 (size: 0x2)

}; // Size: 0x18

struct FGetAnalyticsEventsResponse
{
    TArray<FAnalyticsEvent> EventList;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGetBanAndProfileRequest
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGetBanAndProfileResponse
{
    FPlayerBan PlayerBan;                                                             // 0x0000 (size: 0x18)
    FGetProfileResponse ProfileResponse;                                              // 0x0018 (size: 0x58)

}; // Size: 0x70

struct FGetBanRequest
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGetBanResponse
{
    FPlayerBan PlayerBan;                                                             // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FGetMapPostsRequest
{
    bool bIsModModeOn;                                                                // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FGetMapPostsResponse
{
    TArray<FRepMapPost> MapPosts;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGetProfileRequest
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGetProfileResponse
{
    EGetProfileResponseCode ResponseCode;                                             // 0x0000 (size: 0x1)
    FWarPlayerProfileSerialized WarPlayerProfileSerializable;                         // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FGetSquadInfoWarMessage
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    int8 FactionId;                                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FGetSquadInfosResponse
{
    TArray<FSquadInfo> SquadInfos;                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGetSquadsResponse
{
    TArray<FSquad> Squads;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGetViolationsHttpRequest
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGetViolationsHttpResponse
{
    TArray<FViolationEvent> EventList;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGetViolationsRequest
{
}; // Size: 0x28

struct FGetViolationsResponse
{
}; // Size: 0x38

struct FGlobalAdminCommand
{
}; // Size: 0x30

struct FGlobalAdminCommandRequest
{
    TArray<FString> Params;                                                           // 0x0000 (size: 0x10)
    FString TargetServerName;                                                         // 0x0010 (size: 0x10)
    FString AdminOnlineID;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGlobalLogEntry
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)
    EGlobalLogEntryType Type;                                                         // 0x0020 (size: 0x1)
    int32 Value;                                                                      // 0x0024 (size: 0x4)
    FDateTime Timestamp;                                                              // 0x0028 (size: 0x8)
    int8 MapId;                                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FGlobalLogPage
{
    TArray<FGlobalLogEntry> Entries;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGlobalLogPageRequest
{
    int32 LogPageIndex;                                                               // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FGlobalLogPageResponse
{
    FGlobalLogPage LogPage;                                                           // 0x0000 (size: 0x10)
    int32 PageCount;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FGlobalResourceState
{
    FFactionResourceState Colonials;                                                  // 0x0000 (size: 0x28)
    FFactionResourceState Wardens;                                                    // 0x0028 (size: 0x28)

}; // Size: 0x50

struct FGlobalShardConfig
{
    int32 DefaultShardId;                                                             // 0x0000 (size: 0x4)
    bool bEnableOverpopMode;                                                          // 0x0004 (size: 0x1)
    bool bRedirectToShardSelector;                                                    // 0x0005 (size: 0x1)
    int32 OverpopShardId;                                                             // 0x0008 (size: 0x4)
    EOverpopText OverpopTextType;                                                     // 0x000C (size: 0x1)
    EOverpopButtonText OverpopYesButtonType;                                          // 0x000D (size: 0x1)
    EOverpopButtonText OverpopNoButtonType;                                           // 0x000E (size: 0x1)

}; // Size: 0x10

struct FGlobalShardProfile
{
    int32 XP;                                                                         // 0x0000 (size: 0x4)
    int16 CP;                                                                         // 0x0004 (size: 0x2)
    int8 CPToGive;                                                                    // 0x0006 (size: 0x1)
    int32 XPForCP;                                                                    // 0x0008 (size: 0x4)
    int8 Level;                                                                       // 0x000C (size: 0x1)
    TArray<FCommendHistory> CommendHistories;                                         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGlobalSpawnPoint
{
    FSpawnPoint Local;                                                                // 0x0000 (size: 0x4)
    FVector2D Location;                                                               // 0x0004 (size: 0x8)
    EWorldConquestMapId MapId;                                                        // 0x000C (size: 0x1)

}; // Size: 0x10

struct FGlobalSpawnPointMinimal
{
    uint32 ID;                                                                        // 0x0000 (size: 0x4)
    EWorldConquestMapId MapId;                                                        // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FGrenadeDynamicData : public FTableRowBase
{
    float MinTossSpeed;                                                               // 0x0008 (size: 0x4)
    float MaxTossSpeed;                                                               // 0x000C (size: 0x4)
    float GrenadeFuseTimer;                                                           // 0x0010 (size: 0x4)
    float GrenadeRangeLimit;                                                          // 0x0014 (size: 0x4)
    float ArmourDamageModifier;                                                       // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FGunnerInfo
{
    FName AmmoName;                                                                   // 0x0000 (size: 0x8)
    int32 AmmoAmount;                                                                 // 0x0008 (size: 0x4)
    FVector2D YawAndPitch;                                                            // 0x000C (size: 0x8)
    bool bIsFiring;                                                                   // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FHUDInfo
{
}; // Size: 0x40

struct FHUDStyle : public FSlateWidgetStyle
{
    FSlateBrush ActiveItemSlotBrush;                                                  // 0x0008 (size: 0x88)
    FButtonStyle InventorySlotButtonStyle;                                            // 0x0090 (size: 0x278)
    FSlateBrush InventorySlotImageBrush;                                              // 0x0308 (size: 0x88)
    FSlateBrush EquipmentSlotImageBrush;                                              // 0x0390 (size: 0x440)
    FSlateBrush EquippedInventorySlotBrush;                                           // 0x07D0 (size: 0x88)
    FSlateBrush UnequippedInventorySlotBrush;                                         // 0x0858 (size: 0x88)
    FSlateBrush StackBackgroundBrush;                                                 // 0x08E0 (size: 0x88)
    FSlateBrush CursorOverTargetBrush;                                                // 0x0968 (size: 0x88)
    FSlateBrush CursorNotReadyBrush;                                                  // 0x09F0 (size: 0x88)
    FSlateBrush CursorIdleBrush;                                                      // 0x0A78 (size: 0x88)
    FTextBlockStyle ItemStackSizeTextBlockStyle;                                      // 0x0B00 (size: 0x268)
    FTextBlockStyle ItemStackSizeSmallTextBlockStyle;                                 // 0x0D68 (size: 0x268)
    FTextBlockStyle ButtonTextBlockStyle;                                             // 0x0FD0 (size: 0x268)
    FTextBlockStyle MapMarkerNotifTextBlockStyle;                                     // 0x1238 (size: 0x268)
    FTextBlockStyle ChatChannelTextBlockStyle;                                        // 0x14A0 (size: 0x268)
    FTextBlockStyle ChatTextBlockStyle;                                               // 0x1708 (size: 0x268)
    FTextBlockStyle EndscreenHeadingStyle;                                            // 0x1970 (size: 0x268)
    FTextBlockStyle EndscreenTextBlockStyle;                                          // 0x1BD8 (size: 0x268)
    FTextBlockStyle WeeklyWarCountdownTextBlockStyle;                                 // 0x1E40 (size: 0x268)
    FTextBlockStyle WoundedTimeTextBlockStyle;                                        // 0x20A8 (size: 0x268)
    float WoundedTextOffsetNormalized;                                                // 0x2310 (size: 0x4)
    FSlateBrush DefaultBlackBackground;                                               // 0x2318 (size: 0x88)
    FSlateBrush StaminaBarTop;                                                        // 0x23A0 (size: 0x88)
    FSlateBrush StaminaBarBackground;                                                 // 0x2428 (size: 0x88)
    FSlateBrush HotbarBackground;                                                     // 0x24B0 (size: 0x88)
    FSlateBrush SideAlertBackground;                                                  // 0x2538 (size: 0x88)
    FSlateBrush StorageBoxBackground;                                                 // 0x25C0 (size: 0x88)
    FSlateBrush EquippedBackground;                                                   // 0x2648 (size: 0x88)
    FSlateBrush CompasBackground;                                                     // 0x26D0 (size: 0x88)
    FSlateBrush CompasPoints;                                                         // 0x2758 (size: 0x88)
    FSlateBrush CompasNeedle;                                                         // 0x27E0 (size: 0x88)
    FSlateBrush CompassCustomArrow;                                                   // 0x2868 (size: 0x88)
    FSlateBrush FistIcon;                                                             // 0x28F0 (size: 0x88)
    FSlateBrush EncumberedIcon;                                                       // 0x2978 (size: 0x88)
    FSlateBrush EncumberedOverIcon;                                                   // 0x2A00 (size: 0x88)
    FSlateBrush GasMaskFilterFullIcon;                                                // 0x2A88 (size: 0x88)
    FSlateBrush GasMaskFilterLowIcon;                                                 // 0x2B10 (size: 0x88)
    FSlateBrush GasMaskFilterEmptyIcon;                                               // 0x2B98 (size: 0x88)
    FSlateBrush RadioBackpackIcon;                                                    // 0x2C20 (size: 0x88)
    FSlateBrush RadioBackpackInactiveIcon;                                            // 0x2CA8 (size: 0x88)
    FSlateBrush InvisibleIcon;                                                        // 0x2D30 (size: 0x88)
    FSlateBrush BleedingIcon;                                                         // 0x2DB8 (size: 0x88)
    FSlateBrush FlareIcon;                                                            // 0x2E40 (size: 0x88)
    FSlateBrush SubsystemTrackIcon;                                                   // 0x2EC8 (size: 0x88)
    FSlateBrush SubsystemFuelTankIcon;                                                // 0x2F50 (size: 0x88)
    FSlateBrush SubsystemTurretIcon;                                                  // 0x2FD8 (size: 0x88)
    FSlateBrush CoverIcon1;                                                           // 0x3060 (size: 0x88)
    FSlateBrush CoverIcon2;                                                           // 0x30E8 (size: 0x88)
    FSlateBrush CoverIcon3;                                                           // 0x3170 (size: 0x88)
    FSlateBrush SuppressionIcon;                                                      // 0x31F8 (size: 0x88)
    FSlateBrush LockIcon;                                                             // 0x3280 (size: 0x88)
    FSlateBrush MapMarkerNotifBackground;                                             // 0x3308 (size: 0x88)
    FSlateBrush ChatTabIcon;                                                          // 0x3390 (size: 0x88)
    FButtonStyle ChatOptionsIcon;                                                     // 0x3418 (size: 0x278)
    FButtonStyle ChatDiscordButton;                                                   // 0x3690 (size: 0x278)
    FSlateBrush ChatTabNotificationBrush;                                             // 0x3908 (size: 0x88)
    FSlateBrush ChatMainBackground;                                                   // 0x3990 (size: 0x88)
    FSlateBrush ChatTextFieldBackground;                                              // 0x3A18 (size: 0x88)
    FSlateBrush ChatChannelFieldBackground;                                           // 0x3AA0 (size: 0x88)
    FButtonStyle ChatUpVoteButton;                                                    // 0x3B28 (size: 0x278)
    FSlateBrush ChatWarserviceConnectivityIcon;                                       // 0x3DA0 (size: 0x88)
    FTextBlockStyle DescHeaderTextStyle;                                              // 0x3E28 (size: 0x268)
    FTextBlockStyle DescBodyTextStyle;                                                // 0x4090 (size: 0x268)
    FSlateBrush DescBackgroundBrush;                                                  // 0x42F8 (size: 0x88)
    FSlateBrush DescBackgroundBrushNoBottom;                                          // 0x4380 (size: 0x88)
    FSlateBrush GenericDescBackgroundBrush;                                           // 0x4408 (size: 0x88)
    FSlateBrush GenericDescBackgroundBrush2;                                          // 0x4490 (size: 0x88)
    FButtonStyle CreationButtonStyle;                                                 // 0x4518 (size: 0x278)
    FTextBlockStyle CreationHeadingStyle;                                             // 0x4790 (size: 0x268)
    FSlateBrush CreationBackgroundBrush;                                              // 0x49F8 (size: 0x88)
    FButtonStyle ButtonStyle;                                                         // 0x4A80 (size: 0x278)
    FButtonStyle UseIconButtonStyle;                                                  // 0x4CF8 (size: 0x278)
    FButtonStyle RecruitIconButtonStyle;                                              // 0x4F70 (size: 0x278)
    FButtonStyle StorageIconButtonStyle;                                              // 0x51E8 (size: 0x278)
    FButtonStyle AlertsLogButtonStyle;                                                // 0x5460 (size: 0x278)
    FButtonStyle HiddenAlertsLogButtonStyle;                                          // 0x56D8 (size: 0x278)
    FButtonStyle AlertToggleClosedButtonStyle;                                        // 0x5950 (size: 0x278)
    FButtonStyle AlertToggleOpenButtonStyle;                                          // 0x5BC8 (size: 0x278)
    FButtonStyle XButtonStyle;                                                        // 0x5E40 (size: 0x278)
    FButtonStyle CheckmarkButtonStyle;                                                // 0x60B8 (size: 0x278)
    FChatStyle ChatStyle;                                                             // 0x6330 (size: 0x70)
    FSlateSound WinResultSound;                                                       // 0x63A0 (size: 0x18)
    FSlateSound WinResultVictorySound;                                                // 0x63B8 (size: 0x18)
    FSlateSound WinResultDefeatSound;                                                 // 0x63D0 (size: 0x18)
    FSlateBrush RailCouplerIcon;                                                      // 0x63E8 (size: 0x88)

}; // Size: 0x6470

struct FHelpToolTipStyle
{
    FButtonStyle Button;                                                              // 0x0000 (size: 0x278)
    FSlateBrush BackgroundImage;                                                      // 0x0278 (size: 0x88)

}; // Size: 0x300

struct FHitNotify
{
    class USceneComponent* HitComponent;                                              // 0x0000 (size: 0x8)
    FVector_NetQuantize HitLocation;                                                  // 0x0008 (size: 0xC)
    FVector_NetQuantizeNormal HitNormal;                                              // 0x0014 (size: 0xC)
    FVector_NetQuantizeNormal HitFromDirection;                                       // 0x0020 (size: 0xC)
    TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;                             // 0x002C (size: 0x8)
    float Damage;                                                                     // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FHornData
{
    class USoundCue* Sound;                                                           // 0x0000 (size: 0x8)
    float CooldownSeconds;                                                            // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FHospitalStyle
{
    FSlateBrush UnoccupiedBedImage;                                                   // 0x0000 (size: 0x88)
    FSlateBrush OccupiedBedImage;                                                     // 0x0088 (size: 0x88)
    FSlateBrush BedFillImage;                                                         // 0x0110 (size: 0x88)

}; // Size: 0x198

struct FIconInfo
{
}; // Size: 0x10

struct FIconsStyle
{
    FSlateBrush ShowAllItems;                                                         // 0x0000 (size: 0x88)
    FSlateBrush SmallArms;                                                            // 0x0088 (size: 0x88)
    FSlateBrush HeavyArms;                                                            // 0x0110 (size: 0x88)
    FSlateBrush HeavyAmmo;                                                            // 0x0198 (size: 0x88)
    FSlateBrush Utility;                                                              // 0x0220 (size: 0x88)
    FSlateBrush Medical;                                                              // 0x02A8 (size: 0x88)
    FSlateBrush Supplies;                                                             // 0x0330 (size: 0x88)
    FSlateBrush Uniforms;                                                             // 0x03B8 (size: 0x88)
    FSlateBrush Vehicles;                                                             // 0x0440 (size: 0x88)
    FSlateBrush Structures;                                                           // 0x04C8 (size: 0x88)
    FSlateBrush BasicMaterials;                                                       // 0x0550 (size: 0x88)
    FSlateBrush RefinedMaterials;                                                     // 0x05D8 (size: 0x88)
    FSlateBrush ExplosiveMaterials;                                                   // 0x0660 (size: 0x88)
    FSlateBrush RefinedFuel;                                                          // 0x06E8 (size: 0x88)
    FSlateBrush SmallGarrison;                                                        // 0x0770 (size: 0x88)
    FSlateBrush LargeGarrison;                                                        // 0x07F8 (size: 0x88)
    FSlateBrush AdvancedMining;                                                       // 0x0880 (size: 0x88)
    FSlateBrush Encumbrance;                                                          // 0x0908 (size: 0x88)
    FSlateBrush Personal;                                                             // 0x0990 (size: 0x88)
    FSlateBrush Squad;                                                                // 0x0A18 (size: 0x88)
    FSlateBrush Orders;                                                               // 0x0AA0 (size: 0x88)
    FSlateBrush Time;                                                                 // 0x0B28 (size: 0x88)
    FSlateBrush Supporters;                                                           // 0x0BB0 (size: 0x88)
    FSlateBrush MaintenanceSupplies;                                                  // 0x0C38 (size: 0x88)
    FSlateBrush CratesSubCategory;                                                    // 0x0CC0 (size: 0x88)
    FSlateBrush WeaponsStructures;                                                    // 0x0D48 (size: 0x88)
    FSlateBrush Reservable;                                                           // 0x0DD0 (size: 0x88)

}; // Size: 0xE58

struct FIdleAnimation
{
    class UAnimMontage* ActivityMontage;                                              // 0x0000 (size: 0x8)
    FCharacterConditions Conditions;                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FImpactEffectOverride
{
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;                                    // 0x0000 (size: 0x1)
    class UParticleSystem* EmitterTemplate;                                           // 0x0008 (size: 0x8)
    class USoundCue* HitSound;                                                        // 0x0010 (size: 0x8)
    FDecalData Decal;                                                                 // 0x0018 (size: 0x20)
    bool bOrientToHitDirection;                                                       // 0x0038 (size: 0x1)
    float DamageThreshold;                                                            // 0x003C (size: 0x4)

}; // Size: 0x40

struct FInfrastructureStyle
{
    FSlateBrush Icon;                                                                 // 0x0000 (size: 0x88)
    FText Name;                                                                       // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FInfrastructuresStyle
{
    FInfrastructureStyle Entries;                                                     // 0x0000 (size: 0x3C0)
    FTechTreeComponentUIItem Items;                                                   // 0x03C0 (size: 0x1CE0)
    FSlateBrush VoteBrush;                                                            // 0x20A0 (size: 0x88)
    FButtonStyle ActivityBonusButton;                                                 // 0x2128 (size: 0x278)

}; // Size: 0x23A0

struct FInitialCharacterState
{
    TArray<FItemInstance> ItemInstances;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInputAction
{
    FText Name;                                                                       // 0x0000 (size: 0x18)
    EInputActionCategory Category;                                                    // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FInputActions
{
    TMap<class FName, class FInputAction> Actions;                                    // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FInputStyle
{
    FSlateBrush PageUp;                                                               // 0x0000 (size: 0x88)
    FSlateBrush PageDown;                                                             // 0x0088 (size: 0x88)

}; // Size: 0x110

struct FInteractContextMenuStyle
{
    FSlateBrush LadderIcon;                                                           // 0x0000 (size: 0x88)
    FSlateBrush ServerTravelPortalIcon;                                               // 0x0088 (size: 0x88)
    FSlateBrush ReadableSignIcon;                                                     // 0x0110 (size: 0x88)

}; // Size: 0x198

struct FInventoryStyle
{
    FSlateBrush EncumbranceBorderBrush;                                               // 0x0000 (size: 0x88)
    FLinearColor LowEncumbranceColor;                                                 // 0x0088 (size: 0x10)
    FLinearColor MediumEncumbranceColor;                                              // 0x0098 (size: 0x10)
    FLinearColor HighEncumbranceColor;                                                // 0x00A8 (size: 0x10)

}; // Size: 0xB8

struct FInviteToRegimentMessage
{
    int32 InviterRegimentId;                                                          // 0x0000 (size: 0x4)
    FString TargetOnlineID;                                                           // 0x0008 (size: 0x10)
    FString InviterOnlineId;                                                          // 0x0018 (size: 0x10)
    FString InviterPlayerName;                                                        // 0x0028 (size: 0x10)
    int8 InviterFactionId;                                                            // 0x0038 (size: 0x1)
    FString RegimentName;                                                             // 0x0040 (size: 0x10)
    FString RegimentTag;                                                              // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FItemDynamicData : public FTableRowBase
{
    TArray<FProductionResource> CostPerCrate;                                         // 0x0008 (size: 0x10)
    int32 QuantityPerCrate;                                                           // 0x0018 (size: 0x4)
    float CrateProductionTime;                                                        // 0x001C (size: 0x4)
    float SingleRetrieveTime;                                                         // 0x0020 (size: 0x4)
    float CrateRetrieveTime;                                                          // 0x0024 (size: 0x4)
    int32 ResearchLevel;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FItemGroupLayer
{
    float MeshSizeX;                                                                  // 0x0000 (size: 0x4)
    float MeshSizeY;                                                                  // 0x0004 (size: 0x4)
    int32 MeshesAlongX;                                                               // 0x0008 (size: 0x4)
    int32 MeshesAlongY;                                                               // 0x000C (size: 0x4)
    FVector MeshOffset;                                                               // 0x0010 (size: 0xC)

}; // Size: 0x1C

struct FItemGroupRenderLayout
{
    class UStaticMesh* StaticMesh;                                                    // 0x0000 (size: 0x8)
    int32 MaxAmount;                                                                  // 0x0008 (size: 0x4)
    FItemGroupLayer LayerConfig;                                                      // 0x000C (size: 0x1C)
    FItemGroupLayer OddLayerConfig;                                                   // 0x0028 (size: 0x1C)
    float MeshSizeZ;                                                                  // 0x0044 (size: 0x4)
    float YawJitter;                                                                  // 0x0048 (size: 0x4)
    float PitchJitter;                                                                // 0x004C (size: 0x4)
    float RollJitter;                                                                 // 0x0050 (size: 0x4)
    float OffsetJitter;                                                               // 0x0054 (size: 0x4)
    float ScaleJitter;                                                                // 0x0058 (size: 0x4)
    float LayerScaleDownFactor;                                                       // 0x005C (size: 0x4)
    FVector2D LayerScaleDownFactor2D;                                                 // 0x0060 (size: 0x8)
    bool bAllowFlipX;                                                                 // 0x0068 (size: 0x1)
    bool bAllowFlipZ;                                                                 // 0x0069 (size: 0x1)
    bool bAllowOddLayerRotation;                                                      // 0x006A (size: 0x1)
    FVector LocalRotation;                                                            // 0x006C (size: 0xC)
    float LocalScale;                                                                 // 0x0078 (size: 0x4)
    bool bIgnoreGenerateLayoutData;                                                   // 0x007C (size: 0x1)

}; // Size: 0x80

struct FItemHolderData
{
    class UItemHolderComponent* Component;                                            // 0x0000 (size: 0x8)
    TArray<FItemInstance> Items;                                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FItemInstance
{
    class AItemPickup* PickupCDO;                                                     // 0x0000 (size: 0x8)
    class UItemComponent* ItemComponent;                                              // 0x0008 (size: 0x8)
    FName CodeName;                                                                   // 0x0010 (size: 0x8)
    int8 StackSize;                                                                   // 0x0018 (size: 0x1)
    uint16 Payload;                                                                   // 0x001A (size: 0x2)
    uint16 HolderId;                                                                  // 0x001C (size: 0x2)

}; // Size: 0x20

struct FItemProfileData
{
    bool bIsStockpilable;                                                             // 0x0000 (size: 0x1)
    bool bIsStackable;                                                                // 0x0001 (size: 0x1)
    bool bIsConvertibleToCrate;                                                       // 0x0002 (size: 0x1)
    bool bIsCratable;                                                                 // 0x0003 (size: 0x1)
    bool bIsStockpiledWithAmmo;                                                       // 0x0004 (size: 0x1)
    bool bUsableInVehicle;                                                            // 0x0005 (size: 0x1)
    int32 StackTransferLimit;                                                         // 0x0008 (size: 0x4)
    int32 RetrieveQuantity;                                                           // 0x000C (size: 0x4)
    int32 ReserveStockpileMaxQuantity;                                                // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FItemSlotFilter
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    TSet<FName> ExtraCodeNames;                                                       // 0x0008 (size: 0x50)
    int32 StackLimit;                                                                 // 0x0058 (size: 0x4)

}; // Size: 0xB0

struct FItemStyle
{
    float Size;                                                                       // 0x0000 (size: 0x4)
    FSlateColor EnabledColor;                                                         // 0x0008 (size: 0x28)
    FSlateColor DisabledColor;                                                        // 0x0030 (size: 0x28)
    FSlateColor CornerWidgetColor;                                                    // 0x0058 (size: 0x28)
    float CornerWidgetWidth;                                                          // 0x0080 (size: 0x4)
    float CornerWidgetHeight;                                                         // 0x0084 (size: 0x4)
    float CornerWidgetPadding;                                                        // 0x0088 (size: 0x4)
    FSlateBrush SlotFilterBrush;                                                      // 0x0090 (size: 0x88)
    FSlateBrush MultiSlotFilterBrush;                                                 // 0x0118 (size: 0x88)

}; // Size: 0x1A0

struct FItemSubtypeStyle
{
    float Size;                                                                       // 0x0000 (size: 0x4)
    float SecondaryHudSize;                                                           // 0x0004 (size: 0x4)
    float Padding;                                                                    // 0x0008 (size: 0x4)
    FSlateColor IconColour;                                                           // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FJoinSquadRequestMessage
{
    FJoinSquadWarMessage JoinMessage;                                                 // 0x0000 (size: 0x40)
    FString LeaderOnlineID;                                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FJoinSquadWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FSquadMember NewMember;                                                           // 0x0008 (size: 0x28)
    FString NewMemberRegimentTag;                                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FLandscapeDeformationTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FLargeShipGunnerInfo
{
    FVector2D YawAndPitch;                                                            // 0x0000 (size: 0x8)
    bool bIsWorking;                                                                  // 0x0008 (size: 0x1)
    bool bIsFiring;                                                                   // 0x0009 (size: 0x1)
    int32 AmmoAmount;                                                                 // 0x000C (size: 0x4)
    FName AmmoName;                                                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FLeakOffsetRange
{
    float RelativeStartX;                                                             // 0x0000 (size: 0x4)
    float RelativeEndX;                                                               // 0x0004 (size: 0x4)
    float Offset;                                                                     // 0x0008 (size: 0x4)
    ELeakOffsetRangeSide Side;                                                        // 0x000C (size: 0x1)

}; // Size: 0x10

struct FLiquidTank
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    float Amount;                                                                     // 0x0008 (size: 0x4)
    bool bIsTypeSet;                                                                  // 0x000C (size: 0x1)
    float MaxAmount;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FListViewStyle
{
    FHeaderRowStyle ListHeaderRowStyle;                                               // 0x0000 (size: 0xB70)

}; // Size: 0xB70

struct FListeningAreaDebugData
{
    FVector2D Location;                                                               // 0x0000 (size: 0x8)
    float Radius;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FListeningAreaStyle
{
    FSlateBrush RadiusBrush;                                                          // 0x0000 (size: 0x88)

}; // Size: 0x88

struct FLoSTraceHandle
{
}; // Size: 0x20

struct FLoadoutBackpackItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int32 Quantity;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FLoadoutData
{
    FString LoadoutName;                                                              // 0x0000 (size: 0x10)
    TArray<FLoadoutEquipmentItem> EquipmentItems;                                     // 0x0010 (size: 0x10)
    TArray<FLoadoutBackpackItem> BackpackItems;                                       // 0x0020 (size: 0x10)
    uint8 NumBackpackSlots;                                                           // 0x0030 (size: 0x1)
    uint8 bHasUniform;                                                                // 0x0031 (size: 0x1)
    uint8 bAllowPartialAssembly;                                                      // 0x0031 (size: 0x1)
    uint8 bAutoSubmitStarterItems;                                                    // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FLoadoutEquipmentItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    uint8 Quantity;                                                                   // 0x0008 (size: 0x1)
    EEquipmentSlot EquipmentSlot;                                                     // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FLoadoutSaveData
{
    TArray<FLoadoutData> LoadoutDataC;                                                // 0x0000 (size: 0x10)
    TArray<FLoadoutData> LoadoutDataW;                                                // 0x0010 (size: 0x10)
    int32 SelectedLoadoutIndexC;                                                      // 0x0020 (size: 0x4)
    int32 SelectedLoadoutIndexW;                                                      // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FLobbyStyle
{
    FSlateBrush ColonialImage;                                                        // 0x0000 (size: 0x88)
    FSlateBrush WardenImage;                                                          // 0x0088 (size: 0x88)
    FSlateColor TitleTextColour;                                                      // 0x0110 (size: 0x28)
    FButtonStyle EditButton;                                                          // 0x0138 (size: 0x278)

}; // Size: 0x3B0

struct FLocalModerationInfo
{
    FString LastUsedSteamID;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLocalShardProfile
{
    FGameServerProfile GameServerProfile;                                             // 0x0000 (size: 0x200)
    FString LastWarId;                                                                // 0x0200 (size: 0x10)
    FDateTime OfflineCharacterExpiry;                                                 // 0x0210 (size: 0x8)
    EWorldConquestMapId OfflineCharacterMapId;                                        // 0x0218 (size: 0x1)

}; // Size: 0x220

struct FLocalShardProfileSerialized
{
    TArray<uint8> GameServerProfileBytes;                                             // 0x0000 (size: 0x10)
    FString LastWarId;                                                                // 0x0010 (size: 0x10)
    int64 OfflineCharacterExpiry;                                                     // 0x0020 (size: 0x8)
    uint8 OfflineCharacterMapId;                                                      // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FLocationMeshStop
{
    class UStaticMesh* StaticMesh;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLocationSkeletalMeshStop
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLogCommsRatingChangeMessage
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    int8 NewCondition;                                                                // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FLogCreateRegimentRequest
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    FString RegimentName;                                                             // 0x0008 (size: 0x10)
    FString RegimentTag;                                                              // 0x0018 (size: 0x10)
    FString CreatorOnlineID;                                                          // 0x0028 (size: 0x10)
    FString CreatorName;                                                              // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLogCreateSquadRequest
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString SquadName;                                                                // 0x0008 (size: 0x10)
    FString CreatorOnlineID;                                                          // 0x0018 (size: 0x10)
    FString CreatorName;                                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FLogDisbandRegimentRequest
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    FString RegimentName;                                                             // 0x0008 (size: 0x10)
    FString RegimentTag;                                                              // 0x0018 (size: 0x10)
    FString InstigatorOnlineId;                                                       // 0x0028 (size: 0x10)
    FString InstigatorName;                                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLogEditRegimentRequest
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    FString RegimentName;                                                             // 0x0008 (size: 0x10)
    FString RegimentTag;                                                              // 0x0018 (size: 0x10)
    FString RegimentLink;                                                             // 0x0028 (size: 0x10)
    FString EditorOnlineID;                                                           // 0x0038 (size: 0x10)
    FString EditorName;                                                               // 0x0048 (size: 0x10)
    FString OldRegimentName;                                                          // 0x0058 (size: 0x10)
    FString OldRegimentTag;                                                           // 0x0068 (size: 0x10)
    FString OldRegimentLink;                                                          // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FLogRegimentMessage
{
    FString SenderName;                                                               // 0x0000 (size: 0x10)
    FString SenderOnlineId;                                                           // 0x0010 (size: 0x10)
    int8 SenderFactionId;                                                             // 0x0020 (size: 0x1)
    int32 RegimentID;                                                                 // 0x0024 (size: 0x4)
    FString RegimentName;                                                             // 0x0028 (size: 0x10)
    FString Text;                                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLogSquadMessage
{
    FString SenderName;                                                               // 0x0000 (size: 0x10)
    FString SenderOnlineId;                                                           // 0x0010 (size: 0x10)
    int8 SenderFactionId;                                                             // 0x0020 (size: 0x1)
    int32 SquadId;                                                                    // 0x0024 (size: 0x4)
    FString SquadName;                                                                // 0x0028 (size: 0x10)
    FString Text;                                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FLogStyle
{
    FSlateColor RetrieveColor;                                                        // 0x0000 (size: 0x28)
    FSlateColor SubmitColor;                                                          // 0x0028 (size: 0x28)
    FSlateColor ItemColor;                                                            // 0x0050 (size: 0x28)
    FSlateColor QuantityColor;                                                        // 0x0078 (size: 0x28)

}; // Size: 0xA0

struct FLogWhisperMessage
{
    FString SenderName;                                                               // 0x0000 (size: 0x10)
    FString SenderOnlineId;                                                           // 0x0010 (size: 0x10)
    int8 SenderFactionId;                                                             // 0x0020 (size: 0x1)
    FString RecipientName;                                                            // 0x0028 (size: 0x10)
    FString RecipientOnlineID;                                                        // 0x0038 (size: 0x10)
    FString Text;                                                                     // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FLoreData
{
    FText HeaderText;                                                                 // 0x0000 (size: 0x18)
    FSlateBrush Icon;                                                                 // 0x0018 (size: 0x88)
    FText FlavourText;                                                                // 0x00A0 (size: 0x18)
    FText BodyText;                                                                   // 0x00B8 (size: 0x18)
    FText HintText;                                                                   // 0x00D0 (size: 0x18)
    TArray<FName> ActionNames;                                                        // 0x00E8 (size: 0x10)

}; // Size: 0xF8

struct FMapData
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    EWorldConquestMapId WorldConquestMapId;                                           // 0x0018 (size: 0x1)
    class UTexture2D* Image;                                                          // 0x0020 (size: 0x8)
    bool bIsInHexGrid;                                                                // 0x0028 (size: 0x1)
    FIntPoint GridCoord;                                                              // 0x002C (size: 0x8)
    bool bIsIsland;                                                                   // 0x0034 (size: 0x1)
    bool bCanOceanTravel;                                                             // 0x0035 (size: 0x1)

}; // Size: 0x50

struct FMapDetailStockpileInfo
{
    TArray<FStockpileEntry> Items;                                                    // 0x0000 (size: 0x10)
    TArray<FStockpileEntry> ItemCrates;                                               // 0x0010 (size: 0x10)
    TArray<FStockpileEntry> Vehicles;                                                 // 0x0020 (size: 0x10)
    TArray<FStockpileEntry> VehicleCrates;                                            // 0x0030 (size: 0x10)
    TArray<FStockpileEntry> Structures;                                               // 0x0040 (size: 0x10)
    TArray<FStockpileEntry> StructureCrates;                                          // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FMapElementScale
{
    float MapData;                                                                    // 0x0000 (size: 0x4)
    float MapIntel;                                                                   // 0x0004 (size: 0x4)
    float MapText;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMapElementVisibilityZoomThresholds
{
    FVector2D MapNames;                                                               // 0x0000 (size: 0x8)
    FVector2D MapData;                                                                // 0x0008 (size: 0x8)
    FVector2D MajorMapMarkerText;                                                     // 0x0010 (size: 0x8)
    FVector2D MinorMapMarkerText;                                                     // 0x0018 (size: 0x8)
    FVector2D MapIntel;                                                               // 0x0020 (size: 0x8)
    FVector2D MapGrid;                                                                // 0x0028 (size: 0x8)
    FVector2D HexBorder;                                                              // 0x0030 (size: 0x8)
    FVector2D MapPostLowRank;                                                         // 0x0038 (size: 0x8)
    FVector2D MapPostHighRank;                                                        // 0x0040 (size: 0x8)
    FVector2D RegionZones;                                                            // 0x0048 (size: 0x8)
    FVector2D Weather;                                                                // 0x0050 (size: 0x8)
    FVector2D Railways;                                                               // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FMapGridConfig
{
    FLinearColor BackgroundColor;                                                     // 0x0000 (size: 0x10)
    FSlateBrush BackgroundImage;                                                      // 0x0010 (size: 0x88)
    float BackgroundImageScale;                                                       // 0x0098 (size: 0x4)
    FLinearColor LineColor;                                                           // 0x009C (size: 0x10)
    FLinearColor KeypadLineColor;                                                     // 0x00AC (size: 0x10)
    float LineThickness;                                                              // 0x00BC (size: 0x4)
    float LineExtension;                                                              // 0x00C0 (size: 0x4)
    FLinearColor KeypadHighlightColor;                                                // 0x00C4 (size: 0x10)
    float KeypadTextItemScale;                                                        // 0x00D4 (size: 0x4)
    FLinearColor TextColor;                                                           // 0x00D8 (size: 0x10)
    FLinearColor KeypadTextColor;                                                     // 0x00E8 (size: 0x10)
    float LetterPositionOffsetY;                                                      // 0x00F8 (size: 0x4)
    float NumberPositionOffsetX;                                                      // 0x00FC (size: 0x4)
    float TextItemScale;                                                              // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FMapIconStyle
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    EMapIconCategory Category;                                                        // 0x0008 (size: 0x2)
    bool bHideInSecureMap;                                                            // 0x000A (size: 0x1)
    bool bUseTeamSpecificIcon;                                                        // 0x000B (size: 0x1)
    float IntelDetectionRadius;                                                       // 0x000C (size: 0x4)
    float HalfDetectionAngle;                                                         // 0x0010 (size: 0x4)
    uint32 SortOrder;                                                                 // 0x0014 (size: 0x4)
    FSlateBrush FactionIconBrushes;                                                   // 0x0018 (size: 0x198)

}; // Size: 0x1B0

struct FMapIntelHistoricSnapshot
{
}; // Size: 0x18

struct FMapIntelList
{
    int8 MapId;                                                                       // 0x0000 (size: 0x1)
    TArray<int64> PackedIntelItems;                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMapIntelLoSRequest
{
}; // Size: 0x28

struct FMapIntelRequest
{
}; // Size: 0x1

struct FMapIntelResponse
{
    TArray<FMapIntelList> MapIntelLists;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMapIntelUpdate
{
    int8 MapId;                                                                       // 0x0000 (size: 0x1)
    TArray<int64> PackedColonialIntelItems;                                           // 0x0008 (size: 0x10)
    TArray<int64> PackedWardenIntelItems;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMapIntelligenceItem
{
    uint8 TeamId;                                                                     // 0x0000 (size: 0x1)
    EMapIntelligenceType Type;                                                        // 0x0001 (size: 0x1)
    float TimeRemaining;                                                              // 0x0004 (size: 0x4)
    FVector2D Location;                                                               // 0x0008 (size: 0x8)
    FVector2D NormalizedMapLocation;                                                  // 0x0010 (size: 0x8)
    bool bStructureWasAttackedRecently;                                               // 0x0018 (size: 0x1)
    uint8 ListeningTeamID;                                                            // 0x0019 (size: 0x1)

}; // Size: 0x1C

struct FMapIntelligenceTypeConfig
{
    EMapIntelCategory Category;                                                       // 0x0000 (size: 0x2)
    float FadeSeconds;                                                                // 0x0004 (size: 0x4)
    float ExpirySeconds;                                                              // 0x0008 (size: 0x4)
    FMapIntelligenceTypeIcon FactionIconBrush;                                        // 0x0010 (size: 0x220)
    bool bRequiresPlayerLineOfSight;                                                  // 0x0230 (size: 0x1)

}; // Size: 0x238

struct FMapIntelligenceTypeIcon
{
    FSlateBrush IconBrush;                                                            // 0x0000 (size: 0x88)
    FSlateBrush FadedIconBrush;                                                       // 0x0088 (size: 0x88)

}; // Size: 0x110

struct FMapItem
{
    int32 ObjectIndex;                                                                // 0x0000 (size: 0x4)
    int32 ObjectSerialNumber;                                                         // 0x0004 (size: 0x4)
    EMapTeamId TeamId;                                                                // 0x0008 (size: 0x1)
    EMapTeamId ListeningTeamID;                                                       // 0x0009 (size: 0x1)
    EMapIconType IconType;                                                            // 0x000A (size: 0x1)
    uint8 Flags;                                                                      // 0x000B (size: 0x1)
    FVector2D NormalizedLocation;                                                     // 0x000C (size: 0x8)
    uint8 ViewDirection;                                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FMapItemDetails
{
    uint16 Flags;                                                                     // 0x0000 (size: 0x2)
    int16 DetailValue;                                                                // 0x0002 (size: 0x2)
    int16 AltDetailValue;                                                             // 0x0004 (size: 0x2)
    FMapDetailStockpileInfo StockpileInfo;                                            // 0x0008 (size: 0x60)
    TArray<FReserveStockpileMapDetailInfo> ReserveStockpileInfoList;                  // 0x0068 (size: 0x10)
    TArray<uint8> Values;                                                             // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FMapItemInfo
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int16 DetailValue;                                                                // 0x0008 (size: 0x2)

}; // Size: 0xC

struct FMapLegendFactionStyle
{
    FSlateBrush InfantryBrush;                                                        // 0x0000 (size: 0x88)
    FSlateBrush VehicleBrush;                                                         // 0x0088 (size: 0x88)
    FSlateBrush LargeShipBrush;                                                       // 0x0110 (size: 0x88)
    FSlateBrush StructureBrush;                                                       // 0x0198 (size: 0x88)
    FSlateBrush DefenseBrush;                                                         // 0x0220 (size: 0x88)
    FSlateBrush HowitzerBrush;                                                        // 0x02A8 (size: 0x88)
    FSlateBrush OutpostBrush;                                                         // 0x0330 (size: 0x88)
    FSlateBrush FieldHospitalBrush;                                                   // 0x03B8 (size: 0x88)
    FSlateBrush FacilityBrush;                                                        // 0x0440 (size: 0x88)

}; // Size: 0x4C8

struct FMapLegendFilter
{
    uint16 VisibleCategories;                                                         // 0x0000 (size: 0x2)
    uint16 VisibleIntelC;                                                             // 0x0002 (size: 0x2)
    uint16 VisibleIntelW;                                                             // 0x0004 (size: 0x2)
    uint8 VisibleIcons;                                                               // 0x0006 (size: 0xC)

}; // Size: 0x12

struct FMapLegendStyle
{
    FSlateBrush WinConditionBrush;                                                    // 0x0000 (size: 0x88)
    FMapLegendFactionStyle Colonial;                                                  // 0x0088 (size: 0x4C8)
    FMapLegendFactionStyle Warden;                                                    // 0x0550 (size: 0x4C8)

}; // Size: 0xA18

struct FMapPostDetails
{
    uint16 Flags;                                                                     // 0x0000 (size: 0x2)
    TArray<FMapPostItemEntry> SummedItems;                                            // 0x0008 (size: 0x10)
    TArray<FMapItemInfo> MapItemInfos;                                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMapPostEntry
{
    FMapPostMember Member;                                                            // 0x0000 (size: 0x20)
    FString Text;                                                                     // 0x0020 (size: 0x10)
    int64 UnixTimeStamp;                                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FMapPostItemEntry
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int32 Quantity;                                                                   // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMapPostManager
{
}; // Size: 0x38

struct FMapPostMember
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMapPostQueryData
{
    int32 MapPostID;                                                                  // 0x0000 (size: 0x4)
    int8 MapId;                                                                       // 0x0004 (size: 0x1)
    int8 FacilityMapPostType;                                                         // 0x0005 (size: 0x1)
    FVector2D NormalizedMapCoords;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMapPostReplyRequest
{
    FString OriginalPosterOnlineId;                                                   // 0x0000 (size: 0x10)
    FString ReplyText;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMapPostReplyResponse
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMapPostRequest
{
    int32 MapPostID;                                                                  // 0x0000 (size: 0x4)
    int8 OriginMapID;                                                                 // 0x0004 (size: 0x1)
    EFactionId RequesterFactionID;                                                    // 0x0005 (size: 0x1)
    FString RequesterOnlineID;                                                        // 0x0008 (size: 0x10)
    FUObjectHandle Requester;                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FMapPostResponse
{
    FMapPostQueryData QueryData;                                                      // 0x0000 (size: 0x10)
    int8 OriginMapID;                                                                 // 0x0010 (size: 0x1)
    EFactionId RequesterFactionID;                                                    // 0x0011 (size: 0x1)
    FString RequesterOnlineID;                                                        // 0x0018 (size: 0x10)
    FUObjectHandle Requester;                                                         // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMapPostStyle
{
    FSlateBrush MarkerIcon;                                                           // 0x0000 (size: 0x88)
    FLinearColor GlobalTeamColour;                                                    // 0x0088 (size: 0x10)
    FLinearColor SquadColour;                                                         // 0x0098 (size: 0x10)
    FLinearColor RegimentColour;                                                      // 0x00A8 (size: 0x10)
    FLinearColor IntelligenceColour;                                                  // 0x00B8 (size: 0x10)
    FLinearColor FacilityColour;                                                      // 0x00C8 (size: 0x10)
    FLinearColor LogisticsColour;                                                     // 0x00D8 (size: 0x10)
    FButtonStyle UpVoteButton;                                                        // 0x00E8 (size: 0x278)
    FButtonStyle UpVoteButtonVoted;                                                   // 0x0360 (size: 0x278)
    FButtonStyle DownVoteButton;                                                      // 0x05D8 (size: 0x278)
    FButtonStyle DownVoteButtonVoted;                                                 // 0x0850 (size: 0x278)
    FButtonStyle ReplyButton;                                                         // 0x0AC8 (size: 0x278)
    FEditableTextBoxStyle TextInputBoxStyle;                                          // 0x0D40 (size: 0x7F0)
    FSlateBrush BackgroundImage;                                                      // 0x1530 (size: 0x88)
    FSlateBrush ContentBackgroundImage;                                               // 0x15B8 (size: 0x88)
    FSlateBrush FacilityPostMapIcons;                                                 // 0x1640 (size: 0x3B8)

}; // Size: 0x19F8

struct FMapPostVoteRequest
{
    FString OriginalPosterOnlineId;                                                   // 0x0000 (size: 0x10)
    EMapPostVoteType VoteType;                                                        // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FMapPostVoteResponse
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMapRailwayFactionMessage
{
    int8 FactionId;                                                                   // 0x0000 (size: 0x1)
    int8 MapId;                                                                       // 0x0001 (size: 0x1)
    TArray<FMapRailwayLine> Lines;                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMapRailwayLine
{
    FVector2D P0;                                                                     // 0x0000 (size: 0x8)
    FVector2D P1;                                                                     // 0x0008 (size: 0x8)
    FVector2D P2;                                                                     // 0x0010 (size: 0x8)
    FVector2D P3;                                                                     // 0x0018 (size: 0x8)
    FVector2D P4;                                                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMapRailwayMessage
{
    int8 MapId;                                                                       // 0x0000 (size: 0x1)
    int32 Version;                                                                    // 0x0004 (size: 0x4)
    TArray<FMapRailwayLine> Lines;                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMapRailwayRequest
{
}; // Size: 0x1

struct FMapRailwayResponse
{
    TArray<FMapRailwayMessage> Messages;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMapSnapshotDatum
{
    uint32 IntelCount;                                                                // 0x0000 (size: 0x4)
    bool RequesterScouted;                                                            // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FMapSnapshotRequest
{
}; // Size: 0x58

struct FMapStyle : public FSlateWidgetStyle
{
    FTextBlockStyle MapMarkerTextBlockStyle;                                          // 0x0008 (size: 0x268)
    FTextBlockStyle MajorMapMarkerTextBlockStyle;                                     // 0x0270 (size: 0x268)
    FTextBlockStyle MapNameTextBlockStyle;                                            // 0x04D8 (size: 0x268)
    FSlateBrush PlayerMarkerBrush;                                                    // 0x0740 (size: 0x88)
    FSlateBrush ClaimedTownColonial;                                                  // 0x07C8 (size: 0x88)
    FSlateBrush ClaimedTownWarden;                                                    // 0x0850 (size: 0x88)
    FSlateBrush WatchTowerRadiusBrush;                                                // 0x08D8 (size: 0x88)
    FSlateBrush WatchTowerConeBrush;                                                  // 0x0960 (size: 0x88)
    FMapGridConfig GridConfig;                                                        // 0x09E8 (size: 0x108)
    FLinearColor DisabledRegionTint;                                                  // 0x0AF0 (size: 0x10)
    float MinZoom;                                                                    // 0x0B00 (size: 0x4)
    float DefaultZoom;                                                                // 0x0B04 (size: 0x4)
    float MaxZoom;                                                                    // 0x0B08 (size: 0x4)
    FMapElementVisibilityZoomThresholds MapElementVisibilityZoomThresholds;           // 0x0B0C (size: 0x60)
    FMapElementScale MapElementScale;                                                 // 0x0B6C (size: 0xC)
    FLinearColor HexBorderColour;                                                     // 0x0B78 (size: 0x10)
    FLinearColor OceanZoneColour;                                                     // 0x0B88 (size: 0x10)
    float HexBorderThickness;                                                         // 0x0B98 (size: 0x4)
    float MinIconScale;                                                               // 0x0B9C (size: 0x4)
    float MaxIconScale;                                                               // 0x0BA0 (size: 0x4)
    float MinIntelIconScale;                                                          // 0x0BA4 (size: 0x4)
    float MaxIntelIconScale;                                                          // 0x0BA8 (size: 0x4)
    float MinPlayerMarkerScale;                                                       // 0x0BAC (size: 0x4)
    float MaxPlayerMarkerScale;                                                       // 0x0BB0 (size: 0x4)
    FSlateBrush TownBaseBrush;                                                        // 0x0BB8 (size: 0x88)
    FMapLegendStyle LegendStyle;                                                      // 0x0C40 (size: 0xA18)
    FLinearColor ScorchedIconColor;                                                   // 0x1658 (size: 0x10)
    FSlateBrush RegionMapContextBG;                                                   // 0x1668 (size: 0x88)
    FWinConditionStyle WinConditionStyle;                                             // 0x16F0 (size: 0x330)
    FMapPostStyle MapPostStyle;                                                       // 0x1A20 (size: 0x19F8)
    FTravelMapStyle TravelMapStyle;                                                   // 0x3418 (size: 0x530)
    FMapIconStyle MapIconStyles;                                                      // 0x3948 (size: 0x9480)

}; // Size: 0xCDC8

struct FMapTextItem
{
    FVector2D NormalizedLocation;                                                     // 0x0000 (size: 0x8)
    FString Text;                                                                     // 0x0008 (size: 0x10)
    EMapMarkerType MapMarkerType;                                                     // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMaterialOverride
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    class UMaterialInstance* Material;                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMeleeAttackData
{
    float StaminaCostNormalized;                                                      // 0x0000 (size: 0x4)
    float Damage;                                                                     // 0x0004 (size: 0x4)
    float Delay;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMeleeDynamicData : public FTableRowBase
{
    float ChargingMaxSpeedModifier;                                                   // 0x0008 (size: 0x4)
    float BlockingMaxSpeedModifier;                                                   // 0x000C (size: 0x4)
    FMeleeAttackData QuickAttack;                                                     // 0x0010 (size: 0xC)
    FMeleeAttackData LongAttack;                                                      // 0x001C (size: 0xC)

}; // Size: 0x28

struct FMeshConfigSurfaceSettings
{
    bool bEnableSurfaceDeltaLowerBound;                                               // 0x0000 (size: 0x1)
    float SurfaceDeltaLowerBound;                                                     // 0x0004 (size: 0x4)
    bool bEnableSurfaceDeltaUpperBound;                                               // 0x0008 (size: 0x1)
    float SurfaceDeltaUpperBound;                                                     // 0x000C (size: 0x4)
    bool bRequireBothSidesWithinBounds;                                               // 0x0010 (size: 0x1)
    TArray<class UPhysicalMaterial*> PhysMatBlockList;                                // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMeshStop
{
    int32 Threshold;                                                                  // 0x0000 (size: 0x4)
    class UStaticMesh* StaticMesh;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FModBanRequest
{
    FString TargetOnlineID;                                                           // 0x0000 (size: 0x10)
    FString TargetPlayerName;                                                         // 0x0010 (size: 0x10)
    FString TargetDeviceId;                                                           // 0x0020 (size: 0x10)
    int8 TargetPlayerTeamId;                                                          // 0x0030 (size: 0x1)
    int64 BanDurationSec;                                                             // 0x0038 (size: 0x8)
    int64 UnderReviewDurationSec;                                                     // 0x0040 (size: 0x8)
    EBanReason BanReason;                                                             // 0x0048 (size: 0x1)
    FString AdminOnlineID;                                                            // 0x0050 (size: 0x10)
    FString AdminPlayerName;                                                          // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FModerationHelper
{
}; // Size: 0x1

struct FModificationDefinition
{
    FText DisplayName;                                                                // 0x0000 (size: 0x18)
    FText Description;                                                                // 0x0018 (size: 0x18)
    FSlateBrush Icon;                                                                 // 0x0030 (size: 0x88)
    int64 RequiredSocketConnectionMask;                                               // 0x00B8 (size: 0x8)
    int64 HiddenBySocketConnectionMask;                                               // 0x00C0 (size: 0x8)
    bool bIsRemovable;                                                                // 0x00C8 (size: 0x1)
    bool bVehicleBlocksRemoval;                                                       // 0x00C9 (size: 0x1)
    bool bHiddenByDefault;                                                            // 0x00CA (size: 0x1)
    bool bVisualsAreClientOnly;                                                       // 0x00CB (size: 0x1)
    bool bShowInBuildSite;                                                            // 0x00CC (size: 0x1)
    bool bBuildFootprintIgnoresConnectedActors;                                       // 0x00CD (size: 0x1)
    ETechID TechID;                                                                   // 0x00CE (size: 0x2)
    EInfrastructureType InfrastructureType;                                           // 0x00D0 (size: 0x1)
    int32 InfrastructureAmount;                                                       // 0x00D4 (size: 0x4)
    TSubclassOf<class AModificationTemplate> BuildFootprintTemplate;                  // 0x00D8 (size: 0x8)
    TMap<class EFortTier, class FModificationTier> Tiers;                             // 0x00E0 (size: 0x50)

}; // Size: 0x130

struct FModificationSlotMigration
{
    uint8 PreviousComponentDirection;                                                 // 0x0000 (size: 0x1)
    EFortModificationType ModificationType;                                           // 0x0001 (size: 0x1)
    FName SlotName;                                                                   // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FModificationSocketPreviewInfo
{
    FName ModificationSlotComponentName;                                              // 0x0000 (size: 0x8)
    EFortModificationType ModificationType;                                           // 0x0008 (size: 0x1)
    EFortTier ModificationTier;                                                       // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FModificationTier
{
    FResourceAmounts ResourceAmounts;                                                 // 0x0000 (size: 0x20)
    FResourceAmounts RemoveCostOverride;                                              // 0x0020 (size: 0x20)
    bool bUseTemplateActor;                                                           // 0x0040 (size: 0x1)
    class UStaticMesh* TemplateMesh;                                                  // 0x0048 (size: 0x8)
    TSubclassOf<class AModificationTemplate> TemplateActor;                           // 0x0050 (size: 0x8)
    bool bUsePreviewMesh;                                                             // 0x0058 (size: 0x1)
    class UStaticMesh* PreviewMesh;                                                   // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FModifiedFoliageInfo
{
}; // Size: 0x10

struct FModifiedRegimentIdMessage
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    int8 FactionId;                                                                   // 0x0004 (size: 0x1)
    FString OnlineID;                                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FModifiedSquadIdMessage
{
    int8 FactionId;                                                                   // 0x0000 (size: 0x1)
    FString OnlineID;                                                                 // 0x0008 (size: 0x10)
    TArray<FModifiedSquadIdRecord> Records;                                           // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModifiedSquadIdRecord
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    bool bIsLeader;                                                                   // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FModifiedSquadInfoMessage
{
    FSquadInfo SquadInfo;                                                             // 0x0000 (size: 0x40)

}; // Size: 0x40

struct FModifiedSquadMessage
{
    FSquad ModifiedSquad;                                                             // 0x0000 (size: 0x68)

}; // Size: 0x68

struct FModularMount
{
    FName ItemCodeName;                                                               // 0x0000 (size: 0x8)
    FName CodeName;                                                                   // 0x0008 (size: 0x8)
    TSubclassOf<class UMountComponent> Component;                                     // 0x0010 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FModularMounts
{
    TArray<FModularMount> Entries;                                                    // 0x0000 (size: 0x10)

}; // Size: 0x20

struct FMountDynamicData : public FTableRowBase
{
    float SuppressionMultiplier;                                                      // 0x0008 (size: 0x4)
    float MaxHorizontalDeviation;                                                     // 0x000C (size: 0x4)
    float MaxVerticalDeviation;                                                       // 0x0010 (size: 0x4)
    float CoverProvided;                                                              // 0x0014 (size: 0x4)
    FWeaponFiringConeInfo FiringConeInfo;                                             // 0x0018 (size: 0x1C)
    float TrackingSpeed;                                                              // 0x0034 (size: 0x4)
    float TrackingThreshold;                                                          // 0x0038 (size: 0x4)
    int32 MaxAmmo;                                                                    // 0x003C (size: 0x4)
    float MinDistance;                                                                // 0x0040 (size: 0x4)
    float MaxDistance;                                                                // 0x0044 (size: 0x4)
    float MaxReachability;                                                            // 0x0048 (size: 0x4)
    int32 ScopeRadius;                                                                // 0x004C (size: 0x4)
    float MinYaw;                                                                     // 0x0050 (size: 0x4)
    float MaxYaw;                                                                     // 0x0054 (size: 0x4)
    float YawOffset;                                                                  // 0x0058 (size: 0x4)
    float MinPitch;                                                                   // 0x005C (size: 0x4)
    float MaxPitch;                                                                   // 0x0060 (size: 0x4)
    float FiringDuration;                                                             // 0x0064 (size: 0x4)
    float ReloadDuration;                                                             // 0x0068 (size: 0x4)
    float DamageMultiplier;                                                           // 0x006C (size: 0x4)
    float ArtilleryAccuracyMinDist;                                                   // 0x0070 (size: 0x4)
    float ArtilleryAccuracyMaxDist;                                                   // 0x0074 (size: 0x4)
    float AddedBurningMultiplier;                                                     // 0x0078 (size: 0x4)
    float FiringImpulse;                                                              // 0x007C (size: 0x4)
    float ArmourDamageModifier;                                                       // 0x0080 (size: 0x4)
    float TargetStabilityReductionPerShot;                                            // 0x0084 (size: 0x4)
    float BreachingModifier;                                                          // 0x0088 (size: 0x4)

}; // Size: 0x90

struct FMovementModifierData
{
    FMovementModifierForStanceData Stances;                                           // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FMovementModifierForStanceData
{
    float TurnRateScale;                                                              // 0x0000 (size: 0x4)
    float WalkingSpeedScale;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMultiAmmo
{
    int32 Ammo;                                                                       // 0x0000 (size: 0x4)
    FName AmmoType;                                                                   // 0x0004 (size: 0x8)
    FName DesiredAmmoType;                                                            // 0x000C (size: 0x8)
    TArray<FName> CompatibleAmmoNames;                                                // 0x0018 (size: 0x10)
    TArray<int32> AmmoSlotFilterAmounts;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMultiConversionInfo
{
    TArray<FConversionItem> ItemInput;                                                // 0x0000 (size: 0x10)
    TArray<FConversionItem> CrateInput;                                               // 0x0010 (size: 0x10)
    TArray<FConversionLiquid> LiquidInput;                                            // 0x0020 (size: 0x10)
    TArray<FConversionItem> ItemOutput;                                               // 0x0030 (size: 0x10)
    TArray<FConversionItem> CrateOutput;                                              // 0x0040 (size: 0x10)
    TArray<FConversionLiquid> LiquidOutput;                                           // 0x0050 (size: 0x10)
    int32 Duration;                                                                   // 0x0060 (size: 0x4)
    int32 PowerDelta;                                                                 // 0x0064 (size: 0x4)
    bool bConsumeResourceNodes;                                                       // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FMuzzleInfo
{
    int32 GunnerIndex;                                                                // 0x0000 (size: 0x4)
    int32 MuzzleIndex;                                                                // 0x0004 (size: 0x4)
    FName SocketName;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMuzzleOffsetVector_NetQuantize : public FVector
{
}; // Size: 0xC

struct FNamedParameterRange
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    float Start;                                                                      // 0x0008 (size: 0x4)
    float End;                                                                        // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNewsItemInfo
{
    class UTexture2DDynamic* ImageTexture;                                            // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FOutfitMeshInfo
{
    TMap<class EOutfitMeshInfoType, class FCharacterRenderInfo> OutfitMeshTable;      // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FOutpostInfo
{
    int8 TeamId;                                                                      // 0x0000 (size: 0x1)
    FVector2D_NetQuantize Location;                                                   // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FPIDController
{
    FVector PID;                                                                      // 0x0000 (size: 0xC)
    float IntegralSaturation;                                                         // 0x000C (size: 0x4)
    float OutputSaturation;                                                           // 0x0010 (size: 0x4)
    bool bUseValueRate;                                                               // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FPathSocket
{
    uint8 ID;                                                                         // 0x0000 (size: 0x1)
    float PackedAlpha;                                                                // 0x0004 (size: 0x4)
    TWeakObjectPtr<class UBuildSocketComponent> Socket;                               // 0x0008 (size: 0x8)
    FTimerHandle CleanupHandle;                                                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FPayloadMeshes
{
    int32 GunnerIndex;                                                                // 0x0050 (size: 0x4)
    bool bUseForMuzzleTransform;                                                      // 0x0054 (size: 0x1)

}; // Size: 0x58

struct FPhysicalMaterialResolver
{
    TArray<class UPhysicalMaterial*> MaterialsEffectedByImpact;                       // 0x0000 (size: 0x10)
    class UPhysicalMaterial* ImpactedMaterial;                                        // 0x0010 (size: 0x8)
    class UPhysicalMaterial* SnowMaterial;                                            // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FPipelineSocket
{
    EPipeType Type;                                                                   // 0x0000 (size: 0x1)
    uint8 Index;                                                                      // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FPipelineSystem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    float Amount;                                                                     // 0x0008 (size: 0x4)
    float MaxAmount;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x28

struct FPlayerActivity
{
    float EnemyPlayerDamage;                                                          // 0x0000 (size: 0x4)
    float FriendlyPlayerDamage;                                                       // 0x0004 (size: 0x4)
    float EnemyDamage;                                                                // 0x0008 (size: 0x4)
    float FriendlyDamage;                                                             // 0x000C (size: 0x4)
    int32 FriendlyConstruction;                                                       // 0x0010 (size: 0x4)
    int32 FriendlyRepairing;                                                          // 0x0014 (size: 0x4)
    float FriendlyHealing;                                                            // 0x0018 (size: 0x4)
    int16 FriendlyRevivals;                                                           // 0x001C (size: 0x2)
    int16 VehiclesTransferred;                                                        // 0x001E (size: 0x2)
    float VehicleSelfDamage;                                                          // 0x0020 (size: 0x4)
    float VehicleSelfDamageC;                                                         // 0x0024 (size: 0x4)
    float VehicleSelfDamageW;                                                         // 0x0028 (size: 0x4)
    int32 MaterialsSubmitted;                                                         // 0x002C (size: 0x4)
    int32 MaterialsGathered;                                                          // 0x0030 (size: 0x4)
    int32 SuppliesDelivered;                                                          // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FPlayerAdjustment
{
    FVector NewLocation;                                                              // 0x0000 (size: 0xC)
    FVector NewVelocity;                                                              // 0x000C (size: 0xC)
    class UPrimitiveComponent* NewBase;                                               // 0x0018 (size: 0x8)
    FName NewBaseBoneName;                                                            // 0x0020 (size: 0x8)
    bool bHasBase;                                                                    // 0x0028 (size: 0x1)
    bool bBaseRelativePosition;                                                       // 0x0029 (size: 0x1)
    bool bBaseRelativeVelocity;                                                       // 0x002A (size: 0x1)
    uint8 ServerMovementMode;                                                         // 0x002B (size: 0x1)
    uint8 QuantizedStagger;                                                           // 0x002C (size: 0x1)

}; // Size: 0x30

struct FPlayerBan
{
    int64 BanLiftTimeUnix;                                                            // 0x0000 (size: 0x8)
    int64 UnderReviewLiftTimeUnix;                                                    // 0x0008 (size: 0x8)
    EBanReason BanReason;                                                             // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FPlayerModBannedMessage
{
    FModBanRequest ModBanRequest;                                                     // 0x0000 (size: 0x70)
    bool bIsSenderServer;                                                             // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FPlayerServerData
{
    EFactionId FactionId;                                                             // 0x0000 (size: 0x1)
    EWorldConquestMapId RegionId;                                                     // 0x0001 (size: 0x1)
    EPermissionLevel PermissionLevel;                                                 // 0x0002 (size: 0x1)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString OnlineID;                                                                 // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPlayerSpawnPoints
{
    FGlobalSpawnPoint StaticBase;                                                     // 0x0000 (size: 0x10)
    FGlobalSpawnPoint ForwardBase;                                                    // 0x0010 (size: 0x10)
    FGlobalSpawnPoint MedicalBase;                                                    // 0x0020 (size: 0x10)
    ESpawnPointCategory SelectedCategory;                                             // 0x0030 (size: 0x1)

}; // Size: 0x34

struct FPlayerSpawnPointsInfo
{
    FSpawnPointInfo StaticBase;                                                       // 0x0000 (size: 0x6)
    FSpawnPointInfo ForwardBase;                                                      // 0x0006 (size: 0x6)
    FSpawnPointInfo MedicalBase;                                                      // 0x000C (size: 0x6)

}; // Size: 0x12

struct FPlayerVoteBannedMessage
{
    FVoteKickRequest VoteKickRequest;                                                 // 0x0000 (size: 0x58)
    bool bIsSenderServer;                                                             // 0x0058 (size: 0x1)
    int64 BanDurationSec;                                                             // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FPlayerVoteKickInfo
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)
    FString DeviceID;                                                                 // 0x0020 (size: 0x10)
    int32 RegimentID;                                                                 // 0x0030 (size: 0x4)
    uint8 TeamId;                                                                     // 0x0034 (size: 0x1)
    EUserVoteKickCategory VoteKickCategory;                                           // 0x0035 (size: 0x1)
    TMap<EUserVoteKickCategory, int32> VoteKickCategoryCountMap;                      // 0x0038 (size: 0x50)
    float RecentTeamKills;                                                            // 0x0088 (size: 0x4)
    float RecentFriendlyCharacterDamage;                                              // 0x008C (size: 0x4)
    float RecentFriendlyStructureDamage;                                              // 0x0090 (size: 0x4)
    float RecentFriendlyVehicleDamage;                                                // 0x0094 (size: 0x4)
    int16 RecentNameChanges;                                                          // 0x0098 (size: 0x2)

}; // Size: 0xA0

struct FPlayerWarState
{
    int8 LastTeamId;                                                                  // 0x0000 (size: 0x1)
    float TimePlayedTeam0;                                                            // 0x0004 (size: 0x4)
    float TimePlayedTeam1;                                                            // 0x0008 (size: 0x4)
    FPlayerSpawnPoints SpawnPoints;                                                   // 0x000C (size: 0x34)
    FDeployHistory DeployHistory;                                                     // 0x0040 (size: 0x10)
    FTechTreeComponentVotes TechTreeVotes;                                            // 0x0050 (size: 0x2)
    EZombieType ZombieType;                                                           // 0x0052 (size: 0x1)
    int32 NumUnstuckCommandsUsed;                                                     // 0x0054 (size: 0x4)
    FDateTime LastPostTravelInvul;                                                    // 0x0058 (size: 0x8)
    FDateTime LastResourceSpawn;                                                      // 0x0060 (size: 0x8)
    float TimeInConquest;                                                             // 0x0068 (size: 0x4)
    FPlayerActivity Activity;                                                         // 0x006C (size: 0x38)

}; // Size: 0xA8

struct FPowerGridInfo
{
    int32 PowerDelta;                                                                 // 0x0000 (size: 0x4)
    int32 MaxConnections;                                                             // 0x0004 (size: 0x4)
    bool bAllowDisabling;                                                             // 0x0009 (size: 0x1)
    bool bIsDisabled;                                                                 // 0x000A (size: 0x1)
    int32 PowerProvided;                                                              // 0x000C (size: 0x4)
    int32 PowerConsumed;                                                              // 0x0010 (size: 0x4)
    TWeakObjectPtr<class AActor> Connections;                                         // 0x0014 (size: 0x20)
    FName ConnectionNames;                                                            // 0x0034 (size: 0x20)

}; // Size: 0x5C

struct FProductionResource
{
    FName ItemCodeName;                                                               // 0x0000 (size: 0x8)
    uint16 Quantity;                                                                  // 0x0008 (size: 0x2)

}; // Size: 0xC

struct FProgressBarButtonStyle
{
    FSlateBrush BGImage;                                                              // 0x0000 (size: 0x88)
    FSlateBrush FillImage;                                                            // 0x0088 (size: 0x88)
    FButtonStyle Button;                                                              // 0x0110 (size: 0x278)

}; // Size: 0x388

struct FProjectileHitInfo_NetQuantize
{
    FVector_NetQuantize ImpactPoint;                                                  // 0x0000 (size: 0xC)
    FVector_NetQuantizeNormal ImpactNormal;                                           // 0x000C (size: 0xC)
    TWeakObjectPtr<class AActor> Actor;                                               // 0x0018 (size: 0x8)
    TWeakObjectPtr<class UPrimitiveComponent> Component;                              // 0x0020 (size: 0x8)
    FName BoneName;                                                                   // 0x0028 (size: 0x8)
    TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;                             // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FPuddleDecalInfo
{
    FDecalData Decal;                                                                 // 0x0000 (size: 0x20)
    TArray<class UPhysicalMaterial*> RequiredPhysMats;                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPuddleInfo
{
    FVector Location;                                                                 // 0x0000 (size: 0xC)
    FQuat Rotation;                                                                   // 0x0010 (size: 0x10)
    class UPuddleComponent* Volume;                                                   // 0x0020 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0028 (size: 0x8)
    TWeakObjectPtr<class AActor> SpawnBlocker;                                        // 0x0030 (size: 0x8)
    float Radius;                                                                     // 0x0038 (size: 0x4)
    float Rainfall;                                                                   // 0x003C (size: 0x4)
    float MaxRainfall;                                                                // 0x0040 (size: 0x4)
    int8 DecalIx;                                                                     // 0x0044 (size: 0x1)
    int8 DevastatedDecalIx;                                                           // 0x0045 (size: 0x1)
    int8 SpawnedDecalIx;                                                              // 0x0046 (size: 0x1)

}; // Size: 0x50

struct FPutProfileRequest
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FWarPlayerProfileSerialized WarPlayerProfileSerialized;                           // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FQuantizedTimestamp
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FQueueStyle
{
    FSlateBrush ProductionArrowRightBGImage;                                          // 0x0000 (size: 0x88)
    FSlateBrush ProductionArrowRightFillImage;                                        // 0x0088 (size: 0x88)
    FSlateBrush ProgressBarBGImage;                                                   // 0x0110 (size: 0x88)
    FSlateBrush ProgressBarFillImage;                                                 // 0x0198 (size: 0x88)
    FSlateBrush EmptyButtonImage;                                                     // 0x0220 (size: 0x88)
    FButtonStyle AddButtonStyle;                                                      // 0x02A8 (size: 0x278)
    FButtonStyle CancelButtonStyle;                                                   // 0x0520 (size: 0x278)
    FButtonStyle SubmitButtonStyle;                                                   // 0x0798 (size: 0x278)
    FButtonStyle PickupButtonStyle;                                                   // 0x0A10 (size: 0x278)
    FButtonStyle UpgradeButtonStyle;                                                  // 0x0C88 (size: 0x278)
    FSlateBrush TimerIcon;                                                            // 0x0F00 (size: 0x88)
    FSlateBrush CostBackgroundStyle;                                                  // 0x0F88 (size: 0x88)
    FComboBoxStyle AccessLevelStyle;                                                  // 0x1010 (size: 0x3D8)
    FSlateColor QueueTimerColor;                                                      // 0x13E8 (size: 0x28)

}; // Size: 0x1410

struct FQueuedPlayer
{
    FUniqueNetIdRepl UniqueId;                                                        // 0x0000 (size: 0x28)
    class AWarBeaconClient* BeaconClient;                                             // 0x0028 (size: 0x8)
    FDateTime TimeoutTime;                                                            // 0x0030 (size: 0x8)
    bool IsConnected;                                                                 // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRPCBorderBaseClaimRequest
{
    FUObjectHandle ObjectHandle;                                                      // 0x0000 (size: 0x8)
    EWorldConquestMapId OriginMapID;                                                  // 0x0008 (size: 0x1)
    uint8 RoadID;                                                                     // 0x0009 (size: 0x1)
    EFactionId ClaimingFaction;                                                       // 0x000A (size: 0x1)

}; // Size: 0xC

struct FRPCBorderBaseClaimResponse
{
    FUObjectHandle ObjectHandle;                                                      // 0x0000 (size: 0x8)
    EFactionId ClaimingFaction;                                                       // 0x0008 (size: 0x1)
    uint8 Response;                                                                   // 0x0009 (size: 0x1)
    bool bIsUsable;                                                                   // 0x000A (size: 0x1)
    bool bAllowClaimOverride;                                                         // 0x000B (size: 0x1)

}; // Size: 0xC

struct FRPCCrossRegionActorBroadcast
{
    EWorldConquestMapId OriginServer;                                                 // 0x0000 (size: 0x1)
    int64 InitTicks;                                                                  // 0x0008 (size: 0x8)
    TArray<int32> Ids;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRPCCrossRegionActorRequest
{
    EWorldConquestMapId RequestingServer;                                             // 0x0000 (size: 0x1)
    TArray<int32> Ids;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRPCCrossRegionChangelistBroadcast
{
    EWorldConquestMapId OriginServer;                                                 // 0x0000 (size: 0x1)
    TArray<FCrossRegionActorData> NewActors;                                          // 0x0008 (size: 0x10)
    TArray<int32> RemovedActors;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRPCIntelCenterFireListeningAreaEvent
{
    FVector2D Location2D;                                                             // 0x0000 (size: 0x8)
    EFactionId FactionId;                                                             // 0x0008 (size: 0x1)
    float Radius;                                                                     // 0x000C (size: 0x4)
    float Duration;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FRPCLRAFireShellEvent
{
    FVector2D Location2D;                                                             // 0x0000 (size: 0x8)
    EFactionId FactionId;                                                             // 0x0008 (size: 0x1)
    ELongRangeArtilleryType ArtilleryType;                                            // 0x0009 (size: 0x1)
    FVector2D ShooterLocation;                                                        // 0x000C (size: 0x8)

}; // Size: 0x14

struct FRPCMapItemRequest
{
    EWorldConquestMapId Origin;                                                       // 0x0000 (size: 0x1)
    EFactionId RequesterFactionID;                                                    // 0x0001 (size: 0x1)
    FString RequesterOnlineID;                                                        // 0x0008 (size: 0x10)
    FUObjectHandle Requester;                                                         // 0x0018 (size: 0x8)
    FUObjectHandle MapItem;                                                           // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FRPCMapItemResponse
{
    EWorldConquestMapId Origin;                                                       // 0x0000 (size: 0x1)
    FUObjectHandle Requester;                                                         // 0x0004 (size: 0x8)
    FUObjectHandle MapItem;                                                           // 0x000C (size: 0x8)
    FMapItemDetails MapItemDetails;                                                   // 0x0018 (size: 0x88)

}; // Size: 0xA0

struct FRPCMapPostMessage
{
    bool bFoundMapPostDetails;                                                        // 0x0000 (size: 0x1)
    int32 MapPostID;                                                                  // 0x0004 (size: 0x4)
    FMapPostDetails MapPostDetails;                                                   // 0x0008 (size: 0x28)
    FUObjectHandle Requester;                                                         // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FRPCRegionZoneRequest
{
    EWorldConquestMapId Origin;                                                       // 0x0000 (size: 0x1)
    FUObjectHandle Requester;                                                         // 0x0004 (size: 0x8)
    EFactionId Faction;                                                               // 0x000C (size: 0x1)

}; // Size: 0x10

struct FRPCRegionZoneResponse
{
    EWorldConquestMapId Origin;                                                       // 0x0000 (size: 0x1)
    FUObjectHandle Requester;                                                         // 0x0004 (size: 0x8)
    FRegionMinimalData Data;                                                          // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FRPCRocketLaunchCodeRequest
{
    FUObjectHandle Requester;                                                         // 0x0000 (size: 0x8)
    uint16 LaunchCodeID;                                                              // 0x0008 (size: 0x2)
    EWorldConquestMapId Origin;                                                       // 0x000A (size: 0x1)
    EFactionId FactionId;                                                             // 0x000B (size: 0x1)
    FVector_NetQuantize LocalStrikeLocation;                                          // 0x000C (size: 0xC)

}; // Size: 0x18

struct FRPCRocketLaunchCodeResponse
{
    FUObjectHandle Requester;                                                         // 0x0000 (size: 0x8)
    uint16 LaunchCodeID;                                                              // 0x0008 (size: 0x2)
    EWorldConquestMapId Origin;                                                       // 0x000A (size: 0x1)
    ERocketLaunchResponse TraceResult;                                                // 0x000B (size: 0x1)
    FVector_NetQuantize LocalStrikeLocation;                                          // 0x000C (size: 0xC)
    FWarGridCoordinate Coordinate;                                                    // 0x0018 (size: 0x6)

}; // Size: 0x20

struct FRPCRocketLaunchFail
{
    uint16 LaunchCodeID;                                                              // 0x0000 (size: 0x2)
    EWorldConquestMapId Origin;                                                       // 0x0002 (size: 0x1)

}; // Size: 0x4

struct FRPCRocketPreLaunchAlert
{
    uint16 LaunchCodeID;                                                              // 0x0000 (size: 0x2)
    EWorldConquestMapId Origin;                                                       // 0x0002 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0003 (size: 0x1)
    EWorldConquestMapId TargetMapID;                                                  // 0x0004 (size: 0x1)
    FWarGridCoordinate Coordinate;                                                    // 0x0006 (size: 0x6)
    FVector_NetQuantize LocalStrikeLocation;                                          // 0x000C (size: 0xC)

}; // Size: 0x18

struct FRPCRocketPreLaunchUpdateAlert
{
    EWorldConquestMapId Origin;                                                       // 0x0000 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0001 (size: 0x1)
    EWorldConquestMapId TargetMapID;                                                  // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FRPCRocketTargetUpdate
{
    uint16 LaunchCodeID;                                                              // 0x0000 (size: 0x2)
    EWorldConquestMapId Origin;                                                       // 0x0002 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0003 (size: 0x1)
    FVector_NetQuantize LocalStrikeLocation;                                          // 0x0004 (size: 0xC)
    float LaunchTimeRemaining;                                                        // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FRPCRocketTravel
{
    EWorldConquestMapId Origin;                                                       // 0x0000 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0001 (size: 0x1)
    FRocketLaunchCodeInfo Info;                                                       // 0x0004 (size: 0x1C)
    FVector_NetQuantize LocalStrikeLocation;                                          // 0x0020 (size: 0xC)

}; // Size: 0x2C

struct FRPCWeatherConnectRequest
{
    FWeatherStationID SenderID;                                                       // 0x0000 (size: 0x2)
    FWarGridCoordinate SenderCoordinate;                                              // 0x0002 (size: 0x6)
    FVector2D WorldLocation2D;                                                        // 0x0008 (size: 0x8)
    uint8 TargetLocalID;                                                              // 0x0010 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FRPCWeatherConnectResponse
{
    FWeatherStationID SenderID;                                                       // 0x0000 (size: 0x2)
    FWarGridCoordinate SenderCoordinate;                                              // 0x0002 (size: 0x6)
    uint8 TargetLocalID;                                                              // 0x0008 (size: 0x1)
    EWeatherStationResult Result;                                                     // 0x0009 (size: 0x1)

}; // Size: 0xA

struct FRPCWeatherDisconnectEvent
{
    FWeatherStationID SenderID;                                                       // 0x0000 (size: 0x2)
    uint8 TargetLocalID;                                                              // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FRPCWeatherDisconnectRequest
{
    FWeatherStationID SenderID;                                                       // 0x0000 (size: 0x2)
    uint8 TargetLocalID;                                                              // 0x0002 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FRPCWeatherDisconnectResponse
{
    FWeatherStationID SenderID;                                                       // 0x0000 (size: 0x2)
    uint8 TargetLocalID;                                                              // 0x0002 (size: 0x1)
    EWeatherStationResult Result;                                                     // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FRWDAdjustment
{
    FVector NewLoc;                                                                   // 0x0000 (size: 0xC)
    FQuat NewRot;                                                                     // 0x0010 (size: 0x10)
    FVector NewVelocity;                                                              // 0x0020 (size: 0xC)
    FVector NewAngularMomentum;                                                       // 0x002C (size: 0xC)
    uint8 ServerMovementMode;                                                         // 0x0038 (size: 0x1)
    class UPrimitiveComponent* NewBase;                                               // 0x0040 (size: 0x8)
    FName NewBaseBoneName;                                                            // 0x0048 (size: 0x8)
    bool bHasBase;                                                                    // 0x0050 (size: 0x1)
    bool bBaseRelativePosition;                                                       // 0x0051 (size: 0x1)
    uint8 QuantizedMuddyness;                                                         // 0x0052 (size: 0x1)

}; // Size: 0x60

struct FRWDMove
{
    FVector_NetQuantize100 Loc;                                                       // 0x0000 (size: 0xC)
    FVector2D_NetQuantize10 InAccel;                                                  // 0x000C (size: 0x8)
    float Timestamp;                                                                  // 0x0014 (size: 0x4)
    uint32 View;                                                                      // 0x0018 (size: 0x4)
    uint8 Roll;                                                                       // 0x001C (size: 0x1)
    uint8 CompressedMoveFlags;                                                        // 0x001D (size: 0x1)
    uint8 MovementMode;                                                               // 0x001E (size: 0x1)
    uint8 QuantizedMuddyness;                                                         // 0x001F (size: 0x1)

}; // Size: 0x20

struct FRWDMoveBase
{
    class UPrimitiveComponent* MovementBase;                                          // 0x0000 (size: 0x8)
    FName BoneName;                                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRWDMoveDual
{
    FVector2D_NetQuantize10 InAccel;                                                  // 0x0000 (size: 0x8)
    float Timestamp;                                                                  // 0x0008 (size: 0x4)
    uint32 View;                                                                      // 0x000C (size: 0x4)
    uint8 CompressedMoveFlags;                                                        // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FRWDMoveTrailer
{
    FVector_NetQuantize100 Loc;                                                       // 0x0000 (size: 0xC)
    uint8 MovementMode;                                                               // 0x000C (size: 0x1)

}; // Size: 0x10

struct FRWDVeryShortAdjustment
{
    FVector NewLoc;                                                                   // 0x0000 (size: 0xC)
    FQuat NewRot;                                                                     // 0x0010 (size: 0x10)
    uint8 ServerMovementMode;                                                         // 0x0020 (size: 0x1)
    class UPrimitiveComponent* NewBase;                                               // 0x0028 (size: 0x8)
    FName NewBaseBoneName;                                                            // 0x0030 (size: 0x8)
    bool bHasBase;                                                                    // 0x0038 (size: 0x1)
    bool bBaseRelativePosition;                                                       // 0x0039 (size: 0x1)
    uint8 QuantizedMuddyness;                                                         // 0x003A (size: 0x1)

}; // Size: 0x40

struct FRailParticleSystem
{
    class UParticleSystemComponent* System;                                           // 0x0000 (size: 0x8)
    float OriginalYaw;                                                                // 0x0008 (size: 0x4)
    float CurrentYaw;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRailPhysicsState
{
    FQuat WorldRotation;                                                              // 0x0000 (size: 0x10)
    class ARailwayTrack* FrontTrack;                                                  // 0x0010 (size: 0x8)
    class ARailwayTrack* RearTrack;                                                   // 0x0018 (size: 0x8)
    FVector WorldLocation;                                                            // 0x0020 (size: 0xC)
    float LinearMomentum;                                                             // 0x002C (size: 0x4)
    float DeferredImpulses;                                                           // 0x0030 (size: 0x4)
    float Forces;                                                                     // 0x0034 (size: 0x4)
    float LinearSpeed;                                                                // 0x0038 (size: 0x4)
    float FrontAlpha;                                                                 // 0x003C (size: 0x4)
    float RearAlpha;                                                                  // 0x0040 (size: 0x4)
    bool bFrontWagonToRail;                                                           // 0x0044 (size: 0x1)
    bool bRearWagonToRail;                                                            // 0x0045 (size: 0x1)
    bool bWasCollidingWithTrailer;                                                    // 0x0046 (size: 0x1)
    bool bWasBlocked;                                                                 // 0x0047 (size: 0x1)

}; // Size: 0x50

struct FRailSwitchState
{
    uint8 ID;                                                                         // 0x0000 (size: 0x1)
    bool bIsActive;                                                                   // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FRampData
{
    bool bUseGangwayRampTransformAsPivot;                                             // 0x0000 (size: 0x1)
    FTransform Pivot;                                                                 // 0x0010 (size: 0x30)
    float MaxExtension;                                                               // 0x0040 (size: 0x4)
    float SurfaceOffset;                                                              // 0x0044 (size: 0x4)
    float Width;                                                                      // 0x0048 (size: 0x4)
    float MinimumAngle;                                                               // 0x004C (size: 0x4)
    float MaximumAngle;                                                               // 0x0050 (size: 0x4)
    float AnimationAngleOffset;                                                       // 0x0054 (size: 0x4)
    bool bCanOpenWithoutSurface;                                                      // 0x0058 (size: 0x1)
    float RampAngleWithNoDock;                                                        // 0x005C (size: 0x4)
    bool bRequireSandWhenNotAtDock;                                                   // 0x0060 (size: 0x1)

}; // Size: 0x70

struct FRay_NetQuantize
{
    FVector_NetQuantize Origin;                                                       // 0x0000 (size: 0xC)
    FVector_NetQuantizeNormal Direction;                                              // 0x000C (size: 0xC)

}; // Size: 0x18

struct FReassignSquadLeaderWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString NewLeaderOnlineId;                                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRefinableItemInfo
{
    TSubclassOf<class AItemPickup> SourceItemClass;                                   // 0x0000 (size: 0x8)
    TSubclassOf<class AItemPickup> RefinedItemClass;                                  // 0x0008 (size: 0x8)
    float SpeedModifier;                                                              // 0x0010 (size: 0x4)
    float YieldModifier;                                                              // 0x0014 (size: 0x4)
    int32 MaxRefinedItemCount;                                                        // 0x0018 (size: 0x4)
    int32 TransferStackSize;                                                          // 0x001C (size: 0x4)

}; // Size: 0x20

struct FRefinableItemModifier
{
    FName SourceItemCodeName;                                                         // 0x0000 (size: 0x8)
    FName RefinedItemCodeName;                                                        // 0x0008 (size: 0x8)
    float SpeedModifier;                                                              // 0x0010 (size: 0x4)
    float YieldModifier;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRefinementOrder
{
    FName SourceItemCodeName;                                                         // 0x0000 (size: 0x8)
    FName RefinedItemCodeName;                                                        // 0x0008 (size: 0x8)
    float ResourcesRefinedPerMinute;                                                  // 0x0010 (size: 0x4)
    int32 RemainingSourceCount;                                                       // 0x0014 (size: 0x4)
    float CompletedCount;                                                             // 0x0018 (size: 0x4)
    float ProgressForCurrentUnit;                                                     // 0x001C (size: 0x4)
    EFactionId OrderOwnerFactionId;                                                   // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FRefinementOrderInfo
{
    ERefineryOrderAccessLevel AccessLevel;                                            // 0x0000 (size: 0x1)
    TArray<FRefinementOrder> OrderList;                                               // 0x0008 (size: 0x10)
    int64 ExpiryTimestampTicks;                                                       // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FRegiment
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    int8 TeamId;                                                                      // 0x0004 (size: 0x1)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Tag;                                                                      // 0x0018 (size: 0x10)
    FString Link;                                                                     // 0x0028 (size: 0x10)
    TArray<FRegimentMember> Members;                                                  // 0x0038 (size: 0x10)
    FString LastActiveWarId;                                                          // 0x0048 (size: 0x10)

}; // Size: 0xA8

struct FRegimentChangeRoleMessage
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    FString TargetOnlineID;                                                           // 0x0008 (size: 0x10)
    ERegimentRole DesiredTargetRole;                                                  // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRegimentChatMessage
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    FString SenderOnlineId;                                                           // 0x0008 (size: 0x10)
    FString SenderName;                                                               // 0x0018 (size: 0x10)
    FString Message;                                                                  // 0x0028 (size: 0x10)
    int8 ChatLanguage;                                                                // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRegimentClientReplicatedState
{
    TArray<FRegiment> ActiveRegimentList;                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRegimentCreatedMessage
{
    FString CreatorOnlineID;                                                          // 0x0000 (size: 0x10)
    FRegimentInfo RegimentInfo;                                                       // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FRegimentEditMessage
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString Tag;                                                                      // 0x0018 (size: 0x10)
    FString Link;                                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRegimentFullMessage
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRegimentIdChangedMessage
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    int32 RegimentID;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRegimentIdClearedMessage
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRegimentInfo
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FString Tag;                                                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRegimentInfoRequest
{
    int32 RequestID;                                                                  // 0x0000 (size: 0x4)
    TArray<int32> RegimentIds;                                                        // 0x0008 (size: 0x10)
    TArray<FString> OnlineIds;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRegimentInfoResponse
{
    int32 RequestID;                                                                  // 0x0000 (size: 0x4)
    TArray<FRegimentInfo> RegimentInfos;                                              // 0x0008 (size: 0x10)
    TArray<int32> RegimentIds;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRegimentManager
{
}; // Size: 0x3A0

struct FRegimentMember
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)
    ERegimentRole Role;                                                               // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRegimentMemberSquadIdMessage
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    int32 SquadId;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRegimentMemberSquadIdsMessage
{
    TArray<FRegimentMemberSquadIdMessage> Messages;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRegimentMessage
{
    FRegiment Regiment;                                                               // 0x0000 (size: 0xA8)

}; // Size: 0xA8

struct FRegimentNotificationMessage
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    ERegimentNotificationType Type;                                                   // 0x0004 (size: 0x1)
    FString TargetOnlineID;                                                           // 0x0008 (size: 0x10)
    FString TargetPlayerName;                                                         // 0x0018 (size: 0x10)
    ERegimentRole NewRole;                                                            // 0x0028 (size: 0x1)
    FString NewRegimentName;                                                          // 0x0030 (size: 0x10)
    FString NewRegimentTag;                                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FRegimentPromptParams
{
    FText Name;                                                                       // 0x0000 (size: 0x18)
    FText Tag;                                                                        // 0x0018 (size: 0x18)
    FText Link;                                                                       // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FRegionConnectionInfo
{
    FString MapCodename;                                                              // 0x0000 (size: 0x10)
    FString ServerName;                                                               // 0x0010 (size: 0x10)
    int8 serverType;                                                                  // 0x0020 (size: 0x1)
    FString Version;                                                                  // 0x0028 (size: 0x10)
    FString steamId;                                                                  // 0x0038 (size: 0x10)
    FString ipAddress;                                                                // 0x0048 (size: 0x10)
    uint16 Port;                                                                      // 0x0058 (size: 0x2)
    uint16 PortBeacon;                                                                // 0x005A (size: 0x2)
    uint64 packedWarStatus;                                                           // 0x0060 (size: 0x8)
    uint64 packedServerState;                                                         // 0x0068 (size: 0x8)
    int16 colonialQueueSize;                                                          // 0x0070 (size: 0x2)
    int16 wardenQueueSize;                                                            // 0x0072 (size: 0x2)
    int16 ColonialOpenSlots;                                                          // 0x0074 (size: 0x2)
    int16 WardenOpenSlots;                                                            // 0x0076 (size: 0x2)

}; // Size: 0x78

struct FRegionLog
{
    TArray<FRegionLogEntry> Entries;                                                  // 0x0000 (size: 0x10)
    int32 NextEntryIndex;                                                             // 0x0010 (size: 0x4)
    uint32 NextRegionLogID;                                                           // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRegionLogEntry
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString PlayerName;                                                               // 0x0010 (size: 0x10)
    ERegionLogEntryType Type;                                                         // 0x0020 (size: 0x1)
    uint32 Value;                                                                     // 0x0024 (size: 0x4)
    FDateTime EventTime;                                                              // 0x0028 (size: 0x8)
    float LocationX;                                                                  // 0x0030 (size: 0x4)
    float LocationY;                                                                  // 0x0034 (size: 0x4)
    uint32 RegionLogID;                                                               // 0x0038 (size: 0x4)
    FName CodeName;                                                                   // 0x003C (size: 0x8)

}; // Size: 0x48

struct FRegionLogPage
{
    TArray<FRegionLogEntry> Entries;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRegionLogs
{
    FRegionLog Colonial;                                                              // 0x0000 (size: 0x18)
    FRegionLog Warden;                                                                // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FRegionMapData
{
    int32 Version;                                                                    // 0x0000 (size: 0x4)
    EWorldConquestMapId RegionId;                                                     // 0x0004 (size: 0x1)
    int8 ScorchedVictoryTowns;                                                        // 0x0005 (size: 0x1)
    TArray<FMapItem> MapItems;                                                        // 0x0008 (size: 0x10)
    TArray<FMapItem> MapItemsC;                                                       // 0x0018 (size: 0x10)
    TArray<FMapItem> MapItemsW;                                                       // 0x0028 (size: 0x10)
    TArray<FMapTextItem> TextItems;                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FRegionMinimalData
{
    EFactionId StarterRegionTeamID;                                                   // 0x0000 (size: 0x1)
    TArray<FVector2D> ColonialStarterRegionZones;                                     // 0x0008 (size: 0x10)
    TArray<FVector2D> WardenStarterRegionZones;                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FRegionZoneManager
{
}; // Size: 0xC0

struct FRemoveFromSquadWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString TargetOnlineID;                                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRemoveMemberFromRegimentMessage
{
    int32 RegimentID;                                                                 // 0x0000 (size: 0x4)
    FString MemberToRemoveOnlineId;                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRenameSquadWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString NewName;                                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRepMapPost
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FMapPostEntry OriginalEntry;                                                      // 0x0008 (size: 0x38)
    TArray<FMapPostEntry> ReplyList;                                                  // 0x0040 (size: 0x10)
    FVector2D NormalizedMapCoords;                                                    // 0x0050 (size: 0x8)
    int8 MapId;                                                                       // 0x0058 (size: 0x1)
    EMapPostType MapPostType;                                                         // 0x0059 (size: 0x1)
    EFacilityMapPostType FacilityMapPostType;                                         // 0x005A (size: 0x1)
    EMapPostVoteType LocalVoteType;                                                   // 0x005B (size: 0x1)
    int32 GroupId;                                                                    // 0x005C (size: 0x4)
    int32 TotalVotes;                                                                 // 0x0060 (size: 0x4)
    int32 Rank;                                                                       // 0x0064 (size: 0x4)

}; // Size: 0x68

struct FRepPipelineSystem
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    FName CodeName;                                                                   // 0x0004 (size: 0x8)
    float Amount;                                                                     // 0x000C (size: 0x4)
    float MaxAmount;                                                                  // 0x0010 (size: 0x4)
    float ThroughputNormalized;                                                       // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FRepPlayerMovement
{
    FVector LinearVelocity;                                                           // 0x0000 (size: 0xC)
    FVector Location;                                                                 // 0x000C (size: 0xC)
    FRotator Rotation;                                                                // 0x0018 (size: 0xC)
    class UPrimitiveComponent* MovementBase;                                          // 0x0028 (size: 0x8)
    FName BoneName;                                                                   // 0x0030 (size: 0x8)
    FQuantizedTimestamp Timestamp;                                                    // 0x0038 (size: 0x4)
    bool bServerHasBaseComponent;                                                     // 0x003C (size: 0x1)
    uint8 MovementMode;                                                               // 0x003D (size: 0x1)
    EVectorQuantization LocationQuantizationLevel;                                    // 0x003E (size: 0x1)
    EVectorQuantization VelocityQuantizationLevel;                                    // 0x003F (size: 0x1)
    ERotatorQuantization RotationQuantizationLevel;                                   // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FRepRWDMovement
{
    FVector LinearVelocity;                                                           // 0x0000 (size: 0xC)
    FVector AngularMomentum;                                                          // 0x000C (size: 0xC)
    FVector Location;                                                                 // 0x0018 (size: 0xC)
    FRotator Rotation;                                                                // 0x0024 (size: 0xC)
    float LastUpdateClientTimeStamp;                                                  // 0x0030 (size: 0x4)
    float ForwardInput;                                                               // 0x0034 (size: 0x4)
    float SteeringInput;                                                              // 0x0038 (size: 0x4)
    bool bHandbrakeActivated;                                                         // 0x003C (size: 0x1)
    bool bBoostActivated;                                                             // 0x003D (size: 0x1)
    bool bIsInManualLowGear;                                                          // 0x003E (size: 0x1)
    float SteeringAngle;                                                              // 0x0040 (size: 0x4)
    bool bHasTractor;                                                                 // 0x0044 (size: 0x1)
    bool bHasTrailer;                                                                 // 0x0045 (size: 0x1)
    bool bIsForcedUpdate;                                                             // 0x0046 (size: 0x1)
    FRepRWDTrailerMovement TrailerMovement;                                           // 0x0048 (size: 0x40)

}; // Size: 0x88

struct FRepRWDTrailerMovement
{
    class ARWDSimVehicle* Trailer;                                                    // 0x0000 (size: 0x8)
    FVector LinearVelocity;                                                           // 0x0008 (size: 0xC)
    FVector AngularMomentum;                                                          // 0x0014 (size: 0xC)
    FVector RelativeLocation;                                                         // 0x0020 (size: 0xC)
    FRotator Rotation;                                                                // 0x002C (size: 0xC)
    uint8 MovementMode;                                                               // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FRepRailwayMovement
{
    class ARailwayTrack* FrontTrack;                                                  // 0x0000 (size: 0x8)
    bool bFrontTrackSet;                                                              // 0x0008 (size: 0x1)
    class ARailwayTrack* RearTrack;                                                   // 0x0010 (size: 0x8)
    bool bRearTrackSet;                                                               // 0x0018 (size: 0x1)
    class ARailVehicle* Actor;                                                        // 0x0020 (size: 0x8)
    float LinearMomentum;                                                             // 0x0028 (size: 0x4)
    float PackedPrimaryAlpha;                                                         // 0x002C (size: 0x4)
    FVector Location;                                                                 // 0x0030 (size: 0xC)
    FRotator Rotation;                                                                // 0x003C (size: 0xC)

}; // Size: 0x48

struct FRepShipMovement
{
    FVector LinearVelocity;                                                           // 0x0000 (size: 0xC)
    FVector AngularMomentum;                                                          // 0x000C (size: 0xC)
    FVector Location;                                                                 // 0x0018 (size: 0xC)
    FRotator Rotation;                                                                // 0x0024 (size: 0xC)
    float LastUpdateClientTimeStamp;                                                  // 0x0030 (size: 0x4)
    float ForwardInput;                                                               // 0x0034 (size: 0x4)
    float RudderInput;                                                                // 0x0038 (size: 0x4)
    float RudderAngle;                                                                // 0x003C (size: 0x4)
    float DivePlaneAngle;                                                             // 0x0040 (size: 0x4)
    bool bStabilizerActivated;                                                        // 0x0044 (size: 0x1)
    bool bIsForcedUpdate;                                                             // 0x0045 (size: 0x1)

}; // Size: 0x48

struct FRepSnapInfo
{
    ESnapType Type;                                                                   // 0x0000 (size: 0x1)
    FName SocketName;                                                                 // 0x0004 (size: 0x8)
    FModificationSocketPreviewInfo ModificationSocketPreviewInfo;                     // 0x000C (size: 0xC)
    class UBuildSocketComponent* TargetSocket;                                        // 0x0018 (size: 0x8)
    float RotationZ;                                                                  // 0x0020 (size: 0x4)
    class USplineConnectorComponent* TargetPath;                                      // 0x0028 (size: 0x8)
    float PathPackedAlpha;                                                            // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FRepTrainMovement
{
    TArray<FRepRailwayMovement> Cars;                                                 // 0x0000 (size: 0x10)
    float LastUpdateClientTimeStamp;                                                  // 0x0010 (size: 0x4)
    int8 Acceleration;                                                                // 0x0014 (size: 0x1)
    uint8 bIsBoosting;                                                                // 0x0015 (size: 0x1)

}; // Size: 0x18

struct FReplicatedShippableData
{
    uint8 Payload;                                                                    // 0x0000 (size: 0x1)
    uint8 AltPayload;                                                                 // 0x0001 (size: 0x1)
    uint8 Temperature;                                                                // 0x0002 (size: 0x1)
    TArray<FStockpileEntry> Items;                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRequestSquadOfficerToLeaderMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString OfficerOnlineId;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FReservePower
{
    float MaxAmount;                                                                  // 0x0000 (size: 0x4)
    float Amount;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FReserveStockpileActionStyle
{
    FButtonStyle ButtonStyle;                                                         // 0x0000 (size: 0x278)
    FText ToolTipText;                                                                // 0x0278 (size: 0x18)
    FText ToolTipDescription;                                                         // 0x0290 (size: 0x18)

}; // Size: 0x2A8

struct FReserveStockpileData
{
    FString StockpileName;                                                            // 0x0000 (size: 0x10)
    FString OwnerOnlineID;                                                            // 0x0010 (size: 0x10)
    FString OwnerName;                                                                // 0x0020 (size: 0x10)
    TArray<FString> AllowedUserOnlineIDList;                                          // 0x0030 (size: 0x10)
    EReserveStockpileAccessLevel AccessLevel;                                         // 0x0040 (size: 0x1)
    int32 PassCode;                                                                   // 0x0044 (size: 0x4)
    int64 ExpiryTimestampTicks;                                                       // 0x0048 (size: 0x8)
    TArray<FStockpileEntry> Items;                                                    // 0x0050 (size: 0x10)
    TArray<FStockpileEntry> Vehicles;                                                 // 0x0060 (size: 0x10)
    TArray<FStockpileEntry> VehicleCrates;                                            // 0x0070 (size: 0x10)
    TArray<FStockpileEntry> Structures;                                               // 0x0080 (size: 0x10)
    TArray<FStockpileEntry> StructureCrates;                                          // 0x0090 (size: 0x10)

}; // Size: 0xB8

struct FReserveStockpileFailedPassCodeInfo
{
    int32 NumFailedAttempts;                                                          // 0x0000 (size: 0x4)
    int64 LastAttemptTimestampTicks;                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FReserveStockpileMapDetailInfo
{
    FString StockpileName;                                                            // 0x0000 (size: 0x10)
    FMapDetailStockpileInfo StockpileInfo;                                            // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FReserveStockpileStyle
{
    FReserveStockpileActionStyle ReleaseButtonStyle;                                  // 0x0000 (size: 0x2A8)
    FReserveStockpileActionStyle MakeHiddenButtonStyle;                               // 0x02A8 (size: 0x2A8)
    FReserveStockpileActionStyle MakeVisibleButtonStyle;                              // 0x0550 (size: 0x2A8)
    FReserveStockpileActionStyle ViewAccessCodeButtonStyle;                           // 0x07F8 (size: 0x2A8)
    FReserveStockpileActionStyle CopyAccessCodeButtonStyle;                           // 0x0AA0 (size: 0x2A8)
    FReserveStockpileActionStyle ResetAccessButtonStyle;                              // 0x0D48 (size: 0x2A8)
    FSlateBrush TabIcon;                                                              // 0x0FF0 (size: 0x88)

}; // Size: 0x1078

struct FResourceAmounts
{
    FCodeNameSmallQuantity Resource;                                                  // 0x0000 (size: 0xC)
    TArray<FCodeNameSmallQuantity> OtherResources;                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FResourceConverter
{
    TArray<FRefinementOrder> OrderList;                                               // 0x0000 (size: 0x10)
    TArray<FRefinableItemInfo> RefinableItems;                                        // 0x0010 (size: 0x10)

}; // Size: 0x30

struct FResourceRenderInfo
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    class UStaticMesh* StaticMesh;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRewindContext
{
}; // Size: 0x20

struct FRichTextFieldColor
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRocketLaunchCodeInfo
{
    EWorldConquestMapId TargetMapID;                                                  // 0x0000 (size: 0x1)
    uint16 LaunchCodeID;                                                              // 0x0002 (size: 0x2)
    FVector StrikeLocation;                                                           // 0x0004 (size: 0xC)
    FVector LocalStrikeLocation;                                                      // 0x0010 (size: 0xC)

}; // Size: 0x1C

struct FRocketLaunchCodeRequest
{
    class ARocketFacility* RocketFacility;                                            // 0x0000 (size: 0x8)
    uint16 LaunchCodeID;                                                              // 0x0008 (size: 0x2)

}; // Size: 0x10

struct FRocketLaunchFire
{
    float StartTime;                                                                  // 0x0000 (size: 0x4)
    float EndTime;                                                                    // 0x0004 (size: 0x4)
    float Radius;                                                                     // 0x0008 (size: 0x4)
    float AddedHeat;                                                                  // 0x000C (size: 0x4)
    TSubclassOf<class UDamageType> DamageType;                                        // 0x0010 (size: 0x8)

}; // Size: 0x20

struct FRocketSiteStyle
{
    FSlateBrush SectionBGImage;                                                       // 0x0000 (size: 0x88)
    FSlateBrush ProgressBarBGImage;                                                   // 0x0088 (size: 0x88)
    FSlateBrush ProgressBarFillImage;                                                 // 0x0110 (size: 0x88)
    FSlateBrush ProgressBarMarker;                                                    // 0x0198 (size: 0x88)
    FLinearColor ToolTipTextColor;                                                    // 0x0220 (size: 0x10)

}; // Size: 0x230

struct FRoomComponentSaveState
{
    float WaterLevel;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRoomDynamicData : public FTableRowBase
{
    uint8 RepairCost;                                                                 // 0x0008 (size: 0x1)
    uint8 LargeRepairCost;                                                            // 0x0009 (size: 0x1)
    float LeakChance;                                                                 // 0x000C (size: 0x4)
    float FloodedMass;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FRoomLeak : public FFastArraySerializerItem
{
    FVector_NetQuantize Location;                                                     // 0x000C (size: 0xC)
    uint8 RoomIx;                                                                     // 0x0018 (size: 0x1)
    uint8 Damage;                                                                     // 0x0019 (size: 0x1)
    uint8 Radius;                                                                     // 0x001A (size: 0x1)
    TWeakObjectPtr<class UDecalComponent> ExteriorDecal;                              // 0x001C (size: 0x8)
    TWeakObjectPtr<class UDecalComponent> InteriorDecal;                              // 0x0024 (size: 0x8)
    TWeakObjectPtr<class UParticleSystemComponent> WaterFX;                           // 0x002C (size: 0x8)
    TWeakObjectPtr<class UParticleSystemComponent> AboveWaterFX;                      // 0x0034 (size: 0x8)
    TWeakObjectPtr<class UAudioComponent> LeakingSFXLoop;                             // 0x003C (size: 0x8)

}; // Size: 0x44

struct FRoomLeakArray : public FFastArraySerializer
{
    TArray<FRoomLeak> Items;                                                          // 0x0108 (size: 0x10)

}; // Size: 0x118

struct FSavedActor
{
    FTransform Transform;                                                             // 0x0000 (size: 0x30)
    FString Name;                                                                     // 0x0030 (size: 0x10)
    UClass* ActorClass;                                                               // 0x0040 (size: 0x8)
    bool bIsLoadedFromMap;                                                            // 0x0048 (size: 0x1)
    TArray<uint8> ByteStream;                                                         // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FSavedBallastInfo
{
    float TargetFloodPercent;                                                         // 0x0000 (size: 0x4)
    float FloodPercent;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSavedCharacter
{
    float Health;                                                                     // 0x0000 (size: 0x4)
    TArray<FItemInstance> BagItems;                                                   // 0x0008 (size: 0x10)
    TArray<FItemInstance> EquippedItems;                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSavedCharacterInventory
{
    TArray<FItemInstance> BagItems;                                                   // 0x0000 (size: 0x10)
    TArray<FItemInstance> EquippedItems;                                              // 0x0010 (size: 0x10)
    bool OverrideStarterGear;                                                         // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSavedRecoveryCharacter
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    uint8 TeamId;                                                                     // 0x0010 (size: 0x1)
    FTransform Transform;                                                             // 0x0020 (size: 0x30)
    uint8 VisualCustomizationMask;                                                    // 0x0050 (size: 0x1)
    float Temperature;                                                                // 0x0054 (size: 0x4)
    float Muddyness;                                                                  // 0x0058 (size: 0x4)
    FSavedCharacter SavedCharacter;                                                   // 0x0060 (size: 0x28)
    FString ParentShipName;                                                           // 0x0088 (size: 0x10)

}; // Size: 0xA0

struct FSavedRecoveryVehicle : public FSavedActor
{
    FDateTime LastAutoSaveTimestamp;                                                  // 0x0060 (size: 0x8)
    FString OriginatorBuildSiteName;                                                  // 0x0068 (size: 0x10)

}; // Size: 0x80

struct FSavedShippableData
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    FName ContainedCodeName;                                                          // 0x0008 (size: 0x8)
    TArray<FItemInstance> Items;                                                      // 0x0010 (size: 0x10)
    TArray<FStockpileEntry> StoredItems;                                              // 0x0020 (size: 0x10)
    TArray<FStockpileEntry> ItemCrates;                                               // 0x0030 (size: 0x10)
    TArray<FStockpileEntry> ReservableItemCrates;                                     // 0x0040 (size: 0x10)
    float Fuel;                                                                       // 0x0050 (size: 0x4)
    FName FuelType;                                                                   // 0x0054 (size: 0x8)
    uint8 Payload;                                                                    // 0x005C (size: 0x1)
    uint8 AltPayload;                                                                 // 0x005D (size: 0x1)
    uint8 Temperature;                                                                // 0x005E (size: 0x1)
    uint8 TeamId;                                                                     // 0x005F (size: 0x1)
    bool bIsReservable;                                                               // 0x0060 (size: 0x1)
    int32 TankArmour;                                                                 // 0x0064 (size: 0x4)
    FGlobalSpawnPointMinimal GlobalSpawnPoint;                                        // 0x0068 (size: 0x8)

}; // Size: 0xD0

struct FSavedVehicle
{
    FTransform Transform;                                                             // 0x0000 (size: 0x30)
    UClass* ActorClass;                                                               // 0x0030 (size: 0x8)
    TArray<uint8> Bytes;                                                              // 0x0038 (size: 0x10)
    bool bHasTrailer;                                                                 // 0x0048 (size: 0x1)
    bool bFacingForward;                                                              // 0x0049 (size: 0x1)
    int32 RailEntryTrackId;                                                           // 0x004C (size: 0x4)
    float RailEntryPackedAlpha;                                                       // 0x0050 (size: 0x4)
    bool bRailIsTailFirst;                                                            // 0x0054 (size: 0x1)
    float ShipDepth;                                                                  // 0x0058 (size: 0x4)

}; // Size: 0x60

struct FScheduledWeatherState
{
    FWeatherState State;                                                              // 0x0000 (size: 0x28)
    FVector2D NormalizedLocation;                                                     // 0x0028 (size: 0x8)
    FDateTime StartTime;                                                              // 0x0030 (size: 0x8)
    FDateTime EndTime;                                                                // 0x0038 (size: 0x8)
    int8 IntensityCurve;                                                              // 0x0040 (size: 0x1)

}; // Size: 0x50

struct FSearchBarStyle
{
    FSlateBrush SearchBarBrush;                                                       // 0x0000 (size: 0x88)
    FSlateBrush SearchImage;                                                          // 0x0088 (size: 0x88)
    FMargin BarPadding;                                                               // 0x0110 (size: 0x10)
    FSlateBrush MenuBorderBrush;                                                      // 0x0120 (size: 0x88)
    FMargin MenuBorderPadding;                                                        // 0x01A8 (size: 0x10)
    FTableRowStyle ItemStyle;                                                         // 0x01B8 (size: 0x7C8)
    FEditableTextBoxStyle TextInputBoxStyle;                                          // 0x0980 (size: 0x7F0)

}; // Size: 0x1170

struct FSecondaryHUDInfo
{
}; // Size: 0x28

struct FSecondaryResourceWeight
{
    TSubclassOf<class AItemPickup> ResourcePickupType;                                // 0x0000 (size: 0x8)
    int32 Weight;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FSensorPingResponse
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0xC)
    FRotator Rotation;                                                                // 0x0014 (size: 0xC)
    uint8 QuantizedStrength;                                                          // 0x0020 (size: 0x1)
    bool bIsIntel;                                                                    // 0x0021 (size: 0x1)
    float ReceivedWorldTime;                                                          // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FServerTravelClientState
{
    EServerTravelStatusOnClient Status;                                               // 0x0000 (size: 0x1)
    EServerTravelOriginType OriginType;                                               // 0x0004 (size: 0x4)
    EWarServerType OriginServerType;                                                  // 0x0008 (size: 0x4)
    bool bIsBorderTravel;                                                             // 0x000C (size: 0x1)

}; // Size: 0x10

struct FSessionServerState
{
}; // Size: 0x14

struct FSessionWarStatus
{
}; // Size: 0x20

struct FShardConfig
{
    int32 PopulationCap;                                                              // 0x0000 (size: 0x4)
    TArray<FString> EnabledRegions;                                                   // 0x0008 (size: 0x10)
    FDateTime ScheduledConquestStartTime;                                             // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FShardStatus
{
    bool bShowColonialQueueWarning;                                                   // 0x0000 (size: 0x1)
    bool bShowWardenQueueWarning;                                                     // 0x0001 (size: 0x1)
    FString WarId;                                                                    // 0x0008 (size: 0x10)
    int32 SquadMaxSize;                                                               // 0x0018 (size: 0x4)
    bool bUseCustomSignaling;                                                         // 0x001C (size: 0x1)

}; // Size: 0x20

struct FShardStatusServerConnectionInfo
{
    FString currentMap;                                                               // 0x0000 (size: 0x10)
    FString steamId;                                                                  // 0x0010 (size: 0x10)
    FString ipAddress;                                                                // 0x0020 (size: 0x10)
    int32 Port;                                                                       // 0x0030 (size: 0x4)
    int32 BeaconPort;                                                                 // 0x0034 (size: 0x4)
    uint64 packedWarStatus;                                                           // 0x0038 (size: 0x8)
    uint64 packedServerState;                                                         // 0x0040 (size: 0x8)
    int16 colonialQueueSize;                                                          // 0x0048 (size: 0x2)
    int16 wardenQueueSize;                                                            // 0x004A (size: 0x2)
    FString Name;                                                                     // 0x0050 (size: 0x10)
    FString Version;                                                                  // 0x0060 (size: 0x10)
    int32 serverType;                                                                 // 0x0070 (size: 0x4)
    int16 openColonialSlots;                                                          // 0x0074 (size: 0x2)
    int16 openWardenSlots;                                                            // 0x0076 (size: 0x2)

}; // Size: 0x78

struct FShipAdjustment
{
    FVector NewLoc;                                                                   // 0x0000 (size: 0xC)
    FQuat NewRot;                                                                     // 0x0010 (size: 0x10)
    FVector NewVelocity;                                                              // 0x0020 (size: 0xC)
    FVector NewAngularMomentum;                                                       // 0x002C (size: 0xC)
    float RudderAngle;                                                                // 0x0038 (size: 0x4)
    float DivePlaneAngle;                                                             // 0x003C (size: 0x4)
    uint8 ServerMovementMode;                                                         // 0x0040 (size: 0x1)

}; // Size: 0x50

struct FShipDynamicData : public FTableRowBase
{
    float SecondsToMaxRPM;                                                            // 0x0008 (size: 0x4)
    float MaxPropellerRPM;                                                            // 0x000C (size: 0x4)
    float MaxRudderAngle;                                                             // 0x0010 (size: 0x4)
    float RudderTurnRate;                                                             // 0x0014 (size: 0x4)
    float Fp;                                                                         // 0x0018 (size: 0x4)
    float Fs;                                                                         // 0x001C (size: 0x4)
    float DragReferenceSpeed;                                                         // 0x0020 (size: 0x4)
    float Cpd1;                                                                       // 0x0024 (size: 0x4)
    float Cpd2;                                                                       // 0x0028 (size: 0x4)
    float Csd1;                                                                       // 0x002C (size: 0x4)
    float Csd2;                                                                       // 0x0030 (size: 0x4)
    float SlammingPower;                                                              // 0x0034 (size: 0x4)
    float GammaMax;                                                                   // 0x0038 (size: 0x4)
    float Cad;                                                                        // 0x003C (size: 0x4)
    float RudderLength;                                                               // 0x0040 (size: 0x4)
    float RudderDepth;                                                                // 0x0044 (size: 0x4)
    float ThrustVectoringPercent;                                                     // 0x0048 (size: 0x4)
    float MaxDivePlaneAngle;                                                          // 0x004C (size: 0x4)
    float DivePlaneTurnRate;                                                          // 0x0050 (size: 0x4)
    float VerticalThrustVectoringPercent;                                             // 0x0054 (size: 0x4)
    float BallastFloodRate;                                                           // 0x0058 (size: 0x4)
    float BallastBlowRate;                                                            // 0x005C (size: 0x4)
    float FullyFloodedEngineForceMultiplier;                                          // 0x0060 (size: 0x4)
    float BeachedEngineForceMultiplier;                                               // 0x0064 (size: 0x4)

}; // Size: 0x68

struct FShipVeryShortAdjustment
{
    FVector NewLoc;                                                                   // 0x0000 (size: 0xC)
    FQuat NewRot;                                                                     // 0x0010 (size: 0x10)
    float RudderAngle;                                                                // 0x0020 (size: 0x4)
    float DivePlaneAngle;                                                             // 0x0024 (size: 0x4)
    uint8 ServerMovementMode;                                                         // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FShippableInfo
{
    EShippableType Type;                                                              // 0x0000 (size: 0x1)
    bool bAllowShippableTransfer;                                                     // 0x0001 (size: 0x1)
    EShippableType MaxSupportedSize;                                                  // 0x0002 (size: 0x1)

}; // Size: 0xC

struct FShippableRenderInfo
{
    class UStaticMesh* Base;                                                          // 0x0000 (size: 0x8)
    class UStaticMesh* BaseDanglingRope;                                              // 0x0008 (size: 0x8)
    class UStaticMesh* BaseRope;                                                      // 0x0010 (size: 0x8)
    class UStaticMesh* ContainerDanglingRope;                                         // 0x0018 (size: 0x8)
    class UStaticMesh* ContainerRope;                                                 // 0x0020 (size: 0x8)
    FVector CollisionExtents;                                                         // 0x0028 (size: 0xC)
    float DanglingRopeOffsetZ;                                                        // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FSignPostVote
{
    FString VoterOnlineID;                                                            // 0x0000 (size: 0x10)
    bool bIsUpVote;                                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FSignedPayload
{
    uint8 Signature;                                                                  // 0x0000 (size: 0x14)
    TArray<uint8> Payload;                                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSkeletalMeshStop
{
    int32 Threshold;                                                                  // 0x0000 (size: 0x4)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSnapshotManagerTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FSoundClassVolume
{
    FString ClassName;                                                                // 0x0000 (size: 0x10)
    float Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FSpawnPoint
{
    uint32 ID;                                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSpawnPointInfo
{
    EWorldConquestMapId MapId;                                                        // 0x0000 (size: 0x1)
    uint8 SpawnPointType;                                                             // 0x0001 (size: 0x1)
    bool bIsAvailable;                                                                // 0x0002 (size: 0x1)
    uint16 SpawnCharges;                                                              // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FSpawnPoints
{
    ESpawnPointType Type;                                                             // 0x0000 (size: 0x1)
    ESpawnPointCategory Category;                                                     // 0x0001 (size: 0x1)
    FSpawnPoint SpawnPointID;                                                         // 0x0004 (size: 0x4)
    TArray<class USpawnPointComponent*> HighPrioritySpawns;                           // 0x0008 (size: 0x10)
    TArray<class USpawnPointComponent*> LowPrioritySpawn;                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSpecializedFactoryOrder
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    EFactionId FactionId;                                                             // 0x0010 (size: 0x1)
    EFactoryOrderAccess AccessLevel;                                                  // 0x0011 (size: 0x1)
    int32 SquadId;                                                                    // 0x0014 (size: 0x4)
    TArray<FSpecializedFactoryOrderItem> OrderItems;                                  // 0x0018 (size: 0x10)
    float ProductionTimeMultiplier;                                                   // 0x0028 (size: 0x4)
    float CompleteTime;                                                               // 0x002C (size: 0x4)

}; // Size: 0x30

struct FSpecializedFactoryOrderItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    bool bIsPrototype;                                                                // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FSpectateTarget
{
    class APlayerState* PlayerState;                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSplineConnectorComponentConfig
{
    FName ComponentName;                                                              // 0x0000 (size: 0x8)
    FTransform RelativeTransform;                                                     // 0x0010 (size: 0x30)
    float Distance;                                                                   // 0x0040 (size: 0x4)

}; // Size: 0x50

struct FSplineConnectorMeshConfig
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UStaticMesh*> Meshes;                                                // 0x0008 (size: 0x10)
    TArray<FDecalData> Decals;                                                        // 0x0018 (size: 0x10)
    bool bReceivesDecals;                                                             // 0x0028 (size: 0x1)
    class UMaterialInterface* BuildGhostMaterialOverride;                             // 0x0030 (size: 0x8)
    class UMaterialInterface* BuildSiteMaterialOverride;                              // 0x0038 (size: 0x8)
    ESplineConnectorMeshMode Mode;                                                    // 0x0040 (size: 0x4)
    TArray<FName> ComponentTags;                                                      // 0x0048 (size: 0x10)
    FName CollisionProfileName;                                                       // 0x0058 (size: 0x8)
    bool bCollisionOnly;                                                              // 0x0060 (size: 0x1)
    class UPhysicalMaterial* PhysMaterialOverride;                                    // 0x0068 (size: 0x8)
    uint8 CollisionIgnoreFlags;                                                       // 0x0070 (size: 0x1)
    TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;                            // 0x0071 (size: 0x1)
    uint32 StartIndex;                                                                // 0x0074 (size: 0x4)
    uint32 EndIndex;                                                                  // 0x0078 (size: 0x4)
    float BoxWidth;                                                                   // 0x007C (size: 0x4)
    float BoxHeight;                                                                  // 0x0080 (size: 0x4)
    float BoxLengthPadding;                                                           // 0x0084 (size: 0x4)
    TArray<FSplineConnectorMeshConfigPoint> SpawnPoints;                              // 0x0088 (size: 0x10)
    TEnumAsByte<ESplineMeshAxis::Type> SplineMeshAxis;                                // 0x0098 (size: 0x1)
    FVector2D SplineStartOffset;                                                      // 0x009C (size: 0x8)
    FVector2D SplineEndOffset;                                                        // 0x00A4 (size: 0x8)
    float SplineBoundaryMin;                                                          // 0x00AC (size: 0x4)
    float SplineBoundaryMax;                                                          // 0x00B0 (size: 0x4)
    float MinSplineLength;                                                            // 0x00B4 (size: 0x4)
    bool bExtendSplineToMinLength;                                                    // 0x00B8 (size: 0x1)
    float MinSplineLengthForCollision;                                                // 0x00BC (size: 0x4)
    FVector2D SplineMaterialScaling;                                                  // 0x00C0 (size: 0x8)
    float Interval;                                                                   // 0x00C8 (size: 0x4)
    float IntervalDeltaPerDegree;                                                     // 0x00CC (size: 0x4)
    bool bEvenlySpace;                                                                // 0x00D0 (size: 0x1)
    bool bLinearPlacement;                                                            // 0x00D1 (size: 0x1)
    bool bFillRemainder;                                                              // 0x00D2 (size: 0x1)
    bool bFixedPitch;                                                                 // 0x00D3 (size: 0x1)
    float FixedPitch;                                                                 // 0x00D4 (size: 0x4)
    float StartOffset;                                                                // 0x00D8 (size: 0x4)
    float EndOffset;                                                                  // 0x00DC (size: 0x4)
    float MaxSnapToLandscapeOffset;                                                   // 0x00E0 (size: 0x4)
    bool bApplySlopeOffset;                                                           // 0x00E4 (size: 0x1)
    bool bAlternateY;                                                                 // 0x00E5 (size: 0x1)
    int32 MaxInstances;                                                               // 0x00E8 (size: 0x4)
    FTransform RelativeTransform;                                                     // 0x00F0 (size: 0x30)
    FRotator RandomRotationVariance;                                                  // 0x0120 (size: 0xC)
    FVector RandomPositionVariance;                                                   // 0x012C (size: 0xC)
    bool bDisplayOnInvalidPath;                                                       // 0x0138 (size: 0x1)
    int32 CopyPlacementRangeFrom;                                                     // 0x013C (size: 0x4)
    bool bIsEndCap;                                                                   // 0x0140 (size: 0x1)
    bool bEndCapReactsToSockets;                                                      // 0x0141 (size: 0x1)
    bool bReactToSurface;                                                             // 0x0142 (size: 0x1)
    FMeshConfigSurfaceSettings SurfaceSettings;                                       // 0x0148 (size: 0x28)

}; // Size: 0x170

struct FSplineConnectorMeshConfigPoint
{
    int32 PointIndex;                                                                 // 0x0000 (size: 0x4)
    float MinPrevDistance;                                                            // 0x0004 (size: 0x4)
    float MinNextDistance;                                                            // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSplineConnectorMeshConfigTransient
{
}; // Size: 0x38

struct FSplineConnectorTickFunction : public FTickFunction
{
}; // Size: 0x78

struct FSquad
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString SquadName;                                                                // 0x0008 (size: 0x10)
    int8 AccessLevel;                                                                 // 0x0018 (size: 0x1)
    FSquadMember Leader;                                                              // 0x0020 (size: 0x28)
    TArray<FSquadMember> MemberList;                                                  // 0x0048 (size: 0x10)
    TArray<FSquadMember> InactiveMemberList;                                          // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FSquadAccessLevelChangedMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    int8 AccessLevel;                                                                 // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FSquadDeletedMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSquadErrorResponse
{
    bool bSquadFull;                                                                  // 0x0000 (size: 0x1)
    bool bTooManySquads;                                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSquadInfo
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString LeaderName;                                                               // 0x0018 (size: 0x10)
    FString LeaderOnlineID;                                                           // 0x0028 (size: 0x10)
    int16 OnlineActiveCount;                                                          // 0x0038 (size: 0x2)
    int16 OnlineInactiveCount;                                                        // 0x003A (size: 0x2)
    int8 AccessLevel;                                                                 // 0x003C (size: 0x1)

}; // Size: 0x40

struct FSquadInviteInfo
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString SquadName;                                                                // 0x0008 (size: 0x10)
    FSquadMember LeaderMember;                                                        // 0x0018 (size: 0x28)
    FString TargetOnlineID;                                                           // 0x0040 (size: 0x10)
    int8 FactionId;                                                                   // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FSquadInviteWarMessage
{
    FSquadInviteInfo SquadInviteInfo;                                                 // 0x0000 (size: 0x58)

}; // Size: 0x58

struct FSquadLeaderChangedMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString LeaderOnlineID;                                                           // 0x0008 (size: 0x10)
    FString LeaderName;                                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSquadManager
{
}; // Size: 0x380

struct FSquadMember
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    bool bIsOfficer;                                                                  // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSquadMemberDeltaMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString OnlineID;                                                                 // 0x0008 (size: 0x10)
    FString Name;                                                                     // 0x0018 (size: 0x10)
    bool bIsAdd;                                                                      // 0x0028 (size: 0x1)
    bool bIsActive;                                                                   // 0x0029 (size: 0x1)
    bool bIsOfficer;                                                                  // 0x002A (size: 0x1)

}; // Size: 0x30

struct FSquadMessageMessage
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Message;                                                                  // 0x0020 (size: 0x10)
    int32 SquadId;                                                                    // 0x0030 (size: 0x4)
    int8 Language;                                                                    // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FSquadMessageWarMessage
{
    FString Message;                                                                  // 0x0000 (size: 0x10)
    int8 Language;                                                                    // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FSquadOfficerDeltaMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString OnlineID;                                                                 // 0x0008 (size: 0x10)
    bool bNewOfficerState;                                                            // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FSquadOfficerDeltaWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString OnlineID;                                                                 // 0x0008 (size: 0x10)
    bool bNewOfficerState;                                                            // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FSquadOfficerToLeaderResponseMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    bool bRequestSuccessful;                                                          // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FSquadOnlineCounts
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    int16 Active;                                                                     // 0x0004 (size: 0x2)
    int16 Inactive;                                                                   // 0x0006 (size: 0x2)

}; // Size: 0x8

struct FSquadOnlineCountsMessage
{
    TArray<FSquadOnlineCounts> SquadOnlineCounts;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSquadRemovedMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSquadRenamedMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSquadReplicatedState
{
    TArray<int32> ActiveSquadIdList;                                                  // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSquadStyle
{
    FButtonStyle CreateButton;                                                        // 0x0000 (size: 0x278)
    FButtonStyle LeaveButton;                                                         // 0x0278 (size: 0x278)
    FButtonStyle SquadPanelToggleOnButton;                                            // 0x04F0 (size: 0x278)
    FButtonStyle SquadPanelToggleOffButton;                                           // 0x0768 (size: 0x278)
    FButtonStyle SquadPanelActivateButton;                                            // 0x09E0 (size: 0x278)
    FSlateBrush SquadActiveBrush;                                                     // 0x0C58 (size: 0x88)
    FCheckBoxStyle PrivacyCheckBox;                                                   // 0x0CE0 (size: 0x580)
    FSlateBrush PrivateIcon;                                                          // 0x1260 (size: 0x88)
    FSlateBrush LeaderIcon;                                                           // 0x12E8 (size: 0x88)
    FSlateBrush OfficerIcon;                                                          // 0x1370 (size: 0x88)
    FSlateColor SquadNameColour;                                                      // 0x13F8 (size: 0x28)
    FSlateColor LeaderNameColour;                                                     // 0x1420 (size: 0x28)
    FSlateColor InactiveLeaderNameColour;                                             // 0x1448 (size: 0x28)
    FSlateColor MemberNameColour;                                                     // 0x1470 (size: 0x28)
    FSlateColor InactiveMemberNameColour;                                             // 0x1498 (size: 0x28)
    FButtonStyle SquadListElementButton;                                              // 0x14C0 (size: 0x278)

}; // Size: 0x1738

struct FStaticArtilleryDamageParams
{
    TSubclassOf<class UDamageType> Type;                                              // 0x0000 (size: 0x8)
    float BaseAmount;                                                                 // 0x0008 (size: 0x4)
    float Radius;                                                                     // 0x000C (size: 0x4)
    float InnerRadius;                                                                // 0x0010 (size: 0x4)
    float Falloff;                                                                    // 0x0014 (size: 0x4)
    float AccuracyRadius;                                                             // 0x0018 (size: 0x4)
    TSubclassOf<class AWarExplosionEffect> ExplosionClass;                            // 0x0020 (size: 0x8)
    class USoundCue* ShotSoundCue;                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStaticCheckBoxStyle
{
    FSlateBrush BGImage;                                                              // 0x0000 (size: 0x88)
    FSlateBrush FGImage;                                                              // 0x0088 (size: 0x88)

}; // Size: 0x110

struct FStaticMeshOverride
{
    class UStaticMesh* Target;                                                        // 0x0000 (size: 0x8)
    class UStaticMesh* Override;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStatusStyle
{
    FSlateBrush BleedingImage;                                                        // 0x0000 (size: 0x88)
    FSlateBrush BleedingModerateImage;                                                // 0x0088 (size: 0x88)
    FSlateBrush BleedingCriticalImage;                                                // 0x0110 (size: 0x88)
    FSlateBrush EncumberedImage;                                                      // 0x0198 (size: 0x88)
    FSlateBrush EncumberedModerateImage;                                              // 0x0220 (size: 0x88)
    FSlateBrush EncumberedCriticalImage;                                              // 0x02A8 (size: 0x88)
    FSlateBrush HiddenImage;                                                          // 0x0330 (size: 0x88)
    FSlateBrush HiddenModerateImage;                                                  // 0x03B8 (size: 0x88)
    FSlateBrush HiddenCriticalImage;                                                  // 0x0440 (size: 0x88)
    FSlateBrush WoundedImage;                                                         // 0x04C8 (size: 0x88)
    FSlateBrush WoundedModerateImage;                                                 // 0x0550 (size: 0x88)
    FSlateBrush WoundedCriticalImage;                                                 // 0x05D8 (size: 0x88)
    FSlateBrush LowHealthImage;                                                       // 0x0660 (size: 0x88)
    FSlateBrush LowHealthModerateImage;                                               // 0x06E8 (size: 0x88)
    FSlateBrush LowHealthCriticalImage;                                               // 0x0770 (size: 0x88)
    FSlateBrush LockedImage;                                                          // 0x07F8 (size: 0x88)
    FSlateBrush UnlockedImage;                                                        // 0x0880 (size: 0x88)

}; // Size: 0x908

struct FStealthChecker
{
}; // Size: 0x1

struct FStockpileAccessEvent
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int16 Quantity;                                                                   // 0x0008 (size: 0x2)
    bool bIsCrate;                                                                    // 0x000A (size: 0x1)
    FString OnlineID;                                                                 // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FStockpileBroadcastAlertInfo
{
    FString StockpilerOnlineID;                                                       // 0x0000 (size: 0x10)
    FString StockpilerPlayerName;                                                     // 0x0010 (size: 0x10)
    class AStructure* StockpiledStructure;                                            // 0x0020 (size: 0x8)
    TArray<FStockpileEntry> Submissions;                                              // 0x0028 (size: 0x10)
    bool bAreSubmissionsCrates;                                                       // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FStockpileEffects
{
    uint8 DebuffPercent;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FStockpileEntry
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    int16 Quantity;                                                                   // 0x0008 (size: 0x2)

}; // Size: 0xC

struct FStockpileEvents
{
    TArray<FStockpileAccessEvent> ItemEvents;                                         // 0x0000 (size: 0x10)
    TArray<FStockpileAccessEvent> VehicleEvents;                                      // 0x0010 (size: 0x10)
    TArray<FStockpileAccessEvent> StructureEvents;                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FStockpileItemFilter
{
    int32 ItemHolderSlotIndex;                                                        // 0x0000 (size: 0x4)
    int32 QuantityToSubmit;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FStructureBuildStep
{
    FName RequiredCodeName;                                                           // 0x0000 (size: 0x8)
    FName NextStructureCodeName;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStructureDynamicData : public FTableRowBase
{
    int32 MaxHealth;                                                                  // 0x0008 (size: 0x4)
    FResourceAmounts ResourceAmounts;                                                 // 0x0010 (size: 0x20)
    FResourceAmounts AltResourceAmounts;                                              // 0x0030 (size: 0x20)
    float DecayStartHours;                                                            // 0x0050 (size: 0x4)
    float DecayDurationHours;                                                         // 0x0054 (size: 0x4)
    int32 RepairCost;                                                                 // 0x0058 (size: 0x4)
    float StructuralIntegrity;                                                        // 0x005C (size: 0x4)
    int32 StoredItemCapacity;                                                         // 0x0060 (size: 0x4)
    int32 RamDamageReceivedFlags;                                                     // 0x0064 (size: 0x4)
    bool bCanBeHarvested;                                                             // 0x0068 (size: 0x1)
    bool IsVaultable;                                                                 // 0x0069 (size: 0x1)
    bool bIsDamagedWhileDrivingOver;                                                  // 0x006A (size: 0x1)

}; // Size: 0x70

struct FStructureProfileData
{
    bool bHasDynamicStartingCondition;                                                // 0x0000 (size: 0x1)
    bool bIsRepairable;                                                               // 0x0001 (size: 0x1)
    bool bIsUpgradeRotationAllowed;                                                   // 0x0002 (size: 0x1)
    bool bIsUsableFromVehicle;                                                        // 0x0003 (size: 0x1)
    bool bAllowUpgradeWhenDamaged;                                                    // 0x0004 (size: 0x1)
    bool bCanOverlapNonBlockingFoliage;                                               // 0x0005 (size: 0x1)
    bool bDisallowAdjacentUpgradesInIsland;                                           // 0x0006 (size: 0x1)
    bool bIncludeInStructureIslands;                                                  // 0x0007 (size: 0x1)
    bool bCanDecayBePrevented;                                                        // 0x0008 (size: 0x1)
    float VerticalEjectionDistance;                                                   // 0x000C (size: 0x4)
    bool bEnableStealth;                                                              // 0x0010 (size: 0x1)
    bool bIsRuinable;                                                                 // 0x0011 (size: 0x1)
    bool bBypassesRapidDecayForNearbyStructures;                                      // 0x0012 (size: 0x1)
    bool bUsesImpactsMaterial;                                                        // 0x0013 (size: 0x1)
    bool bIsBurnable;                                                                 // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FStructureStats
{
    class AActor* Structure;                                                          // 0x0000 (size: 0x8)
    float DecayRemainingTime_Sec;                                                     // 0x0008 (size: 0x4)
    float DecayAmount;                                                                // 0x000C (size: 0x4)
    bool bShouldDecay;                                                                // 0x0010 (size: 0x1)
    bool bCanApplyDecay;                                                              // 0x0011 (size: 0x1)
    bool bIsBuildSite;                                                                // 0x0012 (size: 0x1)
    int32 Health;                                                                     // 0x0014 (size: 0x4)
    int32 MaxHealth;                                                                  // 0x0018 (size: 0x4)
    FResourceAmounts ResourceRequirements;                                            // 0x0020 (size: 0x20)
    float ConcreteProgress;                                                           // 0x0040 (size: 0x4)
    float IslandHealth;                                                               // 0x0044 (size: 0x4)
    float IslandIntegrityBonus;                                                       // 0x0048 (size: 0x4)
    float Suppression;                                                                // 0x004C (size: 0x4)
    float ShelterBonus;                                                               // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FSubmarineDivePlane
{
    FVector Pivot;                                                                    // 0x0000 (size: 0xC)
    FVector2D Size;                                                                   // 0x000C (size: 0x8)

}; // Size: 0x14

struct FSurfaceMovementData
{
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0000 (size: 0x8)
    float StaminaDrainModifier;                                                       // 0x0008 (size: 0x4)
    float MovementSpeedModifier;                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FTechResource
{
    EFactionId FactionId;                                                             // 0x0000 (size: 0x1)
    ETechResourceID ID;                                                               // 0x0001 (size: 0x1)
    int16 Amount;                                                                     // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FTechStateDataFormat
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    int32 UniqueId;                                                                   // 0x0010 (size: 0x4)
    TArray<int32> TechIndexToItemIndex;                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FTechStateEndMessage
{
    int32 TechStateID;                                                                // 0x0000 (size: 0x4)
    TArray<int64> CompletedTimes;                                                     // 0x0008 (size: 0x10)
    TArray<float> ActivityWeights;                                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FTechStateStartMessage
{
    int32 TechStateID;                                                                // 0x0000 (size: 0x4)
    int8 DataUniqueID;                                                                // 0x0004 (size: 0x1)
    int8 TeamId;                                                                      // 0x0005 (size: 0x1)
    int8 Territory;                                                                   // 0x0006 (size: 0x1)
    bool bIsContested;                                                                // 0x0007 (size: 0x1)

}; // Size: 0x8

struct FTechStateToolData
{
    TArray<FString> MapNames;                                                         // 0x0000 (size: 0x10)
    TArray<FString> TechNames;                                                        // 0x0010 (size: 0x10)
    TArray<FTechStateDataFormat> Formats;                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FTechStateUpdateMessage
{
    int32 TechStateID;                                                                // 0x0000 (size: 0x4)
    TArray<int64> CompletedTimes;                                                     // 0x0008 (size: 0x10)
    TArray<float> ActivityWeights;                                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FTechTreeCategories
{
    FTechTreeCategory Vehicles;                                                       // 0x0000 (size: 0x38)
    FTechTreeCategory Misc;                                                           // 0x0038 (size: 0x38)

}; // Size: 0x70

struct FTechTreeCategory
{
    TArray<FTechTreeLevel> Levels;                                                    // 0x0000 (size: 0x10)

}; // Size: 0x38

struct FTechTreeComponentItem
{
    ETechComponentID TechID;                                                          // 0x0000 (size: 0x1)
    ETechComponentID NextTechID;                                                      // 0x0001 (size: 0x1)
    EInfrastructureType InfrastructureType;                                           // 0x0002 (size: 0x1)
    int32 Requirement;                                                                // 0x0004 (size: 0x4)
    int32 ModRequirement;                                                             // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FTechTreeComponentItemProgress
{
    ETechComponentID TechID;                                                          // 0x0000 (size: 0x1)
    float Amount;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FTechTreeComponentNetworkStatus
{
    int32 ItemUnlockBits;                                                             // 0x0000 (size: 0x4)
    int32 InfrastructureModCounts;                                                    // 0x0004 (size: 0x14)

}; // Size: 0x18

struct FTechTreeComponentUIItem
{
    FText NameOverride;                                                               // 0x0000 (size: 0x18)
    FText DescriptionOverride;                                                        // 0x0018 (size: 0x18)
    FSlateBrush FadedBrush;                                                           // 0x0030 (size: 0x88)
    FSlateBrush Brush;                                                                // 0x00B8 (size: 0x88)
    TArray<FName> CodeNames;                                                          // 0x0140 (size: 0x10)

}; // Size: 0x150

struct FTechTreeComponentVotes
{
    EInfrastructureType StaticBaseVote;                                               // 0x0000 (size: 0x1)
    EInfrastructureType ForwardBaseVote;                                              // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FTechTreeItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    ETechID TechID;                                                                   // 0x0008 (size: 0x2)

}; // Size: 0x10

struct FTechTreeItemInfo
{
    FSlateBrush BrushOverride;                                                        // 0x0000 (size: 0x88)
    FText DisplayNameOverride;                                                        // 0x0088 (size: 0x18)
    FText DescriptionOverride;                                                        // 0x00A0 (size: 0x18)

}; // Size: 0xB8

struct FTechTreeLevel
{
    FName ItemCodeName;                                                               // 0x0000 (size: 0x8)
    uint16 ItemsRequired;                                                             // 0x0008 (size: 0x2)
    uint16 TechRequired;                                                              // 0x000A (size: 0x2)
    TArray<FTechTreeItem> Items;                                                      // 0x0010 (size: 0x10)
    TArray<FTechTreeItem> SecondaryItems;                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FTechTreeLineStyle
{
    FSlateBrush SolidColour;                                                          // 0x0000 (size: 0x88)

}; // Size: 0x88

struct FTechTreeStyle
{
    FTechTreeLineStyle LineStyle;                                                     // 0x0000 (size: 0x88)
    FTechTreeLineStyle LineHighlightStyle;                                            // 0x0088 (size: 0x88)
    FSlateBrush Separator;                                                            // 0x0110 (size: 0x88)
    FSlateBrush Status;                                                               // 0x0198 (size: 0x88)
    FSlateBrush Locked;                                                               // 0x0220 (size: 0x88)
    FSlateBrush Unlocked;                                                             // 0x02A8 (size: 0x88)
    FSlateBrush Unknown;                                                              // 0x0330 (size: 0x88)
    FSlateBrush LevelBG;                                                              // 0x03B8 (size: 0x88)
    FSlateBrush CurrentLevelBG;                                                       // 0x0440 (size: 0x88)
    FSlateBrush TechLevels;                                                           // 0x04C8 (size: 0x198)

}; // Size: 0x660

struct FTextStyles
{
    FTextBlockStyle ColumnLableTextStyle;                                             // 0x0000 (size: 0x268)
    FTextBlockStyle HeaderTextStyle;                                                  // 0x0268 (size: 0x268)
    FTextBlockStyle Header16ptTextStyle;                                              // 0x04D0 (size: 0x268)
    FTextBlockStyle Regular10ptTextStyle;                                             // 0x0738 (size: 0x268)
    FTextBlockStyle Regular12ptTextStyle;                                             // 0x09A0 (size: 0x268)
    FTextBlockStyle Regular14ptTextStyle;                                             // 0x0C08 (size: 0x268)
    FTextBlockStyle Regular16ptTextStyle;                                             // 0x0E70 (size: 0x268)
    FTextBlockStyle Regular24ptTextStyle;                                             // 0x10D8 (size: 0x268)
    FTextBlockStyle Bold10ptTextStyle;                                                // 0x1340 (size: 0x268)
    FTextBlockStyle Bold12ptTextStyle;                                                // 0x15A8 (size: 0x268)
    FTextBlockStyle Italic10ptTextStyle;                                              // 0x1810 (size: 0x268)
    FTextBlockStyle Italic12TextStyle;                                                // 0x1A78 (size: 0x268)
    FLinearColor HighlightColor;                                                      // 0x1CE0 (size: 0x10)

}; // Size: 0x1CF0

struct FThrowingStabilityInfo
{
    float MaxApexHalfAngle;                                                           // 0x0000 (size: 0x4)
    float BaselineApexHalfAngle;                                                      // 0x0004 (size: 0x4)
    float YawSettleTime;                                                              // 0x0008 (size: 0x4)
    float YawPeneltyPct;                                                              // 0x000C (size: 0x4)
    float DistancePeneltyPct;                                                         // 0x0010 (size: 0x4)
    float DistanceForMaxPenelty;                                                      // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FToggleSquadPrivacyWarMessage
{
    int32 SquadId;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTooltipDetailText
{
    ETooltipDetailType TooltipDetailType;                                             // 0x0000 (size: 0x1)
    FText Text;                                                                       // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FTownHallInfo
{
    int8 TeamId;                                                                      // 0x0000 (size: 0x1)
    ETownHallState TownHallState;                                                     // 0x0001 (size: 0x1)
    FVector2D_NetQuantize Location;                                                   // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FTrainInfo
{
    class ARailVehicle* Front;                                                        // 0x0000 (size: 0x8)
    class ARailVehicle* Back;                                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FTrainRepInfo
{
}; // Size: 0x60

struct FTravelMapStyle
{
    FButtonStyle TravelPoint;                                                         // 0x0000 (size: 0x278)
    FButtonStyle RecoveryTravelPoint;                                                 // 0x0278 (size: 0x278)
    float MinTravelPointSize;                                                         // 0x04F0 (size: 0x4)
    float MaxTravelPointSize;                                                         // 0x04F4 (size: 0x4)
    TArray<FActivityIndicatorStyle> ActivityStyles;                                   // 0x04F8 (size: 0x10)
    FLinearColor DefaultActivityColor;                                                // 0x0508 (size: 0x10)
    FLinearColor ReinforceActivityColor;                                              // 0x0518 (size: 0x10)
    float ActivityAnimationTime;                                                      // 0x0528 (size: 0x4)
    float ActivityTimeOffset;                                                         // 0x052C (size: 0x4)

}; // Size: 0x530

struct FTreadActorInfo
{
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x0000 (size: 0x8)
    TSubclassOf<class ADecalActor> TreadActor;                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FTreadData
{
    int32 TrackMaterialIndices;                                                       // 0x0000 (size: 0x8)
    float TrackLength;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x1C

struct FTripodHeightConfig
{
    float MaxHeight;                                                                  // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTutorialStyle
{
    FSlateBrush HomeRegionC;                                                          // 0x0000 (size: 0x88)
    FSlateBrush HomeRegionW;                                                          // 0x0088 (size: 0x88)
    FControlsPage ControlsPage;                                                       // 0x0110 (size: 0x20)
    FControlsPage MiscControlsPage;                                                   // 0x0130 (size: 0x20)
    FSlateBrush Arrow;                                                                // 0x0150 (size: 0x88)

}; // Size: 0x1D8

struct FTweakables
{
}; // Size: 0x58

struct FUITargetingInfo
{
    int32 MaxRange;                                                                   // 0x0000 (size: 0x4)
    int32 MaxReachability;                                                            // 0x0004 (size: 0x4)
    FVector MuzzleLocation;                                                           // 0x0008 (size: 0xC)
    TWeakObjectPtr<class AActor> ActorToIgnore;                                       // 0x0014 (size: 0x8)
    bool bHasLOS;                                                                     // 0x001C (size: 0x1)
    bool bWeaponReady;                                                                // 0x001D (size: 0x1)
    FVector TargetPoint;                                                              // 0x0020 (size: 0xC)
    FVector BlockPoint;                                                               // 0x002C (size: 0xC)
    FVector ImpactPoint;                                                              // 0x0038 (size: 0xC)
    FVector GroundReference;                                                          // 0x0044 (size: 0xC)
    bool bMuzzleBlocked;                                                              // 0x0050 (size: 0x1)
    bool bOverrideMouseAimDirection;                                                  // 0x0051 (size: 0x1)

}; // Size: 0x54

struct FUObjectHandle
{
    int32 ObjectIndex;                                                                // 0x0000 (size: 0x4)
    int32 ObjectSerialNumber;                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FUniform
{
    int32 ItemHolderCapacity;                                                         // 0x0000 (size: 0x4)
    uint32 StackFilter;                                                               // 0x0004 (size: 0x4)
    int8 StackSize;                                                                   // 0x0008 (size: 0x1)
    uint32 EncumbranceFilter;                                                         // 0x000C (size: 0x4)
    float EncumbranceModifier;                                                        // 0x0010 (size: 0x4)
    float DeepWaterSpeedModifier;                                                     // 0x0014 (size: 0x4)
    float DetectionChance;                                                            // 0x0018 (size: 0x4)
    float SnowStormMitigation;                                                        // 0x001C (size: 0x4)
    float RainStormMitigation;                                                        // 0x0020 (size: 0x4)
    TMap<class EDamageType, class FDamageMitigation> DamageMitigation;                // 0x0028 (size: 0x50)
    float BleedChanceModifier;                                                        // 0x0078 (size: 0x4)
    bool bAllowRegimentFriendlyFire;                                                  // 0x007C (size: 0x1)

}; // Size: 0x80

struct FUniformRenderInfo
{
    FCharacterRenderInfo Male;                                                        // 0x0000 (size: 0x8A0)
    FCharacterRenderInfo Female;                                                      // 0x08A0 (size: 0x8A0)

}; // Size: 0x1140

struct FVIPModeChangedMessage
{
    bool bIsVipMode;                                                                  // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FVector2D_Byte
{
    int8 X;                                                                           // 0x0000 (size: 0x1)
    int8 Y;                                                                           // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FVector2D_NetQuantize : public FVector
{
}; // Size: 0xC

struct FVector2D_NetQuantize10 : public FVector2D
{
}; // Size: 0x8

struct FVehicleDeploymentLogic
{
    bool bRequiresDeployment;                                                         // 0x0000 (size: 0x1)
    bool bRequiresHorizontalResetForUndeployment;                                     // 0x0001 (size: 0x1)
    bool bDeploymentAdjustsPitch;                                                     // 0x0002 (size: 0x1)
    bool bUndeployingCountAsDeployed;                                                 // 0x0003 (size: 0x1)
    float UndeployedAngle;                                                            // 0x0004 (size: 0x4)
    float DeploymentTime;                                                             // 0x0008 (size: 0x4)
    float MaxGroundAngleDeviation;                                                    // 0x000C (size: 0x4)
    float HorizontalResetSpeed;                                                       // 0x0018 (size: 0x4)
    EVehicleDeploymentState DeploymentState;                                          // 0x001C (size: 0x1)

}; // Size: 0x20

struct FVehicleDynamicData : public FTableRowBase
{
    FResourceAmounts ResourceAmounts;                                                 // 0x0008 (size: 0x20)
    FResourceAmounts AltResourceAmounts;                                              // 0x0028 (size: 0x20)
    bool bHasTierUpgrades;                                                            // 0x0048 (size: 0x1)
    FResourceAmounts UpgradeResourceAmounts;                                          // 0x0050 (size: 0x20)
    int32 MaxHealth;                                                                  // 0x0070 (size: 0x4)
    float MinorDamagePercent;                                                         // 0x0074 (size: 0x4)
    float MajorDamagePercent;                                                         // 0x0078 (size: 0x4)
    int32 RepairCost;                                                                 // 0x007C (size: 0x4)
    int32 ResourcesPerBuildCycle;                                                     // 0x0080 (size: 0x4)
    int32 ItemHolderCapacity;                                                         // 0x0084 (size: 0x4)
    TArray<FItemSlotFilter> ItemSlotFilters;                                          // 0x0088 (size: 0x10)
    float FuelCapacity;                                                               // 0x0098 (size: 0x4)
    float FuelConsumptionPerSecond;                                                   // 0x009C (size: 0x4)
    float SwimmingFuelConsumptionModifier;                                            // 0x00A0 (size: 0x4)
    float DefaultSurfaceMovementRate;                                                 // 0x00A4 (size: 0x4)
    float OffroadSnowPenalty;                                                         // 0x00A8 (size: 0x4)
    float ReverseSpeedModifier;                                                       // 0x00AC (size: 0x4)
    float RotationRate;                                                               // 0x00B0 (size: 0x4)
    float RotationSpeedCuttoff;                                                       // 0x00B4 (size: 0x4)
    float SpeedSqrThreshold;                                                          // 0x00B8 (size: 0x4)
    float EngineForce;                                                                // 0x00BC (size: 0x4)
    float MassOverride;                                                               // 0x00C0 (size: 0x4)
    float MaxEncumbranceMassOverride;                                                 // 0x00C4 (size: 0x4)
    float TowingResistanceOverride;                                                   // 0x00C8 (size: 0x4)
    int32 TankArmour;                                                                 // 0x00CC (size: 0x4)
    float MinTankArmourPercent;                                                       // 0x00D0 (size: 0x4)
    float TankArmourMinPenetrationChance;                                             // 0x00D4 (size: 0x4)
    float VehicleSubsystemDisableChances;                                             // 0x00D8 (size: 0x1C)

}; // Size: 0xF8

struct FVehicleGunnerInfo
{
    FVector2D YawAndPitch;                                                            // 0x0000 (size: 0x8)
    bool bIsWorking;                                                                  // 0x0008 (size: 0x1)
    bool bIsFiring;                                                                   // 0x0009 (size: 0x1)
    int32 AmmoAmount;                                                                 // 0x000C (size: 0x4)
    FName AmmoName;                                                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FVehicleMapIntelligenceProvider
{
    float TransmitPeriodSeconds;                                                      // 0x0000 (size: 0x4)
    float DetectionRadius;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x20

struct FVehicleMovementProfileData
{
    float Mass;                                                                       // 0x0000 (size: 0x4)
    float MaxEncumbranceMassOverride;                                                 // 0x0004 (size: 0x4)
    float BrakeForce;                                                                 // 0x0008 (size: 0x4)
    float HandbrakeForce;                                                             // 0x000C (size: 0x4)
    float AirResistance;                                                              // 0x0010 (size: 0x4)
    float RollingResistance;                                                          // 0x0014 (size: 0x4)
    float TowingResistance;                                                           // 0x0018 (size: 0x4)
    bool bSupportsManualLowGear;                                                      // 0x001C (size: 0x1)
    float LowSpeedEngineForceMultiplier;                                              // 0x0020 (size: 0x4)
    float LowGearCutoff;                                                              // 0x0024 (size: 0x4)
    float CenterOfGravityHeight;                                                      // 0x0028 (size: 0x4)
    class UCurveFloat* FrontGripCurve;                                                // 0x0030 (size: 0x8)
    class UCurveFloat* RearGripCurve;                                                 // 0x0038 (size: 0x8)
    class UCurveFloat* EngineForceMultiplierCurve;                                    // 0x0040 (size: 0x8)
    class UCurveFloat* LowGearEngineForceMultiplierCurve;                             // 0x0048 (size: 0x8)
    bool bUsesDifferentialSteering;                                                   // 0x0050 (size: 0x1)
    bool bCanRotateInPlace;                                                           // 0x0051 (size: 0x1)
    class UCurveFloat* MuddynessPerDistanceCurve;                                     // 0x0058 (size: 0x8)
    float MuddynessDecayPerDistance;                                                  // 0x0060 (size: 0x4)
    float MuddynessDecayPerDistanceInWater;                                           // 0x0064 (size: 0x4)
    float EncumbrancePerMuddyness;                                                    // 0x0068 (size: 0x4)
    float MassPerMuddyness;                                                           // 0x006C (size: 0x4)
    float ExtinguishingDamageMultiplier;                                              // 0x0070 (size: 0x4)
    float DamageToMuddyness;                                                          // 0x0074 (size: 0x4)

}; // Size: 0x78

struct FVehicleProfileData
{
    bool bUsesRollTrace;                                                              // 0x0000 (size: 0x1)
    bool bCanTriggerMine;                                                             // 0x0001 (size: 0x1)
    bool bCanTriggerInfantryMine;                                                     // 0x0002 (size: 0x1)
    int32 RamDamageDealtFlags;                                                        // 0x0004 (size: 0x4)
    bool bUsesGas;                                                                    // 0x0008 (size: 0x1)
    float DrivingSpeedThreshold;                                                      // 0x000C (size: 0x4)
    float MaxVehicleAngle;                                                            // 0x0010 (size: 0x4)
    bool bEnableStealth;                                                              // 0x0014 (size: 0x1)
    float DamageDrivingOverStructures;                                                // 0x0018 (size: 0x4)
    float DamageDrivingOverIce;                                                       // 0x001C (size: 0x4)
    bool bIsAllowedToLoadMultiple;                                                    // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FViolationEvent
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)
    FString PlayerName;                                                               // 0x0020 (size: 0x10)
    int64 Timestamp;                                                                  // 0x0030 (size: 0x8)
    EViolationLogType LogType;                                                        // 0x0038 (size: 0x1)
    EBanReason Reason;                                                                // 0x0039 (size: 0x1)
    double DurationMins;                                                              // 0x0040 (size: 0x8)
    FString InstigatorOnlineId;                                                       // 0x0048 (size: 0x10)
    float Rtk;                                                                        // 0x0058 (size: 0x4)
    float Rtd;                                                                        // 0x005C (size: 0x4)
    float Rsd;                                                                        // 0x0060 (size: 0x4)
    float Rvd;                                                                        // 0x0064 (size: 0x4)
    int16 Rnc;                                                                        // 0x0068 (size: 0x2)
    FString Note;                                                                     // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FViolationLog
{
}; // Size: 0x1

struct FVoiceLoginInfo
{
    FString OnlineID;                                                                 // 0x0000 (size: 0x10)
    FString LoginToken;                                                               // 0x0010 (size: 0x10)
    EVoiceChannelType ChannelType;                                                    // 0x0020 (size: 0x1)
    FString ChannelName;                                                              // 0x0028 (size: 0x10)
    FString ChannelJoinToken;                                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FVoteKickRequest
{
    FString InstigatorOnlineId;                                                       // 0x0000 (size: 0x10)
    FString TargetOnlineID;                                                           // 0x0010 (size: 0x10)
    FString PlayerName;                                                               // 0x0020 (size: 0x10)
    FString DeviceID;                                                                 // 0x0030 (size: 0x10)
    int8 TeamId;                                                                      // 0x0040 (size: 0x1)
    float RecentTeamKills;                                                            // 0x0044 (size: 0x4)
    float RecentFriendlyCharacterDamage;                                              // 0x0048 (size: 0x4)
    float RecentFriendlyStructureDamage;                                              // 0x004C (size: 0x4)
    float RecentFriendlyVehicleDamage;                                                // 0x0050 (size: 0x4)
    int16 RecentNameChanges;                                                          // 0x0054 (size: 0x2)

}; // Size: 0x58

struct FWarAPIClient
{
}; // Size: 0x28

struct FWarAPIRequestInfo
{
    FDateTime LastRequestTime;                                                        // 0x0000 (size: 0x8)
    FString ETag;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWarAPIWarReportSummary
{
    int32 DayOfWar;                                                                   // 0x0000 (size: 0x4)
    int32 ColonialCasualties;                                                         // 0x0004 (size: 0x4)
    int32 WardenCasualties;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FWarAchievementCompletedInfo
{
    EWarAchievementType Type;                                                         // 0x0000 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FWarAchievementConfig
{
    EWarAchievementType Type;                                                         // 0x0000 (size: 0x1)
    FSlateBrush Icon;                                                                 // 0x0008 (size: 0x88)
    FText DisplayName;                                                                // 0x0090 (size: 0x18)
    FText Description;                                                                // 0x00A8 (size: 0x18)

}; // Size: 0xC0

struct FWarAchievementParamResponse
{
}; // Size: 0x28

struct FWarAchievementProgress
{
    TArray<float> ColonialProgress;                                                   // 0x0000 (size: 0x10)
    TArray<float> WardenProgress;                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWarAchievementTownNumbersResponse
{
}; // Size: 0x28

struct FWarAchievements
{
}; // Size: 0x1

struct FWarAchievementsStyle
{
    TArray<FWarAchievementConfig> WarAchievementConfigList;                           // 0x0000 (size: 0x10)
    FSlateBrush ProgressBarFill;                                                      // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FWarAlwaysRelevantActorInfo
{
    class UNetConnection* Connection;                                                 // 0x0000 (size: 0x8)
    TArray<class AActor*> LastActors;                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWarBalancer
{
    int32 NumImbalanceIterations;                                                     // 0x0060 (size: 0x4)
    float RunningPopulationImbalancePercent;                                          // 0x0064 (size: 0x4)
    int32 CurrentAbsoluteMaxPopulation;                                               // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FWarBeaconJoinRequestData
{
    TArray<int32> ClientVersion;                                                      // 0x0000 (size: 0x10)
    EFactionId TeamId;                                                                // 0x0010 (size: 0x1)
    EServerTravelOriginType ServerTravelOrigin;                                       // 0x0014 (size: 0x4)
    bool bConsumeSelfServeFactionUnlock;                                              // 0x0018 (size: 0x1)
    EQueueType QueueType;                                                             // 0x0019 (size: 0x1)
    bool bSpawnAtOfflineCharacter;                                                    // 0x001A (size: 0x1)
    FSpawnPoint TravelPoint;                                                          // 0x001C (size: 0x4)
    FString DeviceID;                                                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWarBenchmarkAlgorithmBase : public FTickFunction
{
    TArray<class USimulatedClientNetConnection*> SimulatedConnections;                // 0x00B0 (size: 0x10)
    TArray<class ASimPlayerController*> SimulatedControllers;                         // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FWarBenchmarkMovementRecorderTickFunction : public FTickFunction
{
}; // Size: 0x60

struct FWarBlueprints
{
    class UObjectLibrary* Characters;                                                 // 0x0000 (size: 0x8)
    class UObjectLibrary* ItemPickups;                                                // 0x0008 (size: 0x8)
    class UObjectLibrary* Modifications;                                              // 0x0010 (size: 0x8)
    class UObjectLibrary* Structures;                                                 // 0x0018 (size: 0x8)
    class UObjectLibrary* Vehicles;                                                   // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FWarClientConfig
{
    bool bDisableOneWorld;                                                            // 0x0000 (size: 0x1)
    FGlobalShardConfig GlobalShardConfig;                                             // 0x0004 (size: 0x10)
    TArray<FWarShardInfo> AvailableShardList;                                         // 0x0018 (size: 0x10)
    TArray<FString> ConquestNews;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWarDebugVariables
{
    int32 FastMode;                                                                   // 0x0000 (size: 0x4)
    int32 Build;                                                                      // 0x0004 (size: 0x4)
    int32 Crane;                                                                      // 0x0008 (size: 0x4)
    int32 Package;                                                                    // 0x000C (size: 0x4)
    int32 Retrieve;                                                                   // 0x0010 (size: 0x4)
    int32 Placement;                                                                  // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FWarGridCoordinate
{
    int16 Letter;                                                                     // 0x0000 (size: 0x2)
    int16 Number;                                                                     // 0x0002 (size: 0x2)
    int8 KeypadX;                                                                     // 0x0004 (size: 0x1)
    int8 KeypadY;                                                                     // 0x0005 (size: 0x1)

}; // Size: 0x6

struct FWarMapUI
{
}; // Size: 0x1

struct FWarMenuStyle : public FSlateWidgetStyle
{
    FInputActions InputActions;                                                       // 0x0008 (size: 0x50)
    FTutorialStyle TutorialStyle;                                                     // 0x0058 (size: 0x1D8)
    FWarStartStyle WarStartStyle;                                                     // 0x0230 (size: 0x88)
    FButtonStyle MenuButtonStyle;                                                     // 0x02B8 (size: 0x278)
    FButtonStyle MenuButtonStyleA;                                                    // 0x0530 (size: 0x278)
    FButtonStyle MenuButtonStyleB;                                                    // 0x07A8 (size: 0x278)
    FButtonStyle OpeningMenuTopButtonStyle;                                           // 0x0A20 (size: 0x278)
    FButtonStyle FullscreenButtonStyle;                                               // 0x0C98 (size: 0x278)
    FButtonStyle NavigationMenuButtonStyle;                                           // 0x0F10 (size: 0x278)
    FSlateBrush VoiceImageBrush;                                                      // 0x1188 (size: 0x88)
    FButtonStyle NewsItemBgButtonStyle;                                               // 0x1210 (size: 0x278)
    FComboButtonStyle OptionsDropDownStyle;                                           // 0x1488 (size: 0x3A0)
    FEditableTextBoxStyle OptionsEditableTextBoxStyle;                                // 0x1828 (size: 0x7F0)
    FSliderStyle OptionsSliderStyle;                                                  // 0x2018 (size: 0x340)
    FSliderStyle OptionsSliderStyleB;                                                 // 0x2358 (size: 0x340)
    FComboBoxStyle OptionsTextComboBoxStyle;                                          // 0x2698 (size: 0x3D8)
    FSlateFontInfo OptionsTextComboBoxFont;                                           // 0x2A70 (size: 0x50)
    FCheckBoxStyle OptionsCheckboxStyle;                                              // 0x2AC0 (size: 0x580)
    FButtonStyle OptionsTabButtonStyle;                                               // 0x3040 (size: 0x278)
    FTextBlockStyle KeybindCategoryTitleTextBlockStyle;                               // 0x32B8 (size: 0x268)
    FTextBlockStyle ExtraLargeTitleOutlinedTextBlockStyle;                            // 0x3520 (size: 0x268)
    FTextBlockStyle LargeTitleTextBlockStyle;                                         // 0x3788 (size: 0x268)
    FTextBlockStyle SmallTitleTextBlockStyle;                                         // 0x39F0 (size: 0x268)
    FTextBlockStyle LargeBodyTextBlockStyle;                                          // 0x3C58 (size: 0x268)
    FTextBlockStyle BigCenteredBodyTextBlockStyle;                                    // 0x3EC0 (size: 0x268)
    FTextBlockStyle MediumStrokedBodyTextBlockStyle;                                  // 0x4128 (size: 0x268)
    FTextBlockStyle SmallStrokedBodyTextBlockStyle;                                   // 0x4390 (size: 0x268)
    FTextBlockStyle Tiny20pStrokedBodyTextBlockStyle;                                 // 0x45F8 (size: 0x268)
    FTextBlockStyle Tiny16pStrokedBodyTextBlockStyle;                                 // 0x4860 (size: 0x268)
    FTextBlockStyle Tiny12pStrokedBodyTextBlockStyle;                                 // 0x4AC8 (size: 0x268)
    FTextBlockStyle Tiny8pStrokedBodyTextBlockStyle;                                  // 0x4D30 (size: 0x268)
    FTextBlockStyle NormalBodyTextBlockStyle;                                         // 0x4F98 (size: 0x268)
    FTextBlockStyle SmallBodyTextBlockStyle;                                          // 0x5200 (size: 0x268)
    FTextBlockStyle SmallBodyTextBlockGreyedStyle;                                    // 0x5468 (size: 0x268)
    FTextBlockStyle VerySmallBodyTextBlockStyle;                                      // 0x56D0 (size: 0x268)
    FTextBlockStyle ExtremelySmallBodyTextBlockStyle;                                 // 0x5938 (size: 0x268)
    FTextBlockStyle ListHeaderTextBlockStyle;                                         // 0x5BA0 (size: 0x268)
    FTextBlockStyle LargeHeaderTextBlockStyle;                                        // 0x5E08 (size: 0x268)
    FTextBlockStyle MenuButtonTextBlockStyle;                                         // 0x6070 (size: 0x268)
    FSlateBrush ColonialLogoBrush;                                                    // 0x62D8 (size: 0x88)
    FSlateBrush WardenLogoBrush;                                                      // 0x6360 (size: 0x88)
    FSlateBrush NeutralFactionLogoBrush;                                              // 0x63E8 (size: 0x88)
    FSlateBrush OpeningScreenBgBrush;                                                 // 0x6470 (size: 0x88)
    FSlateBrush OpeningMenuBgBrush;                                                   // 0x64F8 (size: 0x88)
    FSlateBrush PauseMenuBgBrush;                                                     // 0x6580 (size: 0x88)
    FSlateBrush NewsMenuBgBrush;                                                      // 0x6608 (size: 0x88)
    FSlateBrush KeyboardConfigBgBrush;                                                // 0x6690 (size: 0x88)
    FSlateBrush TitleLogoBrush;                                                       // 0x6718 (size: 0x88)
    FSlateBrush TitleLogoSmallBrush;                                                  // 0x67A0 (size: 0x88)
    FSlateBrush OptionsLogoBrush;                                                     // 0x6828 (size: 0x88)
    FSlateBrush SolidColorBgBrush;                                                    // 0x68B0 (size: 0x88)
    FSlateBrush CreditsBGBrush;                                                       // 0x6938 (size: 0x88)
    FSlateBrush GameModeDetailsBGBrush;                                               // 0x69C0 (size: 0x88)
    FSlateBrush GameModeWarningBGBrush;                                               // 0x6A48 (size: 0x88)
    FSlateBrush PlayerProfileBgBrush;                                                 // 0x6AD0 (size: 0x88)
    FSlateBrush ServerListBgBrush;                                                    // 0x6B58 (size: 0x88)
    FSlateBrush ServerBrowserDetailsMenuBg;                                           // 0x6BE0 (size: 0x88)
    FButtonStyle CalloutButtonBackgroundStyle;                                        // 0x6C68 (size: 0x278)
    FSlateBrush CalloutIconBrush;                                                     // 0x6EE0 (size: 0x88)
    FSlateBrush CalloutPinpointIconBrush;                                             // 0x6F68 (size: 0x88)
    FSlateBrush SquadTabBgBrush;                                                      // 0x6FF0 (size: 0x88)
    FSlateBrush SquadTabTooltipBrush;                                                 // 0x7078 (size: 0x88)
    FSlateBrush LoadingScreenBgBrush;                                                 // 0x7100 (size: 0x88)
    FSlateBrush EmptyTransparentImage;                                                // 0x7188 (size: 0x88)
    FHeaderRowStyle ListHeaderRowStyle;                                               // 0x7210 (size: 0xB70)
    FWorldMapStyle WorldMapStyle;                                                     // 0x7D80 (size: 0x4A8)
    FContextMenuStyle ContextMenuStyle;                                               // 0x8228 (size: 0x1428)
    FSlateBrush ErrorMessageBg;                                                       // 0x9650 (size: 0x88)
    FSlateBrush WelcomeMessageBg;                                                     // 0x96D8 (size: 0x88)
    FTextBlockStyle OpeningMenuTopTextStyle;                                          // 0x9760 (size: 0x268)
    FTextBlockStyle DeployTextStyle;                                                  // 0x99C8 (size: 0x268)
    FTextBlockStyle NavigationMenuTextStyle;                                          // 0x9C30 (size: 0x268)
    FButtonStyle DiscordButtonStyle;                                                  // 0x9E98 (size: 0x278)
    FButtonStyle TwitchButtonStyle;                                                   // 0xA110 (size: 0x278)
    FButtonStyle TwitterButtonStyle;                                                  // 0xA388 (size: 0x278)
    FButtonStyle RedditButtonStyle;                                                   // 0xA600 (size: 0x278)
    FSlateBrush DiscordMessageBrush;                                                  // 0xA878 (size: 0x88)
    FTextBlockStyle ProfileNameTextStyle;                                             // 0xA900 (size: 0x268)
    FSlateBrush ProfileWardenLogoBrush;                                               // 0xAB68 (size: 0x88)
    FSlateBrush ProfileColonialLogoBrush;                                             // 0xABF0 (size: 0x88)
    FButtonStyle PotraitScrollLeftButton;                                             // 0xAC78 (size: 0x278)
    FButtonStyle PotraitScrollRightButton;                                            // 0xAEF0 (size: 0x278)
    FSlateBrush FemaleSexIcon;                                                        // 0xB168 (size: 0x88)
    FSlateBrush MaleSexIcon;                                                          // 0xB1F0 (size: 0x88)
    TArray<FSlateBrush> SkinToneTiles;                                                // 0xB278 (size: 0x10)
    TArray<FSlateBrush> VeteranPreAlphaMedals;                                        // 0xB288 (size: 0x10)
    FSlateBrush ServerPasswordLockedImage;                                            // 0xB298 (size: 0x88)
    FTextBlockStyle FrameRateWarningTextStyle;                                        // 0xB320 (size: 0x268)
    FSlateBrush MapHoverDetailsBG;                                                    // 0xB588 (size: 0x88)
    FButtonStyle GameModeSelectionButtonStye;                                         // 0xB610 (size: 0x278)
    FCheckBoxStyle MapIconFilterCheckBoxStyle;                                        // 0xB888 (size: 0x580)
    FSlateBrush VivoxLogoBrush;                                                       // 0xBE08 (size: 0x88)
    FSlateBrush SiegeCampLogoBrush;                                                   // 0xBE90 (size: 0x88)
    FSlateBrush PlayerOnlineIcon;                                                     // 0xBF18 (size: 0x88)
    FSlateBrush PlayerOfflineIcon;                                                    // 0xBFA0 (size: 0x88)
    FTextBlockStyle SupportMenuTitleTextStyle;                                        // 0xC028 (size: 0x268)
    FTextBlockStyle SupportMenuComboBoxLabelStyle;                                    // 0xC290 (size: 0x268)
    FButtonStyle SupportButtonStyle;                                                  // 0xC4F8 (size: 0x278)
    FButtonStyle DeployButtonStyle;                                                   // 0xC770 (size: 0x278)
    float NavigationButtonWidth;                                                      // 0xC9E8 (size: 0x4)
    float NavigationButtonHeight;                                                     // 0xC9EC (size: 0x4)
    FMargin NavigationButtonBoxPadding;                                               // 0xC9F0 (size: 0x10)
    FMargin NavigationButtonVerticalBoxPadding;                                       // 0xCA00 (size: 0x10)

}; // Size: 0xCA10

struct FWarMessageTest
{
    int32 TestInt;                                                                    // 0x0000 (size: 0x4)
    float TestFloat;                                                                  // 0x0004 (size: 0x4)
    bool TestBool;                                                                    // 0x0008 (size: 0x1)
    FString TestStr;                                                                  // 0x0010 (size: 0x10)
    ETestEnum TestEnum;                                                               // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FWarOpsContent
{
    TArray<FWarOpsItem> Items;                                                        // 0x0000 (size: 0x10)
    TArray<FWarOpsStructure> Structures;                                              // 0x0010 (size: 0x10)
    TArray<FWarOpsVehicle> Vehicles;                                                  // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWarOpsDataExport
{
    FString P4ChangeList;                                                             // 0x0000 (size: 0x10)
    FString Version;                                                                  // 0x0010 (size: 0x10)
    TArray<FString> StructureLayers;                                                  // 0x0020 (size: 0x10)
    FWarOpsContent Content;                                                           // 0x0030 (size: 0x30)
    TArray<FWarOpsMap> Maps;                                                          // 0x0060 (size: 0x10)
    TArray<FWarOpsTech> Techs;                                                        // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FWarOpsItem
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    EFactionId FactionVariant;                                                        // 0x0008 (size: 0x1)
    ETechID TechID;                                                                   // 0x000A (size: 0x2)
    bool bCanBePrototyped;                                                            // 0x000C (size: 0x1)

}; // Size: 0x10

struct FWarOpsMap
{
    FString DisplayName;                                                              // 0x0000 (size: 0x10)
    EWorldConquestMapId MapId;                                                        // 0x0010 (size: 0x1)
    FIntPoint GridCoord;                                                              // 0x0014 (size: 0x8)
    TArray<FWarOpsMapMarkerInstance> MapMarkers;                                      // 0x0020 (size: 0x10)
    TArray<FWarOpsStructureInstance> Structures;                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FWarOpsMapMarkerInstance
{
    FString MajorText;                                                                // 0x0000 (size: 0x10)
    FVector Position;                                                                 // 0x0010 (size: 0xC)

}; // Size: 0x20

struct FWarOpsStructure
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    EFactionId FactionVariant;                                                        // 0x0008 (size: 0x1)
    ETechID TechID;                                                                   // 0x000A (size: 0x2)
    uint8 MapIconType;                                                                // 0x000C (size: 0x1)
    bool bCanBePrototyped;                                                            // 0x000D (size: 0x1)

}; // Size: 0x10

struct FWarOpsStructureInstance
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    FVector Position;                                                                 // 0x0008 (size: 0xC)
    int32 IncludedInLayers;                                                           // 0x0014 (size: 0x4)
    int32 ExcludedByLayers;                                                           // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FWarOpsTech
{
    ETechID TechID;                                                                   // 0x0000 (size: 0x2)
    TArray<FName> CodeNames;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWarOpsVehicle
{
    FName CodeName;                                                                   // 0x0000 (size: 0x8)
    EFactionId FactionVariant;                                                        // 0x0008 (size: 0x1)
    ETechID TechID;                                                                   // 0x000A (size: 0x2)
    bool bCanBePrototyped;                                                            // 0x000C (size: 0x1)

}; // Size: 0x10

struct FWarPlayerProfile
{
    FGlobalShardProfile GlobalShardProfile;                                           // 0x0000 (size: 0x20)
    FLocalShardProfile LocalShardProfile;                                             // 0x0020 (size: 0x220)

}; // Size: 0x240

struct FWarPlayerProfileSerialized
{
    FGlobalShardProfile GlobalShardProfile;                                           // 0x0000 (size: 0x20)
    FLocalShardProfileSerialized LocalShardProfileSerialized;                         // 0x0020 (size: 0x30)

}; // Size: 0x50

struct FWarPropertyUtil
{
}; // Size: 0x1

struct FWarRecord
{
    uint8 ConquestWinner;                                                             // 0x0000 (size: 0x1)
    int64 StartTime;                                                                  // 0x0008 (size: 0x8)
    TArray<float> ColonialWarAchievementProgressList;                                 // 0x0010 (size: 0x10)
    TArray<float> WardenWarAchievementProgressList;                                   // 0x0020 (size: 0x10)
    bool bIsShortWar;                                                                 // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FWarRecordList
{
    TArray<FWarRecord> WarRecordList;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWarReplicatedTweakables : public FTweakables
{
    int32 ReinforcementsMinimumPopulation;                                            // 0x0058 (size: 0x4)
    float ReinforcementsThresholdPercent;                                             // 0x005C (size: 0x4)
    int32 FOVMode;                                                                    // 0x0060 (size: 0x4)
    int32 CameraUseVerticalBlend;                                                     // 0x0064 (size: 0x4)
    float CameraMaxArmLength;                                                         // 0x0068 (size: 0x4)
    float CameraTopPadding;                                                           // 0x006C (size: 0x4)
    float CameraBottomPadding;                                                        // 0x0070 (size: 0x4)
    float CameraDeadZone;                                                             // 0x0074 (size: 0x4)
    int32 CameraClampRadius;                                                          // 0x0078 (size: 0x4)
    float CameraLerpSpeedXY;                                                          // 0x007C (size: 0x4)
    float CameraLerpSpeedZ;                                                           // 0x0080 (size: 0x4)
    float DownvoteCooldownSeconds;                                                    // 0x0084 (size: 0x4)
    float VehicleBridgeDamageDepth;                                                   // 0x0088 (size: 0x4)
    float RoadClearanceHeight;                                                        // 0x008C (size: 0x4)
    float DebuffMaxRangeModifier;                                                     // 0x0090 (size: 0x4)
    float DebuffTimeToMaxEffectivenessModifier;                                       // 0x0094 (size: 0x4)
    float DebuffFiringConeModifier;                                                   // 0x0098 (size: 0x4)
    float DebuffFiringPeriodModifier;                                                 // 0x009C (size: 0x4)
    int32 MaxSquadsValidation;                                                        // 0x00A0 (size: 0x4)
    int32 MaxFacilityMinesPerField;                                                   // 0x00A4 (size: 0x4)
    float PipelineVolumeDeltaPerSecond;                                               // 0x00A8 (size: 0x4)
    bool bIsTestShard;                                                                // 0x00AC (size: 0x1)
    bool bEnableAssemblyLoadouts;                                                     // 0x00AD (size: 0x1)
    uint8 RetrieveCustomMaxMultiplier;                                                // 0x00AE (size: 0x1)
    uint8 RequiredRocketLaunchCodes;                                                  // 0x00AF (size: 0x1)
    float DragonsTeethMinDistanceToBorder;                                            // 0x00B0 (size: 0x4)
    float EnemyVehicleCheckDistance;                                                  // 0x00B4 (size: 0x4)
    float HeavilyFloodedSpeedModifier;                                                // 0x00B8 (size: 0x4)
    float MaxTiltAngleForProjectiles;                                                 // 0x00BC (size: 0x4)
    float RetrieveTimeBonus;                                                          // 0x00C0 (size: 0x4)
    float MaxDoorWaterDelta;                                                          // 0x00C4 (size: 0x4)
    float IncomingSensorPingMaxStrengthRange;                                         // 0x00C8 (size: 0x4)
    float IncomingSensorPingMinStrengthRange;                                         // 0x00CC (size: 0x4)
    float LargeShipTravelCountdownDuration;                                           // 0x00D0 (size: 0x4)
    uint8 MaxAttachedItemStashes;                                                     // 0x00D4 (size: 0x1)
    uint8 MaxAttachedItemPickups;                                                     // 0x00D5 (size: 0x1)
    bool bEnableAimAssist;                                                            // 0x00D6 (size: 0x1)
    bool bOceanTravelEnabled;                                                         // 0x00D7 (size: 0x1)
    float LargeShipAnchorWaterLimit;                                                  // 0x00D8 (size: 0x4)
    float LeakRepairCostMultiplier;                                                   // 0x00DC (size: 0x4)
    float ConcreteSettleDurationModifier;                                             // 0x00E0 (size: 0x4)
    float RainfallMultiplier;                                                         // 0x00E4 (size: 0x4)
    float RainfallDryingMultiplier;                                                   // 0x00E8 (size: 0x4)
    float WindSpeedMax;                                                               // 0x00EC (size: 0x4)
    float SubmarineIceHideDepth;                                                      // 0x00F0 (size: 0x4)
    float FoundationMaxHitHeight;                                                     // 0x00F4 (size: 0x4)
    float FoundationHitsThreshold;                                                    // 0x00F8 (size: 0x4)
    float StructuralIntegrityBonus;                                                   // 0x00FC (size: 0x4)
    bool bIsFastBuild;                                                                // 0x0100 (size: 0x1)
    int32 AirCameraMode;                                                              // 0x0104 (size: 0x4)
    int32 AirAssistMode;                                                              // 0x0108 (size: 0x4)

}; // Size: 0x110

struct FWarReplicationGraphActorDebugInfo
{
    class AActor* Actor;                                                              // 0x0000 (size: 0x8)
    FVector WorldLocation;                                                            // 0x0008 (size: 0xC)
    float GlobalCullDistance;                                                         // 0x0014 (size: 0x4)
    float ConnectionCullDistance;                                                     // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWarReport
{
    int32 TotalEnlistments;                                                           // 0x0000 (size: 0x4)
    int32 ColonialCasualties;                                                         // 0x0004 (size: 0x4)
    int32 WardenCasualties;                                                           // 0x0008 (size: 0x4)
    int32 DayOfWar;                                                                   // 0x000C (size: 0x4)
    int32 Version;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWarReporter
{
    int32 CasualtiesC;                                                                // 0x0000 (size: 0x4)
    int32 CasualtiesW;                                                                // 0x0004 (size: 0x4)
    TSet<FString> OnlineIDListOfAllPlayersJoined;                                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FWarRichTextStyle
{
}; // Size: 0x188

struct FWarServerQueue
{
    TArray<FQueuedPlayer> RegularQueue;                                               // 0x0000 (size: 0x10)
    TArray<FQueuedPlayer> PrioritizedQueue;                                           // 0x0010 (size: 0x10)
    TArray<FQueuedPlayer> ModQueue;                                                   // 0x0020 (size: 0x10)
    TArray<FQueuedPlayer> ReservedList;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FWarServiceReplicatedState
{
    FSquadReplicatedState SquadReplicatedState;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWarShardInfo
{
    FString ShardName;                                                                // 0x0000 (size: 0x10)
    int32 ShardId;                                                                    // 0x0010 (size: 0x4)
    bool bEnabled;                                                                    // 0x0014 (size: 0x1)
    bool bEnableJoinEventsColonial;                                                   // 0x0015 (size: 0x1)
    bool bEnableJoinEventsWarden;                                                     // 0x0016 (size: 0x1)
    bool bEnableZombieButton;                                                         // 0x0017 (size: 0x1)
    EQueueWarningState ColonialQueueWarning;                                          // 0x0018 (size: 0x4)
    EQueueWarningState WardenQueueWarning;                                            // 0x001C (size: 0x4)
    FString WarServiceExternalURL;                                                    // 0x0020 (size: 0x10)
    FString WarSupportURL;                                                            // 0x0030 (size: 0x10)
    int32 TravelMapMinimumOpenSlots;                                                  // 0x0040 (size: 0x4)
    int32 EnableJoinEventsQueueThreshold;                                             // 0x0044 (size: 0x4)
    EUprisingChanceType UprisingChanceType;                                           // 0x0048 (size: 0x1)
    FString EventMapName;                                                             // 0x0050 (size: 0x10)
    FString EventServerPassword;                                                      // 0x0060 (size: 0x10)
    float NormalizedGlobalPopulation;                                                 // 0x0070 (size: 0x4)
    EShardDescription DescriptionType;                                                // 0x0074 (size: 0x1)
    bool bFactionLock;                                                                // 0x0075 (size: 0x1)

}; // Size: 0x78

struct FWarStandardColour
{
    FLinearColor Orange;                                                              // 0x0000 (size: 0x10)
    FLinearColor Colonial;                                                            // 0x0010 (size: 0x10)
    FLinearColor Warden;                                                              // 0x0020 (size: 0x10)
    FLinearColor Green;                                                               // 0x0030 (size: 0x10)
    FLinearColor Red;                                                                 // 0x0040 (size: 0x10)
    FLinearColor Yellow;                                                              // 0x0050 (size: 0x10)
    FLinearColor Beige;                                                               // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FWarStartStyle
{
    FSlateBrush FlavourImage;                                                         // 0x0000 (size: 0x88)

}; // Size: 0x88

struct FWarTimeDiscrepancy
{
    float MaxTimeMargin;                                                              // 0x0000 (size: 0x4)
    float MinTimeMargin;                                                              // 0x0004 (size: 0x4)
    float DriftAllowance;                                                             // 0x0008 (size: 0x4)
    float ResolutionRate;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWarTweakables : public FTweakables
{
    bool bRequireAuth;                                                                // 0x0058 (size: 0x1)
    bool bLogAuthToDiscord;                                                           // 0x0059 (size: 0x1)
    bool bEnableRestrictions;                                                         // 0x005A (size: 0x1)
    float VehicleWrenchPreventionTime_Min;                                            // 0x005C (size: 0x4)
    EAWSLogEnableStatus AWSLogEnableStatus;                                           // 0x0060 (size: 0x1)
    float UprisingPhaseDuration;                                                      // 0x0064 (size: 0x4)
    int32 MineDecayTimeSec;                                                           // 0x0068 (size: 0x4)
    float MaxVehicleAFKDurationSeconds;                                               // 0x006C (size: 0x4)
    float MaxStructureAFKDurationSeconds;                                             // 0x0070 (size: 0x4)
    float GasMaskFilterAbsorbPerPoint;                                                // 0x0074 (size: 0x4)
    float StockpileDecimation;                                                        // 0x0078 (size: 0x4)
    float ResearchDecimation;                                                         // 0x007C (size: 0x4)
    bool bEnableUprisings;                                                            // 0x0080 (size: 0x1)
    bool bEnableResourceTestMode;                                                     // 0x0081 (size: 0x1)
    float ScrapReplenishRates;                                                        // 0x0084 (size: 0x4)
    float ComponentReplenishRates;                                                    // 0x0088 (size: 0x4)
    float SulfurReplenishRates;                                                       // 0x008C (size: 0x4)
    float SpawnTimeColonial;                                                          // 0x0090 (size: 0x4)
    float SpawnTimeWarden;                                                            // 0x0094 (size: 0x4)
    float SpawnTimeCap;                                                               // 0x0098 (size: 0x4)
    float StructureRecentAttackDurationMin;                                           // 0x009C (size: 0x4)
    float StructureUnderAttackAlertCooldownMin;                                       // 0x00A0 (size: 0x4)
    float PostTravelInvulnerabilityTime;                                              // 0x00A4 (size: 0x4)
    float PostTravelInvulCooldownSeconds;                                             // 0x00A8 (size: 0x4)
    float GarrisonFrequency;                                                          // 0x00AC (size: 0x4)
    float GarrisonActivityFactor;                                                     // 0x00B0 (size: 0x4)
    float GarrisonActivityFactorOverride;                                             // 0x00B4 (size: 0x4)
    float SmallGarrisonActivityFactor;                                                // 0x00B8 (size: 0x4)
    float LargeGarrisonActivityFactor;                                                // 0x00BC (size: 0x4)
    float GarrisonDeployCost;                                                         // 0x00C0 (size: 0x4)
    float GarrisonDecay;                                                              // 0x00C4 (size: 0x4)
    float GarrisonStarterSize;                                                        // 0x00C8 (size: 0x4)
    float GarrisonMinSize;                                                            // 0x00CC (size: 0x4)
    float DesiredFriendlyGarrisonSize;                                                // 0x00D0 (size: 0x4)
    float FriendlyGarrisonGrowth;                                                     // 0x00D4 (size: 0x4)
    int32 DeployRechargeTime;                                                         // 0x00D8 (size: 0x4)
    float TimeBetweenDeadlyGasEffect;                                                 // 0x00DC (size: 0x4)
    float ZombieRegularHealthModifier;                                                // 0x00E0 (size: 0x4)
    float ZombieSpitterHealthModifier;                                                // 0x00E4 (size: 0x4)
    float ZombieTankHealthModifier;                                                   // 0x00E8 (size: 0x4)
    float ZombieRegularDamage;                                                        // 0x00EC (size: 0x4)
    float ZombieSpitterDamage;                                                        // 0x00F0 (size: 0x4)
    float ZombieTankDamage;                                                           // 0x00F4 (size: 0x4)
    float HitMitigation;                                                              // 0x00F8 (size: 0x4)
    float HitMitigationRifle;                                                         // 0x00FC (size: 0x4)
    float HitMitigationCarbine;                                                       // 0x0100 (size: 0x4)
    float HitMitigationSniper;                                                        // 0x0104 (size: 0x4)
    float HitMitigationAssault;                                                       // 0x0108 (size: 0x4)
    float HitMitigationOptimalDistance;                                               // 0x010C (size: 0x4)
    float ForwardArcDot;                                                              // 0x0110 (size: 0x4)
    float CriticalWoundChanceNormalized;                                              // 0x0114 (size: 0x4)
    float PatientConversionTimeModifier;                                              // 0x0118 (size: 0x4)
    float HospitalSpawnChargesModifier;                                               // 0x011C (size: 0x4)
    int32 HomeRegionTestPopulation;                                                   // 0x0120 (size: 0x4)
    int32 HomeRegionPlayersPerBase;                                                   // 0x0124 (size: 0x4)
    float UnexplodedOrdnanceChance;                                                   // 0x0128 (size: 0x4)
    int32 FortBaseNetworkDistance;                                                    // 0x012C (size: 0x4)
    float LRADamage;                                                                  // 0x0130 (size: 0x4)
    float LRADamageInnerRadius;                                                       // 0x0134 (size: 0x4)
    float LRAAccuracyRadiusMultiplier;                                                // 0x0138 (size: 0x4)
    float FSAAccuracyRadiusMultiplier;                                                // 0x013C (size: 0x4)
    float LRALaunchVelocity;                                                          // 0x0140 (size: 0x4)
    float LRALaunchVelocityZ;                                                         // 0x0144 (size: 0x4)
    float LRALaunchVelocityZDistanceFactor;                                           // 0x0148 (size: 0x4)
    float IntelCenterListeningRadiusMin;                                              // 0x014C (size: 0x4)
    float IntelCenterListeningRadiusMax;                                              // 0x0150 (size: 0x4)
    bool bPreventSaveWithZeroActors;                                                  // 0x0154 (size: 0x1)
    bool bLogIncompleteValidations;                                                   // 0x0155 (size: 0x1)
    float ValidationThreshold;                                                        // 0x0158 (size: 0x4)
    float FastDecayOnRoadFactor;                                                      // 0x015C (size: 0x4)
    float FortDecayFactor;                                                            // 0x0160 (size: 0x4)
    float FortChanceToAggro;                                                          // 0x0164 (size: 0x4)
    float BorderFOBDeploymentDistance;                                                // 0x0168 (size: 0x4)
    int32 NumUnstuckCommandsPerWar;                                                   // 0x016C (size: 0x4)
    float UnstuckWaitTime;                                                            // 0x0170 (size: 0x4)
    float ReserveStockpileExpiryHours;                                                // 0x0174 (size: 0x4)
    float RefineryExpiryHours;                                                        // 0x0178 (size: 0x4)
    int32 StockpileAlertMinValue;                                                     // 0x017C (size: 0x4)
    int32 DistributionCenterAlertMinValue;                                            // 0x0180 (size: 0x4)
    int32 DistributionCenterSubmitCooldown;                                           // 0x0184 (size: 0x4)
    int32 FactoryScalingPopulationMin;                                                // 0x0188 (size: 0x4)
    int32 FactoryScalingPopulationMax;                                                // 0x018C (size: 0x4)
    float FactoryScalingModifierMin;                                                  // 0x0190 (size: 0x4)
    float FactoryScalingModifierMax;                                                  // 0x0194 (size: 0x4)
    float FactoryExpiryMultiplier;                                                    // 0x0198 (size: 0x4)
    float FactoryOrderTimeMultiplier;                                                 // 0x019C (size: 0x4)
    float MassProductionSpeedFactor;                                                  // 0x01A0 (size: 0x4)
    int32 MassProductionMaxCompletedOrders;                                           // 0x01A4 (size: 0x4)
    float ResourceHighYieldChance;                                                    // 0x01A8 (size: 0x4)
    float ResourceHighYieldRandomFloor;                                               // 0x01AC (size: 0x4)
    float ResourceHighYieldRandomCeiling;                                             // 0x01B0 (size: 0x4)
    int32 ResourceFieldScalingPopulationMin;                                          // 0x01B4 (size: 0x4)
    int32 ResourceFieldScalingPopulationMax;                                          // 0x01B8 (size: 0x4)
    float ResourceFieldScalingModifierMin;                                            // 0x01BC (size: 0x4)
    float ResourceFieldScalingModifierMax;                                            // 0x01C0 (size: 0x4)
    float ResourceFieldReplenishmentVariation;                                        // 0x01C4 (size: 0x4)
    float TechNodeMinSpawnChance;                                                     // 0x01C8 (size: 0x4)
    float TechNodeMaxSpawnChance;                                                     // 0x01CC (size: 0x4)
    int32 TechNodeMinThreshold;                                                       // 0x01D0 (size: 0x4)
    int32 TechNodeMaxThreshold;                                                       // 0x01D4 (size: 0x4)
    int32 ResourceMineScalingPopulationMin;                                           // 0x01D8 (size: 0x4)
    int32 ResourceMineScalingPopulationMax;                                           // 0x01DC (size: 0x4)
    float ResourceMineScalingModifierMin;                                             // 0x01E0 (size: 0x4)
    float ResourceMineScalingModifierMax;                                             // 0x01E4 (size: 0x4)
    float MinVehicleSpawnTimeSeconds;                                                 // 0x01E8 (size: 0x4)
    float MaxVehicleSpawnTimeSeconds;                                                 // 0x01EC (size: 0x4)
    float ResearchTickRate;                                                           // 0x01F0 (size: 0x4)
    float StockpileActivityModifier;                                                  // 0x01F4 (size: 0x4)
    float MaxStockpileActivityPerHour;                                                // 0x01F8 (size: 0x4)
    float SuppliesActivityModifier;                                                   // 0x01FC (size: 0x4)
    float MaxSuppliesActivityPerHour;                                                 // 0x0200 (size: 0x4)
    float SpawnPointActivityModifier;                                                 // 0x0204 (size: 0x4)
    float MaxSpawnPointActivityPerHour;                                               // 0x0208 (size: 0x4)
    float TeamStructureActivityModifier;                                              // 0x020C (size: 0x4)
    float MaxTeamStructureActivityPerHour;                                            // 0x0210 (size: 0x4)
    float FriendlyTerritoryActivityModifier;                                          // 0x0214 (size: 0x4)
    float EarlyWarActivityModifier;                                                   // 0x0218 (size: 0x4)
    float EarlyWarActivityMaxAmount;                                                  // 0x021C (size: 0x4)
    float MaxActivityPerHour;                                                         // 0x0220 (size: 0x4)
    int32 ProvisionalGarrisonSpawnsRequired;                                          // 0x0224 (size: 0x4)
    float MinTankArmourMultiplier;                                                    // 0x0228 (size: 0x4)
    float SubsystemDisableChanceMultiplier;                                           // 0x022C (size: 0x4)
    float FrontierMapIntelLimitDistance;                                              // 0x0230 (size: 0x4)
    float ZombieHeavyStructureThreshold;                                              // 0x0234 (size: 0x4)
    float ZombieHeavyStructureHitChance;                                              // 0x0238 (size: 0x4)
    float ZombieTankHeavyStructureHitChance;                                          // 0x023C (size: 0x4)
    float BorderBaseCooldownSeconds;                                                  // 0x0240 (size: 0x4)
    int32 BorderBaseSuppliesPopulationMin;                                            // 0x0244 (size: 0x4)
    int32 BorderBaseSuppliesPopulationMax;                                            // 0x0248 (size: 0x4)
    float BorderBaseSuppliesModifierOverride;                                         // 0x024C (size: 0x4)
    float JoinServerReservationMinutes;                                               // 0x0250 (size: 0x4)
    float TravelReservationMinutes;                                                   // 0x0254 (size: 0x4)
    int32 MaxReservedQueueSlots;                                                      // 0x0258 (size: 0x4)
    float TimeInConquestQueueThreshold;                                               // 0x025C (size: 0x4)
    float AISupppressionMax;                                                          // 0x0260 (size: 0x4)
    float AISuppressionDecayRate;                                                     // 0x0264 (size: 0x4)
    float AISuppressionGrowthRate;                                                    // 0x0268 (size: 0x4)
    float AISuppressionGrowthMax;                                                     // 0x026C (size: 0x4)
    int32 VoiceChatChannelNameSuffix;                                                 // 0x0270 (size: 0x4)
    bool bFactionSpecificVoice;                                                       // 0x0274 (size: 0x1)
    int32 MaxResourceNodesOfAnyKind;                                                  // 0x0278 (size: 0x4)
    float WorldResourceSpawnChance;                                                   // 0x027C (size: 0x4)
    float WorldResourceRoadMultiplier;                                                // 0x0280 (size: 0x4)
    float WorldResourceMaxBadLuckMins;                                                // 0x0284 (size: 0x4)
    float WorldResourceMaxBadLuckMultiplier;                                          // 0x0288 (size: 0x4)
    float WorldResourceDistanceCheck;                                                 // 0x028C (size: 0x4)
    float WorldResourceDistance;                                                      // 0x0290 (size: 0x4)
    float WorldResourceCooldown;                                                      // 0x0294 (size: 0x4)
    int32 WreckageToBMatMax;                                                          // 0x0298 (size: 0x4)
    int32 WreckageToRMatMax;                                                          // 0x029C (size: 0x4)
    int32 WreckageToRelicMax;                                                         // 0x02A0 (size: 0x4)
    int32 WreckageBMatWeight;                                                         // 0x02A4 (size: 0x4)
    int32 WreckageRMatWeight;                                                         // 0x02A8 (size: 0x4)
    float BallisticPenetrationMaxDistance;                                            // 0x02AC (size: 0x4)
    float BallisticPenetrationDistanceExponent;                                       // 0x02B0 (size: 0x4)
    float BallisticPenetrationMaxAngleBonus;                                          // 0x02B4 (size: 0x4)
    float BallisticPenetrationMaxRangeBonus;                                          // 0x02B8 (size: 0x4)
    float MuddynessGain;                                                              // 0x02BC (size: 0x4)
    float MuddynessLost;                                                              // 0x02C0 (size: 0x4)
    float PlayerSnowStormTemperatureLoss;                                             // 0x02C4 (size: 0x4)
    float VehicleSnowStormTemperatureLoss;                                            // 0x02C8 (size: 0x4)
    float PlayerInVehicleTemperatureGain;                                             // 0x02CC (size: 0x4)
    float PlayerInStructureTemperatureGain;                                           // 0x02D0 (size: 0x4)
    float PlayerNoWeatherTemperatureGain;                                             // 0x02D4 (size: 0x4)
    float VehicleNoWeatherTemperatureGain;                                            // 0x02D8 (size: 0x4)
    float FrozenPipePenalty;                                                          // 0x02DC (size: 0x4)
    float PlayerFirePitTemperatureGain;                                               // 0x02E0 (size: 0x4)
    float VehicleFirePitTemperatureGain;                                              // 0x02E4 (size: 0x4)
    float VehicleEngineOnTemperatureGain;                                             // 0x02E8 (size: 0x4)
    float VehicleShelteredTemperatureGain;                                            // 0x02EC (size: 0x4)
    float NaturalHeatDecay;                                                           // 0x02F0 (size: 0x4)
    float NaturalHeatGrowth;                                                          // 0x02F4 (size: 0x4)
    float StructurePrototypeRepairModifier;                                           // 0x02F8 (size: 0x4)
    float VehiclePrototypeRepairModifier;                                             // 0x02FC (size: 0x4)
    float FirePitFuelUseMultiplier;                                                   // 0x0300 (size: 0x4)
    float MHTAllowedExtraDistance;                                                    // 0x0304 (size: 0x4)
    float WindDirectionOverride;                                                      // 0x0308 (size: 0x4)
    float WindSpeedOverride;                                                          // 0x030C (size: 0x4)
    float WindFactor;                                                                 // 0x0310 (size: 0x4)
    float WindSpeedMin;                                                               // 0x0314 (size: 0x4)
    float WindSpeedChangeRateMin;                                                     // 0x0318 (size: 0x4)
    float WindSpeedChangeRateMax;                                                     // 0x031C (size: 0x4)
    float WindDirectionChangeRateMin;                                                 // 0x0320 (size: 0x4)
    float WindDirectionChangeRateMax;                                                 // 0x0324 (size: 0x4)
    float WindDirectionChangeDurationMin;                                             // 0x0328 (size: 0x4)
    float WindDirectionChangeDurationMax;                                             // 0x032C (size: 0x4)
    float WindDirectionMaxDelta;                                                      // 0x0330 (size: 0x4)
    float WeatherWindChangeMultiplier;                                                // 0x0334 (size: 0x4)
    float StructureDamageDevastationSize;                                             // 0x0338 (size: 0x4)
    float StructureDamageDevastationFactor;                                           // 0x033C (size: 0x4)
    float StructureDamageDevastationMultiplierMax;                                    // 0x0340 (size: 0x4)
    float StructureDamageDevastationMinThreshold;                                     // 0x0344 (size: 0x4)
    float StructureBreachingDevastationMultiplierMax;                                 // 0x0348 (size: 0x4)
    float RuinedStructureDevstationSize;                                              // 0x034C (size: 0x4)
    float RuinedStructureDevstationThreshold;                                         // 0x0350 (size: 0x4)
    int32 MinFortArtilleryShots;                                                      // 0x0354 (size: 0x4)
    int32 MaxFortArtilleryShots;                                                      // 0x0358 (size: 0x4)
    float DecayDamageMultiplier;                                                      // 0x035C (size: 0x4)
    FString ExtraColonialStarterTowns;                                                // 0x0360 (size: 0x10)
    FString ExtraWardenStarterTowns;                                                  // 0x0370 (size: 0x10)
    float DeployQueueTimerSec;                                                        // 0x0380 (size: 0x4)
    float AutoSaveSeconds;                                                            // 0x0384 (size: 0x4)
    float RecoverySaveSeconds;                                                        // 0x0388 (size: 0x4)
    bool WarBalancerEnabled;                                                          // 0x038C (size: 0x1)
    float WarBalancerTickRate;                                                        // 0x0390 (size: 0x4)
    bool WarBalancerDryRunMode;                                                       // 0x0394 (size: 0x1)
    int32 WarBalancerMaxPlayers;                                                      // 0x0398 (size: 0x4)
    int32 WarBalancerMinPlayersBasedOnTick;                                           // 0x039C (size: 0x4)
    int32 WarBalancerFalloffStartDay;                                                 // 0x03A0 (size: 0x4)
    float WarBalancerFalloffPerDay;                                                   // 0x03A4 (size: 0x4)
    int32 WarBalancerWinFactorMinZoneDelta;                                           // 0x03A8 (size: 0x4)
    int32 WarBalancerLocalPopulationFactorSmallFaction;                               // 0x03AC (size: 0x4)
    int32 WarBalancerLocalPopulationFactorMinDelta;                                   // 0x03B0 (size: 0x4)
    int32 WarBalancerMostlyFriendlyRegionZoneDelta;                                   // 0x03B4 (size: 0x4)
    int32 WarBalancerContestedPopulation;                                             // 0x03B8 (size: 0x4)
    int32 WarBalancerContestedMinFreeSlots;                                           // 0x03BC (size: 0x4)
    float WarBalancerDisadvantagedImbalance;                                          // 0x03C0 (size: 0x4)
    float WarBalancerImbalanceLimit;                                                  // 0x03C4 (size: 0x4)
    float WarBalancerContestedMaxPopulationMultiplier;                                // 0x03C8 (size: 0x4)
    float WarBalancerSpawnTimeAveragePopulationWeight;                                // 0x03CC (size: 0x4)
    float WarBalancerSpawnTimeMultiplier;                                             // 0x03D0 (size: 0x4)
    float WarBalancerSpawnTimeEnemyRegionMultiplier;                                  // 0x03D4 (size: 0x4)
    float WarBalancerSpawnTimeMax;                                                    // 0x03D8 (size: 0x4)
    float WarBalancerMaxTickMs;                                                       // 0x03DC (size: 0x4)
    int32 WarBalancerContestedMaxQueueSize;                                           // 0x03E0 (size: 0x4)
    int32 WarBalancerAbsoluteMinPopulation;                                           // 0x03E4 (size: 0x4)
    int32 WarBalancerAbsoluteMinPopulationIsland;                                     // 0x03E8 (size: 0x4)
    int32 WarBalancerMaxLoweredPopulation;                                            // 0x03EC (size: 0x4)
    int32 WarBalancerSmallerFactionHeadroom;                                          // 0x03F0 (size: 0x4)
    int32 WarBalancerIslandEndDay;                                                    // 0x03F4 (size: 0x4)
    int32 MaxProfilesToProcessAtOnce;                                                 // 0x03F8 (size: 0x4)
    FString MergeDestUrl;                                                             // 0x0400 (size: 0x10)
    FString MergeSourceUrl;                                                           // 0x0410 (size: 0x10)
    bool bKickForVacTimeout;                                                          // 0x0420 (size: 0x1)
    bool bEnableInfoUpdate;                                                           // 0x0421 (size: 0x1)
    float RecoveryModeDurationSeconds;                                                // 0x0424 (size: 0x4)
    bool bEnableDamageDebug;                                                          // 0x0428 (size: 0x1)
    float BridgeVehicleDecayPercent;                                                  // 0x042C (size: 0x4)
    float BridgeVehicleGracePeriod;                                                   // 0x0430 (size: 0x4)
    float BridgeLargeShipDecayPercent;                                                // 0x0434 (size: 0x4)
    float BridgeLargeShipGracePeriod;                                                 // 0x0438 (size: 0x4)
    int32 IntelLeakVoteKicksRequired;                                                 // 0x043C (size: 0x4)
    float PreAutoRestartAlertTime;                                                    // 0x0440 (size: 0x4)
    float PreAutoRestartAlertInterval;                                                // 0x0444 (size: 0x4)
    float SameStructureRadius;                                                        // 0x0448 (size: 0x4)
    int32 SameStructureMaxOverlapCount;                                               // 0x044C (size: 0x4)
    float NetStatsInterval;                                                           // 0x0450 (size: 0x4)
    float AbandonedBaseTickRate;                                                      // 0x0454 (size: 0x4)
    float AbandonedBaseNormalizedDamage;                                              // 0x0458 (size: 0x4)
    float FacilityDurationModifier;                                                   // 0x045C (size: 0x4)
    float FacilityPowerDurationModifier;                                              // 0x0460 (size: 0x4)
    float FacilityPendingOrderTime;                                                   // 0x0464 (size: 0x4)
    float FacilityOrderTime;                                                          // 0x0468 (size: 0x4)
    float FacilityCompletedOrderTime;                                                 // 0x046C (size: 0x4)
    float BuildingFireSpreadChanceFactor;                                             // 0x0470 (size: 0x4)
    int32 MaxPowerNodeDistance;                                                       // 0x0474 (size: 0x4)
    int32 MaxRailTravelPassengers;                                                    // 0x0478 (size: 0x4)
    int32 MaxLargeShipTravelPassengers;                                               // 0x047C (size: 0x4)
    int32 MaxLargeShipDeploymentPassengers;                                           // 0x0480 (size: 0x4)
    int32 MaxLargeShipAnchoredDeploymentPassengers;                                   // 0x0484 (size: 0x4)
    int32 NumDisruptivePlacementVotes;                                                // 0x0488 (size: 0x4)
    float FireBaseChance;                                                             // 0x048C (size: 0x4)
    float FireMaxDevastationBonusToFireChance;                                        // 0x0490 (size: 0x4)
    float FireMaxAddedBurningFromHitsPerTick;                                         // 0x0494 (size: 0x4)
    float FireMinAddedBurningFromHitsPerTick;                                         // 0x0498 (size: 0x4)
    float FireBurningCharacterRange;                                                  // 0x049C (size: 0x4)
    float FireMinFireDamageToContinueBurning;                                         // 0x04A0 (size: 0x4)
    float FireExtinguishEffectivenessMultiplier;                                      // 0x04A4 (size: 0x4)
    float FireAddedBurningEffectivenessMultiplier;                                    // 0x04A8 (size: 0x4)
    float FireBuildingCharacterBurnMultiplier;                                        // 0x04AC (size: 0x4)
    float FireDamageToGuaranteedIgnite;                                               // 0x04B0 (size: 0x4)
    float ArtilleryTravelFiringPreventionSeconds;                                     // 0x04B4 (size: 0x4)
    float TrackSupplyDrainSkipChance;                                                 // 0x04B8 (size: 0x4)
    bool bFireSpreadFromNeutralStructures;                                            // 0x04BC (size: 0x1)
    bool bCheckReservationsOnLogin;                                                   // 0x04BD (size: 0x1)
    bool bCheckMaxPlayersOnLogin;                                                     // 0x04BE (size: 0x1)
    float RailwayTrackRepairPercentMS;                                                // 0x04C0 (size: 0x4)
    float RailwayTrackRepairPercentCM;                                                // 0x04C4 (size: 0x4)
    float RailwayTrackRepairCooldown;                                                 // 0x04C8 (size: 0x4)
    float DestroyItemComponentsDelay;                                                 // 0x04CC (size: 0x4)
    bool bDestroyItemComponents;                                                      // 0x04D0 (size: 0x1)
    bool bDisableItemComponentsRep;                                                   // 0x04D1 (size: 0x1)
    float MaintenanceRepairPercent;                                                   // 0x04D4 (size: 0x4)
    float RegionZoneStructureCountInterval;                                           // 0x04D8 (size: 0x4)
    float LeakSizeIncrease;                                                           // 0x04DC (size: 0x4)
    float LeakWaterPerSecond;                                                         // 0x04E0 (size: 0x4)
    float LargeLeakWaterPerSecond;                                                    // 0x04E4 (size: 0x4)
    float MaxLeakSpreadPerSecond;                                                     // 0x04E8 (size: 0x4)
    bool bStopFireOnNeutralJoin;                                                      // 0x04EC (size: 0x1)
    float DrivingRestrictionThreshold;                                                // 0x04F0 (size: 0x4)
    bool bEnableVehicleRestore;                                                       // 0x04F4 (size: 0x1)
    float VehicleRestoreChance;                                                       // 0x04F8 (size: 0x4)
    float VehicleRestoreTimeMin;                                                      // 0x04FC (size: 0x4)
    float VehicleRestoreTimeMax;                                                      // 0x0500 (size: 0x4)
    TArray<FName> IgnoredZoneCountCodeNames;                                          // 0x0508 (size: 0x10)
    float RetrieveTimePerSecond;                                                      // 0x0518 (size: 0x4)
    float MaxRetrieveTimeSpent;                                                       // 0x051C (size: 0x4)
    bool bEnableVehicleAI;                                                            // 0x0520 (size: 0x1)
    float SensorListeningRange;                                                       // 0x0524 (size: 0x4)
    float AutoRepairAmountNormalized;                                                 // 0x0528 (size: 0x4)
    float LargeShipAIBorderDeadZoneOverride;                                          // 0x052C (size: 0x4)
    float ItemDecayDurationOverride;                                                  // 0x0530 (size: 0x4)
    float FloodableRainStormWaterPerSecond;                                           // 0x0534 (size: 0x4)
    float FloodableRainStormMaxWaterLevel;                                            // 0x0538 (size: 0x4)
    float SubmarineRecoveryTimeSeconds;                                               // 0x053C (size: 0x4)
    bool bAllowEjectDriver;                                                           // 0x0540 (size: 0x1)
    bool bAllowLargeShipUnstuck;                                                      // 0x0541 (size: 0x1)
    float PostRecoveryModeDurationSeconds;                                            // 0x0544 (size: 0x4)
    float PostVehicleDriverDisconnectDurationSeconds;                                 // 0x0548 (size: 0x4)
    float MaxAFKDurationSeconds;                                                      // 0x054C (size: 0x4)
    bool bAutomaticallyDisableAuth;                                                   // 0x0550 (size: 0x1)
    int32 NumFailuresToDisableAuth;                                                   // 0x0554 (size: 0x4)
    float AuthFailureDurationRequiredSeconds;                                         // 0x0558 (size: 0x4)
    float AuthReEnableSeconds;                                                        // 0x055C (size: 0x4)
    float BorderDecayFactor;                                                          // 0x0560 (size: 0x4)
    int32 WarBalancerMaxPopulationChangePerTick;                                      // 0x0564 (size: 0x4)
    int32 RareMetalWeightAdjustment;                                                  // 0x0568 (size: 0x4)
    float CommendHistoryExpirySecs;                                                   // 0x056C (size: 0x4)
    float GlobalRefineSpeedModifier;                                                  // 0x0570 (size: 0x4)
    float FacilityMapPostItemRadius;                                                  // 0x0574 (size: 0x4)
    float MaxBreachChance;                                                            // 0x0578 (size: 0x4)
    float MinBreachChance;                                                            // 0x057C (size: 0x4)
    float MultipleShelterModifier;                                                    // 0x0580 (size: 0x4)
    bool bAllowStockpileExternalUser;                                                 // 0x0584 (size: 0x1)
    bool bGateLongRangeArtilleryFiringOnTech;                                         // 0x0585 (size: 0x1)
    bool bAllowSquadMissingMembers;                                                   // 0x0586 (size: 0x1)
    bool bUseDevVotesRequiredCount;                                                   // 0x0587 (size: 0x1)
    bool bUseDevRestrictionDuration;                                                  // 0x0588 (size: 0x1)
    bool bFactionLock;                                                                // 0x0589 (size: 0x1)

}; // Size: 0x590

struct FWeaponDynamicData : public FTableRowBase
{
    float SuppressionMultiplier;                                                      // 0x0008 (size: 0x4)
    int32 MaxAmmo;                                                                    // 0x000C (size: 0x4)
    float MaxApexHalfAngle;                                                           // 0x0010 (size: 0x4)
    float BaselineApexHalfAngle;                                                      // 0x0014 (size: 0x4)
    float StabilityCostPerShot;                                                       // 0x0018 (size: 0x4)
    float Agility;                                                                    // 0x001C (size: 0x4)
    float ShoulderingDuration;                                                        // 0x0020 (size: 0x4)
    float MinShoulderingDuration;                                                     // 0x0024 (size: 0x4)
    float StaggerModifier;                                                            // 0x0028 (size: 0x4)
    float CoverProvided;                                                              // 0x002C (size: 0x4)
    float StabilityFloorFromMovement;                                                 // 0x0030 (size: 0x4)
    float StabilityGainRate;                                                          // 0x0034 (size: 0x4)
    float StabilityGainRateFromCover;                                                 // 0x0038 (size: 0x4)
    int32 MaximumRange;                                                               // 0x003C (size: 0x4)
    int32 MaximumReachability;                                                        // 0x0040 (size: 0x4)
    float DamageMultiplier;                                                           // 0x0044 (size: 0x4)
    FMovementModifierData MovementData;                                               // 0x0048 (size: 0x20)
    float ArtilleryAccuracyMinDist;                                                   // 0x0068 (size: 0x4)
    float ArtilleryAccuracyMaxDist;                                                   // 0x006C (size: 0x4)
    float MaxVehicleDeviationAngle;                                                   // 0x0070 (size: 0x4)
    float AddedBurningMultiplier;                                                     // 0x0074 (size: 0x4)
    float ArmourDamageModifier;                                                       // 0x0078 (size: 0x4)
    float TargetStabilityReductionPerShot;                                            // 0x007C (size: 0x4)
    float BreachingModifier;                                                          // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FWeaponFiringConeInfo
{
    float MaxApexHalfAngle;                                                           // 0x0000 (size: 0x4)
    float BaselineApexHalfAngle;                                                      // 0x0004 (size: 0x4)
    float StabilityCostPerShot;                                                       // 0x0008 (size: 0x4)
    float Agility;                                                                    // 0x000C (size: 0x4)
    float StabilityFloorFromMovement;                                                 // 0x0010 (size: 0x4)
    float StabilityGainRate;                                                          // 0x0014 (size: 0x4)
    float StabilityGainRateFromCover;                                                 // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FWeaponShotSFX
{
    class USoundCue* FiringLoop;                                                      // 0x0000 (size: 0x8)
    class USoundCue* FiringStopped;                                                   // 0x0008 (size: 0x8)

}; // Size: 0x20

struct FWeatherEffects
{
    TArray<FWeatherEffectsActorTrigger> EffectsActors;                                // 0x0000 (size: 0x10)
    FNamedParameterRange MaterialParameter;                                           // 0x0010 (size: 0x10)
    float OffroadPenalty;                                                             // 0x0020 (size: 0x4)
    float MinVisibility;                                                              // 0x0024 (size: 0x4)
    float MaxVisibility;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FWeatherEffectsActorTrigger
{
    TSubclassOf<class AWeatherEffectsActor> ActorClass;                               // 0x0000 (size: 0x8)
    float IntensityThreshold;                                                         // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FWeatherEvent
{
    EWorldConquestMapId MapId;                                                        // 0x0000 (size: 0x1)
    EWeatherType Type;                                                                // 0x0001 (size: 0x1)
    FVector2D NormalizedLocation;                                                     // 0x0004 (size: 0x8)
    float InnerRadius;                                                                // 0x000C (size: 0x4)
    float OuterRadius;                                                                // 0x0010 (size: 0x4)
    float Intensity;                                                                  // 0x0014 (size: 0x4)
    int32 Delay;                                                                      // 0x0018 (size: 0x4)
    int32 Duration;                                                                   // 0x001C (size: 0x4)
    int32 IntensityCurveIndex;                                                        // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FWeatherEventStyle
{
    FSlateBrush MapIcon;                                                              // 0x0000 (size: 0x88)
    FText Name;                                                                       // 0x0088 (size: 0x18)
    FText Description;                                                                // 0x00A0 (size: 0x18)

}; // Size: 0xB8

struct FWeatherIceActorData
{
    FVector WorldLocation;                                                            // 0x0000 (size: 0xC)
    uint16 GridX;                                                                     // 0x000C (size: 0x2)
    uint16 GridY;                                                                     // 0x000E (size: 0x2)
    uint32 EnabledFlags;                                                              // 0x0010 (size: 0x34)
    TArray<float> WorldLocationsZ;                                                    // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FWeatherIceMeshData
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FWeatherIceState
{
    uint16 Health;                                                                    // 0x0000 (size: 0x2)

}; // Size: 0xC

struct FWeatherManagerState
{
    FWorldWeatherState WorldState;                                                    // 0x0000 (size: 0x40)
    TArray<FScheduledWeatherState> StateTimes;                                        // 0x0040 (size: 0x10)

}; // Size: 0x60

struct FWeatherPattern
{
    TArray<FWeatherEvent> Events;                                                     // 0x0000 (size: 0x10)
    float PerWarSkipChance;                                                           // 0x0010 (size: 0x4)
    int32 MinPostEventsDuration;                                                      // 0x0014 (size: 0x4)
    int32 MaxPostEventsDuration;                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWeatherState
{
    EWorldConquestMapId MapId;                                                        // 0x0000 (size: 0x1)
    uint8 UniqueId;                                                                   // 0x0001 (size: 0x1)
    EWeatherType Type;                                                                // 0x0002 (size: 0x1)
    uint8 Intensity;                                                                  // 0x0003 (size: 0x1)
    uint8 PeakIntensity;                                                              // 0x0004 (size: 0x1)
    FVector2D WorldLocation;                                                          // 0x0008 (size: 0x8)
    float InnerRadius;                                                                // 0x0010 (size: 0x4)
    float OuterRadius;                                                                // 0x0014 (size: 0x4)
    float DryingStartTime;                                                            // 0x0018 (size: 0x4)
    FDateTime StartTime;                                                              // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FWeatherStationGlobalMessage
{
    TArray<FWeatherStationGlobalState> Entries;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FWeatherStationGlobalState
{
    FWeatherStationIDValues GlobalID;                                                 // 0x0000 (size: 0x2)
    FWeatherStationIDValues ConnectionTo;                                             // 0x0002 (size: 0x2)
    bool bIsActive;                                                                   // 0x0004 (size: 0x1)

}; // Size: 0x5

struct FWeatherStationID
{
    EWorldConquestMapId MapId;                                                        // 0x0000 (size: 0x1)
    uint8 LocalID;                                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FWeatherStationIDValues
{
    int8 MapId;                                                                       // 0x0000 (size: 0x1)
    int8 LocalID;                                                                     // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FWeatherStationRegionMessage
{
    int8 MapId;                                                                       // 0x0000 (size: 0x1)
    TArray<FWeatherStationGlobalState> Entries;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWeatherStyle
{
    FWeatherEventStyle EventStyles;                                                   // 0x0000 (size: 0x228)
    FSlateBrush RadiusBrush;                                                          // 0x0228 (size: 0x88)
    FSlateBrush MuddyIcon;                                                            // 0x02B0 (size: 0x88)
    FSlateBrush MuddyVehicleIcon;                                                     // 0x0338 (size: 0x88)
    FSlateBrush BurningIcon;                                                          // 0x03C0 (size: 0x88)
    FSlateBrush HotIcon;                                                              // 0x0448 (size: 0x88)
    FSlateBrush NormalizingIcon;                                                      // 0x04D0 (size: 0x88)
    FSlateBrush SlowlyNormalizingIcon;                                                // 0x0558 (size: 0x88)
    FSlateBrush FreezingIcon;                                                         // 0x05E0 (size: 0x88)
    FSlateBrush CriticalFreezingIcon;                                                 // 0x0668 (size: 0x88)
    FSlateBrush WeatherStationStatus;                                                 // 0x06F0 (size: 0x88)

}; // Size: 0x778

struct FWinConditionStyle
{
    FSlateBrush ColonialIcon;                                                         // 0x0000 (size: 0x88)
    FSlateBrush WardenIcon;                                                           // 0x0088 (size: 0x88)
    FSlateBrush CountTextBG;                                                          // 0x0110 (size: 0x88)
    FSlateBrush ScorchedTownBrush;                                                    // 0x0198 (size: 0x88)
    FSlateBrush UprisingBrush;                                                        // 0x0220 (size: 0x88)
    FSlateBrush VictoryTownBrush;                                                     // 0x02A8 (size: 0x88)

}; // Size: 0x330

struct FWindowMeshes
{
    class UStaticMesh* Colonial;                                                      // 0x0000 (size: 0x18)
    class UStaticMesh* Warden;                                                        // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FWorldMapRegionStyle
{
    FVector2D Offset;                                                                 // 0x0000 (size: 0x8)
    FButtonStyle ButtonStyle;                                                         // 0x0008 (size: 0x278)

}; // Size: 0x280

struct FWorldMapStyle
{
    FSlateBrush RegionAvailableIcon;                                                  // 0x0000 (size: 0x88)
    FSlateBrush RegionQueuesIcon;                                                     // 0x0088 (size: 0x88)
    FSlateBrush RegionContestedIcon;                                                  // 0x0110 (size: 0x88)
    FSlateBrush RegionFocusImage;                                                     // 0x0198 (size: 0x88)
    TArray<class UCurveFloat*> RegionFocusAlphaCurves;                                // 0x0220 (size: 0x10)
    TArray<class UCurveFloat*> RegionFocusScaleCurves;                                // 0x0230 (size: 0x10)
    FTextBlockStyle TitleTextStyle;                                                   // 0x0240 (size: 0x268)

}; // Size: 0x4A8

struct FWorldWeatherState
{
    FWeatherState GameplayState;                                                      // 0x0000 (size: 0x28)
    TArray<FWeatherState> States;                                                     // 0x0028 (size: 0x10)
    bool bIsWeatherVisibleC;                                                          // 0x0038 (size: 0x1)
    bool bIsWeatherVisibleW;                                                          // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FZombieFootPrintActorInfo
{
    FFootPrintActorInfo Colonial;                                                     // 0x0000 (size: 0x18)
    FFootPrintActorInfo Warden;                                                       // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FZombieWeaponInfo
{
    EZombieType Type;                                                                 // 0x0000 (size: 0x1)
    FText Name;                                                                       // 0x0008 (size: 0x18)
    class UTexture2D* Icon;                                                           // 0x0020 (size: 0x8)
    TSubclassOf<class UDamageType> MeleeDamageType;                                   // 0x0028 (size: 0x8)
    EZombieSecondaryAttack SecondaryAttack;                                           // 0x0030 (size: 0x1)
    ECharacterActivityState ActivityState;                                            // 0x0031 (size: 0x1)
    float Cooldown;                                                                   // 0x0034 (size: 0x4)

}; // Size: 0x38

class AAccessoryPickup : public AGearPickup
{
    TArray<EEquipmentSlot> SlotsToAccessorize;                                        // 0x03F0 (size: 0x10)

}; // Size: 0x400

class AAlwaysReservableItemPickup : public ABasicItemPickup
{
}; // Size: 0x3F0

class AAmbulance : public ARWDSimVehicle
{
}; // Size: 0x1290

class AAmmoPickup : public ABasicItemPickup
{
}; // Size: 0x430

class AAmmoRoom : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0810 (size: 0x8)

}; // Size: 0x820

class AAmmoRoomBuildSite : public AFortBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)

}; // Size: 0x7F0

class AAmphibiousVehicle : public ARWDSimVehicle
{
    class UParticleSystemComponent* FrontLeftWaterEmitter;                            // 0x1288 (size: 0x8)
    class UParticleSystemComponent* FrontRightWaterEmitter;                           // 0x1290 (size: 0x8)
    class UParticleSystemComponent* BackRightWaterEmitter;                            // 0x1298 (size: 0x8)
    class UParticleSystemComponent* BackLeftWaterEmitter;                             // 0x12A0 (size: 0x8)
    class UParticleSystemComponent* WakeWaterEmitter;                                 // 0x12A8 (size: 0x8)
    class UAudioComponent* WaterDriveLoop;                                            // 0x12B0 (size: 0x8)

}; // Size: 0x12C0

class AAntiZombiePainVolume : public AWarPainVolume
{
}; // Size: 0x250

class AArmoredCar : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;                                                      // 0x1290 (size: 0x8)
    FName StashedAmmoType;                                                            // 0x12A8 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12B0 (size: 0x4)
    FPayloadMeshes PayloadMeshes;                                                     // 0x12B8 (size: 0x58)

    void OnRep_StashedAmmo();
    void OnRep_GunnerYawAndPitch();
}; // Size: 0x1310

class AArmourProfiles : public AInfo
{
    class UDataTable* DataTable;                                                      // 0x0218 (size: 0x8)

}; // Size: 0x378

class AArtillery : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;                                                      // 0x1290 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12A8 (size: 0x4)
    FName StashedAmmoType;                                                            // 0x12AC (size: 0x8)
    FPayloadMeshes PayloadMeshes;                                                     // 0x12B8 (size: 0x58)

    void OnRep_StashedAmmo();
    void OnRep_GunnerYawAndPitch();
}; // Size: 0x1320

class AArtilleryRailVehicle : public AInfantryRailVehicle
{
    class UParticleSystemComponent* FireShellParticleSystem;                          // 0x12A8 (size: 0x8)
    class UParticleSystemComponent* EjectShellParticleSystem;                         // 0x12B0 (size: 0x8)
    float InitialDelay;                                                               // 0x12B8 (size: 0x4)
    float ExplosionDelay;                                                             // 0x12BC (size: 0x4)
    float FuelPowerForRotation;                                                       // 0x12C0 (size: 0x4)
    float FuelPowerForFiring;                                                         // 0x12C4 (size: 0x4)

}; // Size: 0x12E0

class AAssemblyStation : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0818 (size: 0x8)
    class UModificationSlotComponent* UpgradeSlotComponent;                           // 0x0820 (size: 0x8)
    class UBuildSocketComponent* PowerSocket;                                         // 0x0828 (size: 0x8)
    class UFacilityLightComponent* LightComponent;                                    // 0x0830 (size: 0x8)
    class UBoxComponent* GarageFootprintComponent;                                    // 0x0838 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x0840 (size: 0x8)
    class USceneComponent* TransferLocation2;                                         // 0x0848 (size: 0x8)
    class UAssemblyAreaComponent* AssemblyAreaComponent;                              // 0x0850 (size: 0x8)
    TArray<FAssemblyItem> AssemblyItems;                                              // 0x0858 (size: 0x10)
    TMap<class EFortModificationType, class FAssemblyModification> Modifications;     // 0x0868 (size: 0x50)
    FResourceAmounts RepairCost;                                                      // 0x08B8 (size: 0x20)
    FPowerGridInfo PowerGridInfo;                                                     // 0x08D8 (size: 0x5C)
    TWeakObjectPtr<class AActor> BuildActor;                                          // 0x0934 (size: 0x8)
    EAssemblyAreaState AssemblyAreaState;                                             // 0x093C (size: 0x1)
    FName BuildActorName;                                                             // 0x0940 (size: 0x8)
    FString ProducerOnlineID;                                                         // 0x0948 (size: 0x10)
    bool bAllowsTierUpgrades;                                                         // 0x0958 (size: 0x1)
    bool bSupportsExtraLargeShippables;                                               // 0x0959 (size: 0x1)
    bool bIsDockyard;                                                                 // 0x095A (size: 0x1)
    bool bVehiclesMustBePositionedForRepairs;                                         // 0x095B (size: 0x1)
    float UpgradeCostMultiplier;                                                      // 0x0960 (size: 0x4)
    float GarageFootprintKillLocationZ;                                               // 0x0964 (size: 0x4)
    class USceneComponent* LadderLocation1;                                           // 0x0988 (size: 0x8)
    class USceneComponent* LadderLocation2;                                           // 0x0990 (size: 0x8)
    class USceneComponent* LadderLocation3;                                           // 0x0998 (size: 0x8)
    TSubclassOf<class ALadder> LadderType;                                            // 0x09A0 (size: 0x8)
    TArray<class ALadder*> SpawnedLadders;                                            // 0x09A8 (size: 0x10)

    void OnRep_PowerGridInfo();
    void OnRep_BuildActor();
    void OnRep_AssemblyAreaState();
}; // Size: 0x9C0

class AAssemblyStationBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)

}; // Size: 0x7F0

class ABackpackItemPickup : public AItemPickup
{
    TArray<class USkeletalMesh*> BackpackMeshes;                                      // 0x03F0 (size: 0x10)

}; // Size: 0x400

class ABarbedWire : public ABuildableStructure
{
}; // Size: 0x7F0

class ABarge : public ASimVehicle
{
    FRampData Ramp;                                                                   // 0x10F0 (size: 0x70)
    class UBoxComponent* RampDriveVolume;                                             // 0x1160 (size: 0x8)
    class UParticleSystemComponent* FrontLeftWaterEmitter;                            // 0x1168 (size: 0x8)
    class UParticleSystemComponent* FrontRightWaterEmitter;                           // 0x1170 (size: 0x8)
    class UParticleSystemComponent* BackRightWaterEmitter;                            // 0x1178 (size: 0x8)
    class UParticleSystemComponent* BackLeftWaterEmitter;                             // 0x1180 (size: 0x8)
    class UParticleSystemComponent* WakeWaterEmitter;                                 // 0x1188 (size: 0x8)
    class UAudioComponent* WaterDriveLoop;                                            // 0x1190 (size: 0x8)
    class UBoxComponent* KillVolume;                                                  // 0x1198 (size: 0x8)
    class UBoxComponent* WorkVolume;                                                  // 0x11A0 (size: 0x8)
    EDockedState DockedState;                                                         // 0x11A8 (size: 0x1)
    float RampAngle;                                                                  // 0x11AC (size: 0x4)
    class UStaticMeshComponent* BaseMesh;                                             // 0x1250 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1258 (size: 0x8)
    class UMeshComponent* DynamicMeshComponent;                                       // 0x1260 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x1268 (size: 0x8)
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;                      // 0x1270 (size: 0x8)
    FName CurrentShippable;                                                           // 0x1278 (size: 0x8)
    FReplicatedShippableData ShippableData;                                           // 0x1280 (size: 0x18)
    FSavedShippableData SavedData;                                                    // 0x1298 (size: 0xD0)
    class UShippableUseComponent* ShippableUseComponent;                              // 0x1368 (size: 0x8)

    void ServerToggleRamp();
    void OnRep_ShippableData();
    void OnRep_DockedState();
    void OnRep_CurrentShippable();
}; // Size: 0x1370

class ABargeShip : public AShipVehicle
{
    FRampData Ramp;                                                                   // 0x1220 (size: 0x70)
    class UBoxComponent* RampDriveVolume;                                             // 0x1290 (size: 0x8)
    class UAudioComponent* WaterDriveLoop;                                            // 0x1298 (size: 0x8)
    class UBoxComponent* KillVolume;                                                  // 0x12A0 (size: 0x8)
    class UBoxComponent* WorkVolume;                                                  // 0x12A8 (size: 0x8)
    EDockedState DockedState;                                                         // 0x12B0 (size: 0x1)
    float RampAngle;                                                                  // 0x12B4 (size: 0x4)
    class UStaticMeshComponent* BaseMesh;                                             // 0x1358 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1360 (size: 0x8)
    class UMeshComponent* DynamicMeshComponent;                                       // 0x1368 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x1370 (size: 0x8)
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;                      // 0x1378 (size: 0x8)
    FName CurrentShippable;                                                           // 0x1380 (size: 0x8)
    FReplicatedShippableData ShippableData;                                           // 0x1388 (size: 0x18)
    FSavedShippableData SavedData;                                                    // 0x13A0 (size: 0xD0)
    class UBoxComponent* DockingObstructionCheckVolume;                               // 0x1470 (size: 0x8)
    class UBoxComponent* UndockingObstructionCheckVolume;                             // 0x1478 (size: 0x8)
    class UShippableUseComponent* ShippableUseComponent;                              // 0x1480 (size: 0x8)
    float StarterFuelNormalizedOverride;                                              // 0x1488 (size: 0x4)

    void ServerToggleRamp();
    void OnRep_ShippableData();
    void OnRep_DockedState();
    void OnRep_CurrentShippable();
}; // Size: 0x1490

class ABase : public ATunnelNode
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0858 (size: 0x8)
    class UTechTreeComponent* TechTreeComponent;                                      // 0x0860 (size: 0x8)
    class UAudioComponent* SirenLoop;                                                 // 0x0868 (size: 0x8)
    int32 GarrisonLevel;                                                              // 0x0870 (size: 0x4)
    int32 BaseTunnelConnectionRange;                                                  // 0x0874 (size: 0x4)
    FDecayInfo DecayInfo;                                                             // 0x0878 (size: 0x4)
    FSpawnPoints SpawnPoints;                                                         // 0x0880 (size: 0x28)

}; // Size: 0x8B0

class ABaseBuildSite : public AStructureBuildSite
{
    bool bIsStaticBase;                                                               // 0x07E8 (size: 0x1)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07F0 (size: 0x8)
    class UTechTreeComponent* TechTreeComponent;                                      // 0x07F8 (size: 0x8)
    FSpawnPoints SpawnPoints;                                                         // 0x0800 (size: 0x28)
    bool bIsFirstTier;                                                                // 0x0828 (size: 0x1)
    TSubclassOf<class ATunnelNodeProxy> TunnelNodeProxyClass;                         // 0x0830 (size: 0x8)
    class ATunnelNodeProxy* TunnelNodeProxy;                                          // 0x0838 (size: 0x8)
    bool bIsBaseUpgrade;                                                              // 0x0840 (size: 0x1)
    int32 TunnelConnectionRange;                                                      // 0x0844 (size: 0x4)

}; // Size: 0x850

class ABasicItemPickup : public AItemPickup
{
}; // Size: 0x3F0

class ABattleTank : public ATankBase
{
    float MainGunYaw;                                                                 // 0x12B0 (size: 0x4)
    float MainGunPitch;                                                               // 0x12B4 (size: 0x4)
    float AlternateGunYaw;                                                            // 0x12B8 (size: 0x4)
    float AlternateGunPitch;                                                          // 0x12BC (size: 0x4)
    float Alternate2GunYaw;                                                           // 0x12C0 (size: 0x4)
    float Alternate2GunPitch;                                                         // 0x12C4 (size: 0x4)
    FName StashedAmmoType;                                                            // 0x12C8 (size: 0x8)
    FName AlternateStashedAmmoType;                                                   // 0x12D0 (size: 0x8)
    FName Alternate2StashedAmmoType;                                                  // 0x12D8 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12E0 (size: 0x4)
    int32 AlternateStashedAmmo;                                                       // 0x12E4 (size: 0x4)
    int32 Alternate2StashedAmmo;                                                      // 0x12E8 (size: 0x4)
    FPayloadMeshes PayloadMeshes;                                                     // 0x1320 (size: 0x58)

    void OnRep_StashedAmmo();
    void OnRep_MainGunYaw();
    void OnRep_MainGunPitch();
    void OnRep_AlternateStashedAmmo();
    void OnRep_AlternateGunYaw();
    void OnRep_AlternateGunPitch();
    void OnRep_Alternate2GunYaw();
    void OnRep_Alternate2GunPitch();
    bool GetIsMainGunFiring();
}; // Size: 0x1380

class ABicycle : public ASimVehicle
{
}; // Size: 0x10F0

class ABorderBase : public AForwardBase
{
    class UParticleSystemComponent* OnSpawnedPS;                                      // 0x08C0 (size: 0x8)
    class USoundCue* OnSpawnedSFX;                                                    // 0x08C8 (size: 0x8)
    bool bIsUsable;                                                                   // 0x08D0 (size: 0x1)
    FBorderBaseInfo Info;                                                             // 0x08D8 (size: 0x10)

    void OnRep_IsUsable();
    void MulticastOnSpawned();
}; // Size: 0x8F0

class ABorderTravelGhost : public AActor
{
    class UBoxComponent* BoxCollision;                                                // 0x0230 (size: 0x8)

}; // Size: 0x238

class ABoundaryHex : public AActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x0218 (size: 0x8)
    class UStaticMeshComponent* EditorMesh;                                           // 0x0220 (size: 0x8)

}; // Size: 0x228

class ABridge : public ABuildableStructure
{
    class UBoxComponent* BelowBlockingVolume;                                         // 0x07F0 (size: 0x8)
    class UBoxComponent* AboveBlockingArea;                                           // 0x07F8 (size: 0x8)

}; // Size: 0x800

class ABuildGhost : public AActor
{
    TWeakObjectPtr<class UBuildSocketComponent> RotatedSocket;                        // 0x026C (size: 0x8)
    TWeakObjectPtr<class AActor> PlacementHitActor;                                   // 0x0274 (size: 0x8)
    TArray<class UBuildSocketComponent*> Sockets;                                     // 0x0280 (size: 0x10)
    class UBuildSocketComponent* ManualConnectorSocket;                               // 0x0290 (size: 0x8)
    class USplineConnectorComponent* MainSplineConnector;                             // 0x0298 (size: 0x8)
    TWeakObjectPtr<class UBoxComponent> LandscapeHoleVolume;                          // 0x02DC (size: 0x8)
    FTransform LandscapeHoleVolumeTransform;                                          // 0x02F0 (size: 0x30)
    TMap<class UBuildSocketComponent*, class FModificationSocketPreviewInfo> ModificationSocketPreviewInfo; // 0x0320 (size: 0x50)
    class UArrowComponent* ArrowComponent;                                            // 0x0370 (size: 0x8)
    class UBoxComponent* BuildFootprintComponent;                                     // 0x0378 (size: 0x8)
    TArray<TWeakObjectPtr<AActor>> IgnoredActors;                                     // 0x0380 (size: 0x10)
    class ABuildableStructure* CDO;                                                   // 0x03B8 (size: 0x8)
    class UMaterialParameterCollection* BuildGhostParamCollection;                    // 0x03C0 (size: 0x8)
    class UMaterialInterface* BuildGhostMaterial;                                     // 0x03C8 (size: 0x8)
    class UMaterialInterface* BuildGhostHighlightMaterial;                            // 0x03D0 (size: 0x8)
    class UStaticMesh* DirectionArrowMesh;                                            // 0x03D8 (size: 0x8)
    class UMaterialInterface* UpgradeModeMaterial;                                    // 0x0478 (size: 0x8)
    class ALineOfSightVisualizationActor* LineOfSightVisualizationActor;              // 0x0560 (size: 0x8)
    class ABuildableStructure* UpgradeStructure;                                      // 0x0568 (size: 0x8)

}; // Size: 0x580

class ABuildSite : public AStructure
{
    FResourceAmounts DefaultResourceRequirements;                                     // 0x05F8 (size: 0x20)
    FResourceAmounts ResourceRequirements;                                            // 0x0618 (size: 0x20)
    bool BlocksPassiveDefences;                                                       // 0x0638 (size: 0x1)
    bool bIgnoreStructureDeathAoE;                                                    // 0x0639 (size: 0x1)
    bool bAllowStanding;                                                              // 0x0691 (size: 0x1)
    bool bIsNeutral;                                                                  // 0x0692 (size: 0x1)
    uint8 TeamId;                                                                     // 0x0693 (size: 0x1)
    FString OwnerWorldPlayerId;                                                       // 0x0698 (size: 0x10)
    int32 ResourcesPerBuildCycle;                                                     // 0x06A8 (size: 0x4)
    bool bIsBuiltAutomatically;                                                       // 0x06AC (size: 0x1)
    bool bIsReservableWhenBuiltAutomatically;                                         // 0x06AD (size: 0x1)
    ETechTreeTier Tier;                                                               // 0x06AF (size: 0x1)
    FVector PrototypeDropLocation;                                                    // 0x06B0 (size: 0xC)
    float RemainingExpiryTime;                                                        // 0x06BC (size: 0x4)
    TArray<class UShapeComponent*> PawnCheckVolumes;                                  // 0x06D8 (size: 0x10)
    class UMaterialInterface* BuildSiteMaterial;                                      // 0x06E8 (size: 0x8)

    void OnRep_ResourceRequirements();
    void OnRep_DefaultResourceRequirements();
}; // Size: 0x6F0

class ABuildableStructure : public AStructure
{
    TSubclassOf<class UBuildSocketComponent> SnappablePathSocketClass;                // 0x0600 (size: 0x8)
    TArray<FPathSocket> PathSockets;                                                  // 0x0608 (size: 0x10)
    EFortTier Tier;                                                                   // 0x0618 (size: 0x1)
    uint32 ModificationMask;                                                          // 0x061C (size: 0x4)
    bool bDisableModificationSlotValidation;                                          // 0x0620 (size: 0x1)
    bool bOnlyMigratePipesModification;                                               // 0x0621 (size: 0x1)
    bool bReadOnlyModifications;                                                      // 0x0622 (size: 0x1)
    TArray<class UModificationSlotComponent*> ModificationSlots;                      // 0x0628 (size: 0x10)
    float ProceduralUseVolumeFactor;                                                  // 0x063C (size: 0x4)
    FConnectorConfiguration ConnectorConfiguration;                                   // 0x0640 (size: 0x30)
    bool bDoUpgradeObstructionCheck;                                                  // 0x0674 (size: 0x1)
    TArray<class UPhysicalMaterial*> NoBuildPhysicalMaterials;                        // 0x0678 (size: 0x10)
    bool bApplyNoBuildPhysicalMaterialsToSurfaceSamples;                              // 0x0688 (size: 0x1)
    bool bUseSplineFootprintsForSurfaceChecks;                                        // 0x0689 (size: 0x1)
    bool bIgnoreNoBuildAreas;                                                         // 0x068A (size: 0x1)
    bool bIgnoreBuiltRoads;                                                           // 0x068B (size: 0x1)
    bool bIsBuiltOnLandscape;                                                         // 0x068C (size: 0x1)
    bool bIsBuiltOnIce;                                                               // 0x068D (size: 0x1)
    bool bBuildOnBridges;                                                             // 0x068E (size: 0x1)
    bool bBuildOnWater;                                                               // 0x068F (size: 0x1)
    bool bIsBuiltOnFoundation;                                                        // 0x0690 (size: 0x1)
    bool bIsPartiallyBuiltOnFoundation;                                               // 0x0691 (size: 0x1)
    bool bAllowFloating;                                                              // 0x0692 (size: 0x1)
    bool bLinearAttachment;                                                           // 0x0693 (size: 0x1)
    float LinearAttachmentTolerance;                                                  // 0x0694 (size: 0x4)
    bool bLinearAttachmentPitch;                                                      // 0x0698 (size: 0x1)
    int32 MaxAttachmentGroupSize;                                                     // 0x069C (size: 0x4)
    EMapBoundaryBuildRule MapBoundaryBuildRule;                                       // 0x06A0 (size: 0x1)
    bool bAllowNearEnemy;                                                             // 0x06A1 (size: 0x1)
    bool bIsConnector;                                                                // 0x06A2 (size: 0x1)
    bool bIsManualConnector;                                                          // 0x06A3 (size: 0x1)
    float ConnectorMinLength;                                                         // 0x06A4 (size: 0x4)
    float ConnectorMaxLength;                                                         // 0x06A8 (size: 0x4)
    float MinLengthMaxHealthModifier;                                                 // 0x06AC (size: 0x4)
    float ConnectorMinWidth;                                                          // 0x06B0 (size: 0x4)
    bool bConnectorCanSnapUnderRoads;                                                 // 0x06B4 (size: 0x1)
    TSubclassOf<class ABuildGhost> BuildGhostClass;                                   // 0x06B8 (size: 0x8)
    TSubclassOf<class ABuildSite> BuildSiteClass;                                     // 0x06C0 (size: 0x8)
    TSubclassOf<class AStructure> BaseStructureClass;                                 // 0x06C8 (size: 0x8)
    TSubclassOf<class AStructure> BreachedStructureClass;                             // 0x06D0 (size: 0x8)
    TSubclassOf<class AActor> ProxyActorClass;                                        // 0x06D8 (size: 0x8)
    bool bClearModificationsOnDowngrade;                                              // 0x06E0 (size: 0x1)
    FText Description;                                                                // 0x06E8 (size: 0x18)
    FShippableInfo ShippableInfo;                                                     // 0x0700 (size: 0xC)
    class UTexture* Icon;                                                             // 0x0710 (size: 0x8)
    EBuildCategory BuildCategory;                                                     // 0x0718 (size: 0x1)
    uint8 BuildOrder;                                                                 // 0x0719 (size: 0x1)
    EBuildLocationType BuildLocationType;                                             // 0x071A (size: 0x1)
    float MaxBuildDistance;                                                           // 0x071C (size: 0x4)
    float MaxBuildOverlapDepth;                                                       // 0x0720 (size: 0x4)
    float BuildTargetArmLength;                                                       // 0x0724 (size: 0x4)
    float DestroyedDamageRadius;                                                      // 0x0728 (size: 0x4)
    FVector DestroyedDamageExtent;                                                    // 0x072C (size: 0xC)
    FVector DestroyedDamageOffset;                                                    // 0x0738 (size: 0xC)
    bool bDropsLargeMaterialsWhenDestroyed;                                           // 0x0744 (size: 0x1)
    bool bCustomPawnOverlapCheck;                                                     // 0x0745 (size: 0x1)
    bool bCanOverlapSpawnPoint;                                                       // 0x0746 (size: 0x1)
    bool bCanBeBuiltIndoors;                                                          // 0x0747 (size: 0x1)
    bool bIsFillStructureProxy;                                                       // 0x0748 (size: 0x1)
    float MinDistanceToSameStructure;                                                 // 0x074C (size: 0x4)
    bool bIsVehicleProxy;                                                             // 0x0750 (size: 0x1)
    bool bRotateBuildGhost;                                                           // 0x0751 (size: 0x1)
    uint8 ValidBuildTools;                                                            // 0x0753 (size: 0x1)
    bool bIsInitiallyDestroyed;                                                       // 0x0754 (size: 0x1)
    EFactionId FactionVariant;                                                        // 0x0755 (size: 0x1)
    TArray<FTooltipDetailText> DescriptionDetails;                                    // 0x0758 (size: 0x10)
    FConcreteSettler ConcreteSettler;                                                 // 0x0768 (size: 0x48)
    bool bIsReservable;                                                               // 0x07B0 (size: 0x1)
    bool bUsesImpactsMaterial;                                                        // 0x07B2 (size: 0x1)
    class UStaticMesh* PackagedMesh;                                                  // 0x07B8 (size: 0x8)

    void OnRep_PathSockets();
    void OnRep_ModificationMask(const uint32 PreviousModificationMask);
}; // Size: 0x7F0

class ABuiltRoad : public ABuildableStructure
{
    class USplineConnectorComponent* SplineConnector;                                 // 0x07F0 (size: 0x8)
    float GrassCullRadius;                                                            // 0x07F8 (size: 0x4)
    class UBuildSocketComponent* BackSocket;                                          // 0x0800 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0808 (size: 0x8)

}; // Size: 0x810

class ACabooseRailVehicle : public ARailVehicle
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x1200 (size: 0x8)

}; // Size: 0x1210

class ACalloutMarker : public AActor
{
    float Lifetime_Sec;                                                               // 0x0218 (size: 0x4)
    float MoveSpeed;                                                                  // 0x021C (size: 0x4)

}; // Size: 0x238

class ACalloutMarkerGhost : public AActor
{
    class ASimPlayerController* SimPlayerController;                                  // 0x0218 (size: 0x8)

}; // Size: 0x228

class ACatWalk : public ATeamStructure
{
}; // Size: 0x810

class ACharactersRenderInfo : public AInfo
{
    TMap<class EOutfitType, class FOutfitMeshInfo> OutfitInfoMap;                     // 0x0218 (size: 0x50)
    FUniformRenderInfo UniformInfo;                                                   // 0x0268 (size: 0x1140)
    TArray<FCharacterSkinToneInfo> MaleSkinTones;                                     // 0x13A8 (size: 0x10)
    TArray<FCharacterSkinToneInfo> FemaleSkinTones;                                   // 0x13B8 (size: 0x10)
    TArray<FFootPrintActorInfo> FootPrintInfo;                                        // 0x13C8 (size: 0x10)
    FZombieFootPrintActorInfo ZombieFootprintInfo;                                    // 0x13D8 (size: 0x30)
    TArray<FIdleAnimation> IdleAnimations;                                            // 0x1408 (size: 0x10)
    FPhysicalMaterialResolver PhysicalMaterialResolver;                               // 0x1418 (size: 0x20)

}; // Size: 0x1438

class AClientFoliageReplacement : public AActor
{
    class UStaticMesh* DestroyedMesh;                                                 // 0x0218 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0220 (size: 0x8)
    float CriticalThreshold;                                                          // 0x0228 (size: 0x4)
    EClientFoliageReplacementState ReplacementState;                                  // 0x022C (size: 0x1)
    class UFoliageInstancedStaticMeshComponent* OriginalComponent;                    // 0x0230 (size: 0x8)

    void OnStateChanged(EClientFoliageReplacementState State);
}; // Size: 0x290

class ACoastalGun : public AGunTurret
{
}; // Size: 0x8C0

class AConcreteWall : public AWall
{
}; // Size: 0x800

class AConquestConfig : public AInfo
{
    TArray<FCodeNameQuantity> ItemsC;                                                 // 0x0218 (size: 0x10)
    TArray<FCodeNameQuantity> ItemsW;                                                 // 0x0228 (size: 0x10)

}; // Size: 0x238

class AConstructionEquipment : public ATeamStructure
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0810 (size: 0x8)
    class UStaticMeshComponent* ScoopMaterialMesh;                                    // 0x0818 (size: 0x8)
    class UGenericStockpileComponent* MaterialGenericStockpileComponent;              // 0x0820 (size: 0x8)
    class UGenericStockpileComponent* FuelGenericStockpileComponent;                  // 0x0828 (size: 0x8)
    class USceneComponent* CollisionQueryLocation;                                    // 0x0830 (size: 0x8)
    class UAudioComponent* ActiveLoop;                                                // 0x0838 (size: 0x8)
    class UAudioComponent* TurningLoop;                                               // 0x0840 (size: 0x8)
    TSubclassOf<class AImpactEffect> ImpactEffectClass;                               // 0x0848 (size: 0x8)
    class USoundCue* MaterialDropSoundCue;                                            // 0x0850 (size: 0x8)
    FName FuelName;                                                                   // 0x0858 (size: 0x8)
    FConstructionEquipmentConfig Config;                                              // 0x0860 (size: 0x98)
    float MaterialSubmissionDistance;                                                 // 0x08F8 (size: 0x4)
    float RecheckBlockedSiteTime;                                                     // 0x08FC (size: 0x4)
    int32 FuelConsumptionPerCycle;                                                    // 0x0900 (size: 0x4)
    FConstructionEquipmentServerState ServerState;                                    // 0x0904 (size: 0xC)

    void OnRep_ConstructionEquipmentServerState();
    void MulticastPlayMaterialDropFX();
}; // Size: 0x990

class AConstructionSite : public ATeamStructure
{
    EBuildLocationType BuildLocationFilter;                                           // 0x0810 (size: 0x1)
    class UBoxComponent* GarageFootprintComponent;                                    // 0x0818 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0820 (size: 0x8)
    int32 FullRepairCost;                                                             // 0x0828 (size: 0x4)

    bool ValidateMapBuildLocation();
}; // Size: 0x830

class AConstructionSiteBuildSite : public AStructureBuildSite
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x07E0 (size: 0x8)

}; // Size: 0x7F0

class AConstructionVehicle : public ARWDSimVehicle
{
    class USceneComponent* BoomLocation;                                              // 0x1290 (size: 0x8)
    class USceneComponent* HammerLocation;                                            // 0x1298 (size: 0x8)
    class USoundCue* WorkSoundCue;                                                    // 0x12A0 (size: 0x8)
    class UParticleSystem* WorkPS;                                                    // 0x12A8 (size: 0x8)
    float CabYaw;                                                                     // 0x12B0 (size: 0x4)
    uint8 bIsWorking;                                                                 // 0x12B4 (size: 0x1)

    void ServerSyncDesiredYaw(const float DesiredYaw);
    void ServerSetIsWorking(const bool bIsWorking);
    void ServerSetIsScoping(const bool bIsScoping);
    void MulticastPlayFX();
}; // Size: 0x12E0

class AContainer : public ABuildableStructure
{
    class UStaticMeshComponent* MeshComponent;                                        // 0x07F0 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07F8 (size: 0x8)
    TArray<FLinearColor> Colors;                                                      // 0x0808 (size: 0x10)
    uint8 ColorIndex;                                                                 // 0x0818 (size: 0x1)

    void OnRep_Color();
}; // Size: 0x820

class ACrane : public ARWDSimVehicle
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x1290 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1298 (size: 0x8)
    class UBoxComponent* ShippableCollision;                                          // 0x12A0 (size: 0x8)
    class UAudioComponent* ArmMovementSFXLoop;                                        // 0x12A8 (size: 0x8)
    class UAudioComponent* DeployingSFXLoop;                                          // 0x12B0 (size: 0x8)
    class UAudioComponent* PulleyMovementSFXLoop;                                     // 0x12B8 (size: 0x8)
    class UCraneComponent* CraneComponent;                                            // 0x12C0 (size: 0x8)

}; // Size: 0x12D0

class ACraneMarker : public AActor
{
    class UStaticMeshComponent* MainMesh;                                             // 0x0218 (size: 0x8)
    class UStaticMesh* InteractMesh;                                                  // 0x0220 (size: 0x8)
    class UStaticMesh* InteractGreyMesh;                                              // 0x0228 (size: 0x8)
    class UStaticMesh* InteractBlockedMesh;                                           // 0x0230 (size: 0x8)
    class UStaticMesh* InvalidMesh;                                                   // 0x0238 (size: 0x8)
    class UStaticMesh* UseMesh;                                                       // 0x0240 (size: 0x8)

}; // Size: 0x248

class ACraneRailwayTrack : public ARailwayTrack
{
}; // Size: 0x8C0

class ACrater : public ABuildableStructure
{
    TArray<FCraterMeshStop> MeshStops;                                                // 0x07F0 (size: 0x10)

}; // Size: 0x810

class ADamageProfiles : public AInfo
{
    class UDataTable* DataTable;                                                      // 0x0218 (size: 0x8)

}; // Size: 0x8C8

class ADayNightCycleManager : public AActor
{
    class ADirectionalLight* LightSource;                                             // 0x0220 (size: 0x8)
    class ADirectionalLight* MoonLightSource;                                         // 0x0228 (size: 0x8)
    class ASkyLight* SkyLight;                                                        // 0x0230 (size: 0x8)
    class APostProcessVolume* PostProcessVolume;                                      // 0x0238 (size: 0x8)
    class AExponentialHeightFog* ExponentialHeightFog;                                // 0x0240 (size: 0x8)
    class ASphereReflectionCapture* DayReflectionCapture;                             // 0x0248 (size: 0x8)
    class ASphereReflectionCapture* NightReflectionCapture;                           // 0x0250 (size: 0x8)
    float LightDayIntensity;                                                          // 0x0258 (size: 0x4)
    float LightNightIntensity;                                                        // 0x025C (size: 0x4)
    class UCurveLinearColor* DirectionalLightColorCurve;                              // 0x0260 (size: 0x8)
    class UCurveLinearColor* MoonLightColorCurve;                                     // 0x0268 (size: 0x8)
    class UCurveFloat* MoonLightIntensityCurve;                                       // 0x0270 (size: 0x8)
    class UCurveFloat* MoonLightAngleCurve;                                           // 0x0278 (size: 0x8)
    class UCurveFloat* VisibilityRadiusIntensityCurve;                                // 0x0280 (size: 0x8)
    class UCurveLinearColor* FogColorCurve;                                           // 0x0288 (size: 0x8)
    class UCurveFloat* FogFalloffCurve;                                               // 0x0290 (size: 0x8)
    class UCurveFloat* DayReflectionBrightness;                                       // 0x0298 (size: 0x8)
    class UCurveFloat* NightReflectionBrightness;                                     // 0x02A0 (size: 0x8)
    class UCurveFloat* SkyLightIntensity;                                             // 0x02A8 (size: 0x8)
    float LatitudeRotation;                                                           // 0x02B0 (size: 0x4)
    float SunSpeed;                                                                   // 0x02B4 (size: 0x4)
    float NightSunSpeed;                                                              // 0x02B8 (size: 0x4)
    TArray<FDayNightCycleCubemapInfo> CubeMapSamples;                                 // 0x02C0 (size: 0x10)
    bool bDebugCaptureEveryframe;                                                     // 0x02D0 (size: 0x1)
    int32 Day;                                                                        // 0x02D4 (size: 0x4)
    float MaxNightVisibilityRadius;                                                   // 0x02D8 (size: 0x4)
    float MinNightVisibilityRadius;                                                   // 0x02DC (size: 0x4)
    bool bIsNight;                                                                    // 0x02E0 (size: 0x1)
    float SunAngle;                                                                   // 0x02E4 (size: 0x4)
    uint16 SunAngleQuantized;                                                         // 0x02E8 (size: 0x2)
    class UEnvironmentalModificationData* EnvironmentalModificationData;              // 0x0310 (size: 0x8)

    void OnRep_SunAngleQuantized();
}; // Size: 0x320

class ADeadlyGasGrenadeProjectile : public ATimedProjectile
{
    TSubclassOf<class AWarPainVolume> PainVolumeTemplate;                             // 0x03B8 (size: 0x8)

}; // Size: 0x3C0

class ADeployedListeningKit : public ATripodMountedStructure
{
    class UListeningAreaComponent* ListeningAreaComponent;                            // 0x0830 (size: 0x8)

}; // Size: 0x840

class ADeployedStructure : public ABuildableStructure
{
    uint8 TeamId;                                                                     // 0x07F0 (size: 0x1)
    bool bEnableFriendlyFireTrackingOverride;                                         // 0x07F1 (size: 0x1)
    TArray<FName> IgnoreDamageFromStructures;                                         // 0x07F8 (size: 0x10)

}; // Size: 0x810

class ADeployedTripod : public ADeployedStructure
{
    FName BaseItemCodeName;                                                           // 0x0810 (size: 0x8)

}; // Size: 0x820

class ADeployedWeapon : public ATripodMountedStructure
{
    class USkeletalMeshComponent* PayloadMesh;                                        // 0x0830 (size: 0x8)
    FTripodHeightConfig HeightConfig;                                                 // 0x0838 (size: 0x4)
    bool bIgnoresRadialDamage;                                                        // 0x083C (size: 0x1)
    int16 StashedAmmo;                                                                // 0x083E (size: 0x2)
    FName StashedAmmoType;                                                            // 0x0840 (size: 0x8)
    float TripodHeight;                                                               // 0x0848 (size: 0x4)

    void OnRep_StashedAmmo();
}; // Size: 0x860

class ADepthProjectile : public AWarProjectile
{
    float WaterVelocityZ;                                                             // 0x0328 (size: 0x4)

}; // Size: 0x330

class ADestroyedAssemblyStation : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0618 (size: 0x8)
    uint32 ModificationMask;                                                          // 0x0620 (size: 0x4)

}; // Size: 0x628

class ADestroyedBase : public ADestroyedTeamStructure
{
    uint32 LastSpawnPointID;                                                          // 0x0618 (size: 0x4)
    bool bIsStaticBase;                                                               // 0x061C (size: 0x1)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0620 (size: 0x8)
    class UTechTreeComponent* TechTreeComponent;                                      // 0x0628 (size: 0x8)

}; // Size: 0x630

class ADestroyedBorderBase : public ADestroyedBase
{
    FBorderBaseInfo Info;                                                             // 0x0630 (size: 0x10)
    bool bIsActive;                                                                   // 0x0640 (size: 0x1)

}; // Size: 0x658

class ADestroyedBridge : public ADestroyedStructure
{
}; // Size: 0x600

class ADestroyedConstructionSite : public ADestroyedTeamStructure
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0618 (size: 0x8)

}; // Size: 0x620

class ADestroyedDrawbridge : public ADestroyedStructure
{
    class UPersistentProxyComponent* SideAProxy;                                      // 0x0600 (size: 0x8)
    class UPersistentProxyComponent* SideBProxy;                                      // 0x0608 (size: 0x8)

}; // Size: 0x610

class ADestroyedEmplacementHouse : public ADestroyedTeamStructure
{
}; // Size: 0x618

class ADestroyedEngineeringCenter : public ADestroyedTeamStructure
{
}; // Size: 0x618

class ADestroyedFacilityRefinery : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0618 (size: 0x8)
    class UGenericStockpileComponent* CrateGenericStockpileComponent;                 // 0x0620 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0628 (size: 0x8)
    TArray<FFuelTank> FuelTanks;                                                      // 0x0630 (size: 0x10)
    TArray<FFacilityRefineryOrder> PendingOrders;                                     // 0x0640 (size: 0x10)
    TArray<FFacilityRefineryOrder> Orders;                                            // 0x0650 (size: 0x10)
    TArray<FFacilityRefineryOrder> CompletedOrders;                                   // 0x0660 (size: 0x10)
    int32 ItemInputBuffer;                                                            // 0x0670 (size: 0x4)
    FReservePower ReservePower;                                                       // 0x0674 (size: 0x8)
    uint32 ModificationMask;                                                          // 0x067C (size: 0x4)

}; // Size: 0x680

class ADestroyedFort : public AFort
{
}; // Size: 0x820

class ADestroyedFortForwardBase : public ADestroyedBase
{
}; // Size: 0x630

class ADestroyedGarrisonHouse : public ADestroyedTeamStructure
{
}; // Size: 0x618

class ADestroyedGarrisonStation : public ADestroyedGarrisonHouse
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0618 (size: 0x8)
    class UTechTreeComponent* TechTreeComponent;                                      // 0x0620 (size: 0x8)
    uint32 LastSpawnPointID;                                                          // 0x0628 (size: 0x4)

}; // Size: 0x630

class ADestroyedHospital : public ADestroyedTeamStructure
{
    uint32 LastSpawnPointID;                                                          // 0x0618 (size: 0x4)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0620 (size: 0x8)

}; // Size: 0x628

class ADestroyedKeep : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0618 (size: 0x8)

}; // Size: 0x620

class ADestroyedLiquidTransferStation : public ADestroyedResourceTransferStation
{
    TArray<FFuelQuantity> FuelInputBuffers;                                           // 0x0620 (size: 0x10)
    FFuelQuantity FuelOutputBuffer;                                                   // 0x0630 (size: 0xC)

}; // Size: 0x640

class ADestroyedMassProductionFactory : public ADestroyedSpecializedFactory
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0620 (size: 0x8)

}; // Size: 0x628

class ADestroyedRefinery : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0618 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0620 (size: 0x8)
    TMap<class FString, class FRefinementOrderInfo> RefinementOrderMap;               // 0x0628 (size: 0x50)

}; // Size: 0x678

class ADestroyedResourceMine : public ADestroyedStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0600 (size: 0x8)

}; // Size: 0x608

class ADestroyedResourceTransferStation : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0618 (size: 0x8)

}; // Size: 0x620

class ADestroyedRocketFacility : public ADestroyedTeamStructure
{
    FFuelTank FuelTank;                                                               // 0x0618 (size: 0x14)

}; // Size: 0x630

class ADestroyedSeaport : public ADestroyedStorageFacility
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;                 // 0x0630 (size: 0x8)
    class UPersistentProxyComponent* ProxyLoadingDockComponent;                       // 0x0638 (size: 0x8)
    TArray<class ALadder*> SpawnedLadders;                                            // 0x0640 (size: 0x10)

}; // Size: 0x650

class ADestroyedSpecializedFactory : public ADestroyedTeamStructure
{
    class USpecializedFactoryComponent* SpecializedFactoryComponent;                  // 0x0618 (size: 0x8)

}; // Size: 0x620

class ADestroyedStorageFacility : public ADestroyedTeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0618 (size: 0x8)
    class UReserveStockpileComponent* ReserveStockpileComponent;                      // 0x0620 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0628 (size: 0x8)

}; // Size: 0x630

class ADestroyedStructure : public AStructure
{
    bool bIsScorchable;                                                               // 0x05F8 (size: 0x1)
    bool bIsScorched;                                                                 // 0x05F9 (size: 0x1)

}; // Size: 0x600

class ADestroyedTeamStructure : public ARuinableStructure
{
    EFactionId LastHeldFactionID;                                                     // 0x0610 (size: 0x1)

}; // Size: 0x618

class ADestroyedTownHall : public ADestroyedBase
{
}; // Size: 0x630

class ADestroyedVehicleFactory : public ADestroyedConstructionSite
{
}; // Size: 0x620

class ADestructibleProp : public AActor
{
    class UParticleSystem* DestroyedFX;                                               // 0x0220 (size: 0x8)
    class USoundCue* DestroyedSoundCue;                                               // 0x0228 (size: 0x8)

    void MulticastApplyFatalHit();
}; // Size: 0x230

class ADrawbridge : public ABuildableStructure
{
    class USkeletalMeshComponent* SideAMesh;                                          // 0x07F0 (size: 0x8)
    class USkeletalMeshComponent* SideBMesh;                                          // 0x07F8 (size: 0x8)
    class USkeletalMeshComponent* SideALeverMesh;                                     // 0x0800 (size: 0x8)
    class USkeletalMeshComponent* SideBLeverMesh;                                     // 0x0808 (size: 0x8)
    class UBoxComponent* SideAUseArea;                                                // 0x0810 (size: 0x8)
    class UBoxComponent* SideBUseArea;                                                // 0x0818 (size: 0x8)
    class UPersistentProxyComponent* SideAProxy;                                      // 0x0820 (size: 0x8)
    class UPersistentProxyComponent* SideBProxy;                                      // 0x0828 (size: 0x8)
    class UBoxComponent* SideBottomUseArea;                                           // 0x0830 (size: 0x8)
    class UBoxComponent* AboveBlockingArea;                                           // 0x0838 (size: 0x8)
    class UBoxComponent* AboveBlockingVolumeA;                                        // 0x0840 (size: 0x8)
    class UBoxComponent* AboveBlockingVolumeB;                                        // 0x0848 (size: 0x8)
    class UBoxComponent* BelowBlockingArea;                                           // 0x0850 (size: 0x8)
    class UBoxComponent* BelowBlockingVolume;                                         // 0x0858 (size: 0x8)
    class USoundCue* SwitchSound;                                                     // 0x0860 (size: 0x8)
    class USoundCue* OpenedSound;                                                     // 0x0868 (size: 0x8)
    class USoundCue* ClosedSound;                                                     // 0x0870 (size: 0x8)
    class UAudioComponent* MovingLoop;                                                // 0x0878 (size: 0x8)
    class USceneComponent* Ladder1Location;                                           // 0x0880 (size: 0x8)
    class USceneComponent* Ladder2Location;                                           // 0x0888 (size: 0x8)
    class ALadder* Ladder1;                                                           // 0x0890 (size: 0x8)
    class ALadder* Ladder2;                                                           // 0x0898 (size: 0x8)
    TSubclassOf<class ALadder> LadderType;                                            // 0x08A0 (size: 0x8)
    float BridgeOpenDuration;                                                         // 0x08A8 (size: 0x4)
    bool bIsRailBridge;                                                               // 0x08AC (size: 0x1)
    class ARailwayTrack* LinkedTrack;                                                 // 0x08B0 (size: 0x8)
    FBridgeSideState SideAState;                                                      // 0x08B8 (size: 0x1)
    FBridgeSideState SideBState;                                                      // 0x08B9 (size: 0x1)
    TEnumAsByte<EBridgeState> State;                                                  // 0x08BA (size: 0x1)
    float StartTime;                                                                  // 0x08BC (size: 0x4)

    void OnRep_State();
    void OnRep_StartTime();
    void MulticastPlayTransitionEffects(TEnumAsByte<EBridgeState> OldState, TEnumAsByte<EBridgeState> NewState);
    void MulticastPlaySideToggleEffect(TEnumAsByte<EBridgeSide> BridgeSide);
    float GetProgress();
    void ApplyVehicleDecay();
}; // Size: 0x8E0

class ADrawbridgeBuildSite : public AStructureBuildSite
{
    class UPersistentProxyComponent* SideAProxy;                                      // 0x07E0 (size: 0x8)
    class UPersistentProxyComponent* SideBProxy;                                      // 0x07E8 (size: 0x8)

}; // Size: 0x7F0

class AEffectSpawnerProxy : public AActor
{
    class UParticleSystem* DestroyedVFX;                                              // 0x0218 (size: 0x8)
    class USoundCue* DestroyedSoundCue;                                               // 0x0220 (size: 0x8)

    void OnRep_DestroyedVFX();
    void OnRep_DestroyedSoundCue();
}; // Size: 0x228

class AEmplacedArtillery : public AEmplacedWeapon
{
    uint8 RequiredSquadMembers;                                                       // 0x08D0 (size: 0x1)
    int32 SquadId;                                                                    // 0x08D4 (size: 0x4)

}; // Size: 0x8E0

class AEmplacedStructure : public ATeamStructure
{
    float EmplacedIncomingDamageModifier;                                             // 0x0810 (size: 0x4)

}; // Size: 0x820

class AEmplacedWeapon : public AEmplacedStructure
{
    float EmplacedTrackingModifier;                                                   // 0x0820 (size: 0x4)
    class USkeletalMeshComponent* Mesh;                                               // 0x0828 (size: 0x8)
    class USkeletalMeshComponent* FoundationMesh;                                     // 0x0830 (size: 0x8)
    FVector2D GunnerYawAndPitch;                                                      // 0x0838 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x0840 (size: 0x4)
    FName StashedAmmoType;                                                            // 0x0844 (size: 0x8)
    TArray<FMuzzleInfo> MuzzleInfo;                                                   // 0x0850 (size: 0x10)
    FPayloadMeshes PayloadMeshes;                                                     // 0x0860 (size: 0x58)

    void OnRep_StashedAmmo();
}; // Size: 0x8D0

class AEmplacedWeaponWithShieldedSeat : public AEmplacedWeapon
{
}; // Size: 0x8D0

class AEmplacementHouse : public ATunnelNode
{
    class USkeletalMeshComponent* EmplacementGunMesh;                                 // 0x0848 (size: 0x8)
    class USceneComponent* EmplacementGunMuzzleLocation;                              // 0x0850 (size: 0x8)
    TSubclassOf<class ALadder> LadderType;                                            // 0x0858 (size: 0x8)
    class USceneComponent* LadderLocation;                                            // 0x0860 (size: 0x8)
    float TimeToStarvation;                                                           // 0x0868 (size: 0x4)
    float AnimationHysteresisTime;                                                    // 0x086C (size: 0x4)
    int32 StashedAmmo;                                                                // 0x0870 (size: 0x4)
    FName StashedAmmoType;                                                            // 0x0874 (size: 0x8)
    FVector2D GunnerYawAndPitch;                                                      // 0x087C (size: 0x8)
    class ALadder* Ladder;                                                            // 0x0888 (size: 0x8)

}; // Size: 0x8B0

class AEmplacementHouseBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class AEngineRailVehicle : public ARailVehicle
{
    float SteamGainRate;                                                              // 0x1200 (size: 0x4)
    float SteamVentRate;                                                              // 0x1204 (size: 0x4)
    float SteamActivateThreshold;                                                     // 0x1208 (size: 0x4)
    float SteamDeactivateThreshold;                                                   // 0x120C (size: 0x4)
    float SteamPressure;                                                              // 0x1210 (size: 0x4)
    bool bIsSteamSFXPrimed;                                                           // 0x1214 (size: 0x1)
    class UParticleSystemComponent* SteamParticleSystem;                              // 0x1218 (size: 0x8)
    class UParticleSystemComponent* BoostingParticleSystem;                           // 0x1220 (size: 0x8)
    class USoundCue* SteamVentCue;                                                    // 0x1228 (size: 0x8)
    class UAudioComponent* HornLoop;                                                  // 0x1230 (size: 0x8)
    float MaxHornDuration;                                                            // 0x1238 (size: 0x4)
    float BoostDuration;                                                              // 0x123C (size: 0x4)
    bool bHornActivated;                                                              // 0x1240 (size: 0x1)

    void ServerSetHornActivated(bool InHornActivated);
    void OnRep_HornActivated();
    void ClientSetBoosting(bool InBoosting);
}; // Size: 0x1270

class AEngineRoom : public AFacilityRefinery
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0A58 (size: 0x8)
    class UAnimMontage* AnimMontage;                                                  // 0x0A60 (size: 0x8)

}; // Size: 0xA70

class AEngineRoomBuildSite : public AFacilityRefineryBuildSite
{
}; // Size: 0x850

class AEngineeringCenter : public ATeamStructure
{
}; // Size: 0x810

class AEngineeringCenterBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class AEnvironmentModification : public AActor
{
    TArray<uint16> ImpactMap;                                                         // 0x0220 (size: 0x10)
    int32 Seed;                                                                       // 0x0230 (size: 0x4)
    TArray<uint8> DevastationHeatmap;                                                 // 0x0248 (size: 0x10)
    TArray<uint8> LastProcessedDevastationHeatmap;                                    // 0x0258 (size: 0x10)
    TArray<uint8> QuantizedPuddleRainfall;                                            // 0x0268 (size: 0x10)
    TArray<FPuddleInfo> Puddles;                                                      // 0x0278 (size: 0x10)
    TArray<float> SavedPuddleRainfall;                                                // 0x0288 (size: 0x10)
    TSet<AStructure*> RainfallReceivers;                                              // 0x0298 (size: 0x50)
    TArray<class AClientFoliageReplacement*> Replacements;                            // 0x0328 (size: 0x10)
    TArray<class UDecalComponent*> Decals;                                            // 0x0338 (size: 0x10)
    bool bFirstReplicationOfDevastationHeatmap;                                       // 0x03F0 (size: 0x1)
    float CreationTime;                                                               // 0x03F4 (size: 0x4)
    TArray<uint8> EncodedRemovedFoliageInstances;                                     // 0x0418 (size: 0x10)

    void ProcessDevastationHeatmapReplication(const TArray<uint8>& OldDevastationHeatmap);
    void OnRep_Seed();
    void OnRep_QuantizedPuddleRainfall(const TArray<uint8>& Prev);
    void OnRep_EncodedRemovedFoliageInstances();
    void OnRep_DevastationHeatmap(const TArray<uint8>& OldDevastationHeatmap);
    void OnRep_CreationTime(const float& OldCreationTime);
}; // Size: 0x428

class AEnvironmentSFX : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0218 (size: 0x8)
    class UAudioComponent* DayTimeSFX;                                                // 0x0220 (size: 0x8)
    class UAudioComponent* NightTimeSFX;                                              // 0x0228 (size: 0x8)

}; // Size: 0x238

class AEnvironmentVFX : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0218 (size: 0x8)

}; // Size: 0x228

class AExplosive : public AActor
{
    float DetonationDelay;                                                            // 0x0220 (size: 0x4)
    class UArrowComponent* ArrowComponent;                                            // 0x0228 (size: 0x8)
    class USphereComponent* CollisionComp;                                            // 0x0230 (size: 0x8)
    class UStaticMeshComponent* ItemMesh;                                             // 0x0238 (size: 0x8)
    FName ExplosiveCodeName;                                                          // 0x0240 (size: 0x8)
    float ExplosionOffsetZ;                                                           // 0x0248 (size: 0x4)
    float ExplosionFXOffsetZ;                                                         // 0x024C (size: 0x4)
    float DamageDelay;                                                                // 0x0250 (size: 0x4)
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;                         // 0x0258 (size: 0x8)
    TSubclassOf<class AWarExplosionEffect> WaterSurfaceExplosionTemplate;             // 0x0260 (size: 0x8)
    float DestroyObstacleRadius;                                                      // 0x0268 (size: 0x4)
    int32 SubExplosionCount;                                                          // 0x026C (size: 0x4)
    float ExplosionLength;                                                            // 0x0270 (size: 0x4)
    uint8 bExplosionEffectsTrigger;                                                   // 0x0288 (size: 0x1)
    uint8 TeamId;                                                                     // 0x028C (size: 0x1)

    void OnRep_Exploded();
}; // Size: 0x2D8

class AExplosiveAmmoPickup : public AAmmoPickup
{
    TSubclassOf<class AWarExplosionEffect> ExplosionClass;                            // 0x0430 (size: 0x8)
    TSubclassOf<class AWarExplosionEffect> DirectFireExplosionClass;                  // 0x0438 (size: 0x8)
    class USoundCue* ShotSoundCue;                                                    // 0x0440 (size: 0x8)
    bool bSupportsDirectFireMode;                                                     // 0x0448 (size: 0x1)

}; // Size: 0x450

class AFacilityRefinery : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0818 (size: 0x8)
    class UGenericStockpileComponent* CrateGenericStockpileComponent;                 // 0x0820 (size: 0x8)
    class UModificationSlotComponent* UpgradeSlotComponent;                           // 0x0828 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0830 (size: 0x8)
    class UBuildSocketComponent* PowerSocket;                                         // 0x0838 (size: 0x8)
    class UFacilityLightComponent* LightComponent;                                    // 0x0840 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x0848 (size: 0x8)
    TArray<FMultiConversionInfo> ConversionEntries;                                   // 0x0850 (size: 0x10)
    TMap<class EFortModificationType, class FFacilityModification> Modifications;     // 0x0860 (size: 0x50)
    FName RequiredResourceFieldCodeName;                                              // 0x08B0 (size: 0x8)
    TArray<FFuelTank> FuelTanks;                                                      // 0x08B8 (size: 0x10)
    FPowerGridInfo PowerGridInfo;                                                     // 0x08C8 (size: 0x5C)
    FReservePower ReservePower;                                                       // 0x0924 (size: 0x8)
    bool bAlwaysSetOrdersToBlocked;                                                   // 0x092C (size: 0x1)
    int8 ReplicatedIndex;                                                             // 0x092D (size: 0x1)
    bool bReplicatedIsActive;                                                         // 0x092E (size: 0x1)
    uint8 MaxOrders;                                                                  // 0x092F (size: 0x1)
    TArray<FFacilityRefineryOrder> PendingOrders;                                     // 0x0938 (size: 0x10)
    TArray<FFacilityRefineryOrder> Orders;                                            // 0x0948 (size: 0x10)
    TArray<FFacilityRefineryOrder> CompletedOrders;                                   // 0x0958 (size: 0x10)
    int32 ItemInputBuffer;                                                            // 0x0A08 (size: 0x4)

    void OnRep_ReplicatedIsActive();
    void OnRep_ReplicatedIndex();
    void OnRep_PowerGridInfo();
    void MulticastSetMaxOrderCount(const uint8 MaxOrderCount);
    void BPOnStateInactive();
    void BPOnStateActive();
}; // Size: 0xA60

class AFacilityRefineryBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)
    class UGenericStockpileComponent* CrateGenericStockpileComponent;                 // 0x07E8 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x07F0 (size: 0x8)
    TArray<FFuelTank> FuelTanks;                                                      // 0x07F8 (size: 0x10)
    TArray<FFacilityRefineryOrder> PendingOrders;                                     // 0x0808 (size: 0x10)
    TArray<FFacilityRefineryOrder> Orders;                                            // 0x0818 (size: 0x10)
    TArray<FFacilityRefineryOrder> CompletedOrders;                                   // 0x0828 (size: 0x10)
    int32 ItemInputBuffer;                                                            // 0x0838 (size: 0x4)
    FReservePower ReservePower;                                                       // 0x083C (size: 0x8)

}; // Size: 0x850

class AFestivalFlagHolder : public ATeamStructure
{
    class UCapsuleComponent* DropOffLocation;                                         // 0x0810 (size: 0x8)

    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x820

class AFestivalFlagPickUp : public AItemPickup
{
    class USkeletalMeshComponent* FlagMesh;                                           // 0x03F0 (size: 0x8)
    class UMaterialInterface* ColonialMaterial;                                       // 0x03F8 (size: 0x8)
    class UMaterialInterface* WardenMaterial;                                         // 0x0400 (size: 0x8)

}; // Size: 0x408

class AFestivalPortal : public ABuildableStructure
{
    class USceneComponent* TeleportLocation;                                          // 0x07F0 (size: 0x8)
    FString Name;                                                                     // 0x07F8 (size: 0x10)
    FString Destination;                                                              // 0x0808 (size: 0x10)

}; // Size: 0x820

class AFieldBridge : public ABuildableStructure
{
    class UStaticMeshComponent* FrontRamp;                                            // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* BackRamp;                                             // 0x07F8 (size: 0x8)
    class UBoxComponent* FrontKillVolume;                                             // 0x0800 (size: 0x8)
    class UBoxComponent* BackKillVolume;                                              // 0x0808 (size: 0x8)

}; // Size: 0x810

class AFieldBridgeBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class AFieldMachineGun : public ARWDSimVehicle
{
    class UParticleSystemComponent* MuzzleFlashPS;                                    // 0x1290 (size: 0x8)
    class USoundCue* FiringSound;                                                     // 0x1298 (size: 0x8)
    FVector2D GunnerYawAndPitch;                                                      // 0x12A0 (size: 0x8)
    FName StashedAmmoType;                                                            // 0x12A8 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12B0 (size: 0x4)

    bool GetIsFiring();
    FVector2D GetGunnerYawAndPitch(int32 GunnerIndex);
}; // Size: 0x12C0

class AFieldPier : public ABuildableStructure
{
    float ShippableZOffset;                                                           // 0x07F0 (size: 0x4)

}; // Size: 0x800

class AFireBarrel : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0220 (size: 0x8)
    class UStaticMeshComponent* BarrelMesh;                                           // 0x0228 (size: 0x8)
    class UStaticMeshComponent* FireMesh;                                             // 0x0230 (size: 0x8)
    class UParticleSystemComponent* SmokeParticleSystem;                              // 0x0238 (size: 0x8)
    class UParticleSystemComponent* SteamParticleSystem;                              // 0x0240 (size: 0x8)
    bool bIsIgnited;                                                                  // 0x0250 (size: 0x1)
    float TimeToReignite;                                                             // 0x0254 (size: 0x4)

    void OnRep_bIsIgnited();
}; // Size: 0x258

class AFireInfo : public AInfo
{
    float BurningFromSuppressionThreshold;                                            // 0x0218 (size: 0x4)
    TArray<FFireIntensityThreshold> FireIntensityThresholds;                          // 0x0220 (size: 0x10)
    float MaxPreMitigationFireDamagePerTick;                                          // 0x0230 (size: 0x4)
    float TickPeriodSeconds;                                                          // 0x0234 (size: 0x4)
    float WeatherIntensityEffectMultiplier;                                           // 0x0238 (size: 0x4)
    float CharacterOnFireDamage;                                                      // 0x023C (size: 0x4)
    float BurningSpreadWindScale;                                                     // 0x0240 (size: 0x4)
    float BurningBuildingHeatRange;                                                   // 0x0244 (size: 0x4)
    TSubclassOf<class AFlameActor> FlameActor;                                        // 0x0248 (size: 0x8)
    TSubclassOf<class UDamageType> BuildingsDamagingPlayersDamageType;                // 0x0250 (size: 0x8)
    TSubclassOf<class UDamageType> BuildingsFireSpreadDamageType;                     // 0x0258 (size: 0x8)
    TSubclassOf<class UDamageType> BurningSelfDamageType;                             // 0x0260 (size: 0x8)
    class USoundCue* WaterFireLoopSFX;                                                // 0x0268 (size: 0x8)
    class USoundCue* WaterFireTailSFX;                                                // 0x0270 (size: 0x8)
    class UParticleSystem* WaterFireVFX;                                              // 0x0278 (size: 0x8)

}; // Size: 0x280

class AFirePit : public ABuildableStructure
{
    class UTemperatureModifierSphereComponent* TemperatureModifierComponent;          // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* FireMesh;                                             // 0x07F8 (size: 0x8)
    class UParticleSystemComponent* Fire1ParticleSystem;                              // 0x0800 (size: 0x8)
    class UParticleSystemComponent* Fire2ParticleSystem;                              // 0x0808 (size: 0x8)
    class UParticleSystemComponent* Fire3ParticleSystem;                              // 0x0810 (size: 0x8)
    class UAudioComponent* FireSFXLoop;                                               // 0x0818 (size: 0x8)
    FFuelTank FuelTankDiesel;                                                         // 0x0820 (size: 0x14)
    float DieselConsumptionRate;                                                      // 0x0834 (size: 0x4)

    void OnRep_FuelTankDiesel();
}; // Size: 0x850

class AFirearmPickup : public AGearPickup
{
}; // Size: 0x3F0

class AFlameActor : public AActor
{
    class UParticleSystemComponent* WaterFireVFXComponent;                            // 0x0228 (size: 0x8)

    void BPUpdateWindDirection(FVector Direction);
    void BPOnFireIntensityChanged(uint8 Previous, uint8 NewIntensity);
    void BPDeactivate();
}; // Size: 0x230

class AFlareExplosionEffect : public AWarExplosionEffect
{
    class UCurveFloat* AltitudeCurve;                                                 // 0x0340 (size: 0x8)
    float IlluminationRadius;                                                         // 0x0348 (size: 0x4)
    float VisibilityIndicatorRadius;                                                  // 0x034C (size: 0x4)
    class UParticleSystem* LightFX;                                                   // 0x0350 (size: 0x8)
    int32 MaxActiveLightsInRange;                                                     // 0x0358 (size: 0x4)
    float MaxLightCullingRange;                                                       // 0x035C (size: 0x4)
    class UParticleSystemComponent* LightParticleSystem;                              // 0x0360 (size: 0x8)

}; // Size: 0x388

class AFlatbedRailVehicle : public ARailVehicle
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x1200 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1208 (size: 0x8)
    class UMeshComponent* DynamicMeshComponent;                                       // 0x1210 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x1218 (size: 0x8)
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;                      // 0x1220 (size: 0x8)
    FName CurrentShippable;                                                           // 0x1228 (size: 0x8)
    FReplicatedShippableData ShippableData;                                           // 0x1230 (size: 0x18)
    FSavedShippableData SavedData;                                                    // 0x1248 (size: 0xD0)

    void OnRep_ShippableData();
    void OnRep_CurrentShippable();
}; // Size: 0x1320

class AFlatbedTruck : public ARWDSimVehicle
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x1288 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1290 (size: 0x8)
    class UMeshComponent* DynamicMeshComponent;                                       // 0x1298 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x12A0 (size: 0x8)
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;                      // 0x12A8 (size: 0x8)
    FName CurrentShippable;                                                           // 0x12B0 (size: 0x8)
    FReplicatedShippableData ShippableData;                                           // 0x12B8 (size: 0x18)
    FSavedShippableData SavedData;                                                    // 0x12D0 (size: 0xD0)

    void OnRep_ShippableData();
    void OnRep_CurrentShippable();
}; // Size: 0x13B0

class AFort : public ABuildableStructure
{
    bool bSupportsEmplacedStructures;                                                 // 0x07F0 (size: 0x1)
    class UBoxComponent* EmplacementLocation;                                         // 0x07F8 (size: 0x8)
    float MinUpgradeTargetDistance;                                                   // 0x0800 (size: 0x4)
    FVector ObstructionCheckOverrideExtents;                                          // 0x0804 (size: 0xC)
    TWeakObjectPtr<class AEmplacedStructure> EmplacedStructure;                       // 0x0810 (size: 0x8)

}; // Size: 0x820

class AFortArtilleryShelter : public AFort
{
    float BaseShelterBonus;                                                           // 0x0818 (size: 0x4)

}; // Size: 0x820

class AFortBuildSite : public AFortBuildSiteBase
{
}; // Size: 0x7E0

class AFortBuildSiteBase : public AStructureBuildSite
{
}; // Size: 0x7E0

class AFortConnector : public AFort
{
}; // Size: 0x820

class AFortConnectorBuildSite : public AFortBuildSiteBase
{
}; // Size: 0x7E0

class AFortCorner : public AFort
{
    TArray<FName> IncompatibleCornerSockets;                                          // 0x0818 (size: 0x10)

}; // Size: 0x830

class AFortCornerBuildSite : public AFortBuildSiteBase
{
}; // Size: 0x7E0

class AFortEmp : public ATeamStructure
{
    class UStaticMeshComponent* FirstSegmentMesh;                                     // 0x0818 (size: 0x8)
    class UStaticMeshComponent* SecondSegmentMesh;                                    // 0x0820 (size: 0x8)
    class UBoxComponent* BuildLocation;                                               // 0x0828 (size: 0x8)
    class UBoxComponent* LRArtilleryObstructionShape;                                 // 0x0830 (size: 0x8)
    class UBoxComponent* IntelCenterObstructionShape;                                 // 0x0838 (size: 0x8)
    class UBoxComponent* WeatherStationObstructionShape;                              // 0x0840 (size: 0x8)
    class UBoxComponent* FortGarrisonStationObstructionShape;                         // 0x0848 (size: 0x8)
    FFortEmpConfig FortEmpConfig;                                                     // 0x0850 (size: 0x60)
    EFortEmpStructure FortEmpSelectedStructure;                                       // 0x08B0 (size: 0x1)
    uint8 RequiredSquadMembers;                                                       // 0x08B1 (size: 0x1)
    int32 SquadId;                                                                    // 0x08B4 (size: 0x4)

}; // Size: 0x8C0

class AFortFirePit : public AFort
{
    FFuelTank FuelTankDiesel;                                                         // 0x0818 (size: 0x14)

    void OnRep_FuelTankDiesel();
}; // Size: 0x830

class AFortFireSuppression : public ATeamStructure
{
    class UPowerConsumerComponent* PowerConsumerComponent;                            // 0x0810 (size: 0x8)
    FFuelTank WaterTank;                                                              // 0x0818 (size: 0x14)
    bool bIsDispensingWater;                                                          // 0x082C (size: 0x1)
    class UParticleSystemComponent* SprinklerVFXComponent;                            // 0x0830 (size: 0x8)
    class UAudioComponent* PumpingLoopComponent;                                      // 0x0838 (size: 0x8)
    class UParticleSystemComponent* SteamVFXComponent;                                // 0x0840 (size: 0x8)
    FName PipeInputAssociatedSocketName;                                              // 0x0848 (size: 0x8)
    float DispenseAmountPerSec;                                                       // 0x0850 (size: 0x4)

    void OnRep_IsDispensingWater();
}; // Size: 0x860

class AFortFireSuppressionBuildSite : public AStructureBuildSite
{
    FFuelTank WaterTank;                                                              // 0x07E0 (size: 0x14)

}; // Size: 0x800

class AFortForwardBase : public AForwardBase
{
    class USceneComponent* LadderLocation;                                            // 0x08C0 (size: 0x8)
    TSubclassOf<class ALadder> LadderType;                                            // 0x08C8 (size: 0x8)
    class ALadder* Ladder;                                                            // 0x08D0 (size: 0x8)

}; // Size: 0x8E0

class AFortForwardBaseBuildSite : public ABaseBuildSite
{
}; // Size: 0x850

class AFortGarrisonStation : public ATeamStructure
{
    class UStaticMeshComponent* RoofMesh;                                             // 0x0818 (size: 0x8)
    class UStaticMeshComponent* BasementMesh;                                         // 0x0820 (size: 0x8)
    class UStaticMeshComponent* GroundStaircaseMesh;                                  // 0x0828 (size: 0x8)
    class UBoatHullComponent* BoatHullComponent;                                      // 0x0830 (size: 0x8)
    class USafeHouseVisibilityToggleComponent* VisibilityToggleComponent;             // 0x0838 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0840 (size: 0x8)
    FSpawnPoints SpawnPoints;                                                         // 0x0848 (size: 0x28)

}; // Size: 0x870

class AFortObservation : public ATeamStructure
{
    FVector ObstructionCheckOverrideExtents;                                          // 0x0810 (size: 0xC)
    class UMapIntelligenceSourceComponent* MapIntelligenceSource;                     // 0x0820 (size: 0x8)
    class UPowerConsumerComponent* PowerConsumerComponent;                            // 0x0828 (size: 0x8)
    class UTeamFlagMeshComponent* TeamFlagMeshComponent;                              // 0x0830 (size: 0x8)

}; // Size: 0x840

class AFortStaticArtillery : public ATunnelNode
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0848 (size: 0x8)
    class UTeamFlagMeshComponent* FlagMesh;                                           // 0x0850 (size: 0x8)
    class UParticleSystemComponent* FireShellParticleSystem;                          // 0x0858 (size: 0x8)
    float MinDistance;                                                                // 0x0860 (size: 0x4)
    float MaxDistance;                                                                // 0x0864 (size: 0x4)
    float FiringAngle;                                                                // 0x0868 (size: 0x4)
    float FiringCooldown;                                                             // 0x086C (size: 0x4)
    float MinVerticalAngle;                                                           // 0x0870 (size: 0x4)
    float MaxVerticalAngle;                                                           // 0x0874 (size: 0x4)
    FStaticArtilleryDamageParams DamageParams;                                        // 0x0878 (size: 0x30)
    float InitialDelay;                                                               // 0x08A8 (size: 0x4)
    float ExplosionDelay;                                                             // 0x08AC (size: 0x4)
    float HorizontalAngle;                                                            // 0x08B0 (size: 0x4)
    float VerticalAngle;                                                              // 0x08B4 (size: 0x4)
    bool bIsFiring;                                                                   // 0x08B8 (size: 0x1)

    void OnRep_IsFiring();
}; // Size: 0x8F0

class AFortTurret : public AFoxholeTurret
{
}; // Size: 0x8A0

class AFortTurretAT : public AGunTurret
{
}; // Size: 0x8C0

class AFortTurretMG : public AFortTurret
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0898 (size: 0x8)

}; // Size: 0x8A0

class AForwardBase : public AOutpost
{
    class UTeamFlagMeshComponent* TeamFlagMeshComponent;                              // 0x08B8 (size: 0x8)

}; // Size: 0x8C0

class AFoundation : public ATeamStructure
{
}; // Size: 0x810

class AFoundationBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class AFoxhole : public ABuildableStructure
{
}; // Size: 0x7F0

class AFoxholeTurret : public ATunnelNode
{
    class UAITurretComponent* AITurretComponent;                                      // 0x0848 (size: 0x8)
    class UAITurretsControllerComponent* AITurretsController;                         // 0x0850 (size: 0x8)
    class UArrowComponent* MuzzleFlashLocationComponent;                              // 0x0858 (size: 0x8)
    bool ShouldAggroOnDamage;                                                         // 0x0860 (size: 0x1)
    bool bUseSquareMuzzleBounds;                                                      // 0x0861 (size: 0x1)
    bool bIsTutorialTurret;                                                           // 0x0862 (size: 0x1)
    uint8 bDisallowForwardUpgradeInIsland;                                            // 0x0863 (size: 0x1)
    bool bLimitOccupantFiringArc;                                                     // 0x0864 (size: 0x1)
    float MaxOccupantFiringArcDeviation;                                              // 0x0868 (size: 0x4)
    class UTeamFlagMeshComponent* FlagMesh;                                           // 0x0888 (size: 0x8)

}; // Size: 0x8A0

class AFreighter : public AShipVehicle
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x1220 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1228 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x1230 (size: 0x8)
    class UParticleSystemComponent* FrontLeftWaterEmitter;                            // 0x1238 (size: 0x8)
    class UParticleSystemComponent* FrontRightWaterEmitter;                           // 0x1240 (size: 0x8)
    class UParticleSystemComponent* BackRightWaterEmitter;                            // 0x1248 (size: 0x8)
    class UParticleSystemComponent* BackLeftWaterEmitter;                             // 0x1250 (size: 0x8)
    class UParticleSystemComponent* WakeWaterEmitter;                                 // 0x1258 (size: 0x8)
    class UAudioComponent* WaterDriveLoop;                                            // 0x1260 (size: 0x8)
    class UAudioComponent* DeployingSFXLoop;                                          // 0x1268 (size: 0x8)
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;                      // 0x1270 (size: 0x8)
    int32 MaxShippableCount;                                                          // 0x1278 (size: 0x4)
    TArray<FFreighterCargo> CurrentShippables;                                        // 0x1280 (size: 0x10)
    FReplicatedShippableData ShippableData;                                           // 0x1290 (size: 0x18)
    uint8 State;                                                                      // 0x12A8 (size: 0x1)
    class UMeshComponent* DynamicMeshComponent;                                       // 0x12B8 (size: 0x8)

    void ServerToggleMode(const bool bIsDeploy);
    void OnRep_State(const uint8 PreviousState);
    void OnRep_ShippableData();
    void OnRep_CurrentShippables();
}; // Size: 0x12D0

class AFuelContainer : public AContainer
{
    FFuelTankerInfo FuelTankerInfo;                                                   // 0x0828 (size: 0x98)

    void OnRep_FuelTankerInfo();
}; // Size: 0x8C0

class AGarrisonHouse : public ATunnelNode
{
    float TimeToStarvation;                                                           // 0x0848 (size: 0x4)
    FDynamicTierInfo DynamicTierInfo;                                                 // 0x0850 (size: 0x10)
    class UAITurretsControllerComponent* AITurretsController;                         // 0x0860 (size: 0x8)

    bool IsNeutralHouse();
}; // Size: 0x870

class AGarrisonHouseBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class AGarrisonStation : public AGarrisonHouse
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0878 (size: 0x8)
    class UTechTreeComponent* TechTreeComponent;                                      // 0x0880 (size: 0x8)
    class UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;            // 0x0888 (size: 0x8)
    float TunnelConnectionRange;                                                      // 0x0890 (size: 0x4)
    FDecayInfo DecayInfo;                                                             // 0x0894 (size: 0x4)
    FSpawnPoints SpawnPoints;                                                         // 0x0898 (size: 0x28)

}; // Size: 0x8D0

class AGarrisonStationBuildSite : public AGarrisonHouseBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E8 (size: 0x8)
    class UTechTreeComponent* TechTreeComponent;                                      // 0x07F0 (size: 0x8)
    FSpawnPoints SpawnPoints;                                                         // 0x07F8 (size: 0x28)

}; // Size: 0x820

class AGate : public ATeamStructure
{
    class USoundCue* OpeningSoundCue;                                                 // 0x0810 (size: 0x8)
    class UBoxComponent* NoBuildCollider;                                             // 0x0818 (size: 0x8)
    class UBoxComponent* GateObstructionCollider;                                     // 0x0820 (size: 0x8)
    class UBoxComponent* GateCollider;                                                // 0x0828 (size: 0x8)
    class USkeletalMeshComponent* GateDoorMesh;                                       // 0x0830 (size: 0x8)
    FName GateCollisionProfileName;                                                   // 0x0838 (size: 0x8)
    class UMaterialInterface* GateDoorOverlapMaterial;                                // 0x0840 (size: 0x8)
    EGateState GateState;                                                             // 0x0848 (size: 0x1)
    float AutomaticCloseTime;                                                         // 0x084C (size: 0x4)

    void OnRep_GateState();
}; // Size: 0x860

class AGearPickup : public AItemPickup
{
}; // Size: 0x3F0

class AGlobalEffectSpawnerProxy : public AEffectSpawnerProxy
{
}; // Size: 0x228

class AGlobalFestivalInfo : public AInfo
{
    TMap<class FName, class FFestivalRenderInfo> RenderInfoMap;                       // 0x0218 (size: 0x50)

}; // Size: 0x268

class AGlobalMovementModifiersInfo : public AInfo
{
    TArray<FSurfaceMovementData> VehicleData;                                         // 0x0218 (size: 0x10)
    TArray<FSurfaceMovementData> MotorboatData;                                       // 0x0228 (size: 0x10)

}; // Size: 0x238

class AGlobalShippableInfo : public AInfo
{
    FShippableRenderInfo SmallSizeConfig;                                             // 0x0218 (size: 0x38)
    FShippableRenderInfo NormalSizeConfig;                                            // 0x0250 (size: 0x38)
    FShippableRenderInfo LargeSizeConfig;                                             // 0x0288 (size: 0x38)
    FShippableRenderInfo ExtraLargeSizeConfig;                                        // 0x02C0 (size: 0x38)

}; // Size: 0x2F8

class AGunTurret : public AFoxholeTurret
{
    class USkeletalMeshComponent* SkelMesh;                                           // 0x0898 (size: 0x8)
    float GunnerYaw;                                                                  // 0x08A0 (size: 0x4)

    void OnRep_GunnerYaw();
    float GetTrackingAngle();
}; // Size: 0x8C0

class AGunboat : public AShipVehicle
{
    class UBoxComponent* WorkVolume;                                                  // 0x1228 (size: 0x8)
    class UBoxComponent* KillVolume;                                                  // 0x1230 (size: 0x8)
    TArray<FVehicleGunnerInfo> GunnerInfos;                                           // 0x1238 (size: 0x10)

}; // Size: 0x1260

class AHalfTrack : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;                                                      // 0x12A0 (size: 0x8)
    FName StashedAmmoType;                                                            // 0x12A8 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12B0 (size: 0x4)
    FVector2D AltGunnerYawAndPitch;                                                   // 0x12B4 (size: 0x8)
    FName AltStashedAmmoType;                                                         // 0x12BC (size: 0x8)
    int32 AltStashedAmmo;                                                             // 0x12C4 (size: 0x4)
    FPayloadMeshes PayloadMeshes;                                                     // 0x12C8 (size: 0x58)
    int32 MainGunnerIndex;                                                            // 0x1320 (size: 0x4)
    float TowingRearAxleOffest;                                                       // 0x1334 (size: 0x4)

    void OnRep_StashedAmmo();
    void OnRep_GunnerYawAndPitch();
}; // Size: 0x1340

class AHarvester : public ARWDSimVehicle
{
    float GrindRate;                                                                  // 0x1288 (size: 0x4)
    float GrindFuelRate;                                                              // 0x128C (size: 0x4)
    float SplitRate;                                                                  // 0x1290 (size: 0x4)
    float SplitFuelRate;                                                              // 0x1294 (size: 0x4)
    float MovementModifier;                                                           // 0x1298 (size: 0x4)
    class UCapsuleComponent* GrindingCapsule;                                         // 0x12A0 (size: 0x8)
    class UParticleSystemComponent* NoTargetParticleSystem;                           // 0x12A8 (size: 0x8)
    class UParticleSystemComponent* ComponentsParticleSystem;                         // 0x12B0 (size: 0x8)
    class UParticleSystemComponent* DefensesParticleSystem;                           // 0x12B8 (size: 0x8)
    class UParticleSystemComponent* SalvageParticleSystem;                            // 0x12C0 (size: 0x8)
    class UParticleSystemComponent* SulfurParticleSystem;                             // 0x12C8 (size: 0x8)
    class UParticleSystemComponent* SplitParticleSystem;                              // 0x12D0 (size: 0x8)
    class UAudioComponent* GrindingSFXLoop;                                           // 0x12D8 (size: 0x8)
    class UAudioComponent* SplittingSFXLoop;                                          // 0x12E0 (size: 0x8)
    class UAudioComponent* RotatingSFXLoop;                                           // 0x12E8 (size: 0x8)
    uint8 Action;                                                                     // 0x12F0 (size: 0x1)

    void ServerStopAction();
    void ServerStartGrinding();
    void OnRep_Action();
    void MulticastOnResourceSplit();
    void MulticastOnGather(class AResource* Resource, const FGatherResult& GatherResult);
}; // Size: 0x1310

class AHeadlessPlayerController : public ASimPlayerController
{

    void ClientParseCommand(FString CommandString);
}; // Size: 0x12A0

class AHomeRegionBase : public AStaticBase
{
    int32 SpawnPriority;                                                              // 0x08F0 (size: 0x4)

}; // Size: 0x900

class AHospital : public ATeamStructure
{
    class UHospitalComponent* HospitalComponent;                                      // 0x0818 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0820 (size: 0x8)
    FSpawnPoints SpawnPoints;                                                         // 0x0828 (size: 0x28)

}; // Size: 0x850

class AHospitalBuildSite : public AFortBuildSite
{
    class UHospitalComponent* HospitalComponent;                                      // 0x07E8 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07F0 (size: 0x8)
    FSpawnPoints SpawnPoints;                                                         // 0x07F8 (size: 0x28)

}; // Size: 0x820

class AImpactEffect : public AActor
{
    TArray<FImpactEffectOverride> EffectOverrides;                                    // 0x0218 (size: 0x10)
    FDecalData FleshBloodSplatterDecal;                                               // 0x0228 (size: 0x20)
    FHitNotify HitNotify;                                                             // 0x0248 (size: 0x38)

}; // Size: 0x280

class AInfantryRailVehicle : public ARailVehicle
{
    FVector2D GunnerYawAndPitch;                                                      // 0x1208 (size: 0x18)
    FName StashedAmmoType;                                                            // 0x1220 (size: 0x18)
    int32 StashedAmmo;                                                                // 0x1238 (size: 0xC)
    int32 RightGunnerIndex;                                                           // 0x1294 (size: 0x4)
    int32 LeftGunnerIndex;                                                            // 0x1298 (size: 0x4)
    int32 MainGunnerIndex;                                                            // 0x129C (size: 0x4)

    void OnRep_GunnerYawAndPitch();
}; // Size: 0x12A0

class AIntelCenter : public ATeamStructure
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0818 (size: 0x8)
    class USkeletalMeshComponent* BaseMesh;                                           // 0x0820 (size: 0x8)
    class UAudioComponent* RotationSFXLoop;                                           // 0x0828 (size: 0x8)
    class UAudioComponent* ListeningSFXLoop;                                          // 0x0830 (size: 0x8)
    class USoundBase* StartListeningSound;                                            // 0x0838 (size: 0x8)
    class USoundBase* EndListeningSound;                                              // 0x0840 (size: 0x8)
    float RequiredPowerForFiring;                                                     // 0x0848 (size: 0x4)
    float RequiredPowerForRotation;                                                   // 0x084C (size: 0x4)
    uint8 RequiredSquadMembers;                                                       // 0x0851 (size: 0x1)
    int32 SquadId;                                                                    // 0x0854 (size: 0x4)
    FVector2D GunnerYawAndPitch;                                                      // 0x0858 (size: 0x8)
    float LastListenEndTime;                                                          // 0x0860 (size: 0x4)
    float ListenTimeRemaining;                                                        // 0x0864 (size: 0x4)
    FRocketLaunchCodeInfo LaunchCodeInfo;                                             // 0x0868 (size: 0x1C)

    void OnRep_LastListenEndTime(const float Previous);
    void OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch);
}; // Size: 0x8A0

class AItemCratePickup : public AItemPickup
{
}; // Size: 0x3F0

class AItemPickup : public AActor
{
    class UStealthComponent* StealthComponent;                                        // 0x0220 (size: 0x8)
    TSubclassOf<class UItemComponent> ItemComponentClass;                             // 0x0228 (size: 0x8)
    int32 Encumbrance;                                                                // 0x0230 (size: 0x4)
    int32 EquippedEncumbrance;                                                        // 0x0234 (size: 0x4)
    bool bHideContent;                                                                // 0x0238 (size: 0x1)
    FName CodeName;                                                                   // 0x023C (size: 0x8)
    FText ChassisName;                                                                // 0x0248 (size: 0x18)
    FText DisplayName;                                                                // 0x0260 (size: 0x18)
    FText Description;                                                                // 0x0278 (size: 0x18)
    class UTexture* Icon;                                                             // 0x0290 (size: 0x8)
    FSlateBrush SubTypeIcon;                                                          // 0x0298 (size: 0x88)
    EEquipmentSlot EquipmentSlot;                                                     // 0x0320 (size: 0x1)
    EItemCategory ItemCategory;                                                       // 0x0322 (size: 0x1)
    uint32 ItemFlagsMask;                                                             // 0x0324 (size: 0x4)
    EItemProfileType ItemProfileType;                                                 // 0x0328 (size: 0x1)
    EFactionId FactionVariant;                                                        // 0x0329 (size: 0x1)
    ETechID TechID;                                                                   // 0x0330 (size: 0x2)
    FItemInstance ItemInstance;                                                       // 0x0338 (size: 0x20)
    uint8 bIsLiquid;                                                                  // 0x0358 (size: 0x1)
    uint8 bIsLarge;                                                                   // 0x0358 (size: 0x1)
    uint8 bIsHeavy;                                                                   // 0x0358 (size: 0x1)
    uint8 bIsProxy;                                                                   // 0x0358 (size: 0x1)
    uint8 bDoesNotDecay;                                                              // 0x0358 (size: 0x1)
    uint8 bSupportsVehicleMounts;                                                     // 0x035C (size: 0x1)
    uint8 bMustBeEmptyToSubmit;                                                       // 0x0360 (size: 0x1)
    uint8 bCanBePrototyped;                                                           // 0x0360 (size: 0x1)
    class UStaticMeshComponent* ItemMesh;                                             // 0x0368 (size: 0x8)
    class UBoxComponent* ItemBox;                                                     // 0x0370 (size: 0x8)
    TArray<FTooltipDetailText> DescriptionDetails;                                    // 0x0378 (size: 0x10)

    void OnRep_ItemInstance();
}; // Size: 0x3F0

class AItemProfileTable : public AInfo
{
    TMap<class EItemProfileType, class FItemProfileData> ItemProfileTable;            // 0x0218 (size: 0x50)

}; // Size: 0x268

class AItemStash : public ATeamStructure
{
    float DecayTime;                                                                  // 0x0810 (size: 0x4)
    float DespawnIfEmptyTime;                                                         // 0x0814 (size: 0x4)
    class UBoxComponent* CollisionBox;                                                // 0x0818 (size: 0x8)

}; // Size: 0x830

class AKeep : public AForwardBase
{
}; // Size: 0x8C0

class AKeepBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)

}; // Size: 0x7F0

class ALadder : public AActor
{
    class ULadderComponent* LadderComponent;                                          // 0x0218 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0228 (size: 0x8)
    class UBoxComponent* ClimbVolume;                                                 // 0x0230 (size: 0x8)
    class UBoxComponent* ClimbVolumeTop;                                              // 0x0238 (size: 0x8)
    class USceneComponent* EnterPositionBottom;                                       // 0x0240 (size: 0x8)
    class USceneComponent* EnterPositionTop;                                          // 0x0248 (size: 0x8)

}; // Size: 0x250

class ALandMine : public AMine
{
}; // Size: 0x318

class ALandingCraft : public AAmphibiousVehicle
{
    class UBoxComponent* KillVolume;                                                  // 0x12C8 (size: 0x8)
    bool bBackHatchOpen;                                                              // 0x12D0 (size: 0x1)
    int32 StashedAmmo;                                                                // 0x12DC (size: 0x4)

    bool GetBackHatchOpen();
}; // Size: 0x12E0

class ALandscapeEnvironmentActor : public AActor
{
}; // Size: 0x218

class ALargeShip : public AShipVehicle
{
    FRampData Ramp;                                                                   // 0x1230 (size: 0x70)
    class UBoxComponent* KillVolume;                                                  // 0x12A0 (size: 0x8)
    class UAnchorUseComponent* AnchorVolume;                                          // 0x12A8 (size: 0x8)
    TMap<int32, FVector> NoSocketMuzzlePositions;                                     // 0x12B0 (size: 0x50)
    TArray<FLargeShipGunnerInfo> GunnerInfos;                                         // 0x1300 (size: 0x10)
    TArray<FItemHolderData> ExtraItemHolders;                                         // 0x1318 (size: 0x10)
    class UGarrisonComponent* GarrisonComponent;                                      // 0x1328 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x1330 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent1;                     // 0x1338 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent2;                     // 0x1340 (size: 0x8)
    FSpawnPoints SpawnPoints;                                                         // 0x1348 (size: 0x28)
    TArray<class UBulkheadDoor*> BulkheadDoors;                                       // 0x1370 (size: 0x10)
    TArray<class URoomComponent*> RoomComponents;                                     // 0x1380 (size: 0x10)
    TArray<class UGangwayRamp*> Ramps;                                                // 0x1390 (size: 0x10)
    TArray<class UVehicleBuildTriggerComponent*> VehicleBuildTriggerComponents;       // 0x13A0 (size: 0x10)
    TArray<class UBoxComponent*> VehicleBuildFootprints;                              // 0x13B0 (size: 0x10)
    EAnchorState AnchorState;                                                         // 0x13C0 (size: 0x1)
    EDockedState DockedState;                                                         // 0x13C1 (size: 0x1)
    uint16 SavedDoors;                                                                // 0x13C2 (size: 0x2)
    float DeployedRampAngle;                                                          // 0x13C4 (size: 0x4)
    TArray<FRoomComponentSaveState> SavedRooms;                                       // 0x13C8 (size: 0x10)
    TArray<FGangwayRampSaveState> SavedGangwayRamps;                                  // 0x13D8 (size: 0x10)
    TArray<FItemHolderData> SavedExtraItemHolders;                                    // 0x13E8 (size: 0x10)
    class USoundCue* IncomingPingSoundCue;                                            // 0x13F8 (size: 0x8)
    class USoundCue* OutgoingPingSoundCue;                                            // 0x1400 (size: 0x8)
    class UBoxComponent* CargoCheckVolume;                                            // 0x1408 (size: 0x8)
    class UBoxComponent* DockingObstructionCheckVolume;                               // 0x1410 (size: 0x8)
    class UBoxComponent* UndockingObstructionCheckVolume;                             // 0x1418 (size: 0x8)
    class UDockComponent* DockComponent;                                              // 0x1420 (size: 0x8)
    EVehicleBuildType BuildSiteVehicleType;                                           // 0x1428 (size: 0x1)
    class UAnchorComponent* AnchorComponent;                                          // 0x1430 (size: 0x8)
    class UParticleSystemComponent* VeryMajorDamagePS;                                // 0x1438 (size: 0x8)
    class UParticleSystemComponent* MediumDamagePS;                                   // 0x1440 (size: 0x8)
    class UParticleSystemComponent* VeryMinorDamagePS;                                // 0x1448 (size: 0x8)
    class UStaticMesh* SupportStaticMesh;                                             // 0x1450 (size: 0x8)
    class UPostProcessComponent* PostProcessComponent;                                // 0x1458 (size: 0x8)
    float PostProcessCapsuleHalfHeight;                                               // 0x1460 (size: 0x4)
    float PostProcessCapsuleRadius;                                                   // 0x1464 (size: 0x4)
    float PostProcessCapsuleZOffset;                                                  // 0x1468 (size: 0x4)
    class UMaterialInterface* PostProcessMaterial;                                    // 0x1470 (size: 0x8)
    class UMaterialInstanceDynamic* PostProcessMaterialInstance;                      // 0x1478 (size: 0x8)
    FRoomLeakArray Leaks;                                                             // 0x1480 (size: 0x118)
    FPayloadMeshes PayloadMeshesLeft;                                                 // 0x1598 (size: 0x58)
    FPayloadMeshes PayloadMeshesRight;                                                // 0x15F0 (size: 0x58)
    bool bRainStormsCauseFlooding;                                                    // 0x1658 (size: 0x1)
    TArray<class USceneComponent*> LightComponents;                                   // 0x1668 (size: 0x10)
    TArray<class UVisibilityToggleAreaComponent*> VisibilityToggleAreas;              // 0x1678 (size: 0x10)

    void OnRep_Leaks();
    void OnRep_GunnerInfos(const TArray<FLargeShipGunnerInfo>& LastGunnerInfos);
    void OnRep_ExtraItemHolders();
    void OnRep_DockedState();
    void OnRep_AnchorState();
    void BPOnClientBeginPlay();
    void AddLightComponents(TArray<class USceneComponent*> InLightComponents);
}; // Size: 0x1690

class ALargeShipStorage : public ALargeShip
{
    class USkeletalMeshComponent* CraneMesh;                                          // 0x1688 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x1690 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1698 (size: 0x8)
    class UBoxComponent* ShippableCollision;                                          // 0x16A0 (size: 0x8)
    class UAudioComponent* ArmMovementSFXLoop;                                        // 0x16A8 (size: 0x8)
    class UAudioComponent* DeployingSFXLoop;                                          // 0x16B0 (size: 0x8)
    class UAudioComponent* PulleyMovementSFXLoop;                                     // 0x16B8 (size: 0x8)
    class UCraneComponent* CraneComponent;                                            // 0x16C0 (size: 0x8)

}; // Size: 0x16D0

class ALightTank : public ATankBase
{
    FVector2D GunnerYawAndPitch;                                                      // 0x12B0 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12C8 (size: 0x4)
    FName StashedAmmoType;                                                            // 0x12CC (size: 0x8)
    FPayloadMeshes PayloadMeshes;                                                     // 0x12D8 (size: 0x58)

    void OnRep_StashedAmmo();
    void OnRep_GunnerYawAndPitch();
    bool GetIsShooting();
    float GetGunYaw();
    float GetGunPitch();
}; // Size: 0x1340

class ALimitedVulnerabilityStructure : public ABuildableStructure
{
    TSubclassOf<class UDamageType> VulnerableDamageType;                              // 0x07F0 (size: 0x8)

}; // Size: 0x800

class ALineOfSightVisualizationActor : public AActor
{
    FLinearColor ValidColour;                                                         // 0x0240 (size: 0x10)
    FLinearColor ValidColour2;                                                        // 0x0250 (size: 0x10)
    FLinearColor ValidOutlineColour;                                                  // 0x0260 (size: 0x10)
    FLinearColor ValidOutlineColour2;                                                 // 0x0270 (size: 0x10)
    FLinearColor InvalidColour;                                                       // 0x0280 (size: 0x10)
    FLinearColor InvalidColour2;                                                      // 0x0290 (size: 0x10)
    FLinearColor InvalidOutlineColour;                                                // 0x02A0 (size: 0x10)
    FLinearColor InvalidOutlineColour2;                                               // 0x02B0 (size: 0x10)
    int32 WorkSplittingFactor;                                                        // 0x02C0 (size: 0x4)

}; // Size: 0x350

class ALiquidTransferStation : public AResourceTransferStation
{
    TArray<FFuelQuantity> FuelInputBuffers;                                           // 0x0820 (size: 0x10)
    FFuelQuantity FuelOutputBuffer;                                                   // 0x0830 (size: 0xC)
    class UBuildSocketComponent* InputSocket;                                         // 0x0840 (size: 0x8)
    class UBuildSocketComponent* OutputSocket;                                        // 0x0848 (size: 0x8)

}; // Size: 0x850

class ALiquidTransferStationBuildSite : public AStructureBuildSite
{
    TArray<FFuelQuantity> FuelInputBuffers;                                           // 0x07E0 (size: 0x10)
    FFuelQuantity FuelOutputBuffer;                                                   // 0x07F0 (size: 0xC)

}; // Size: 0x800

class AListeningArea : public AActor
{
    float LifeSpanRemaining;                                                          // 0x0220 (size: 0x4)
    class UListeningAreaComponent* ListeningComponent;                                // 0x0228 (size: 0x8)

}; // Size: 0x230

class ALongRangeArtillery : public ATeamStructure
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0820 (size: 0x8)
    class USkeletalMeshComponent* BaseMesh;                                           // 0x0828 (size: 0x8)
    class UAudioComponent* RotationSFXLoop;                                           // 0x0830 (size: 0x8)
    class UParticleSystemComponent* FireShellParticleSystem;                          // 0x0838 (size: 0x8)
    class UParticleSystemComponent* EjectShellParticleSystem;                         // 0x0840 (size: 0x8)
    float InitialDelay;                                                               // 0x0848 (size: 0x4)
    float ExplosionDelay;                                                             // 0x084C (size: 0x4)
    float MaxPower;                                                                   // 0x0850 (size: 0x4)
    float RequiredPowerForFiring;                                                     // 0x0854 (size: 0x4)
    float RequiredPowerForRotation;                                                   // 0x0858 (size: 0x4)
    uint8 RequiredSquadMembers;                                                       // 0x085D (size: 0x1)
    int32 SquadId;                                                                    // 0x0860 (size: 0x4)
    FVector2D GunnerYawAndPitch;                                                      // 0x0864 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x086C (size: 0x4)

    void OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch);
}; // Size: 0x890

class ALoreKeyVerificationActor : public AActor
{
}; // Size: 0x218

class ALoreList : public AInfo
{
    TMap<class FName, class FLoreData> LoreDataTable;                                 // 0x0218 (size: 0x50)

}; // Size: 0x268

class ALorePickup : public AItemPickup
{
    class UReadableTextComponent* ReadableTextComponent;                              // 0x03F0 (size: 0x8)

}; // Size: 0x3F8

class AMGPillbox : public AFoxholeTurret
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0898 (size: 0x8)

}; // Size: 0x8A0

class AMainMenuGameMode : public AWarGameMode
{
}; // Size: 0x300

class AMainMenuPlayerController : public AWarPlayerController
{
    TArray<class UNewsItemImageDownloadTask*> ImageDownloadTaskList;                  // 0x0DD8 (size: 0x10)

    void RefreshShardStatus(const int32 ShardId);
}; // Size: 0x1070

class AMaintenanceTunnel : public ATeamStructure
{
    FDecayInfo DecayInfo;                                                             // 0x0818 (size: 0x4)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0820 (size: 0x8)
    float MinRange;                                                                   // 0x0828 (size: 0x4)
    float MaxRange;                                                                   // 0x082C (size: 0x4)
    float GrassCullRadius;                                                            // 0x0830 (size: 0x4)
    float Range;                                                                      // 0x0834 (size: 0x4)
    uint16 Filter;                                                                    // 0x0838 (size: 0x2)

}; // Size: 0x840

class AMapBoundary : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0218 (size: 0x8)
    class UBoxComponent* MarkerArea;                                                  // 0x0220 (size: 0x8)
    class UBoxComponent* NoBuildArea;                                                 // 0x0228 (size: 0x8)

}; // Size: 0x230

class AMapExtentMarker : public AActor
{
    EMapExtentMarkerLocation Location;                                                // 0x0218 (size: 0x1)
    class USceneComponent* MarkerScene;                                               // 0x0220 (size: 0x8)

}; // Size: 0x228

class AMapIcon : public AActor
{
    EMapTeamId MapTeamId;                                                             // 0x0218 (size: 0x1)
    EMapIconType MapIconType;                                                         // 0x0219 (size: 0x1)
    class USceneComponent* DefaultSceneComponent;                                     // 0x0220 (size: 0x8)

}; // Size: 0x228

class AMapInfo : public AActor
{
    FText MapName;                                                                    // 0x0218 (size: 0x18)
    class UTexture2D* MapImage;                                                       // 0x0230 (size: 0x8)
    class UTexture2D* MapImagePractice;                                               // 0x0238 (size: 0x8)

}; // Size: 0x240

class AMapIntelligence : public AInfo
{
    FMapIntelligenceTypeConfig MapIntelligenceTypeConfigs;                            // 0x0218 (size: 0x2148)

}; // Size: 0x23F8

class AMapList : public AInfo
{
    TMap<class FName, class FMapData> MapDatabase;                                    // 0x0218 (size: 0x50)

}; // Size: 0x268

class AMapMarker : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0218 (size: 0x8)
    class UBoxComponent* MarkerArea;                                                  // 0x0220 (size: 0x8)
    class UTextRenderComponent* MajorTextRender;                                      // 0x0228 (size: 0x8)
    class UTextRenderComponent* MinorTextRender;                                      // 0x0230 (size: 0x8)
    FText MajorText;                                                                  // 0x0238 (size: 0x18)
    FText MinorText;                                                                  // 0x0250 (size: 0x18)
    EMapMarkerType MapMarkerType;                                                     // 0x0268 (size: 0x1)

    void BeginMarkerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x288

class AMassProductionFactory : public ASpecializedFactory
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0818 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x0820 (size: 0x8)
    class UBoxComponent* TransferLocationFootprint;                                   // 0x0828 (size: 0x8)
    class USoundCue* ShippableCrateSound;                                             // 0x0830 (size: 0x8)
    class UParticleSystem* ShippableCratePS;                                          // 0x0838 (size: 0x8)

    void MulticastPlayShippableCrateFX();
}; // Size: 0x840

class AMassProductionFactoryBuildSite : public ASpecializedFactoryBuildSite
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x07E8 (size: 0x8)

}; // Size: 0x7F0

class AMaterialPlatform : public ABuildableStructure
{
    class UStaticMeshComponent* MeshComponent;                                        // 0x07F0 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x07F8 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0800 (size: 0x8)

}; // Size: 0x810

class AMech : public ATankBase
{
    class USceneComponent* MainGunMuzzleLocation;                                     // 0x12B0 (size: 0x8)
    class USceneComponent* LeftGunMuzzleLocation;                                     // 0x12B8 (size: 0x8)
    class USceneComponent* RightGunMuzzleLocation;                                    // 0x12C0 (size: 0x8)
    FVector2D MainGunYawAndPitch;                                                     // 0x12C8 (size: 0x8)
    FVector2D LeftGunYawAndPitch;                                                     // 0x12D0 (size: 0x8)
    FVector2D RightGunYawAndPitch;                                                    // 0x12D8 (size: 0x8)
    int32 StashedMainGunAmmo;                                                         // 0x12E0 (size: 0x4)
    FName StashedMainGunAmmoType;                                                     // 0x12E4 (size: 0x8)
    int32 StashedLeftGunAmmo;                                                         // 0x12EC (size: 0x4)
    int32 StashedRightGunAmmo;                                                        // 0x12F0 (size: 0x4)

}; // Size: 0x1300

class AMine : public AExplosive
{
    float ActivationDelay;                                                            // 0x02E8 (size: 0x4)
    uint8 bTriggeredByInfantry;                                                       // 0x02EC (size: 0x1)
    uint8 bTriggeredByVehicles;                                                       // 0x02EC (size: 0x1)
    TArray<class UPhysicalMaterial*> RoadPhysicalMaterials;                           // 0x02F0 (size: 0x10)
    int32 Health;                                                                     // 0x0300 (size: 0x4)
    EArmourType ArmourType;                                                           // 0x0304 (size: 0x1)
    FDateTime SpawnTime;                                                              // 0x0308 (size: 0x8)

    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x318

class AMineSpline : public ATeamStructure
{
    class USplineConnectorComponent* SplineConnector;                                 // 0x0868 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0870 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0878 (size: 0x8)
    FName AmmoCodeName;                                                               // 0x0880 (size: 0x8)
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;                         // 0x0888 (size: 0x8)
    float DamageDelay;                                                                // 0x0890 (size: 0x4)
    float ArmingDelay;                                                                // 0x0894 (size: 0x4)
    float ExplosionFXOffsetZ;                                                         // 0x0898 (size: 0x4)
    uint32 MineMask;                                                                  // 0x089C (size: 0x4)
    uint8 MaxMineCount;                                                               // 0x08AD (size: 0x1)
    uint8 bTriggeredByInfantry;                                                       // 0x08AE (size: 0x1)
    uint8 bTriggeredByVehicles;                                                       // 0x08AE (size: 0x1)

    void OnRep_MineMask(uint32 PrevMask);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x8C0

class AMineSplineBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class AMiniMapCapturer : public AActor
{
    class ASceneCapture2D* SceneCapture;                                              // 0x0218 (size: 0x8)
    TArray<class AActor*> ActorsToForceShowInGame;                                    // 0x0220 (size: 0x10)
    class UTexture2D* ResultTexture;                                                  // 0x0230 (size: 0x8)
    float CameraAngleCorrection;                                                      // 0x0238 (size: 0x4)
    float TargetGamma;                                                                // 0x023C (size: 0x4)

}; // Size: 0x2A0

class AModificationTemplate : public AActor
{
}; // Size: 0x218

class AMonument : public AActor
{
    class UStaticMeshComponent* MonumentMesh;                                         // 0x0218 (size: 0x8)
    TArray<class UStaticMesh*> MonumentTypeMeshes;                                    // 0x0220 (size: 0x10)
    class UUseMonumentComponent* UseMonumentComponent;                                // 0x0230 (size: 0x8)
    int32 MonumentIndex;                                                              // 0x0238 (size: 0x4)
    EMonumentType MonumentType;                                                       // 0x023C (size: 0x4)

}; // Size: 0x240

class AMortarAmmoPickup : public AExplosiveAmmoPickup
{
}; // Size: 0x450

class AMortarTank : public ALightTank
{
}; // Size: 0x1340

class AMotorboat : public ASimVehicle
{
    class UParticleSystemComponent* FrontWaterEmitter;                                // 0x10E8 (size: 0x8)
    class UParticleSystemComponent* BackWaterEmitter;                                 // 0x10F0 (size: 0x8)

}; // Size: 0x1100

class AMotorcycle : public ARWDSimVehicle
{
    int32 StashedAmmo;                                                                // 0x1298 (size: 0x4)

}; // Size: 0x12A0

class ANoBuildArea : public AActor
{
    class UBoxComponent* NoBuildComponent;                                            // 0x0218 (size: 0x8)
    EPlacementStatus PlacementStatus;                                                 // 0x0220 (size: 0x1)

}; // Size: 0x228

class ANonWalkableStructureBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class AObservationTower : public AWatchTower
{
}; // Size: 0x840

class AOfflineCharacter : public AActor
{
    class UCapsuleComponent* CapsuleComponent;                                        // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* CharacterMesh;                                      // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x0238 (size: 0x8)
    class USkeletalMeshComponent* Hands;                                              // 0x0240 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x0248 (size: 0x8)
    class USkeletalMeshComponent* Back;                                               // 0x0250 (size: 0x8)
    class USkeletalMeshComponent* Helmet;                                             // 0x0258 (size: 0x8)
    class UStealthComponent* StealthComponent;                                        // 0x0260 (size: 0x8)
    uint8 TeamId;                                                                     // 0x0268 (size: 0x1)
    uint8 VisualCustomizationMask;                                                    // 0x0269 (size: 0x1)
    EZombieType ZombieType;                                                           // 0x026A (size: 0x1)
    uint8 Temperature;                                                                // 0x026B (size: 0x1)
    uint8 Muddyness;                                                                  // 0x026C (size: 0x1)
    FString OnlineID;                                                                 // 0x0270 (size: 0x10)
    float CurrentHealth;                                                              // 0x0280 (size: 0x4)
    float MaxHealth;                                                                  // 0x0284 (size: 0x4)
    float DeathDuration;                                                              // 0x0288 (size: 0x4)

    void MulticastApplyFatalHit();
    void BPApplyFatalHit();
}; // Size: 0x298

class AOilPipelineSegment : public ATeamStructure
{
}; // Size: 0x810

class AOilTanker : public ARWDSimVehicle
{
}; // Size: 0x1290

class AOutpost : public ABase
{
    class UStaticMeshComponent* MeshComponent;                                        // 0x08B0 (size: 0x8)

}; // Size: 0x8C0

class APersistentProxy : public ALandscapeEnvironmentActor
{
    class UStaticMeshComponent* Mesh;                                                 // 0x0220 (size: 0x8)

}; // Size: 0x228

class APipeline : public ATeamStructure
{
    class USplineConnectorComponent* SplineConnector;                                 // 0x0810 (size: 0x8)
    class UModificationSlotComponent* UpgradeSlotComponent;                           // 0x0818 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0820 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0828 (size: 0x8)
    class UBuildSocketComponent* LeftSocket;                                          // 0x0830 (size: 0x8)
    class UBuildSocketComponent* RightSocket;                                         // 0x0838 (size: 0x8)
    float MaxLiquidAmount;                                                            // 0x0840 (size: 0x4)
    int32 SystemIndex;                                                                // 0x0844 (size: 0x4)

}; // Size: 0x850

class APipelineSilo : public APipeline
{
    uint8 VisibleMeshes;                                                              // 0x0850 (size: 0x1)

    void OnRep_VisibleMeshes();
}; // Size: 0x860

class APipelineValve : public ATeamStructure
{
    class UModificationSlotComponent* UpgradeSlotComponent;                           // 0x0810 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x0818 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0820 (size: 0x8)
    float ThroughputNormalized;                                                       // 0x0828 (size: 0x4)

}; // Size: 0x830

class APlayerCharacter : public ASimCharacter
{
}; // Size: 0x16F0

class APlayerImposter : public ASimVehicle
{
    class USkeletalMeshComponent* Head;                                               // 0x10E8 (size: 0x8)
    class USkeletalMeshComponent* Hands;                                              // 0x10F0 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x10F8 (size: 0x8)
    class USkeletalMeshComponent* Back;                                               // 0x1100 (size: 0x8)
    class USkeletalMeshComponent* Helmet;                                             // 0x1108 (size: 0x8)
    class USkeletalMeshComponent* EquippedItemMesh;                                   // 0x1110 (size: 0x8)
    EFactionId FactionId;                                                             // 0x1118 (size: 0x1)
    EOutfitType OutfitType;                                                           // 0x1119 (size: 0x1)
    EUniformType UniformType;                                                         // 0x111A (size: 0x1)
    bool bIsFemale;                                                                   // 0x111B (size: 0x1)
    uint8 SkinTone;                                                                   // 0x111C (size: 0x1)
    FName EquippedItemCodeName;                                                       // 0x1120 (size: 0x8)
    uint8 CustomizationVersion;                                                       // 0x1128 (size: 0x1)

    void OnRep_CustomizationVersion();
}; // Size: 0x1130

class APowerLine : public ABuildableStructure
{
    class USplineConnectorComponent* SplineConnector;                                 // 0x07F0 (size: 0x8)
    class UBuildSocketComponent* BackSocket;                                          // 0x07F8 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0800 (size: 0x8)
    float BuildGhostOffsetZ;                                                          // 0x0808 (size: 0x4)

}; // Size: 0x810

class APowerPlant : public AFacilityRefinery
{
}; // Size: 0xA60

class APowerPole : public ATeamStructure
{
    class UBuildSocketComponent* PowerSocket;                                         // 0x0818 (size: 0x8)
    class UFacilityLightComponent* LightComponent;                                    // 0x0820 (size: 0x8)
    class UMaterialInterface* CableMaterial;                                          // 0x0828 (size: 0x8)
    bool bAutoConnectToNearby;                                                        // 0x0830 (size: 0x1)
    float AutoConnectSearchRadius;                                                    // 0x0834 (size: 0x4)
    FPowerGridInfo PowerGridInfo;                                                     // 0x0838 (size: 0x5C)

    void OnRep_PowerGridInfo();
}; // Size: 0x8F0

class APrototypeKitPickup : public AItemPickup
{
}; // Size: 0x3F0

class AProxyDrawbridgeSide : public APersistentProxy
{
}; // Size: 0x228

class ARWDSimVehicle : public ASimVehicle
{
    FRepRWDMovement RepRWDMovement;                                                   // 0x10E8 (size: 0x88)
    class ARWDSimVehicle* Trailer;                                                    // 0x1170 (size: 0x8)
    class ARWDSimVehicle* Tractor;                                                    // 0x1178 (size: 0x8)
    class UAudioComponent* IdleLoop;                                                  // 0x1180 (size: 0x8)
    class UCurveFloat* DriveLoopPitchCurve;                                           // 0x1188 (size: 0x8)
    class UParticleSystemComponent* RearLeftTireDirtLowSpeedPS;                       // 0x1190 (size: 0x8)
    class UParticleSystemComponent* RearLeftTireDirtHighSpeedPS;                      // 0x1198 (size: 0x8)
    class UParticleSystemComponent* RearRightTireDirtLowSpeedPS;                      // 0x11A0 (size: 0x8)
    class UParticleSystemComponent* RearRightTireDirtHighSpeedPS;                     // 0x11A8 (size: 0x8)
    class UParticleSystemComponent* MainDirtLowSpeedPS;                               // 0x11B0 (size: 0x8)
    class UParticleSystemComponent* MainDirtHighSpeedPS;                              // 0x11B8 (size: 0x8)
    class UParticleSystemComponent* SkiddingDirtPS;                                   // 0x11C0 (size: 0x8)
    class UParticleSystem* TireDirtLowSpeedTemplate;                                  // 0x11C8 (size: 0x8)
    float TireFXLowSpeedThreshold;                                                    // 0x11D0 (size: 0x4)
    class UParticleSystem* TireDirtHighSpeedTemplate;                                 // 0x11D8 (size: 0x8)
    float TireFXHighSpeedThreshold;                                                   // 0x11E0 (size: 0x4)
    class UParticleSystem* MainDirtLowSpeedTemplate;                                  // 0x11E8 (size: 0x8)
    float MainFXLowSpeedThreshold;                                                    // 0x11F0 (size: 0x4)
    class UParticleSystem* MainDirtHighSpeedTemplate;                                 // 0x11F8 (size: 0x8)
    float MainFXHighSpeedThreshold;                                                   // 0x1200 (size: 0x4)
    class UParticleSystem* SkiddingDirtTemplate;                                      // 0x1208 (size: 0x8)
    float SkiddingFXSpeedThreshold;                                                   // 0x1210 (size: 0x4)
    class USoundCue* GearShiftUpSoundCue;                                             // 0x1218 (size: 0x8)
    class USoundCue* GearShiftDownSoundCue;                                           // 0x1220 (size: 0x8)
    class UTowHitchUseComponent* TowHitch;                                            // 0x1228 (size: 0x8)
    FString SavedLinkedTrailerName;                                                   // 0x1260 (size: 0x10)

    void ServerMoveRwdTowing(const FRWDMove& Move, const FRWDMoveBase& Base, const FRWDMoveTrailer& TrailerMove);
    void ServerMoveRwd(const FRWDMove& Move, const FRWDMoveBase& Base);
    void ServerMoveNoBaseRwdTowing(const FRWDMove& Move, const FRWDMoveTrailer& TrailerMove);
    void ServerMoveNoBaseRwd(const FRWDMove& Move);
    void ServerMoveDualRwd(const FRWDMoveDual& Dual, const FRWDMove& Move, const FRWDMoveBase& Base);
    void ServerMoveDualNoBaseRwd(const FRWDMoveDual& Dual, const FRWDMove& Move);
    void OnRep_Tractor();
    void OnRep_RepRWDMovement();
    void MulticastPlayHitchFX(bool bHitched);
    void ClientVeryShortAdjustPositionRwdTowing(float Timestamp, const FRWDVeryShortAdjustment& Adjustment, const FRWDVeryShortAdjustment& TrailerAdjustment);
    void ClientVeryShortAdjustPositionRwd(float Timestamp, const FRWDVeryShortAdjustment& Adjustment);
    void ClientUpdateTrailer(bool bHasTrailer, class ARWDSimVehicle* NewTrailer);
    void ClientAdjustPositionRwdTowing(float Timestamp, const FRWDAdjustment& Adjustment, const FRWDAdjustment& TrailerAdjustment, float SteeringAngle);
    void ClientAdjustPositionRwd(float Timestamp, const FRWDAdjustment& Adjustment, float SteeringAngle);
}; // Size: 0x1290

class ARadioBackpackPickup : public ABackpackItemPickup
{
}; // Size: 0x400

class ARadioPickup : public ABasicItemPickup
{
}; // Size: 0x3F0

class ARailVehicle : public ASimVehicle
{
    TArray<class UPrimitiveComponent*> CustomSweepComponents;                         // 0x10E8 (size: 0x10)
    bool bNeedsSkelmeshTickForMovement;                                               // 0x10F8 (size: 0x1)
    float WheelBase;                                                                  // 0x10FC (size: 0x4)
    bool bIsPowered;                                                                  // 0x1100 (size: 0x1)
    ETrackGauge TrackGauge;                                                           // 0x1101 (size: 0x1)
    FTrainInfo TrainInfo;                                                             // 0x1108 (size: 0x10)
    FRepTrainMovement RepTrainMovement;                                               // 0x1118 (size: 0x18)
    class URailCouplerUseComponent* FrontCoupler;                                     // 0x1138 (size: 0x8)
    class URailCouplerUseComponent* RearCoupler;                                      // 0x1140 (size: 0x8)
    class UCableComponent* FrontCableComponent;                                       // 0x1148 (size: 0x8)
    class UMaterialInterface* CouplerCableMaterial;                                   // 0x1150 (size: 0x8)
    class UAudioComponent* IdleLoop;                                                  // 0x1158 (size: 0x8)
    class UAudioComponent* BrakeLoop;                                                 // 0x1160 (size: 0x8)
    class UAudioComponent* FrontClacks;                                               // 0x1168 (size: 0x8)
    class UAudioComponent* RearClacks;                                                // 0x1170 (size: 0x8)
    FString SavedFrontTrackName;                                                      // 0x1178 (size: 0x10)
    FString SavedRearTrackName;                                                       // 0x1188 (size: 0x10)
    float SavedFrontTrackAlpha;                                                       // 0x1198 (size: 0x4)
    FString SavedLinkedFrontCarName;                                                  // 0x11A0 (size: 0x10)
    TArray<FRailParticleSystem> BrakingSystems;                                       // 0x11B0 (size: 0x10)
    TArray<FRailParticleSystem> DrivingSystems;                                       // 0x11C0 (size: 0x10)
    class ARailwayTrack* LastFrontBogieTrack;                                         // 0x11D8 (size: 0x8)
    class ARailwayTrack* LastRearBogieTrack;                                          // 0x11E0 (size: 0x8)
    bool bIsBoosting;                                                                 // 0x11E8 (size: 0x1)
    float BorderTravelOverrideExtent;                                                 // 0x11EC (size: 0x4)

    void ServerRequestTrainInfo();
    void ServerRailMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, uint8 NewFlags, uint8 ClientRoll, uint32 View, class ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ServerMovementMode);
    void ServerRailMove(float Timestamp, FVector_NetQuantize10 InAccel, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, class ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ClientMovementMode);
    void OnRep_RailwayMovement();
    void ClientUpdateTrainInfo(const TArray<class ARailVehicle*>& RailVehicles);
    void ClientRailAdjustPosition(float Timestamp, uint8 ServerMovementMode, const TArray<FRepRailwayMovement>& NewReplicatedMovement);
}; // Size: 0x1200

class ARailVehicleBuildSite : public AVehicleBuildSite
{
    FString FrontTrackName;                                                           // 0x0720 (size: 0x10)
    FString RearTrackName;                                                            // 0x0730 (size: 0x10)
    float FrontTrackPackedAlpha;                                                      // 0x0740 (size: 0x4)

}; // Size: 0x748

class ARailVehicleCrane : public ARailVehicle
{
    class UStaticMeshComponent* BaseMesh;                                             // 0x1208 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x1210 (size: 0x8)
    class UBoxComponent* ShippableCollision;                                          // 0x1218 (size: 0x8)
    class UAudioComponent* ArmMovementSFXLoop;                                        // 0x1220 (size: 0x8)
    class UAudioComponent* DeployingSFXLoop;                                          // 0x1228 (size: 0x8)
    class UAudioComponent* PulleyMovementSFXLoop;                                     // 0x1230 (size: 0x8)
    class UCraneComponent* CraneComponent;                                            // 0x1238 (size: 0x8)

}; // Size: 0x1240

class ARailVehicleHospital : public ARailVehicle
{
    class UHospitalComponent* HospitalComponent;                                      // 0x1210 (size: 0x8)
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x1218 (size: 0x8)
    FSpawnPoints SpawnPoints;                                                         // 0x1220 (size: 0x28)
    FDynamicState DeployState;                                                        // 0x1248 (size: 0x18)
    FVector2D GunnerYawAndPitch;                                                      // 0x1260 (size: 0x8)
    FName StashedAmmoType;                                                            // 0x1268 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x1270 (size: 0x4)

    void OnRep_GunnerYawAndPitch();
}; // Size: 0x12A0

class ARailVehicleProxy : public ABuildableStructure
{
}; // Size: 0x7F0

class ARailVehicleResourcePlatform : public ARailVehicle
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x1200 (size: 0x8)

}; // Size: 0x1210

class ARailwayTrack : public ATeamStructure
{
    class USplineConnectorComponent* SplineConnector;                                 // 0x0810 (size: 0x8)
    float GrassCullRadius;                                                            // 0x0818 (size: 0x4)
    class UBuildSocketComponent* BackSocket;                                          // 0x0820 (size: 0x8)
    class UBuildSocketComponent* FrontSocket;                                         // 0x0828 (size: 0x8)
    class URailSwitchUseComponent* BackSwitch;                                        // 0x0830 (size: 0x8)
    class URailSwitchUseComponent* FrontSwitch;                                       // 0x0838 (size: 0x8)
    class USkeletalMeshComponent* BackSwitchMesh;                                     // 0x0840 (size: 0x8)
    class USkeletalMeshComponent* FrontSwitchMesh;                                    // 0x0848 (size: 0x8)
    ETrackGauge TrackGauge;                                                           // 0x0850 (size: 0x1)
    float MaxHeightAboveRoad;                                                         // 0x0854 (size: 0x4)
    float MaxHeightForPathConnection;                                                 // 0x0858 (size: 0x4)
    float RailZOffset;                                                                // 0x085C (size: 0x4)
    bool bIsNoVis;                                                                    // 0x0860 (size: 0x1)
    bool bIsDisabled;                                                                 // 0x0861 (size: 0x1)
    bool bIsShownOnMap;                                                               // 0x0862 (size: 0x1)
    TArray<FRailSwitchState> SwitchStates;                                            // 0x0878 (size: 0x10)
    TArray<class ARailVehicle*> Vehicles;                                             // 0x0888 (size: 0x10)
    TArray<class UPhysicalMaterial*> RoadCheckPhysMaterials;                          // 0x0898 (size: 0x10)
    bool bHasIncomingTravel;                                                          // 0x08A8 (size: 0x1)

    void OnRep_SwitchStates();
    void OnRep_IsDisabled();
}; // Size: 0x8C0

class ARefinery : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0810 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0818 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x0820 (size: 0x8)
    TMap<class FString, class FRefinementOrderInfo> RefinementOrderMap;               // 0x0828 (size: 0x50)
    TArray<FRefinableItemInfo> RefinableItems;                                        // 0x08C8 (size: 0x10)
    bool bIsRefining;                                                                 // 0x08D8 (size: 0x1)

    bool IsRefining();
}; // Size: 0x8E0

class ARefineryBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x07E8 (size: 0x8)
    TMap<class FString, class FRefinementOrderInfo> RefinementOrderMap;               // 0x07F0 (size: 0x50)

}; // Size: 0x840

class ARelicAPC : public ASimVehicle
{
    class USceneComponent* LeftGunMuzzleLocation;                                     // 0x10F0 (size: 0x8)
    class USceneComponent* RightGunMuzzleLocation;                                    // 0x10F8 (size: 0x8)
    FVector2D LeftGunYawAndPitch;                                                     // 0x1100 (size: 0x8)
    FVector2D RightGunYawAndPitch;                                                    // 0x1108 (size: 0x8)
    int32 StashedLeftGunAmmo;                                                         // 0x1110 (size: 0x4)
    int32 StashedRightGunAmmo;                                                        // 0x1114 (size: 0x4)

}; // Size: 0x1120

class ARelicAPCStructure : public ABuildableStructure
{
    TSubclassOf<class ASimVehicle> VehicleClass;                                      // 0x07F0 (size: 0x8)

}; // Size: 0x800

class ARelicAPCStructureBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class ARelicArmouredCar : public AArmoredCar
{
}; // Size: 0x1310

class ARelicBase : public AStaticBase
{
}; // Size: 0x8F0

class ARelicBus : public ARWDSimVehicle
{
}; // Size: 0x1290

class ARelicScoutVehicle : public ASimVehicle
{
}; // Size: 0x10F0

class AReplicatedLadder : public ALadder
{
}; // Size: 0x250

class AReservableStructure : public ABuildableStructure
{
}; // Size: 0x7F0

class AResource : public AActor
{
    TSubclassOf<class AImpactEffect> HammerImpactEffect;                              // 0x0220 (size: 0x8)
    TSubclassOf<class AImpactEffect> SledgeImpactEffect;                              // 0x0228 (size: 0x8)
    class UArrowComponent* ArrowComponent;                                            // 0x0230 (size: 0x8)
    class UParticleSystemComponent* HighYieldEffect;                                  // 0x0238 (size: 0x8)
    TSubclassOf<class AItemPickup> ResourcePickupClass;                               // 0x0240 (size: 0x8)
    int32 BaseAmountPerGather;                                                        // 0x0248 (size: 0x4)
    int32 BonusAmountOnFinalGather;                                                   // 0x024C (size: 0x4)
    int32 BaseAmount;                                                                 // 0x0250 (size: 0x4)
    int32 AmountRemaining;                                                            // 0x0254 (size: 0x4)
    int32 GatherXP;                                                                   // 0x0258 (size: 0x4)
    bool bPlayGatherFX;                                                               // 0x025C (size: 0x1)
    float ChanceForRareResource;                                                      // 0x0260 (size: 0x4)
    int32 ResourceLevel;                                                              // 0x0264 (size: 0x4)
    uint32 ResourceFieldId;                                                           // 0x0268 (size: 0x4)
    bool bIsHighYield;                                                                // 0x026C (size: 0x1)
    int32 NumNextTierResourcesToSpawn;                                                // 0x0278 (size: 0x4)
    TArray<class TSubclassOf<AResource>> PossibleNextTierResources;                   // 0x0280 (size: 0x10)
    bool bShouldPersist;                                                              // 0x0290 (size: 0x1)
    class UParticleSystem* DestroyedFX;                                               // 0x0298 (size: 0x8)
    class USoundCue* DestroyedSoundCue;                                               // 0x02A0 (size: 0x8)
    class USoundCue* SpawnSoundCue;                                                   // 0x02A8 (size: 0x8)

    void OnRep_IsHighYield(const bool bPreviousIsHighYield);
    void BPOnGatherHit(class AWarCharacter* Gatherer, const int32 GatherLevel);
}; // Size: 0x2B0

class AResourceContainer : public AContainer
{
}; // Size: 0x820

class AResourceField : public ABuildableStructure
{
    class UStaticMeshComponent* ResourceFieldMeshComponent;                           // 0x07F0 (size: 0x8)
    class USphereComponent* NoBuildVolume;                                            // 0x07F8 (size: 0x8)
    class UStaticMesh* ResourceFieldMesh1;                                            // 0x0800 (size: 0x8)
    class UStaticMesh* ResourceFieldMesh2;                                            // 0x0808 (size: 0x8)
    class UStaticMesh* ResourceFieldMesh3;                                            // 0x0810 (size: 0x8)
    TSubclassOf<class AResource> ResourceClass;                                       // 0x0818 (size: 0x8)
    float SpawnPeriod;                                                                // 0x0820 (size: 0x4)
    int32 MaxConcurrentNodes;                                                         // 0x0824 (size: 0x4)
    float MinSpawnDistance;                                                           // 0x0828 (size: 0x4)
    float MaxSpawnDistance;                                                           // 0x082C (size: 0x4)
    int32 ResourcesPerReplenishment;                                                  // 0x0830 (size: 0x4)
    int16 ResourcesLeftToSpawn;                                                       // 0x0834 (size: 0x2)
    float TimeToReplenish;                                                            // 0x0838 (size: 0x4)
    int32 ResourceFieldId;                                                            // 0x083C (size: 0x4)
    float RemainingTimeToReplenish;                                                   // 0x0840 (size: 0x4)
    float LandscapeTraceDistance;                                                     // 0x0844 (size: 0x4)
    ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod;             // 0x0848 (size: 0x1)
    float ResourceNodeSphereColliderRadius;                                           // 0x084C (size: 0x4)
    bool bIgnoredByResourceRolling;                                                   // 0x0850 (size: 0x1)
    bool bCheckTechForSecondaryResource;                                              // 0x0851 (size: 0x1)
    TArray<FSecondaryResourceWeight> SecondaryResourceWeights;                        // 0x0858 (size: 0x10)
    float ChanceToSpawnSecondaryNormalized;                                           // 0x0868 (size: 0x4)
    TSubclassOf<class AItemPickup> SecondaryResourceToSpawn;                          // 0x0870 (size: 0x8)

    void OnRep_ResourcesLeftToSpawn();
}; // Size: 0x8F0

class AResourceMine : public ABuildableStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07F0 (size: 0x8)
    FName ProducedItem;                                                               // 0x07F8 (size: 0x8)
    int16 ProducedItemCount;                                                          // 0x0800 (size: 0x2)
    FName ProducedRareItem;                                                           // 0x0804 (size: 0x8)
    float ChanceToProduceRareItem;                                                    // 0x080C (size: 0x4)
    float ProductionCycleTime;                                                        // 0x0810 (size: 0x4)
    float PetrolEfficiencyMultiplier;                                                 // 0x0814 (size: 0x4)
    float DieselConsumptionRate;                                                      // 0x0818 (size: 0x4)
    float PetrolConsumptionRate;                                                      // 0x081C (size: 0x4)
    FFuelTank FuelTankDiesel;                                                         // 0x0820 (size: 0x14)
    FFuelTank FuelTankPetrol;                                                         // 0x0834 (size: 0x14)
    bool bIsProducing;                                                                // 0x0848 (size: 0x1)
    float ItemsInProduction;                                                          // 0x084C (size: 0x4)
    class USceneComponent* TransferLocation;                                          // 0x0850 (size: 0x8)
    FName RequiredFieldCodeName;                                                      // 0x0858 (size: 0x8)

    bool IsProducing();
}; // Size: 0x870

class AResourceMineBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)

}; // Size: 0x7F0

class AResourceTransferStation : public ATeamStructure
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0810 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x0818 (size: 0x8)

}; // Size: 0x820

class AResourceTransferStationBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)

}; // Size: 0x7F0

class ARespawnSpectatorPawn : public ASpectatorPawn
{
}; // Size: 0x2A8

class ARock : public AWall
{
}; // Size: 0x800

class ARocket : public ATeamStructure
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0810 (size: 0x8)
    class UParticleSystemComponent* FuelingParticleSystem;                            // 0x0818 (size: 0x8)
    class UParticleSystemComponent* GroundParticleSystem;                             // 0x0820 (size: 0x8)
    class UParticleSystemComponent* LaunchParticleSystem;                             // 0x0828 (size: 0x8)
    class UParticleSystemComponent* InFlightParticleSystem;                           // 0x0830 (size: 0x8)
    class USoundCue* LaunchSoundCue;                                                  // 0x0838 (size: 0x8)
    class USoundCue* ImpactSoundCue;                                                  // 0x0840 (size: 0x8)
    TSubclassOf<class UCameraShake> InFlightCameraShake;                              // 0x0848 (size: 0x8)
    float LaunchAnimationTime;                                                        // 0x0850 (size: 0x4)
    float FlightAnimationTime;                                                        // 0x0854 (size: 0x4)
    FRocketLaunchFire LaunchFire;                                                     // 0x0858 (size: 0x20)
    TSubclassOf<class ARocketTarget> RocketTargetClass;                               // 0x0878 (size: 0x8)
    TSubclassOf<class ARocketImpactEffect> ImpactEffectClass;                         // 0x0880 (size: 0x8)
    TSubclassOf<class ARocketGroundZero> GroundZeroClass;                             // 0x0888 (size: 0x8)
    class UAudioComponent* LaunchAudioComponent;                                      // 0x0890 (size: 0x8)
    ERocketLaunchSequence State;                                                      // 0x08A8 (size: 0x1)
    FLiquidTank LiquidTank;                                                           // 0x08AC (size: 0x14)
    FVector SelectedStrikeLocation;                                                   // 0x08C0 (size: 0xC)
    EWorldConquestMapId OriginMapID;                                                  // 0x08CC (size: 0x1)
    FRocketLaunchCodeInfo SelectedCode;                                               // 0x08D0 (size: 0x1C)

    void OnRep_State();
    void OnRep_LiquidTank();
    void BPBeginLaunch();
}; // Size: 0x900

class ARocketFacility : public ATeamStructure
{
    class UBoxComponent* BuildLocation;                                               // 0x0810 (size: 0x8)
    FName FirstRocketPartCodeName;                                                    // 0x0818 (size: 0x8)
    FVector FuelLocationOffset;                                                       // 0x0820 (size: 0xC)
    ERocketLaunchSequence Sequence;                                                   // 0x082C (size: 0x1)
    FRocketLaunchCodeInfo PendingLaunchCode;                                          // 0x0830 (size: 0x1C)
    FRocketLaunchCodeInfo SelectedLaunchCode;                                         // 0x084C (size: 0x1C)
    FName LinkedIntelCenter;                                                          // 0x0868 (size: 0x8)
    uint8 RequiredSquadMembers;                                                       // 0x0870 (size: 0x1)
    uint8 StartLaunchEntries;                                                         // 0x0871 (size: 0x1)
    uint8 CancelLaunchEntries;                                                        // 0x0872 (size: 0x1)
    EWorldConquestMapId TargetRegion;                                                 // 0x0873 (size: 0x1)
    FWarGridCoordinate Coordinate;                                                    // 0x0874 (size: 0x6)
    FFuelTank FuelTank;                                                               // 0x087C (size: 0x14)
    double TimeToLaunch;                                                              // 0x0890 (size: 0x8)
    ERocketLaunchResponse LastFailure;                                                // 0x08A0 (size: 0x1)
    FDateTime LastFailureTime;                                                        // 0x08A8 (size: 0x8)

    void OnRep_TimeToLaunch();
}; // Size: 0x940

class ARocketFacilityBuildSite : public AStructureBuildSite
{
    FFuelTank FuelTank;                                                               // 0x07E0 (size: 0x14)

}; // Size: 0x800

class ARocketGroundZero : public ATeamStructure
{
    float DamageDuration;                                                             // 0x0810 (size: 0x4)

}; // Size: 0x8A0

class ARocketImpactEffect : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0218 (size: 0x8)

}; // Size: 0x220

class ARocketLauncherProjectileDummy : public AActor
{
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0218 (size: 0x8)

    void SpoolupFinished();
    void BPBeginLaunch();
}; // Size: 0x230

class ARocketTarget : public ATeamStructure
{
    EWorldConquestMapId OriginMapID;                                                  // 0x0810 (size: 0x1)
    uint16 LaunchCodeID;                                                              // 0x0812 (size: 0x2)
    float LaunchTimeRemaining;                                                        // 0x0814 (size: 0x4)
    bool bIsSirenActive;                                                              // 0x0818 (size: 0x1)

    void OnRep_IsSirenActive();
}; // Size: 0x830

class ARuinableStructure : public ADestroyedStructure
{
    bool bShowRuinedInEditor;                                                         // 0x0600 (size: 0x1)
    class URuinedComponent* RuinedComponent;                                          // 0x0608 (size: 0x8)

}; // Size: 0x610

class AScoutTank : public ALightTank
{
}; // Size: 0x1340

class AScoutVehicle : public ARWDSimVehicle
{
    class USceneComponent* GunMuzzleLocation;                                         // 0x1290 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12A0 (size: 0x4)

}; // Size: 0x12B0

class AScreenshotCharacter : public AActor
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0218 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x0220 (size: 0x8)
    class USkeletalMeshComponent* Hands;                                              // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* Back;                                               // 0x0238 (size: 0x8)
    class USkeletalMeshComponent* Helmet;                                             // 0x0240 (size: 0x8)
    class USkeletalMeshComponent* EquippedItemMesh;                                   // 0x0248 (size: 0x8)
    bool bSetMeshesDynamically;                                                       // 0x0250 (size: 0x1)
    bool bAlwaysResetEquippedItemMesh;                                                // 0x0251 (size: 0x1)
    EFactionId FactionId;                                                             // 0x0252 (size: 0x1)
    EOutfitType OutfitType;                                                           // 0x0253 (size: 0x1)
    EUniformType UniformType;                                                         // 0x0254 (size: 0x1)
    EZombieType ZombieType;                                                           // 0x0255 (size: 0x1)
    bool bIsFemale;                                                                   // 0x0256 (size: 0x1)
    uint8 SkinTone;                                                                   // 0x0257 (size: 0x1)
    class UMaterialInstance* OverrideMaterial;                                        // 0x0258 (size: 0x8)
    TSoftClassPtr<AItemPickup> EquippedItem;                                          // 0x0260 (size: 0x28)

}; // Size: 0x288

class ASeaport : public AStorageFacility
{
    class USceneComponent* TransferLocation2;                                         // 0x0870 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;                 // 0x0878 (size: 0x8)
    class UPersistentProxyComponent* ProxyLoadingDockComponent;                       // 0x0880 (size: 0x8)
    class UBoxComponent* PassengerUnloadingArea1;                                     // 0x0888 (size: 0x8)
    class UBoxComponent* PassengerUnloadingArea2;                                     // 0x0890 (size: 0x8)
    class USceneComponent* LadderLocationSeaport1;                                    // 0x0898 (size: 0x8)
    class USceneComponent* LadderLocationSeaport2;                                    // 0x08A0 (size: 0x8)
    class USceneComponent* LadderLocationDock1;                                       // 0x08A8 (size: 0x8)
    class USceneComponent* LadderLocationDock2;                                       // 0x08B0 (size: 0x8)
    TSubclassOf<class ALadder> LadderType;                                            // 0x08B8 (size: 0x8)
    TArray<class ALadder*> SpawnedLadders;                                            // 0x08C0 (size: 0x10)
    class UTeamFlagMeshComponent* FlagMesh;                                           // 0x08D0 (size: 0x8)

}; // Size: 0x8E0

class ASeaportBuildSite : public AStorageFacilityBuildSite
{
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;                 // 0x07F8 (size: 0x8)
    class UPersistentProxyComponent* ProxyLoadingDockComponent;                       // 0x0800 (size: 0x8)
    TArray<class ALadder*> SpawnedLadders;                                            // 0x0808 (size: 0x10)

}; // Size: 0x820

class ASensorReadingProxy : public AActor
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0218 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0220 (size: 0x8)

}; // Size: 0x228

class AShipVehicle : public ASimVehicle
{
    class UStaticMeshComponent* ShipCollision;                                        // 0x10E8 (size: 0x8)
    FRepShipMovement RepShipMovement;                                                 // 0x10F0 (size: 0x48)
    class AStructure* StructureToIgnore;                                              // 0x1138 (size: 0x8)
    FVector PropellerPositions;                                                       // 0x1140 (size: 0x18)
    FVector RudderPivot;                                                              // 0x1158 (size: 0xC)
    TArray<FControlSurface> ControlSurfaces;                                          // 0x1168 (size: 0x10)
    uint8 MovementFlags;                                                              // 0x1219 (size: 0x1)

    void ServerMoveShip(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMoveNoBaseShip(float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ServerMoveDualShip(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, class UPrimitiveComponent* ClientMovementBase, FName ClientBaseBoneName, uint8 ClientMovementMode);
    void ServerMoveDualNoBaseShip(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, FVector_NetQuantize100 ClientLoc, uint8 NewFlags, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void OnRep_StructureToIgnore();
    void OnRep_RepShipMovement();
    void OnPassengerAreaEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnPassengerAreaBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ClientVeryShortAdjustPositionShip(float Timestamp, const FShipVeryShortAdjustment& Adjustment, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition);
    void ClientAdjustPositionShip(float Timestamp, const FShipAdjustment& Adjustment, class UPrimitiveComponent* NewBase, FName NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition);
}; // Size: 0x1220

class AShippable : public ABuildableStructure
{
    TSubclassOf<class AGlobalShippableInfo> GlobalShippableInfo;                      // 0x07F0 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x07F8 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x0800 (size: 0x8)
    class UMeshComponent* DynamicMeshComponent;                                       // 0x0808 (size: 0x8)
    FName ShippableType;                                                              // 0x0810 (size: 0x8)
    FReplicatedShippableData ShippableData;                                           // 0x0818 (size: 0x18)
    FSavedShippableData SavedData;                                                    // 0x0830 (size: 0xD0)

    void OnRep_ShippableType();
    void OnRep_ShippableData();
}; // Size: 0x910

class AShippableCrate : public ABuildableStructure
{
    class UStaticMesh* ShippableMesh;                                                 // 0x07F0 (size: 0x8)
    FName StoredCodeName;                                                             // 0x07F8 (size: 0x8)

}; // Size: 0x800

class AShippingContainer : public AContainer
{
}; // Size: 0x820

class AShootingRangeArea : public AActor
{
    class UBoxComponent* ShootingRangeComponent;                                      // 0x0218 (size: 0x8)

    void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
}; // Size: 0x220

class ASignPost : public ABuildableStructure
{
    int32 HealPerUpVote;                                                              // 0x07F0 (size: 0x4)
    int32 DamagePerDownVote;                                                          // 0x07F4 (size: 0x4)
    FText Text;                                                                       // 0x07F8 (size: 0x18)
    TArray<FSignPostVote> VoteList;                                                   // 0x0810 (size: 0x10)
    int64 LastEditedTimeTicks;                                                        // 0x0820 (size: 0x8)
    bool bIsWorldSignPost;                                                            // 0x0828 (size: 0x1)

}; // Size: 0x830

class ASignPostBuildSite : public AStructureBuildSite
{
}; // Size: 0x7E0

class ASimCharacter : public AWarCharacter
{
    FRepPlayerMovement RepPlayerMovement;                                             // 0x08B8 (size: 0x48)
    float StanceYawModifiers;                                                         // 0x0900 (size: 0x10)
    bool bGiveStarterKit;                                                             // 0x0922 (size: 0x1)
    float BaseTurnRate;                                                               // 0x0924 (size: 0x4)
    float SprintingMaxSpeedModifier;                                                  // 0x0928 (size: 0x4)
    float DeathDuration;                                                              // 0x092C (size: 0x4)
    float ProneEyeHeight;                                                             // 0x0930 (size: 0x4)
    float CrouchedTargetOffset;                                                       // 0x0934 (size: 0x4)
    float MinFallSpeedForDamage;                                                      // 0x0938 (size: 0x4)
    float FatalFallSpeed;                                                             // 0x093C (size: 0x4)
    float MaxClimbForwardDistance;                                                    // 0x0940 (size: 0x4)
    float MaxClimbCosAngle;                                                           // 0x0944 (size: 0x4)
    float MaxVaultHeight;                                                             // 0x0948 (size: 0x4)
    float MinVaultVerticalClearencePercent;                                           // 0x094C (size: 0x4)
    float MaxVaultDistance;                                                           // 0x0950 (size: 0x4)
    float MaxClimbHeight;                                                             // 0x0954 (size: 0x4)
    float MinClimbOpenDistance;                                                       // 0x0958 (size: 0x4)
    float MinClimbOntoOpenDistance;                                                   // 0x095C (size: 0x4)
    float MinShortWallStepOpenDistance;                                               // 0x0960 (size: 0x4)
    float ClamberStandOffset;                                                         // 0x0964 (size: 0x4)
    class UMountComponent* MountComponent;                                            // 0x0988 (size: 0x8)
    class AStructure* CurrentOccupiedStructure;                                       // 0x0990 (size: 0x8)
    class ASimVehicle* CurrentVehicle;                                                // 0x09A0 (size: 0x8)
    class USoundCue* FootStepCue;                                                     // 0x09A8 (size: 0x8)
    int32 MaxHealth;                                                                  // 0x09B0 (size: 0x4)
    int32 ResetWoundedStateThreshold;                                                 // 0x09B4 (size: 0x4)
    float HealthThresholdForHurtMaterial;                                             // 0x09B8 (size: 0x4)
    float MaxActivityLatencyCompensation;                                             // 0x09BC (size: 0x4)
    FActivityStateInfo ActivityStateInfos;                                            // 0x09C0 (size: 0x690)
    TMap<class ECharacterActivityState, class FEmoteActivityOptions> EmoteActivityOptionsTable; // 0x1050 (size: 0x50)
    float AllowedDeviationOfShootingDirection;                                        // 0x10A0 (size: 0x4)
    float InVehicleAllowedDeviationOfShootingDirection;                               // 0x10A4 (size: 0x4)
    float WeaponFiringConeAbilityModifierPct;                                         // 0x10A8 (size: 0x4)
    uint8 TeamId;                                                                     // 0x10AC (size: 0x1)
    uint8 VisualCustomizationMask;                                                    // 0x10AD (size: 0x1)
    uint8 bIsWearingGasMask;                                                          // 0x10B0 (size: 0x1)
    uint8 bUsesDynamicMaterials;                                                      // 0x10B0 (size: 0x1)
    EUniformType UniformType;                                                         // 0x10B4 (size: 0x1)
    TEnumAsByte<EPhysicalSurface> CurrentSurfaceType;                                 // 0x1145 (size: 0x1)
    TArray<FSurfaceMovementData> SurfaceMovementModifiers;                            // 0x1150 (size: 0x10)
    class USkeletalMeshComponent* Head;                                               // 0x1160 (size: 0x8)
    class USkeletalMeshComponent* Hands;                                              // 0x1168 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x1170 (size: 0x8)
    class USkeletalMeshComponent* Back;                                               // 0x1178 (size: 0x8)
    class USkeletalMeshComponent* Helmet;                                             // 0x1180 (size: 0x8)
    class USkeletalMeshComponent* EquippedItemMesh;                                   // 0x1188 (size: 0x8)
    class USkeletalMeshComponent* GasMaskMesh;                                        // 0x1190 (size: 0x8)
    class USkeletalMeshComponent* AccessoryMesh;                                      // 0x1198 (size: 0x8)
    class USceneComponent* Muzzle_Standing;                                           // 0x11A0 (size: 0x8)
    class USceneComponent* Muzzle_Crouched;                                           // 0x11A8 (size: 0x8)
    class USceneComponent* Muzzle_Prone;                                              // 0x11B0 (size: 0x8)
    class UStaticMeshComponent* GroundEquippedItemMesh;                               // 0x11B8 (size: 0x8)
    class UItemHolderComponent* ItemHolder;                                           // 0x11C0 (size: 0x8)
    class USphereComponent* SuppressionSphere;                                        // 0x11C8 (size: 0x8)
    TArray<FItemInstance> ItemHolderItems;                                            // 0x11D0 (size: 0x10)
    class UEquipmentHolderComponent* EquipmentItemHolder;                             // 0x11E0 (size: 0x8)
    TArray<FItemInstance> EquipmentItemHolderItems;                                   // 0x11E8 (size: 0x10)
    class UParticleSystemComponent* SwimmingPS;                                       // 0x1200 (size: 0x8)
    class UParticleSystemComponent* EnterWaterPS;                                     // 0x1208 (size: 0x8)
    class UAudioComponent* SwimmingSFX;                                               // 0x1210 (size: 0x8)
    class UAudioComponent* EnterWaterSFX;                                             // 0x1218 (size: 0x8)
    ECharacterActivityState CharacterActivityStateInternal;                           // 0x1220 (size: 0x1)
    float Health;                                                                     // 0x1230 (size: 0x4)
    uint8 ReplicatedItemEncumbrance;                                                  // 0x1234 (size: 0x1)
    class AActor* LastMovementBase;                                                   // 0x1238 (size: 0x8)
    float MeleeMinDamage;                                                             // 0x126C (size: 0x4)
    float MeleeMaxDamage;                                                             // 0x1270 (size: 0x4)
    TSubclassOf<class UDamageType> MeleeDamageType;                                   // 0x1278 (size: 0x8)
    TSubclassOf<class AImpactEffect> MeleeImpactEffect;                               // 0x1280 (size: 0x8)
    class USoundCue* MeleeAttackSound;                                                // 0x1288 (size: 0x8)
    float SwimmingBuoyancy;                                                           // 0x1290 (size: 0x4)
    float DrowningBuoyancy;                                                           // 0x1294 (size: 0x4)
    float MaxStamina;                                                                 // 0x1298 (size: 0x4)
    float IdleStaminaRestoreRate;                                                     // 0x129C (size: 0x4)
    float IdleStaminaRestoreDelay;                                                    // 0x12A0 (size: 0x4)
    float GasMaskStaminaRestoreRate;                                                  // 0x12A4 (size: 0x4)
    float SuppressionStaminaRegenModifier;                                            // 0x12A8 (size: 0x4)
    float StaminaDrainExponent;                                                       // 0x12AC (size: 0x4)
    float AddedSprintingStaminaDrain;                                                 // 0x12B0 (size: 0x4)
    float AddedFloodedStaminaDrain;                                                   // 0x12B4 (size: 0x4)
    float AddedBlockingStaminaDrain;                                                  // 0x12B8 (size: 0x4)
    float AddedChargingStaminaDrain;                                                  // 0x12BC (size: 0x4)
    float AddedDeadlyGasStaminaDrain;                                                 // 0x12C0 (size: 0x4)
    float MeleeStaminaCostNormalized;                                                 // 0x12C4 (size: 0x4)
    float SwimmingStaminaDrainRate;                                                   // 0x12C8 (size: 0x4)
    float SwimmingStaminaDrainDepthCutoff;                                            // 0x12CC (size: 0x4)
    float ClimbingDepthCutoff;                                                        // 0x12D0 (size: 0x4)
    float RagdollInWaterLinearDamping;                                                // 0x12D4 (size: 0x4)
    float RagdollOutOfWaterLinearDamping;                                             // 0x12D8 (size: 0x4)
    float StabilityMovementDecayRate;                                                 // 0x12F8 (size: 0x4)
    float StabilityDecayMovementSpeed;                                                // 0x12FC (size: 0x4)
    float StabilityYawDecayRate;                                                      // 0x1300 (size: 0x4)
    float StabilityYawDecayTime;                                                      // 0x1304 (size: 0x4)
    float StabilityGainRates;                                                         // 0x1308 (size: 0x10)
    float HealTimer;                                                                  // 0x1330 (size: 0x4)
    bool BleedingEnabled;                                                             // 0x1380 (size: 0x1)
    float BleedDamagePerSecond;                                                       // 0x1384 (size: 0x4)
    float BleedMinDamageReq;                                                          // 0x1388 (size: 0x4)
    float StaggerMinDamageReq;                                                        // 0x138C (size: 0x4)
    class UParticleSystem* BleedingEffectTemplate;                                    // 0x1390 (size: 0x8)
    class UParticleSystemComponent* SpawnedBleedingEffect;                            // 0x1398 (size: 0x8)
    uint8 bIsEffectedByDeadlyGas;                                                     // 0x13B0 (size: 0x1)
    uint8 bIsBleeding;                                                                // 0x13B0 (size: 0x1)
    EZombieType ZombieType;                                                           // 0x13CC (size: 0x1)
    float WoundedTimeRemaining;                                                       // 0x13D0 (size: 0x4)
    float ZombieMeleeReach;                                                           // 0x13D8 (size: 0x4)
    TSubclassOf<class AImpactEffect> ZombieMeleeImpactEffect;                         // 0x13E0 (size: 0x8)
    class USoundCue* ZombieDeathSound;                                                // 0x13E8 (size: 0x8)
    float ZombieHitRadius;                                                            // 0x13F0 (size: 0x4)
    float ZombieHitHalfHeight;                                                        // 0x13F4 (size: 0x4)
    class ASimCharacter* CarryingPlayer;                                              // 0x1410 (size: 0x8)
    TWeakObjectPtr<class AController> LastBurningHitInstigator;                       // 0x1438 (size: 0x8)
    float BlockingMaxSpeedModifier;                                                   // 0x1450 (size: 0x4)
    float ChargingMaxSpeedModifier;                                                   // 0x1454 (size: 0x4)
    float AimingMaxSpeedModifier;                                                     // 0x1458 (size: 0x4)
    bool bDisablePlayerFogOfWar;                                                      // 0x145C (size: 0x1)
    float AlwaysVisibleRadius;                                                        // 0x1460 (size: 0x4)
    int32 AimRadius;                                                                  // 0x1464 (size: 0x4)
    int32 ScopeRadius;                                                                // 0x1468 (size: 0x4)
    FUITargetingInfo LastUITargetingInfo;                                             // 0x146C (size: 0x54)
    float EffectiveBlockingMaxDeviation;                                              // 0x15A4 (size: 0x4)
    FVector2D_NetQuantize YawPitchPacked;                                             // 0x15A8 (size: 0xC)
    class UPlayerCameraRigComponent* CameraRigComponent;                              // 0x15B8 (size: 0x8)
    class UCameraComponent* TopDownCameraComponent;                                   // 0x15C0 (size: 0x8)
    class UParticleSystemComponent* ScopePS;                                          // 0x15C8 (size: 0x8)
    class UPostProcessComponent* LOSPostProcess;                                      // 0x15D0 (size: 0x8)
    class UPlayerLOSRasterComponent* LOSRasterComponent;                              // 0x15D8 (size: 0x8)
    TSubclassOf<class UCameraShake> SprintCameraShake;                                // 0x15E0 (size: 0x8)
    class UStaticMeshComponent* GrenadeAimMesh;                                       // 0x15E8 (size: 0x8)
    class USceneComponent* Grip_Standing;                                             // 0x15F0 (size: 0x8)
    class USceneComponent* Grip_Crouched;                                             // 0x15F8 (size: 0x8)
    class USceneComponent* Grip_Prone;                                                // 0x1600 (size: 0x8)
    class UMaterialParameterCollection* RegionBoundaryParamCollection;                // 0x1608 (size: 0x8)
    uint8 bIsInScopeMode;                                                             // 0x16B8 (size: 0x1)
    FDateTime OfflineExpiryTime;                                                      // 0x16C0 (size: 0x8)

    void SlowTick();
    void ServerUseShipHatch(class UHatchComponent* HatchComponent);
    void ServerUseShipFlagVolume(class AShipVehicle* ShipVehicle, uint8 FlagIndex, bool bIsMovement);
    void ServerUseItem(const int8 Index, class UItemHolderComponent* InHolder);
    void ServerUseFloodable(class UFloodableComponent* FloodableComponent);
    void ServerUpdateAimYawAndPitch(const FVector2D_NetQuantize YawAndPitch);
    void ServerUnlinkRWDSimVehicles(class ARWDSimVehicle* Tractor);
    void ServerToggleRailSwitch(class ARailwayTrack* RailwayTrack, int32 PathSocketId);
    void ServerTakePickup(class AItemPickup* ItemPickup);
    void ServerSyncLastWeaponInvoke(const FCharacterInvokeInfo& ClientWeaponInvoke);
    void ServerSwitchSeats(class ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex);
    void ServerSimulateMeleeAttack(FActivityStateChange ActivityStateChange);
    void ServerSetIsInScopeMode(bool InIsInScopeMode);
    void ServerReloadFromWaterSource(EWaterSourceType RequestedSource, FActivityStateChange ActivityStateChange);
    void ServerReload(int32 AmmoIx, class UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange);
    void ServerPlayEmote(const ECharacterActivityState EmoteActivityState);
    void ServerOnUseFromVehicle(class ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    void ServerMoveMinimal(float Timestamp, uint8 ClientRoll, uint32 View, uint8 ClientMovementMode);
    void ServerMountStructure(class AStructure* Structure, FActivityStateChange ActivityStateChange);
    void ServerModifyStructure(FActivityStateChange ActivityStateChange, class UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask);
    void ServerLinkRWDSimVehicles(class ARWDSimVehicle* VehicleA, class ARWDSimVehicle* VehicleB);
    void ServerLinkRailVehicles(class ARailVehicle* VehicleA, class ARailVehicle* VehicleB);
    void ServerGiveUpFromWoundedState();
    void ServerExitVehicle(class ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    void ServerEnterVehicle(class ASimVehicle* SimVehicle, class UEnterVehicleUseComponent* EnterVehicleUseComponent, const FActivityStateChange ActivityStateChange, const int32 SeatIndex);
    void ServerClimbLadder(class ULadderComponent* LadderComponent, bool bEntering, FActivityStateChange ActivityStateChange);
    void ServerClimb(FVector2D InputDirection, FActivityStateChange ActivityStateChange);
    void ServerChangeItemEquipState(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange);
    void ServerCarryWounded(class ASimCharacter* WoundedCharacter);
    void OnRep_ZombieType();
    void OnRep_VisualCustomizationMaskNotify();
    void OnRep_UniformType();
    void OnRep_TeamIdNotify();
    void OnRep_RepPlayerMovement(const FRepPlayerMovement& PrevSnapshot);
    void OnRep_MountComponent();
    void OnRep_IsWearingGasMask();
    void OnRep_IsInScopeMode();
    void OnRep_IsBleeding();
    void OnRep_Health();
    void OnRep_EquipmentItemHolderItems();
    void OnRep_Encumbrance();
    void OnRep_CurrentVehicle(class ASimVehicle* PreviousVehicle);
    void OnRep_CurrentOccupiedStructure();
    void OnRep_CharacterActivityState();
    void MulticastSpawnMeleeHitEffects(FHitNotify SimulatedHitNotify);
    void MulticastSetStagger(const uint8 InStagger);
    void MulticastSetNormalizedStamina(const float InNormalizedStamina);
    void MulticastOnUniformMitigatedDamage(EDamageType DamageType);
    void ClientVehicleSeatSwitched(bool bIsDriver, class ASimVehicle* Vehicle);
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace);
    void ClientSyncActivityStateSequence(uint8 CurrentSequenceNumber, int8 HeldItemIndex);
    void ClientSetUnmountPosition(FVector Position, FRotator Rotation);
    void ClientSetNormalizedStamina(float InNormalizedStamina);
    void ClientSetItemHolderItems(const TArray<FItemInstance>& InItemHolderItems);
    void ClientSetGainingHeatFromHits(bool bIsGaining);
    void ClientSetFlyMode(const bool bInIsFlyMode, const float FlyHeight, const float FlySpeed);
    void ClientInterruptActivityState(uint8 SequenceNumber);
    void ClientCorrectActivityState(uint8 LastSuccessfulSequenceNumber, int8 HeldItemIndex, ECharacterActivityState NewState);
    void ClientCarryWoundedSetupMovement(class ASimCharacter* WoundedCharacter, bool bBeganCarrying);
    void ClientCannonLaunch(const FVector2D_NetQuantize LaunchVelocity);
    void ClientBeginWoundedState();
    void ClientAdjustPositionPlayer(float Timestamp, const FPlayerAdjustment& Adjustment);
    void ClientAddSuppression(const float SuppressAmount);
    void ClientAddStability(const float StabilityAmount);
    void ClientAckActivityState(uint8 SequenceNumber);
    void CheckForCover();
    void BPUpdateMaterialParameters(const FVector& Position);
    void BPUpdateHeatVisuals(bool bState);
    void BPSetTeamVisuals(const int32 VisualTeamId);
    void BPCinematicDeath();
}; // Size: 0x16F0

class ASimGameMode : public AWarGameMode
{
    float DefaultAutoSavePeriod;                                                      // 0x0300 (size: 0x4)
    FString DefaultAutoSaveSlot;                                                      // 0x0308 (size: 0x10)
    TSubclassOf<class APawn> DefaultBotClass;                                         // 0x0318 (size: 0x8)
    TMap<uint32, AActor*> AssignableSpawnPoints;                                      // 0x0328 (size: 0x50)
    TMap<class FString, class AOfflineCharacter*> OfflineCharacterMap;                // 0x0378 (size: 0x50)
    TSubclassOf<class AOfflineCharacter> OfflineCharacterClass;                       // 0x03C8 (size: 0x8)
    TMap<class FString, class FSavedCharacter> SavedCharacterMap;                     // 0x03D0 (size: 0x50)
    class UPlayerProfileManager* PlayerProfileManager;                                // 0x04B0 (size: 0x8)
    FWarReporter WarReporter;                                                         // 0x04B8 (size: 0x58)
    class UResourceMapping* ResourceMapping;                                          // 0x0650 (size: 0x8)
    TSet<AActor*> DecayPreventers;                                                    // 0x06D8 (size: 0x50)

    void HeadlessServerCommand(FString Command);
    void HeadlessCommand(FString Command);
}; // Size: 0x728

class ASimGameState : public AWarGameState
{
    TArray<FTownHallInfo> TownHallInfo;                                               // 0x0290 (size: 0x10)
    FGameplayFlags GameplayFlags;                                                     // 0x02A0 (size: 0x4)
    class AMapIntelligence* MapIntelligence;                                          // 0x02A8 (size: 0x8)
    class ASubmarineAudioVolume* SubmarineAudioVolume;                                // 0x02B0 (size: 0x8)
    FWarAchievementProgress WarAchievementProgress;                                   // 0x0320 (size: 0x20)
    uint32 StructureLayers;                                                           // 0x0340 (size: 0x4)
    FWorldWeatherState WorldWeatherState;                                             // 0x0348 (size: 0x40)
    float PrevWindSpeedTime;                                                          // 0x0388 (size: 0x4)
    uint8 PrevWindSpeed;                                                              // 0x038C (size: 0x1)
    float NextWindSpeedTime;                                                          // 0x0390 (size: 0x4)
    uint8 NextWindSpeed;                                                              // 0x0394 (size: 0x1)
    float PrevWindDirectionTime;                                                      // 0x0398 (size: 0x4)
    uint8 PrevWindDirection;                                                          // 0x039C (size: 0x1)
    float NextWindDirectionTime;                                                      // 0x03A0 (size: 0x4)
    uint8 NextWindDirection;                                                          // 0x03A4 (size: 0x1)
    FQuantizedTimestamp InitialReplicatedServerTimestamp;                             // 0x03B8 (size: 0x4)
    class ATechTree* ColonialTechTree;                                                // 0x03F0 (size: 0x8)
    class ATechTree* WardenTechTree;                                                  // 0x03F8 (size: 0x8)
    EFactionId ConquestWinner;                                                        // 0x0400 (size: 0x1)
    EWarPhase WarPhase;                                                               // 0x0401 (size: 0x1)
    FDateTime WarPhaseEndTime;                                                        // 0x0408 (size: 0x8)
    bool bIsPatchRequired;                                                            // 0x0410 (size: 0x1)
    bool bIsShortWar;                                                                 // 0x0411 (size: 0x1)

    void OnRep_WorldWeatherState();
    void OnRep_WardenTechTree();
    void OnRep_InitialReplicatedServerTimestamp();
    void OnRep_GameplayFlags();
    void OnRep_ColonialTechTree();
    void MulticastToggleEarlyWarRestrictionOverride();
    void MulticastServerTimestamp(FQuantizedTimestamp ServerTimestamp);
    void MulticastRemoveOfflinePlayerState(FString OnlineID);
    FVector2D GetWindVector();
}; // Size: 0x728

class ASimPainCausingVolume : public APainCausingVolume
{
}; // Size: 0x288

class ASimPlayerCameraManager : public APlayerCameraManager
{
    class UPostProcessComponent* PostProcessComponent;                                // 0x26C8 (size: 0x8)
    class UMaterialInstanceDynamic* FogMaterialDynamic;                               // 0x26D0 (size: 0x8)
    FSpectateTarget SpectateTarget;                                                   // 0x26D8 (size: 0x8)

}; // Size: 0x26E0

class ASimPlayerController : public AWarPlayerController
{
    TWeakObjectPtr<class AStructure> UpgradeTarget;                                   // 0x0D10 (size: 0x8)
    TWeakObjectPtr<class AStructure> UpgradeTargetDecayPreventer;                     // 0x0D18 (size: 0x8)
    float MapIntelRefreshRate;                                                        // 0x0D68 (size: 0x4)
    int32 MapIntelItemsPerChunk;                                                      // 0x0D6C (size: 0x4)
    float MapIntelProviderRangeSquared;                                               // 0x0D70 (size: 0x4)
    FCommsRating CommsRating;                                                         // 0x0D98 (size: 0x20)
    FPlayerSpawnPointsInfo SpawnPointInfo;                                            // 0x0E20 (size: 0x12)
    class ABuildGhost* BuildGhost;                                                    // 0x0EA0 (size: 0x8)
    class ABuildGhost* UpgradeBuildGhost;                                             // 0x0EA8 (size: 0x8)
    float DeathCamTime;                                                               // 0x0EB0 (size: 0x4)
    float ChatRange;                                                                  // 0x0EB4 (size: 0x4)
    int32 PlaceInDeploymentQueue;                                                     // 0x1010 (size: 0x4)
    FStockpileEffects StockpileEffects;                                               // 0x1068 (size: 0x18)
    TArray<class UUserComponent*> UserComponents;                                     // 0x1080 (size: 0x10)
    TArray<FStructureStats> StatsForNearybyStructures;                                // 0x1148 (size: 0x10)
    TWeakObjectPtr<class ARailVehicle> RailHUDTarget;                                 // 0x11E0 (size: 0x8)
    float RailHUDTargetDismountTime;                                                  // 0x11E8 (size: 0x4)
    class ACalloutMarkerGhost* CalloutMarkerGhost;                                    // 0x11F0 (size: 0x8)
    TSubclassOf<class ARuntimeVirtualTextureVolume> LandscapeCullRVTVolumeClass;      // 0x1238 (size: 0x8)
    class ARuntimeVirtualTextureVolume* LandscapeCullRVTVolume;                       // 0x1240 (size: 0x8)

    void WarMessageTest(const int32 TestInt, const float TestFloat, const bool TestBool, FString TestStr, const ETestEnum TestEnum);
    void TunnelNetworkDebugDraw();
    void ToggleStabilityDebug();
    void ToggleShowMouseCursor();
    void TestTravel(float SearchBorderOffset, float SearchMaxRadius, bool bWaterTravel, float ShipDepth, float SearchMinimumWaterDepth, float WorldX, float WorldY, float WorldZ, float Yaw);
    void StructureIslandDebugDraw();
    void StopRequestingGarrisonInfo();
    void StartRequestingGarrisonInfo();
    void SpawnAllVehicles(int32 PerVehicleCount);
    void SpawnAllStructures(int32 PerStructureCount);
    void SimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    void ServerWhisper(FString TargetOnlineID, FString Message);
    void ServerWarMessageTest(const FWarMessageTest& Message);
    void ServerVoteOnSignPost(const bool bIsUpVote, class ASignPost* TargetSignPost);
    void ServerVoteOnChatMessage(FString TargetOnlineID, const bool bIsUpVote, FString MessageContent, EChatMessageType MessageType);
    void ServerVoteKick(FString PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory);
    void ServerUseUseComponent(class UUseComponent* UseComponent);
    void ServerUseShipRamp(class UGangwayRamp* Ramp);
    void ServerUpgradeVehicle(class AAssemblyStation* AssemblyStation, class ASimVehicle* TargetSimVehicle);
    void ServerUpgradeTargetStructure(class AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation);
    void ServerUpgradeStaticTargetStructure(class AStructure* TargetStructure, FName UpgradeCodename);
    void ServerUpdateInfo(const uint32 Info);
    void ServerUnpackShippableCrate(class UActorComponent* SourceComponent, class UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, FString TargetStockpileName);
    void ServerUnCrateItems(class UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    void ServerTravelToHomeRegion();
    void ServerTransferItem(class UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, class UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit);
    void ServerToggleVehicleLock(class ASimVehicle* SimVehicle);
    void ServerTimeRequest(float RequestTime);
    void ServerTeleportToLocation(const FVector& WorldPosition);
    void ServerSyncWorldPlayerId();
    void ServerSyncTravelMaps();
    void ServerSyncTimeToNextWar();
    void ServerSyncStaticRegionMapData();
    void ServerSyncDynamicRegionMapData();
    void ServerSwapEquipment(const int8 BackpackItemIndex);
    void ServerSubmitVehicleToStockpile(class ASimVehicle* SimVehicle, class UActorComponent* TargetStockpile);
    void ServerSubmitTech(class AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex);
    void ServerSubmitStructureToStockpile(class ABuildableStructure* Structure, class UActorComponent* TargetStockpile, FString TargetStockpileName);
    void ServerSubmitStarterKit(class AActor* Actor, const uint16 Bitmask);
    void ServerSubmitResourceConverterOrder(class AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    void ServerSubmitRefinementOrderWithLimit(class ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit);
    void ServerSubmitRefinementOrder(class ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll);
    void ServerSubmitPatients(class UHospitalComponent* HospitalComponent);
    void ServerSubmitLargeItem(class AActor* Actor);
    void ServerSubmitItemsToStockpileFromItemHolderWithItemFilter(class UItemHolderComponent* SourceItemHolder, class UActorComponent* TargetStockpile, const FStockpileItemFilter ItemFilter);
    void ServerSubmitItemsToStockpileFromItemHolder(class UItemHolderComponent* SourceItemHolder, class UActorComponent* TargetStockpile);
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered(class UActorComponent* TargetStockpile, const FStockpileEntry ItemFilter);
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpile(class UActorComponent* TargetStockpile);
    void ServerSubmitFactoryOrder(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems);
    void ServerSubmitCrateToStockpile(class AShippableCrate* ShippableCrate, class UActorComponent* TargetStockpile, const bool bSubmitToPublic);
    void ServerSubmitContainerToStockpile(class AContainer* Container, class UActorComponent* TargetStockpile);
    void ServerStopRepairVehicle(class AAssemblyStation* AssemblyStation);
    void ServerStopRefuelingActorInUse(class AActor* RefuelSourceActor, class AActor* RefuelTargetActor);
    void ServerSplitItemStack(class UItemHolderComponent* TargetItemHolder, const uint8 SplitPercentageQuantized, int8 FromIndex);
    void ServerSpectateSpawnPoint();
    void ServerSpectate(const int8 Delta, const bool bAllowSpectatorCameraFallback);
    void ServerSpawnAllVehicles(int32 PerVehicleCount);
    void ServerSpawnAllStructures(int32 PerStructureCount);
    void ServerSortWreckage(class UItemHolderComponent* SourceItemHolder);
    void ServerSortItemHolder(class UItemHolderComponent* TargetItemHolder);
    void ServerSimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    void ServerSignalAttemptServerTravel();
    void ServerSetVehicleLock(class ASimVehicle* SimVehicle, const bool bIsLocked);
    void ServerSetStructureColor(class AContainer* Container, const uint8 Color);
    void ServerSetStockpileTargetOverride(class UGenericStockpileComponent* StockpileTargetOverride);
    void ServerSetSpawnPoint(class AActor* AssignableSPActor);
    void ServerSetShipAnchorState(class ALargeShip* LargeShip, const bool bShouldBeRaised);
    void ServerSetRefineryOrderAccessLevel(class ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel);
    void ServerSetPowerGridConnectionState(class AActor* LHSActor, class AActor* RHSActor);
    void ServerSetInventorySourceOverride(class UActorComponent* InventorySourceOverride);
    void ServerSetHospitalDeployState(class ARailVehicleHospital* RailVehicleHospital, const bool bWantsItDeployed);
    void ServerSetFortEmpStructure(class AFortEmp* FortEmp, const uint8 StructureType);
    void ServerSetCharacterCustomizationInfo(const FCharacterCustomizationInfo CustomizationInfo);
    void ServerSetCameraFlags(int32 Flags, class AActor* Actor);
    void ServerSetAssemblyAreaState(class AAssemblyStation* AssemblyStation, const bool bWantsItOpen);
    void ServerSetAdminCommandTarget(class AActor* TargetActor);
    void ServerRetrievePatient(class UHospitalComponent* HospitalComponent);
    void ServerRetrieveFromStockpile(class UActorComponent* RetrieveFromStockpileComponent, class UGenericStockpileComponent* RetrieveToStockpileComponent, FString StockpileName, const FName CodeName, const EStockpileEntryType EntryType, const uint16 RequestedAmount);
    void ServerRespawnDefault();
    void ServerRespawnAtNearestStaticBase();
    void ServerRespawnAtNearestSafeHouse();
    void ServerRespawnAtAssignedPoint(const uint8 Category);
    void ServerResetStockpileTargetOverride();
    void ServerResetPowerGridConnectionState(class AActor* Actor);
    void ServerResetInventorySourceOverride();
    void ServerRequestStructureInfo(class AStructure* Structure, const bool bIsInitialRequest);
    void ServerRequestStockpileAccessEvents(class UGenericStockpileComponent* GenericStockpileComponent, const EStockpileCategoryType CategoryType);
    void ServerRequestReserveStockpileLog(const class AStructure* Structure, FString StockpileName, const uint32 PageIndex);
    void ServerRequestRegionMinimalData(const EWorldConquestMapId MapId);
    void ServerRequestRegionLog(const uint32 LogPageIndex);
    void ServerRequestOfflineActivityLog(FString OnlineID);
    void ServerRequestNetworkTechStatus(const class AStructure* Structure);
    void ServerRequestMapPostDetails(const int32 MapPostID);
    void ServerRequestMapItemDetails(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber);
    void ServerRequestMapIntelligence();
    void ServerRequestCachedDriverInfo(class ASimVehicle* SimVehicle);
    void ServerRequestActorLog(const class AStructure* Structure, const uint32 PageIndex);
    void ServerRequestActivityLog(class ASimPlayerState* TargetPlayerState);
    void ServerRepairVehicle(class AAssemblyStation* AssemblyStation, class ASimVehicle* TargetSimVehicle);
    void ServerRefuelActorInUse(const FName FuelCodeName, class AActor* RefuelSourceActor, class AActor* RefuelTargetActor);
    void ServerReconnectToVoiceChat();
    void ServerReceieveInfo();
    void ServerQueueForDeployment(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery);
    void ServerProcessCommand(int32 ID, const TArray<uint8>& Data);
    void ServerPlaceTrench(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    void ServerPlaceCalloutMarker(const int8 CalloutInfoIndex, const FVector_NetQuantize Location);
    void ServerPickUpFactoryOrder(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, FString TargetOrderOnlineID);
    void ServerPerformCallOut(const int8 CalloutInfoIndex);
    void ServerPackageShippable(class AActor* ShippableActor, const bool bWantsItPackaged, const bool bIsCargoOnly);
    void ServerOpenVehicleInventory(class ASimVehicle* SimVehicle);
    void ServerOnUserResetAFKTimer();
    void ServerOnPlayerLogOut();
    void ServerOnNewSpawnPointAccessed(class AActor* AccessedBaseActor);
    void ServerJoinWar(const EFactionId TeamId);
    void ServerGetTravelInfo(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery);
    void ServerGenerateVivoxChannelJoinToken(const EVoiceChannelType ChannelType, FString ChannelName, FString AccountSIPAddress, FString ChannelSIPAddress);
    void ServerFullRepair(class AVehicleFactory* VehicleFactory);
    void ServerFlagDisruptivePlacement(class ATeamStructure* TeamStructure);
    void ServerEnterRocketLaunchCode(const FRocketLaunchCodeRequest& Request);
    void ServerEjectDriver();
    void ServerEditSignPost(const FText& Text, class ASignPost* TargetSignPost);
    void ServerDropLargeItem();
    void ServerDropItem(class UItemHolderComponent* ItemHolder, const int8 ItemIndex);
    void ServerDrainPipes(class AStructure* Structure);
    void ServerDetachUserComponents();
    void ServerDetachLargeItem(class AActor* DetachTarget, const uint8 Index);
    void ServerDestroySignPost(class ASignPost* TargetSignPost);
    void ServerDeployLargeItem(const FVector& Location, const FRotator& Rotation);
    void ServerDemolishVehicle(class ASimVehicle* TargetVehicle);
    void ServerDemolishStructure(class AStructure* Structure);
    void ServerCrateItems(class UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    void ServerConvertPatient(class UHospitalComponent* HospitalComponent);
    void ServerConfirmAdminDestroy(const FName ObjectName);
    void ServerCommend(FString PlayerOnlineId);
    void ServerCommandStringID(FString ID);
    void ServerCommandID(int8 ID);
    void ServerClearSquad(class AActor* Actor);
    void ServerClaimStructure(class AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed, const bool bIsMultiClaim);
    void ServerClaimResourceConverterOrder(class AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    void ServerClaimRefinementOrder(class ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType);
    void ServerChat(FString Message, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage);
    void ServerChangeVehicleFuelType(class ASimVehicle* SimVehicle);
    void ServerChangeFactoryOrderAccess(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId);
    void ServerCancelRocketLaunch(class ARocketFacility* RocketFacility);
    void ServerCancelRetrieval();
    void ServerCancelRefinementOrder(class ARefinery* TargetRefinery, const int32 RefinableItemIndex);
    void ServerCancelPackaging();
    void ServerCancelFactoryOrder(class USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type);
    void ServerBuildVehicleFromStructure(class AActor* BuildLocationActor, const FName CodeName, const bool bIsPrototype, const FName BuildLocationTag);
    void ServerBuildVehicle(const FName CodeName, const FVector& Location, const FRotator& Rotation);
    void ServerBuildStructureFromStructure(class AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype);
    void ServerBuildStructure(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    void ServerBuildRailVehicle(const FName CodeName, const FRepSnapInfo SnapInfo);
    void ServerAttachUserComponents(class AActor* AssociatedActor);
    void ServerAttachLargeItem(class AActor* AttachTarget, const uint8 Index);
    void ServerAssignSquad(class AActor* Actor, const int32 NewSquadID);
    void ServerAssembleStructureOrVehicle(class AAssemblyStation* AssemblyStation, const FName CodeName, const int32 SelectedSquadID);
    void OnRep_UserComponents();
    void OnRep_PlaceInDeploymentQueue();
    void OnClientTravelWaitComplete(FString URL);
    void MaybeRequestGarrisonInfo();
    void DisconnectWarService();
    void DeleteMapPost(FString OnlineID);
    void DebugRecreateLandscapeHoles();
    void DebugDrawCurrentLandscape();
    void ConnectWarService();
    void ClientWorldChatMessage(FString Message, FString SenderName, FString SenderRegimentTag, FString SenderOnlineId, const uint8 SenderTeamID, const EChatChannel Channel, const EChatLanguage BroadcastLanguage, const EWorldConquestMapId MapId, const bool bReportingWhisperToSelf, const bool bIsEnabled);
    void ClientWarEndingAlert(int32 SecondsUntilWarEnd, int32 Duration);
    void ClientVoiceLogin(const FVoiceLoginInfo& VoiceLoginInfo);
    void ClientUpdateUTCOffset(const int64 ServerDateTimeTicks);
    void ClientUpdateShardConfig(FClientShardConfig ClientShardConfig);
    void ClientUpdateRegionMinimalData(const FRegionMinimalData& RegionMinimalData);
    void ClientUpdateRegionLog(const FRegionLogPage& RegionLogPage, const uint32 MaxAvailablePages);
    void ClientUpdateCachedDriverInfo(class ASimVehicle* SimVehicle, FString OnlineID, FString PlayerName);
    void ClientUpdateActorLog(const FActorLogPage& LogPage, const uint32 PageCount);
    void ClientUpdateActivityLog(const FPlayerActivity& Activity);
    void ClientUnstuckMessage(const EUnstuckMessage UnstuckMessage, const int32 Value);
    void ClientTravelToWorldConquestMap(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint);
    void ClientTravelToHomeRegion(FRegionConnectionInfo RegionConnectionInfo);
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace, class ASimCharacter* SimCharacter);
    void ClientTimeResponse(float RequestTime, float ServerTime);
    void ClientTeleportToMapMarker(FString TargetMapMarkerName);
    void ClientTeamKillMessage(FString KillerName, FString DeadPlayerName, const EDamageSource DamageSource);
    void ClientSyncWorldPlayerId(FString ID);
    void ClientSyncTravelMaps(const TArray<FRegionConnectionInfo>& TravelMaps);
    void ClientSyncTimeToNextWar(const int32 Seconds);
    void ClientSyncStructureStatus(class AStructure* TargetStructure, const EFactionId FactionId, const int32 SquadId, const int64 ClaimTime, const class AStructure* DecayPreventer);
    void ClientSyncStructureBuilderInfo(class AStructure* TargetStructure, FString BuilderOnlineID, FString BuilderName);
    void ClientSyncStatsForNearbyStructures(const TArray<FStructureStats>& StatList);
    void ClientSyncStaticRegionMapData(const FRegionMapData& StaticMapData);
    void ClientSyncReplicatedTweakables(const FWarReplicatedTweakables& NewWarRepTweakables);
    void ClientSyncMapIntelligence(const bool bOnlySyncIfMapIsOpen);
    void ClientSyncGameplayParams(const FGameplayParams& GameplayParams);
    void ClientSyncDynamicRegionMapData(const FRegionMapData& RegionMapData);
    void ClientStopSpectateTargetTick();
    void ClientStartRespawnTimer(const float RespawnTime);
    void ClientSimReset(const bool bInIsLeavingDueToServerTravel);
    void ClientShowWeatherStationResponse(const uint8 Response);
    void ClientShowVehicleStockpileResponse(const EVehicleStockpileResponse Response);
    void ClientShowVehicleLostMessage(FString PlayerName);
    void ClientShowUnrestrictedNotification(const ERestrictedState UnrestrictedState);
    void ClientShowTravelReservationAlert();
    void ClientShowTeamKillWarning();
    void ClientShowStockpileAlert(FStockpileBroadcastAlertInfo StockpileBroadcastAlertInfo);
    void ClientShowSquadResponse(class AActor* Actor, const EAssignCoalitionResponse Response);
    void ClientShowSquadClaimedNotification(const FName CodeName, const int32 SquadId);
    void ClientShowShippableResponse(const uint8 ShippableStatus);
    void ClientShowRocketFacilityResult(const class ARocketFacility* RocketFacility, const ERocketConsoleActionResult ActionResult);
    void ClientShowRocketFacilityResponse(const class ARocketFacility* RocketFacility, const ERocketLaunchResponse Response);
    void ClientShowResistanceStart(const EFactionId ConquestWinner);
    void ClientShowRecentItem(const FName& ItemCodeName, const int32 StackSize);
    void ClientShowPlacementStatus(const EPlacementStatus PlacementStatus);
    void ClientShowMapNames(const bool bShow);
    void ClientShowLongRangeArtilleryResponse(const uint8 Response);
    void ClientShowIntelCenterResponse(const uint8 Response);
    void ClientShowHUDNotification(const EHUDNotification HUDNotification);
    void ClientShowHUDCodeNameNotification(const EHUDNotification HUDNotification, const FName CodeName);
    void ClientShowHUDClaimNotification(const EHUDNotification HUDNotification, const class AActor* Actor, const int32 SquadId);
    void ClientShowHUDActorNotification(const EHUDNotification HUDNotification, const class AActor* Actor);
    void ClientShowHospitalResponse(const EHospitalResponse Response);
    void ClientShowEventVictory(const EFactionId FactionWinner);
    void ClientShowDeployResponse(const EDeployResponse DeployResponse);
    void ClientShowDeploymentFailureNotification(const uint8 Reason);
    void ClientShowConquestVictory(const FConquestOverNotificationInfo ConquestOverInfo);
    void ClientShowChatOnCooldown();
    void ClientShowBuildResponse(const FBuildResponse& BuildResponse);
    void ClientShowBorderBaseResponse(const uint8 Response);
    void ClientShowAchievementCompleted(const FWarAchievementCompletedInfo CompletionInfo);
    void ClientSetVehicleReplicatedBasedMovement(class ASimVehicle* Vehicle, const FBasedMovementInfo& MovementInfo);
    void ClientSetTeleport(bool bIsMapTeleport, bool bIsAwaitingClick);
    void ClientSetSpawnPointResponse(const class AActor* AssignableSP, const uint8 Response);
    void ClientSetShowVisibilityDebug(const bool bShow);
    void ClientSetShowStructureStats(const bool bShow);
    void ClientSetShowHP(const bool Show);
    void ClientSetRepTrainMovement(class ARailVehicle* RailVehicle, const FRepTrainMovement& RepTrainMovement);
    void ClientSetItemAsStackableCheat(const FName& ItemCodeName);
    void ClientSetFastBuild(const bool bIsFastBuild);
    void ClientSetCinematicCamera(const float NewCameraRotateSpeed, const float NewCameraZoom, const bool bInAreCharacterStencilsEnabled);
    void ClientSetCameraFlags(int32 Flags);
    void ClientSendAutoRestartMessage(const float SecsToRestart);
    void ClientRestrictedMessage(FString PlayerName, const ERestrictedState RestrictedState, const int32 DurationMinutes);
    void ClientRespawnAtAssignedPoint(const uint8 Category);
    void ClientRespawnAlert();
    void ClientResistanceStartingAlert(int32 SecondsUntilResistanceEnd, int32 Duration);
    void ClientResetStructureClaimStatus(class AStructure* TargetStructure);
    void ClientResetRetrieveState(const ETransactionResponse Response);
    void ClientRefinementOrderResponse(const ERefinementOrderResponse Response);
    void ClientReconnectToVoiceChat();
    void ClientReceiveTravelInfo(const FRegionConnectionInfo TravelInfo, const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool Success, bool bIsRecovery);
    void ClientReceiveTransactionResponse(const ETransactionResponse Response);
    void ClientReceiveTechResponse(const uint8 TechResponse);
    void ClientReceiveStockpileAccessEvents(class UGenericStockpileComponent* GenericStockpileComponent, const EStockpileCategoryType CategoryType, const TArray<FStockpileAccessEvent>& Events);
    void ClientReceiveRocketUpdateAlert(const FRPCRocketPreLaunchUpdateAlert& LaunchUpdateAlert);
    void ClientReceiveRocketAlert(const FRPCRocketPreLaunchAlert& LaunchAlert);
    void ClientReceiveRegionMinimalData(const EWorldConquestMapId MapId, const FRegionMinimalData& RegionMinimalData);
    void ClientReceiveOnlineIDInfo(FString OnlineID);
    void ClientReceiveNetworkTechStatus(const class AStructure* Structure, const FTechTreeComponentNetworkStatus NetworkStatus);
    void ClientReceiveMapPostDetails(const int32 MapPostID, const FMapPostDetails MapPostDetails);
    void ClientReceiveMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber, const FMapItemDetails& MapItemDetails);
    void ClientReceiveListeningAreaDetails(const TArray<FListeningAreaDebugData>& InListeningAreaDetails);
    void ClientReceiveInfo();
    void ClientReceiveEmptyMapPostDetails(const int32 MapPostID);
    void ClientReceiveEmptyMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber);
    void ClientQueueMainMenuPrompt(const EMainMenuPromptType PromptType);
    void ClientProcessCommand(int32 ID, const TArray<uint8>& Data);
    void ClientOpenVehicleResponse(class ASimVehicle* SimVehicle, const EOpenVehicleInventoryResponse OpenVehicleInventoryResponse);
    void ClientOnVehicleMountError();
    void ClientOnVehicleExitFailure();
    void ClientOnVacateSuccess();
    void ClientOnUseComponentUsed(class UUseComponent* UseComponent);
    void ClientOnShippableResponse(const uint8 ShippableStatus);
    void ClientOnServerTravelAllowed();
    void ClientOnRocketGroundZeroEvent(const FVector_NetQuantize Location);
    void ClientOnProfileDownloadComplete(const bool bIsRegionTravelling);
    void ClientOnOutgoingSensorPing();
    void ClientOnOccupySuccess();
    void ClientOnOccupyError();
    void ClientOnLongRangeArtilleryFireShellEvent(class AActor* LongRangeArtillery, const FVector_NetQuantize Location, ELongRangeArtilleryType LongRangeArtilleryType);
    void ClientOnIntelCenterFireListeningAreaEvent(class AActor* IntelCenter, const FVector_NetQuantize Location);
    void ClientOnIncomingSensorPing(FSensorPingResponse SensorPingResponse);
    void ClientOnChannelJoinTokenReceived(const EVoiceChannelType ChannelType, FString ChannelName, FString ChannelJoinToken);
    void ClientNotifyCommend(FString PlayerName, FString OnlineID);
    void ClientModDestroySignPost();
    void ClientJoinWarResponse(const EJoinWarResponse ResponseType, const FGameplayParams& GameplayParams, bool bHadTravelReservation, uint32 StructureLayers, int32 ShardId, const FSignedPayload& SignedPlayerServerData);
    void ClientGotoScreen(const ESimScreen SimScreen);
    void ClientGetSquadIdFromSquadName(FString SquadName);
    void ClientGenerateWarStartImage(const float ImageWidth, const FVector2D MapPositionOffset);
    void ClientFullRepairResponse(const EFullRepairResponse Response);
    void ClientFriendlyFireMessage(FString PlayerName);
    void ClientFactionLockAlert(const EFactionId TeamId, const FTimespan& FactionLockTimespan);
    void ClientExitRecoveryMode();
    void ClientEnterRecoveryMode(float Duration);
    void ClientEnterBuildGhostMode(const FName& StructureCodeName);
    void ClientDrawDebugVehicleHitbox(class ASimVehicle* SimVehicle, FVector Position, FVector Extents, FQuat Rotation, TEnumAsByte<ECollisionResponse> CollisionResponseToPawn);
    void ClientDisruptivePlacementMessage(FString PlayerName, const FName CodeName, const FWarGridCoordinate WarGridCoordinate);
    void ClientCreateDebugMapPost(const FText& Text);
    void ClientCopyToClipboard(FString String);
    void ClientConfirmAdminDestroy(const FName ObjectName);
    void ClientClearSquadList();
    void ClientClearAdminAlertMessages();
    void ClientClaimStructureMulti(const int32 Amount, const bool bIsRefresh);
    void ClientChatMessageWithTag(const EChatChannel Channel, const class APlayerState* SenderPlayerState, FString SenderRegimentTag, FString MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled);
    void ClientChatMessage(const EChatChannel Channel, const class APlayerState* SenderPlayerState, FString MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled);
    void ClientBeaconLoadTest(FRegionConnectionInfo RegionConnectionInfo, FString MapCodename, uint32 NumBeacons, uint32 Interval, uint32 Duration);
    void ClientAllowHammerToBuildAll(const bool bAllowHammerToBuildAll);
    void ClientAlertWarOpsMessage(const FAlertWarOpsMessageRPCInfo AlertInfo);
    void ClientAlertTownUnderAttack(const FAlertTownUnderAttackRPCInfo AlertInfo);
    void ClientAlertTownDestroyed(const FAlertTownDestroyedRPCInfo AlertInfo);
    void ClientAlertTownBuilt(const FAlertTownBuiltRPCInfo AlertInfo);
    void ClientAlertTeamKill();
    void ClientAlertMessage(FString MsgString, const float DurationSecs);
    void ClientAlertAFKTimeoutPending();
    void ClientAdminMessageUnformatted(FString Message);
    void ClientAdminMessageList(const TArray<FString>& MessageList);
    void ClientAdminMessage(FString S);
    void ClientAdminDownloadClientConfig(const FName ClientConfigTypeName);
    void ClientAdminAlertMessage(FString MsgString, const float DurationSecs);
    void Client_ShowTargetingRangeResults(float Damage, float Range);
    void Client_ShowHUDNotificationDuration(const FText& NotificationText, float Duration);
    void Client_ShowHUDNotification(const FText& NotificationText);
    void Client_ShowCommendNotification(const FText& NotificationText);
    void CaptureDebugScreenshot();
}; // Size: 0x1250

class ASimPlayerState : public AWarPlayerState
{
    int8 TeamId;                                                                      // 0x0348 (size: 0x1)
    int8 Level;                                                                       // 0x0349 (size: 0x1)
    int8 Rank;                                                                        // 0x034A (size: 0x1)
    int32 XP;                                                                         // 0x034C (size: 0x4)
    int16 CP;                                                                         // 0x0350 (size: 0x2)
    int8 CPToGive;                                                                    // 0x0352 (size: 0x1)
    uint8 SquadLeaderDirection;                                                       // 0x0353 (size: 0x1)
    int64 TimeOfLastVoteKick;                                                         // 0x0358 (size: 0x8)
    uint16 DailyVoteKickCount;                                                        // 0x0360 (size: 0x2)
    ERestrictedState RestrictedState;                                                 // 0x0362 (size: 0x1)
    int32 SquadId;                                                                    // 0x0364 (size: 0x4)
    int32 InactiveSquadIds;                                                           // 0x0368 (size: 0xC)
    int32 RegimentID;                                                                 // 0x0374 (size: 0x4)

    void OnRep_SquadId(const int32 PreviousSquadId);
    void OnRep_RestrictedState();
    void OnRep_RegimentId();
    void OnRep_InactiveSquadIds();
    void ClientSetIsGodMode(const bool bIsGodMode);
}; // Size: 0x530

class ASimVehicle : public AWarCharacter
{
    FVector BuildOffset;                                                              // 0x08D8 (size: 0xC)
    FRotator BuildRotation;                                                           // 0x08E4 (size: 0xC)
    TWeakObjectPtr<class UPhysicalMaterial> RearTraceMaterial;                        // 0x093C (size: 0x8)
    TWeakObjectPtr<class UPhysicalMaterial> FrontTraceMaterial;                       // 0x0944 (size: 0x8)
    TWeakObjectPtr<class AActor> FrontTraceActor;                                     // 0x094C (size: 0x8)
    TWeakObjectPtr<class AActor> RearTraceActor;                                      // 0x0954 (size: 0x8)
    uint8 bInterpolatePitch;                                                          // 0x09E4 (size: 0x1)
    FText DisplayName;                                                                // 0x09E8 (size: 0x18)
    FText ChassisName;                                                                // 0x0A00 (size: 0x18)
    FText Description;                                                                // 0x0A18 (size: 0x18)
    class UTexture* Icon;                                                             // 0x0A30 (size: 0x8)
    ETechID TechID;                                                                   // 0x0A38 (size: 0x2)
    FShippableInfo ShippableInfo;                                                     // 0x0A3C (size: 0xC)
    TSubclassOf<class AVehicleBuildSite> BuildSiteClass;                              // 0x0A48 (size: 0x8)
    EVehicleBuildType VehicleBuildType;                                               // 0x0A50 (size: 0x1)
    EFactionId FactionVariant;                                                        // 0x0A51 (size: 0x1)
    FName CodeName;                                                                   // 0x0A54 (size: 0x8)
    EVehicleProfileType VehicleProfileType;                                           // 0x0A5C (size: 0x1)
    EVehicleMovementProfileType VehicleMovementProfileType;                           // 0x0A5D (size: 0x1)
    EArmourType ArmourType;                                                           // 0x0A5E (size: 0x1)
    bool bCanDriveOverTrenches;                                                       // 0x0A5F (size: 0x1)
    float DepthOffset;                                                                // 0x0A60 (size: 0x4)
    float MinShipRammingVelocityChangeForDestruction;                                 // 0x0A68 (size: 0x4)
    bool bIgnoreNonRootComponentsDuringVehicleMovement;                               // 0x0A6C (size: 0x1)
    bool bCanCarryVehicles;                                                           // 0x0A6D (size: 0x1)
    TArray<FArmourDirectionBoneNamesList> ArmourDirectionBoneNamesList;               // 0x0A70 (size: 0x10)
    int32 Health;                                                                     // 0x0A80 (size: 0x4)
    int32 TankArmour;                                                                 // 0x0A84 (size: 0x4)
    uint8 Subsystems;                                                                 // 0x0A88 (size: 0x1)
    uint8 ActiveModularMounts;                                                        // 0x0A89 (size: 0x2)
    FFuelTank FuelTank;                                                               // 0x0A8C (size: 0x14)
    uint8 bAllowAnySeatSwitches;                                                      // 0x0AA0 (size: 0x1)
    uint8 bCanUseStructures;                                                          // 0x0AA0 (size: 0x1)
    uint8 bIsStockpilable;                                                            // 0x0AA0 (size: 0x1)
    uint8 bIsReserveStockpiled;                                                       // 0x0AA0 (size: 0x1)
    uint8 bIsUsableFromVehicle;                                                       // 0x0AA0 (size: 0x1)
    uint8 bCanBeDemolished;                                                           // 0x0AA0 (size: 0x1)
    uint8 bCanBeDisabled;                                                             // 0x0AA1 (size: 0x1)
    uint8 bAllowItemDrop;                                                             // 0x0AA1 (size: 0x1)
    uint8 bRestrictMovementFromItems;                                                 // 0x0AA1 (size: 0x1)
    uint8 bIsVehicleOn;                                                               // 0x0AA1 (size: 0x1)
    uint8 bIsVehicleLocked;                                                           // 0x0AA1 (size: 0x1)
    uint8 bIsCommanderHatchOpen;                                                      // 0x0AA1 (size: 0x1)
    uint8 bIsReservable;                                                              // 0x0AA1 (size: 0x1)
    uint8 bIsShipCargo;                                                               // 0x0AA2 (size: 0x1)
    uint8 bAllowsDirectPackaging;                                                     // 0x0AA3 (size: 0x1)
    uint8 TeamId;                                                                     // 0x0AA5 (size: 0x1)
    float DepthCuttoffForSwimDamage;                                                  // 0x0AA8 (size: 0x4)
    int32 SquadLockDuration;                                                          // 0x0AAC (size: 0x4)
    int32 CommanderIndex;                                                             // 0x0AB0 (size: 0x4)
    int32 MaxPlatformPlayers;                                                         // 0x0AB4 (size: 0x4)
    class UStaticMeshComponent* DestroyedMesh;                                        // 0x0AB8 (size: 0x8)
    class UParticleSystemComponent* MinorDamagePS;                                    // 0x0AC0 (size: 0x8)
    class UParticleSystemComponent* MajorDamagePS;                                    // 0x0AC8 (size: 0x8)
    class UParticleSystem* DestroyedFX;                                               // 0x0AD0 (size: 0x8)
    class UParticleSystemComponent* DisabledTurretFX;                                 // 0x0AD8 (size: 0x8)
    class UParticleSystemComponent* DisabledTurret2FX;                                // 0x0AE0 (size: 0x8)
    class UParticleSystemComponent* DisabledTurret3FX;                                // 0x0AE8 (size: 0x8)
    class UParticleSystemComponent* DisabledTurret4FX;                                // 0x0AF0 (size: 0x8)
    class UParticleSystemComponent* DisabledTurret5FX;                                // 0x0AF8 (size: 0x8)
    class UParticleSystem* PenetrateFX;                                               // 0x0B00 (size: 0x8)
    class USoundCue* PenetrateSoundCue;                                               // 0x0B08 (size: 0x8)
    class UParticleSystem* PenetrateSmallFX;                                          // 0x0B10 (size: 0x8)
    class USoundCue* PenetrateSmallSoundCue;                                          // 0x0B18 (size: 0x8)
    class UParticleSystem* DeflectFX;                                                 // 0x0B20 (size: 0x8)
    class USoundCue* DeflectSoundCue;                                                 // 0x0B28 (size: 0x8)
    class USoundCue* DestroyedSoundCue;                                               // 0x0B30 (size: 0x8)
    class USoundCue* BreakdownSoundCue;                                               // 0x0B38 (size: 0x8)
    class USoundCue* BoostSoundCue;                                                   // 0x0B40 (size: 0x8)
    class USoundCue* CharatcerHitSound;                                               // 0x0B48 (size: 0x8)
    class USoundCue* EnvironmentHitSound;                                             // 0x0B50 (size: 0x8)
    class USoundCue* FrozenEnterSound;                                                // 0x0B58 (size: 0x8)
    class UAudioComponent* DriveLoop;                                                 // 0x0B60 (size: 0x8)
    class UAudioComponent* BackUpSFXLoop;                                             // 0x0B68 (size: 0x8)
    class USoundCue* LockSound;                                                       // 0x0B70 (size: 0x8)
    FHornData Horn;                                                                   // 0x0B78 (size: 0x10)
    FVehicleMapIntelligenceProvider VehicleMapIntelligenceProvider;                   // 0x0B88 (size: 0x20)
    class UPlayerCameraRigComponent* CameraRigComponent;                              // 0x0BA8 (size: 0x8)
    class USceneComponent* FrontAxleCastLocation;                                     // 0x0BB0 (size: 0x8)
    class USceneComponent* RearAxleCastLocation;                                      // 0x0BB8 (size: 0x8)
    class USceneComponent* FrontLeftRollCastLocation;                                 // 0x0BC0 (size: 0x8)
    class USceneComponent* FrontRightRollCastLocation;                                // 0x0BC8 (size: 0x8)
    class USceneComponent* LeftSideTrackLocation;                                     // 0x0BD0 (size: 0x8)
    class USceneComponent* RightSideTrackLocation;                                    // 0x0BD8 (size: 0x8)
    class UBoxComponent* BoxCollision;                                                // 0x0BE0 (size: 0x8)
    class UBoxComponent* PassengerArea;                                               // 0x0BF8 (size: 0x8)
    class UAFKTimeoutComponent* AFKTimeoutComponent;                                  // 0x0C00 (size: 0x8)
    class UItemHolderComponent* ItemHolder;                                           // 0x0C08 (size: 0x8)
    TArray<FItemInstance> ItemHolderItems;                                            // 0x0C10 (size: 0x10)
    TArray<FTreadActorInfo> TreadInfo;                                                // 0x0C30 (size: 0x10)
    float DefaultTreadTime;                                                           // 0x0C40 (size: 0x4)
    FTreadData Treads;                                                                // 0x0C44 (size: 0x1C)
    class UCurveFloat* LinearSpeedToTurnSpeedMapCurve;                                // 0x0C60 (size: 0x8)
    class UCurveFloat* LinearSpeedToWaterTurnSpeedMapCurve;                           // 0x0C68 (size: 0x8)
    float BoostSpeedModifier;                                                         // 0x0C70 (size: 0x4)
    float BoostGasUsageModifier;                                                      // 0x0C74 (size: 0x4)
    TArray<FMuzzleInfo> MuzzleInfo;                                                   // 0x0C78 (size: 0x10)
    EMapIconType MapIconType;                                                         // 0x0C90 (size: 0x1)
    bool bCanMoveUnderBridges;                                                        // 0x0C91 (size: 0x1)
    bool bUsesTraces;                                                                 // 0x0C92 (size: 0x1)
    EServerAnimTickMode ServerAnimTickMode;                                           // 0x0C94 (size: 0x1)
    int32 CoalitionId;                                                                // 0x0CF8 (size: 0x4)
    ETechTreeTier Tier;                                                               // 0x0CFC (size: 0x1)
    bool bIncludeInRecoverySaves;                                                     // 0x0D38 (size: 0x1)
    FName OriginatorBuildSiteName;                                                    // 0x0D3C (size: 0x8)
    bool bDoPenetratingShotsReduceTankArmour;                                         // 0x0D44 (size: 0x1)
    TArray<class UVehicleSeatComponent*> SeatComponents;                              // 0x0D48 (size: 0x10)
    TArray<class USeatComponent*> ModularSeatComponents;                              // 0x0D58 (size: 0x10)
    TArray<class UGenericStockpileComponent*> StockpileComponents;                    // 0x0D68 (size: 0x10)
    FString LockingPlayerId;                                                          // 0x0DB8 (size: 0x10)
    FDateTime TimeOfLastUseCoalition;                                                 // 0x0DC8 (size: 0x8)
    FString BuilderPlayerOnlineID;                                                    // 0x0E80 (size: 0x10)
    int32 VehiclesPerCrateBonusQuantity;                                              // 0x0FC0 (size: 0x4)
    FDateTime LastSavedTime;                                                          // 0x0FC8 (size: 0x8)
    bool bSupportsFastAttachedMove;                                                   // 0x0FD0 (size: 0x1)
    class UStaticMesh* PackagedMesh;                                                  // 0x0FD8 (size: 0x8)
    float ViewabilityRadiusExtension;                                                 // 0x0FE4 (size: 0x4)
    class UFloodableComponent* FloodableComponent;                                    // 0x0FF0 (size: 0x8)
    TArray<class ASimVehicle*> CarriedVehicles;                                       // 0x0FF8 (size: 0x10)
    TArray<FName> CarriedVehicleNames;                                                // 0x1008 (size: 0x10)
    bool bCargoSealed;                                                                // 0x1018 (size: 0x1)
    float TravelBorderSizeOverride;                                                   // 0x101C (size: 0x4)
    FVehicleDeploymentLogic DeploymentLogic;                                          // 0x1020 (size: 0x20)
    bool bShowOnMapIntel;                                                             // 0x1040 (size: 0x1)
    bool bCheckPassengerEncumbrance;                                                  // 0x1041 (size: 0x1)
    bool bIsVisibleOnSonar;                                                           // 0x1042 (size: 0x1)
    bool bDestroysIceWhenWaterTravelling;                                             // 0x1043 (size: 0x1)
    FFuelTankerInfo FuelTankerInfo;                                                   // 0x1050 (size: 0x98)

    void VehicleCollisionTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ServerSwitchSeats(int32 NewSeatIndex);
    void ServerStartBoost();
    void ServerOnMount(class ASimCharacter* PlayerCharacter);
    void ServerFire();
    void ServerDeployGunner();
    void OnRep_Tier();
    void OnRep_TeamID();
    void OnRep_TankArmour();
    void OnRep_Subsystems(const uint8 PreviousSubsystems);
    void OnRep_ItemHolderItems();
    void OnRep_IsVehicleOn();
    void OnRep_IsCommanderHatchOpen();
    void OnRep_Health();
    void OnRep_FuelTankerInfo();
    void OnRep_FuelTank(const FFuelTank& PreviousFuelTank);
    void OnRep_CargoSealed(bool bPrevCargoSealed);
    void OnRep_ActiveModularMounts();
    void MulticastPlayLockFX();
    void MulticastPassengerExited(int32 SeatIndex);
    void MulticastPassengerEntered(int32 SeatIndex);
    void MulticastOnBoostEntered();
    void MulticastApplyPenetrateHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    void MulticastApplyFatalHit(bool bDisableCollisions);
    void MulticastApplyDeflectHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    float GetTurnAngle();
    bool GetTopHatchOpen();
    void ClientEndActivityState(class ASimCharacter* CharacterToInterrupt);
    void ClientAddDriverSuppression(const float SuppressAmount);
    void BPOnVehicleOn(bool IsOn);
    void AllFire();
}; // Size: 0x10F0

class ASimWaterVolume : public ASimPainCausingVolume
{
}; // Size: 0x288

class ASimulatedBombardment : public AActor
{
}; // Size: 0x250

class ASkySphere : public AActor
{

    void BP_UpdateSunDirection();
}; // Size: 0x218

class ASmokeGrenadeExplosionEffect : public AWarExplosionEffect
{
    class UObscuringSphereComponent* ObscuringSphere;                                 // 0x0340 (size: 0x8)
    float MinimumVisibilityRadius;                                                    // 0x0348 (size: 0x4)
    class UCurveFloat* VisibilityRadiusCurve;                                         // 0x0350 (size: 0x8)

}; // Size: 0x358

class ASoldierItemPickUp : public AItemPickup
{
    class USkeletalMeshComponent* Torso;                                              // 0x03F0 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x03F8 (size: 0x8)
    class USkeletalMeshComponent* Head;                                               // 0x0400 (size: 0x8)
    class USkeletalMeshComponent* Hands;                                              // 0x0408 (size: 0x8)
    class USkeletalMeshComponent* Helmet;                                             // 0x0410 (size: 0x8)

}; // Size: 0x418

class ASpecializedFactory : public ATeamStructure
{
    class USpecializedFactoryComponent* SpecializedFactoryComponent;                  // 0x0810 (size: 0x8)

}; // Size: 0x820

class ASpecializedFactoryBuildSite : public AStructureBuildSite
{
    class USpecializedFactoryComponent* SpecializedFactoryComponent;                  // 0x07E0 (size: 0x8)

}; // Size: 0x7F0

class ASpiderMech : public ATankBase
{
    float GunnerYaw;                                                                  // 0x12B0 (size: 0x4)
    FVector2D AltGunnerYawAndPitch;                                                   // 0x12B4 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12BC (size: 0x4)
    int32 AltStashedAmmo;                                                             // 0x12C0 (size: 0x4)

}; // Size: 0x12D0

class ASpoolProjectile : public AWarProjectile
{
    class UAudioComponent* FiringAudioComponent;                                      // 0x0328 (size: 0x8)
    FVector AccuracyModifiedVelocity;                                                 // 0x0330 (size: 0xC)
    FVector InitialVelocity;                                                          // 0x033C (size: 0xC)
    float SpoolDuration;                                                              // 0x0348 (size: 0x4)
    float LerpStartDistance;                                                          // 0x034C (size: 0x4)
    float LerpDuration;                                                               // 0x0350 (size: 0x4)

    void OnRep_InitialVelocity();
}; // Size: 0x378

class AStaticBase : public ATownHall
{
    class UAITurretsControllerComponent* AITurretsController;                         // 0x08C0 (size: 0x8)
    FDynamicTierInfo DynamicTierInfo;                                                 // 0x08C8 (size: 0x10)
    bool bIsVictoryTownRep;                                                           // 0x08D8 (size: 0x1)
    int32 TownConnectionLevel;                                                        // 0x08DC (size: 0x4)

    void OnRep_IsVictoryTown();
}; // Size: 0x8F0

class AStaticCrane : public ATeamStructure
{
    class USkeletalMeshComponent* MainMesh;                                           // 0x0818 (size: 0x8)
    class UStaticMeshComponent* BaseMesh;                                             // 0x0820 (size: 0x8)
    class UStaticMeshComponent* RopeMesh;                                             // 0x0828 (size: 0x8)
    class UBoxComponent* ShippableCollision;                                          // 0x0830 (size: 0x8)
    class UAudioComponent* ArmMovementSFXLoop;                                        // 0x0838 (size: 0x8)
    class UAudioComponent* DeployingSFXLoop;                                          // 0x0840 (size: 0x8)
    class UAudioComponent* PulleyMovementSFXLoop;                                     // 0x0848 (size: 0x8)
    class UBuildSocketComponent* PowerSocket;                                         // 0x0850 (size: 0x8)
    class UFacilityLightComponent* LightComponent;                                    // 0x0858 (size: 0x8)
    class UCraneComponent* CraneComponent;                                            // 0x0860 (size: 0x8)
    FPowerGridInfo PowerGridInfo;                                                     // 0x0868 (size: 0x5C)

    void OnRep_PowerGridInfo();
}; // Size: 0x8D0

class AStickyBombExplosive : public AExplosive
{
    float TotalFuseTime;                                                              // 0x02D8 (size: 0x4)
    float FuseTime;                                                                   // 0x02DC (size: 0x4)

}; // Size: 0x2E8

class AStickyBombProjectile : public AWarProjectile
{
    class USkeletalMeshComponent* BombMesh;                                           // 0x0328 (size: 0x8)
    class USoundCue* AttachCue;                                                       // 0x0330 (size: 0x8)
    float DetonationDelay;                                                            // 0x0338 (size: 0x4)

    void CallDetonateWithLastHitResult();
}; // Size: 0x3D0

class AStorageBox : public ABuildableStructure
{
    class UStaticMeshComponent* MeshComponent;                                        // 0x07F0 (size: 0x8)
    TArray<FItemInstance> ItemsToReplenish;                                           // 0x07F8 (size: 0x10)
    float ReplenishRate;                                                              // 0x0808 (size: 0x4)
    bool bReplenishFirstItem;                                                         // 0x080C (size: 0x1)
    bool bReplenishedOnce;                                                            // 0x080D (size: 0x1)

}; // Size: 0x820

class AStorageFacility : public ATunnelNode
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x0848 (size: 0x8)
    class UReserveStockpileComponent* ReserveStockpileComponent;                      // 0x0850 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x0858 (size: 0x8)
    class USceneComponent* TransferLocation;                                          // 0x0860 (size: 0x8)
    class UAITurretsControllerComponent* AITurretsController;                         // 0x0868 (size: 0x8)

}; // Size: 0x870

class AStorageFacilityBuildSite : public AStructureBuildSite
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x07E0 (size: 0x8)
    class UReserveStockpileComponent* ReserveStockpileComponent;                      // 0x07E8 (size: 0x8)
    class UCraneSpawnLocationComponent* CraneSpawnLocationComponent;                  // 0x07F0 (size: 0x8)

}; // Size: 0x800

class AStructure : public AActor
{
    TArray<FName> ConversionCodeNames;                                                // 0x0248 (size: 0x10)
    FName CodeName;                                                                   // 0x02EC (size: 0x8)
    FText ChassisName;                                                                // 0x02F8 (size: 0x18)
    FText DisplayName;                                                                // 0x0310 (size: 0x18)
    EStructureProfileType ProfileType;                                                // 0x0328 (size: 0x1)
    EArmourType ArmourType;                                                           // 0x0329 (size: 0x1)
    class UArrowComponent* ArrowComponent;                                            // 0x0330 (size: 0x8)
    class UBoxComponent* UseAreaBox;                                                  // 0x0338 (size: 0x8)
    class UBoxComponent* KillVolume;                                                  // 0x0340 (size: 0x8)
    class UParticleSystem* DestroyedFX;                                               // 0x0348 (size: 0x8)
    class USoundCue* DestroyedSoundCue;                                               // 0x0350 (size: 0x8)
    class UItemHolderComponent* ItemHolder;                                           // 0x0358 (size: 0x8)
    TArray<FItemInstance> ItemHolderItems;                                            // 0x0360 (size: 0x10)
    FActorLog ActorLog;                                                               // 0x0370 (size: 0x10)
    ETechID TechID;                                                                   // 0x0380 (size: 0x2)
    TArray<ETechComponentID> TechComponentIDs;                                        // 0x0388 (size: 0x10)
    class UGarrisonComponent* GarrisonComponent;                                      // 0x0398 (size: 0x8)
    class UModularMountsComponent* ModularMountsComponent;                            // 0x03A0 (size: 0x8)
    class UInfrastructureComponent* InfrastructureComponent;                          // 0x03A8 (size: 0x8)
    class UMeshVisibilityComponent* MeshVisibilityComponent;                          // 0x03B0 (size: 0x8)
    int32 MaxHealth;                                                                  // 0x03B8 (size: 0x4)
    int32 Health;                                                                     // 0x03BC (size: 0x4)
    EDynamicTier DynamicTier;                                                         // 0x03C0 (size: 0x1)
    FName UpgradeStructureCodeName;                                                   // 0x03C4 (size: 0x8)
    EMapIconType MapIconType;                                                         // 0x03CC (size: 0x1)
    bool bIsMapIconVisibleToAll;                                                      // 0x03CD (size: 0x1)
    bool bIsBuildSiteMapIconVisible;                                                  // 0x03CE (size: 0x1)
    bool bCanBeDismantled;                                                            // 0x03CF (size: 0x1)
    bool bOverrideIsBurnable;                                                         // 0x03D0 (size: 0x1)
    bool bIsBurnable;                                                                 // 0x03D1 (size: 0x1)
    bool bLogWhenDestroyed;                                                           // 0x03D2 (size: 0x1)
    bool bIsTrackedClimbable;                                                         // 0x03D4 (size: 0x1)
    FVector DropLocationOffset;                                                       // 0x03D8 (size: 0xC)
    bool bRotateDropLocation;                                                         // 0x03E4 (size: 0x1)
    bool IsVaultable;                                                                 // 0x03E5 (size: 0x1)
    ESimScreen ScreenToUse;                                                           // 0x03E8 (size: 0x4)
    uint8 bIsDeployed;                                                                // 0x03EC (size: 0x1)
    float DecayRemainingTime;                                                         // 0x03F0 (size: 0x4)
    EMapIntelligenceType MapIntelligenceType;                                         // 0x03F4 (size: 0x1)
    uint8 StructureFlags;                                                             // 0x03F7 (size: 0x1)
    uint8 bIgnoreFriendlyFire;                                                        // 0x03F8 (size: 0x1)
    EStructureNetRelevancySize StructureNetRelevancySize;                             // 0x03FC (size: 0x4)
    bool bIsStockpilable;                                                             // 0x0402 (size: 0x1)
    bool bIsReserveStockpiled;                                                        // 0x0403 (size: 0x1)
    uint8 bProvidesBasedShelter;                                                      // 0x0404 (size: 0x1)
    bool bIsBuiltNearBorder;                                                          // 0x0428 (size: 0x1)
    bool bIgnoresRapidDecay;                                                          // 0x0429 (size: 0x1)
    bool bIsPrototype;                                                                // 0x042A (size: 0x1)
    bool bIsPowered;                                                                  // 0x042B (size: 0x1)
    float InteractionDistanceOverride;                                                // 0x042C (size: 0x4)
    FString BuilderPlayerOnlineID;                                                    // 0x0448 (size: 0x10)
    FString BuilderName;                                                              // 0x0458 (size: 0x10)
    FClaimStatus ClaimStatus;                                                         // 0x0468 (size: 0x28)
    uint8 BuildStepProgress;                                                          // 0x0490 (size: 0x1)
    TArray<FStructureBuildStep> BuildSteps;                                           // 0x0498 (size: 0x10)
    uint8 bHasMeshVisibilityComponent;                                                // 0x04A9 (size: 0x1)
    uint8 bIsBlankFortPiece;                                                          // 0x04A9 (size: 0x1)
    bool bAddLandscapeHolesOnBeginPlay;                                               // 0x04AA (size: 0x1)
    bool bRemoveLandscapeHolesOnDestroy;                                              // 0x04AB (size: 0x1)
    bool bHasLandscapeHoles;                                                          // 0x04AC (size: 0x1)
    bool bHasRemovedLandscapeHoles;                                                   // 0x04AD (size: 0x1)
    TWeakObjectPtr<class AStructureIsland> Island;                                    // 0x04B0 (size: 0x8)
    TArray<class UMultiplexedStaticMeshComponent*> MultiplexedStaticMeshComponents;   // 0x04B8 (size: 0x10)
    TArray<class UMultiplexedSkeletalMeshComponent*> MultiplexedSkeletalMeshComponents; // 0x04C8 (size: 0x10)
    class UStealthComponent* StealthComponent;                                        // 0x04D8 (size: 0x8)
    float Rainfall;                                                                   // 0x04E8 (size: 0x4)
    uint8 QuantizedRainfall;                                                          // 0x04F0 (size: 0x1)
    class UStaticMeshComponent* PuddleVisualsMesh;                                    // 0x04F8 (size: 0x8)
    bool bReceivesRainfall;                                                           // 0x0500 (size: 0x1)
    float StructureFlameCountFactor;                                                  // 0x0504 (size: 0x4)
    int32 DecaySupplyDrain;                                                           // 0x0508 (size: 0x4)
    EFireIntensity FireIntensity;                                                     // 0x050C (size: 0x1)
    float PreMitigationFireDamagePerTick;                                             // 0x0510 (size: 0x4)
    class UTemperatureModifierBoxComponent* BurningHeatArea;                          // 0x0518 (size: 0x8)
    class UTemperatureModifierBoxComponent* WarmingHeatArea;                          // 0x0520 (size: 0x8)
    TArray<class AFlameActor*> FlameActors;                                           // 0x0540 (size: 0x10)
    bool bRecentExtinguishingHit;                                                     // 0x0584 (size: 0x1)
    TArray<class UStructureSeatComponent*> SeatComponents;                            // 0x05B0 (size: 0x10)
    TArray<class USeatComponent*> ModularSeatComponents;                              // 0x05C0 (size: 0x10)
    class UParkingSpotComponent* ParkingSpotComponent;                                // 0x05D0 (size: 0x8)
    class UFirePitComponent* FirePitComponent;                                        // 0x05D8 (size: 0x8)

    void Use(class AWarCharacter* UsingPlayer);
    void OnRep_RecentExtinguishingHit(bool Previous);
    void OnRep_QuantizedRainfall();
    void OnRep_IsPrototype();
    void OnRep_Health();
    void OnRep_FireIntensity(EFireIntensity Previous);
    void OnRep_DynamicTier();
    void OnRep_BuildStepProgress();
    void MulticastOnVehicleDrivingOverDamage();
    bool IsCollidingWithDuplicate();
    class UTechTreeComponent* GetTechTreeComponent();
    void BPOnVehicleDrivingOverDamage();
    void BPOnFireIntensityReduced(int32 OldIntensity, int32 NewIntensity);
    void BPOnFireIntensityIncreased(int32 OldIntensity, int32 NewIntensity);
}; // Size: 0x5F8

class AStructureBuildSite : public ABuildSite
{
    FName StructureBeingBuiltCodeName;                                                // 0x06F0 (size: 0x8)
    TArray<class UModificationSlotComponent*> ModificationSlots;                      // 0x06F8 (size: 0x10)
    uint32 ModificationMask;                                                          // 0x0708 (size: 0x4)
    TArray<FModificationSlotMigration> ModificationSlotMigrations;                    // 0x0710 (size: 0x10)
    TArray<FName> DisabledSockets;                                                    // 0x0720 (size: 0x10)
    uint32 MigratedModificationMask;                                                  // 0x0730 (size: 0x4)
    class UBoxComponent* ObstructionCheckVolume;                                      // 0x0738 (size: 0x8)
    bool bIsUpgrade;                                                                  // 0x0740 (size: 0x1)
    TSubclassOf<class AStructure> BaseStructureClassToRespawn;                        // 0x0748 (size: 0x8)
    int32 BaseStructureHealth;                                                        // 0x0750 (size: 0x4)
    uint8 BaseStructureTeamId;                                                        // 0x0754 (size: 0x1)
    EFactionId LastHeldFactionID;                                                     // 0x0755 (size: 0x1)
    bool bHasSavedRotation;                                                           // 0x0756 (size: 0x1)
    FQuat BaseStructureRotation;                                                      // 0x0760 (size: 0x10)
    float DecayStartHours;                                                            // 0x0770 (size: 0x4)
    float DecayDurationHours;                                                         // 0x0774 (size: 0x4)
    FString PreviousBuilderOnlineID;                                                  // 0x0778 (size: 0x10)
    FString PreviousBuilderName;                                                      // 0x0788 (size: 0x10)
    FConnectorConfiguration ConnectorConfiguration;                                   // 0x07A0 (size: 0x30)

    void OnRep_MigratedModificationMask();
    void OnRep_IsUpgrade();
}; // Size: 0x7E0

class AStructureCrate : public AShippableCrate
{
}; // Size: 0x800

class AStructureIsland : public AActor
{
    TArray<class AStructure*> Structures;                                             // 0x0220 (size: 0x10)
    float StructuralIntegrity;                                                        // 0x0230 (size: 0x4)
    float CachedStructuralIntegrityBonus;                                             // 0x0234 (size: 0x4)
    uint8 CachedFortConnections;                                                      // 0x0238 (size: 0x1)
    uint8 CachedNonFortConnections;                                                   // 0x0239 (size: 0x1)
    uint8 CachedUnconnectedSockets;                                                   // 0x023A (size: 0x1)
    uint8 TeamId;                                                                     // 0x023B (size: 0x1)
    TArray<class AFortGarrisonStation*> SafeHouses;                                   // 0x0240 (size: 0x10)
    float HealthPool;                                                                 // 0x0250 (size: 0x4)
    float HealthPoolMax;                                                              // 0x0254 (size: 0x4)
    EFireIntensity FireIntensity;                                                     // 0x025C (size: 0x1)

    void OnRep_Structures();
}; // Size: 0x278

class AStructureProfileList : public AInfo
{
    TMap<class EStructureProfileType, class FStructureProfileData> StructureProfileMap; // 0x0218 (size: 0x50)

}; // Size: 0x268

class ASubmarineAudioVolume : public AAudioVolume
{
    class ASubmarineVehicle* AssociatedSubmarine;                                     // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class ASubmarineVehicle : public ALargeShip
{
    float MaxDepthForMapIntel;                                                        // 0x1688 (size: 0x4)
    float MinDepthForStealth;                                                         // 0x168C (size: 0x4)
    float MinDepthForAlternateDamageRules;                                            // 0x1690 (size: 0x4)
    TArray<FName> AlternateDamageRulesCodeNames;                                      // 0x1698 (size: 0x10)
    float SubmergedViewableDistance;                                                  // 0x16A8 (size: 0x4)
    float SubmergedSurfaceAreaPct;                                                    // 0x16AC (size: 0x4)
    class UCurveFloat* SubmergedViewRadiusCurve;                                      // 0x16B0 (size: 0x8)
    class USubmarineVisibilityToggleComponent* SubmarineVisibilityToggleComponent;    // 0x16B8 (size: 0x8)
    class UStaticMeshComponent* SeaFloorMesh;                                         // 0x16C0 (size: 0x8)
    TArray<class ULadderComponent*> LadderComponents;                                 // 0x16C8 (size: 0x10)
    TArray<FBallastInfo> Ballasts;                                                    // 0x16E0 (size: 0x10)
    TArray<FSavedBallastInfo> SavedBallasts;                                          // 0x16F0 (size: 0x10)
    FDynamicState HatchState;                                                         // 0x1700 (size: 0x18)
    float MaxElectricity;                                                             // 0x1718 (size: 0x4)
    float SubmergedElectricityPerSecond;                                              // 0x171C (size: 0x4)
    float ElectricityRechargePerSecond;                                               // 0x1720 (size: 0x4)
    float ZeroElectricityEngineThrustMultiplier;                                      // 0x1724 (size: 0x4)
    float Electricity;                                                                // 0x1728 (size: 0x4)
    uint8 ReplicatedElectricity;                                                      // 0x172C (size: 0x1)
    uint8 TorpedoRangeIndex;                                                          // 0x172D (size: 0x1)
    TMap<int32, int32> TorpedoTubeSeats;                                              // 0x1730 (size: 0x50)
    class UStaticMesh* TorpedoStaticMesh;                                             // 0x1780 (size: 0x8)
    float MinDamageDepth;                                                             // 0x1788 (size: 0x4)
    float MaxDamageDepth;                                                             // 0x178C (size: 0x4)
    float MinCrushDamageInterval;                                                     // 0x1790 (size: 0x4)
    float MaxCrushDamageInterval;                                                     // 0x1794 (size: 0x4)
    float CrushDamageIntervalVariance;                                                // 0x1798 (size: 0x4)
    float CrushDamage;                                                                // 0x179C (size: 0x4)
    class USoundCue* CrushSoundCue;                                                   // 0x17A0 (size: 0x8)
    EDynamicState TorpedoTubeStates;                                                  // 0x17AD (size: 0x2)
    class UStaticMeshComponent* LeftTorpedoMesh;                                      // 0x17B0 (size: 0x8)
    class UStaticMeshComponent* RightTorpedoMesh;                                     // 0x17B8 (size: 0x8)
    class UParticleSystemComponent* VeryMajorDamageUnderWaterPS;                      // 0x17C0 (size: 0x8)
    class UParticleSystemComponent* MajorDamageUnderWaterPS;                          // 0x17C8 (size: 0x8)
    class UParticleSystemComponent* MediumDamageUnderWaterPS;                         // 0x17D0 (size: 0x8)
    class UParticleSystemComponent* MinorDamageUnderWaterPS;                          // 0x17D8 (size: 0x8)
    class UParticleSystemComponent* VeryMinorDamageUnderWaterPS;                      // 0x17E0 (size: 0x8)
    float UnderWaterDamagePSDepth;                                                    // 0x17E8 (size: 0x4)
    TArray<class ATorpedoProjectile*> ActiveTorpedoes;                                // 0x17F8 (size: 0x10)

    void ShowDamageDepthWarning();
    void OnRep_TorpedoTubeStates();
    void OnRep_ReplicatedElectricity(uint8 PrevReplicatedElectricity);
    void OnRep_Ballasts(const TArray<FBallastInfo>& PrevBallastsInfo);
    void MulticastPlayCrushFX(FVector Location);
    void CheckDamageDepthWarning();
}; // Size: 0x1820

class ATankAmmoPickup : public AExplosiveAmmoPickup
{
}; // Size: 0x450

class ATankBase : public ARWDSimVehicle
{
    class UParticleSystemComponent* DisabledFuelTankFX;                               // 0x1290 (size: 0x8)
    TSubclassOf<class ADecalActor> FuelSpillDecal;                                    // 0x1298 (size: 0x8)

}; // Size: 0x12B0

class ATargetingRange : public AActor
{
}; // Size: 0x220

class ATargetingWall : public AActor
{
    TArray<FPointDamageEvent> DamageEvents;                                           // 0x0218 (size: 0x10)
    class UStaticMeshComponent* ResetTrigger;                                         // 0x0228 (size: 0x8)

    void OnRep_DamageEvents();
}; // Size: 0x230

class ATeamStructure : public ABuildableStructure
{
    uint8 TeamId;                                                                     // 0x07F0 (size: 0x1)
    bool bAllowUseByEnemy;                                                            // 0x07F1 (size: 0x1)
    bool bCanBeFlaggedForDisruptivePlacement;                                         // 0x07F2 (size: 0x1)
    uint8 bCanBlockAIUpgrade;                                                         // 0x07F3 (size: 0x1)
    float DisruptivePlacementVoteMultiplier;                                          // 0x07F4 (size: 0x4)

    void OnRep_TeamIdNotify();
    void BPSetTeamVisuals(const int32 VisualTeamId);
}; // Size: 0x810

class ATechTree : public AInfo
{
    TMap<class ETechID, class FTechTreeItemInfo> ItemInfo;                            // 0x0218 (size: 0x50)
    FTechTreeCategories Categories;                                                   // 0x0268 (size: 0x70)
    TArray<uint32> TechUnlockBits;                                                    // 0x02D8 (size: 0x10)
    TArray<float> TechUnlockProgress;                                                 // 0x02E8 (size: 0x10)

    void OnRep_TechUnlockBits(const TArray<uint32>& PreviousTechUnlockBits);
}; // Size: 0x680

class ATemplate : public AActor
{
}; // Size: 0x218

class ATimedProjectile : public AWarProjectile
{
    float FuseTimer;                                                                  // 0x0328 (size: 0x4)

}; // Size: 0x3B8

class ATorpedoProjectile : public AWarProjectile
{
    TSubclassOf<class AWarExplosionEffect> WaterSurfaceDirectHitExplosionTemplate;    // 0x0328 (size: 0x8)
    class USoundCue* LaunchSoundCue;                                                  // 0x0330 (size: 0x8)
    FVector Target;                                                                   // 0x0338 (size: 0xC)
    TArray<class ATorpedoProjectile*> SiblingProjectiles;                             // 0x0348 (size: 0x10)
    class UParticleSystemComponent* WaterSurfacePS;                                   // 0x0358 (size: 0x8)
    float WaterSurfaceVFXVisibilityDepth;                                             // 0x0360 (size: 0x4)
    float WaterSurfaceVFXOffset;                                                      // 0x0364 (size: 0x4)
    float ImpactInducedVelocity;                                                      // 0x0368 (size: 0x4)
    float ConeStartRadius;                                                            // 0x036C (size: 0x4)
    float ConeEndRadius;                                                              // 0x0370 (size: 0x4)
    float ConeLength;                                                                 // 0x0374 (size: 0x4)

    void OnRep_SiblingProjectiles();
}; // Size: 0x378

class ATownBase : public AStaticBase
{
}; // Size: 0x8F0

class ATownBaseBuildSite : public ATownHallBuildSite
{
}; // Size: 0x850

class ATownHall : public ABase
{
    bool bIsFort;                                                                     // 0x08B1 (size: 0x1)
    class UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;            // 0x08B8 (size: 0x8)

}; // Size: 0x8C0

class ATownHallBuildSite : public ABaseBuildSite
{
}; // Size: 0x850

class ATractor : public ARWDSimVehicle
{
}; // Size: 0x1290

class ATrailerVehicle : public ARWDSimVehicle
{
    class UBoxComponent* UseAreaBox;                                                  // 0x1288 (size: 0x8)

}; // Size: 0x1290

class ATrailerVehicleStockpile : public ATrailerVehicle
{
    class UGenericStockpileComponent* GenericStockpileComponent;                      // 0x1290 (size: 0x8)

}; // Size: 0x12A0

class ATransportTruck : public ARWDSimVehicle
{
    FVector2D GunnerYawAndPitch;                                                      // 0x12A0 (size: 0x8)
    int32 StashedAmmo;                                                                // 0x12A8 (size: 0x4)
    FName StashedAmmoType;                                                            // 0x12AC (size: 0x8)
    FPayloadMeshes PayloadMeshes;                                                     // 0x12B8 (size: 0x58)

    void OnRep_StashedAmmo();
    void OnRep_GunnerYawAndPitch();
}; // Size: 0x1310

class ATravelBlockingArea : public AActor
{
    class UBoxComponent* TravelBlockingComponent;                                     // 0x0218 (size: 0x8)
    bool bBlockOutgoing;                                                              // 0x0220 (size: 0x1)

}; // Size: 0x228

class ATripodMountedStructure : public ADeployedStructure
{
    class USkeletalMeshComponent* TripodMesh;                                         // 0x0810 (size: 0x8)
    class USkeletalMeshComponent* GunMesh;                                            // 0x0818 (size: 0x8)
    FName ItemCodeName;                                                               // 0x0820 (size: 0x8)
    FName BaseItemCodeName;                                                           // 0x0828 (size: 0x8)

}; // Size: 0x830

class ATunnelNode : public ATeamStructure
{
    FVector ObstructionCheckOverrideExtents;                                          // 0x0810 (size: 0xC)
    float VisibilityTraceOffsetZ;                                                     // 0x081C (size: 0x4)
    bool bAggroSingleStructureOnDamage;                                               // 0x0820 (size: 0x1)
    ETunnelNodeType TunnelNodeType;                                                   // 0x0821 (size: 0x1)
    bool bCanBeHidden;                                                                // 0x0822 (size: 0x1)
    ETunnelConnectionState TunnelConnectionState;                                     // 0x0823 (size: 0x1)
    TArray<class ATunnelNode*> ConnectedTunnelNodes;                                  // 0x0828 (size: 0x10)

    void OnRep_TunnelConnectionState();
    void BPSetTunnelConnectionStateVisuals(const ETunnelConnectionState NewTunnelConnectionState);
}; // Size: 0x850

class ATunnelNodeProxy : public ATunnelNode
{
    float ProxyConnectionRange;                                                       // 0x0848 (size: 0x4)

}; // Size: 0x850

class AUniformPickup : public AItemPickup
{
    EUniformType UniformType;                                                         // 0x03F0 (size: 0x1)

}; // Size: 0x3F8

class AVehicleBuildSite : public ABuildSite
{
    FName OriginatorVehicleName;                                                      // 0x06F0 (size: 0x8)
    int32 SquadId;                                                                    // 0x06F8 (size: 0x4)
    FVector BuildOffset;                                                              // 0x06FC (size: 0xC)
    FRotator BuildRotation;                                                           // 0x0708 (size: 0xC)
    FName VehicleCodeName;                                                            // 0x0714 (size: 0x8)

}; // Size: 0x720

class AVehicleCrate : public AShippableCrate
{
}; // Size: 0x800

class AVehicleFactory : public AConstructionSite
{
}; // Size: 0x830

class AVehicleFactoryBuildSite : public AConstructionSiteBuildSite
{
}; // Size: 0x7F0

class AVehicleMovementProfileList : public AInfo
{
    TMap<class EVehicleMovementProfileType, class FVehicleMovementProfileData> VehicleMovementProfileMap; // 0x0218 (size: 0x50)

}; // Size: 0x268

class AVehicleProfileList : public AInfo
{
    TMap<class EVehicleProfileType, class FVehicleProfileData> VehicleProfileMap;     // 0x0218 (size: 0x50)

}; // Size: 0x268

class AVehiclesRenderInfo : public AInfo
{
    FPhysicalMaterialResolver PhysicalMaterialResolver;                               // 0x0218 (size: 0x20)

}; // Size: 0x238

class AWall : public ABuildableStructure
{
    bool bAllowStanding;                                                              // 0x07F0 (size: 0x1)
    bool UpgradeRequiresConnectedWalls;                                               // 0x07F1 (size: 0x1)

}; // Size: 0x800

class AWallBuildSite : public AStructureBuildSite
{
}; // Size: 0x7F0

class AWarBaseHUD : public AHUD
{
}; // Size: 0x310

class AWarBeaconClient : public AOnlineBeaconClient
{

    void ServerRequestQueueStatusUpdate();
    void ServerLeaveQueue();
    void ServerJoinQueue(FWarBeaconJoinRequestData JoinRequestData);
    void ClientUpdateQueueStatus(const int32 NumPlayersAhead);
    void ClientPlayerIsBannedResponse(const bool IsBanned, const int64 BanDurationTicks, const FBanReasonInfo& BanReasonInfo);
    void ClientOnServerTravelling();
    void ClientOfflineCharacterExpired();
    void ClientJoinServer(const EFactionId TeamId);
    void ClientJoinQueueResponse(const EJoinWarResponse JoinWarResponse);
}; // Size: 0x3B8

class AWarBeaconHost : public AOnlineBeaconHostObject
{
}; // Size: 0x240

class AWarBenchmarkPlayerController : public ASimPlayerController
{
}; // Size: 0x1250

class AWarCharacter : public ACharacter
{
    float ViewRadiusDegrees;                                                          // 0x0640 (size: 0x4)
    float Temperature;                                                                // 0x0658 (size: 0x4)
    uint8 ReplicatedTemperature;                                                      // 0x06C0 (size: 0x1)
    uint8 ReplicatedMuddyness;                                                        // 0x06C1 (size: 0x1)
    uint8 PlayerFlags;                                                                // 0x06C2 (size: 0x1)
    FEncumbranceManager EncumbranceManager;                                           // 0x06C8 (size: 0x88)
    class UStealthComponent* StealthComponent;                                        // 0x0750 (size: 0x8)
    float Muddyness;                                                                  // 0x0758 (size: 0x4)
    TArray<TWeakObjectPtr<AFlareExplosionEffect>> NearbyFlares;                       // 0x07D0 (size: 0x10)

    void ServerUseStructure(class AStructure* Structure);
    void ServerUnstuck();
    void OnRep_Temperature(const uint8 PreviousTemperature);
    void OnRep_Muddyness(const uint8 PreviousMuddyness);
    void MulticastPlaceCalloutMarker(const EFactionId FactionId, const int8 CalloutInfoIndex, const FVector_NetQuantize Location);
    void MulticastPerformCallOut(const EFactionId FactionId, const int8 CalloutInfoIndex);
    bool IsPawnVisible(const class APawn* TargetPawn);
}; // Size: 0x8A0

class AWarExplosionEffect : public AActor
{
    TArray<FExplosionMaterialOverride> ParticleSystemOverrides;                       // 0x0218 (size: 0x10)
    TSubclassOf<class AImpactEffect> RadialHitImpact;                                 // 0x0228 (size: 0x8)
    float ImpactEffectDamage;                                                         // 0x0230 (size: 0x4)
    float ExplosionLightFadeOut;                                                      // 0x0234 (size: 0x4)
    class USoundCue* ExplosionSound;                                                  // 0x0238 (size: 0x8)
    TSubclassOf<class UCameraShake> CameraShake;                                      // 0x0240 (size: 0x8)
    float CameraShakeOuterRadius;                                                     // 0x0248 (size: 0x4)
    uint8 bDoNotOrientToImpactNormal;                                                 // 0x024C (size: 0x1)
    uint8 bOrientToDirectionOfTravel;                                                 // 0x024C (size: 0x1)
    uint8 bManualDestruction;                                                         // 0x024C (size: 0x1)
    uint8 bDestroyWhenParticleSystemCompletes;                                        // 0x024C (size: 0x1)
    uint8 bParentToImpactSurface;                                                     // 0x024C (size: 0x1)
    float ManualDeactivateTime;                                                       // 0x0250 (size: 0x4)
    bool bFadeSoundOnDeactivate;                                                      // 0x0254 (size: 0x1)
    float SoundFadeDuration;                                                          // 0x0258 (size: 0x4)
    TSubclassOf<class AWarPainVolume> PainVolume;                                     // 0x0260 (size: 0x8)
    float PainVolumeDelay;                                                            // 0x0268 (size: 0x4)
    bool bIsDelayed;                                                                  // 0x026C (size: 0x1)
    bool bHasPersistentEffect;                                                        // 0x026D (size: 0x1)
    ETankArmourEffectBehaviour TankArmourEffectBehaviour;                             // 0x0274 (size: 0x1)
    bool bHasManuallyDeactivated;                                                     // 0x0275 (size: 0x1)
    class UAudioComponent* SpawnedExplosionSound;                                     // 0x0278 (size: 0x8)
    float DetonationDelay;                                                            // 0x0280 (size: 0x4)
    float TelegraphDelay;                                                             // 0x0284 (size: 0x4)
    class UPointLightComponent* ExplosionLight;                                       // 0x0288 (size: 0x8)
    FHitResult SurfaceHit;                                                            // 0x029C (size: 0x88)
    float ServerDetonationTime;                                                       // 0x0324 (size: 0x4)
    FVector ProjectileImpactVelocity;                                                 // 0x0328 (size: 0xC)
    class UParticleSystemComponent* ExplosionParticleSystem;                          // 0x0338 (size: 0x8)

    void OnParticleSystemFinished(class UParticleSystemComponent* PSystem);
    void MulticastTelegraph(float TimeUntilDetonation);
    void MulticastDetonate();
    float GetTimeSinceDetonation();
    void BPTelegraphProjectile(FVector ImpactVelocity, float TimeUntilDetonation);
    void BPTelegraph();
    void BPDetonate();
}; // Size: 0x340

class AWarGameMode : public AGameMode
{
}; // Size: 0x300

class AWarGameSession : public AGameSession
{
}; // Size: 0x230

class AWarGameState : public AGameState
{
}; // Size: 0x278

class AWarHUD : public AWarBaseHUD
{
    EHUDMode HudMode;                                                                 // 0x0310 (size: 0x1)
    class APostProcessVolume* LevelPostVolume;                                        // 0x0338 (size: 0x8)
    class UTexture2D* LocalMapImage;                                                  // 0x0348 (size: 0x8)
    class UFont* OtherPlayerNamesFont;                                                // 0x0350 (size: 0x8)
    class UFont* WarTimerFont;                                                        // 0x0358 (size: 0x8)
    class UFont* ReticleFont;                                                         // 0x0360 (size: 0x8)
    class UFont* MapGridFont;                                                         // 0x0368 (size: 0x8)

}; // Size: 0xD1D0

class AWarPainVolume : public AActor
{
    float Damage;                                                                     // 0x0218 (size: 0x4)
    float Radius;                                                                     // 0x021C (size: 0x4)
    TSubclassOf<class UDamageType> DamageType;                                        // 0x0220 (size: 0x8)

}; // Size: 0x250

class AWarPlayerController : public APlayerController
{
    bool bTravelRequestIsPending;                                                     // 0x0568 (size: 0x1)
    bool bTravelRequestWasSuccessful;                                                 // 0x0569 (size: 0x1)
    bool bTravelReservationIsPending;                                                 // 0x056A (size: 0x1)
    bool bTravelReservationIsComplete;                                                // 0x056B (size: 0x1)
    bool bQueuedViaBorderTravel;                                                      // 0x056C (size: 0x1)
    bool bAllowedToContinueTravelling;                                                // 0x056D (size: 0x1)
    class AWarBeaconClient* WarBeaconClient;                                          // 0x0668 (size: 0x8)

    void ServerInitiateTravel();
    void ServerClientTravelLoadComplete();
    void SelectWarDrawDebugWorld();
    void ClientTravelSuccess(uint64 TravelId, FRegionConnectionInfo RegionConnectionInfo, float Delay);
    void ClientTravelProgress(uint32 NumPlayersConnected, uint32 NumPlayersTotal, float AdditionalDelay);
    void ClientTravelPending(int32 PendingTravelId, EWorldConquestMapId DestinationMapId);
    void ClientTravelFailure(ETravelResult Result, int32 PartySize);
    void ClientTravelComplete(uint64 TravelId, float InvulnerabilityDuration);
    void ClientTravelArrived(FTransform ReservationLocation);
    void ClientQueueForTravel(EWorldConquestMapId DestinationMapId, FRegionConnectionInfo RegionConnectionInfo);
}; // Size: 0xD00

class AWarPlayerStart : public APlayerStart
{
    class AActor* PlayerStartOwner;                                                   // 0x0248 (size: 0x8)

}; // Size: 0x250

class AWarPlayerState : public APlayerState
{
}; // Size: 0x348

class AWarProjectile : public AActor
{
    class UProjectileMovementComponent* MovementComp;                                 // 0x0220 (size: 0x8)
    class USphereComponent* CollisionComp;                                            // 0x0228 (size: 0x8)
    class UParticleSystemComponent* ParticleComp;                                     // 0x0230 (size: 0x8)
    class UAudioComponent* LoopingAudio;                                              // 0x0238 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0240 (size: 0x8)
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;                         // 0x0258 (size: 0x8)
    TWeakObjectPtr<class AController> MyController;                                   // 0x0260 (size: 0x8)
    FName ExplosiveCodeName;                                                          // 0x0268 (size: 0x8)
    float ProjectileLife;                                                             // 0x0270 (size: 0x4)
    float AutoDetonateTime;                                                           // 0x0274 (size: 0x4)
    float ProjectileDeathDelay;                                                       // 0x0278 (size: 0x4)
    float ExplosionImpactBumpDistance;                                                // 0x027C (size: 0x4)
    float PenetrationBonusMaxRange;                                                   // 0x0280 (size: 0x4)
    uint8 bUseAccurateHitReplication;                                                 // 0x0284 (size: 0x1)
    uint8 bProjectImpactDownward;                                                     // 0x0284 (size: 0x1)
    uint8 bHideMeshOnExplode;                                                         // 0x0284 (size: 0x1)
    uint8 bSpawnExplosionOnServer;                                                    // 0x0284 (size: 0x1)
    uint8 bImpactsWater;                                                              // 0x0284 (size: 0x1)
    uint8 bDebugDraw;                                                                 // 0x0284 (size: 0x1)
    uint8 bExploded;                                                                  // 0x0284 (size: 0x1)
    FRotator RotationSpeed;                                                           // 0x028C (size: 0xC)
    bool bRotationRequiresVelocity;                                                   // 0x0298 (size: 0x1)
    float RotationVelocityRequirement;                                                // 0x029C (size: 0x4)
    TSubclassOf<class AWarExplosionEffect> UnderWaterExplosionTemplate;               // 0x02A0 (size: 0x8)
    TSubclassOf<class AWarExplosionEffect> WaterSurfaceExplosionTemplate;             // 0x02A8 (size: 0x8)

    void SetHomingTarget(class AActor* Target);
    void OnRep_Exploded();
    void OnProjectileStop(const FHitResult& HitResult);
    void OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume);
    void OnExploded(const FProjectileHitInfo_NetQuantize& HitResult);
    void MulticastExplodeAll(const FProjectileHitInfo_NetQuantize& Impact);
    void Detonate(const FProjectileHitInfo_NetQuantize& HitResult);
    void ApplyExplosiveDamageAndSpawnFx(const FProjectileHitInfo_NetQuantize& HitResult);
}; // Size: 0x328

class AWarReplicationGraphDebugActor : public AReplicationGraphDebugActor
{

    void ServerViewTargets(float Delay);
    void ServerActorInfo(FString MatchString);
    void ClientViewTargets(const FNetViewer NetViewer);
    void ClientActorInfo(const TArray<FWarReplicationGraphActorDebugInfo>& DebugInfo, const FVector& ViewLocation);
}; // Size: 0x230

class AWatchTower : public ATeamStructure
{
    class UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;            // 0x0810 (size: 0x8)
    class UTeamFlagMeshComponent* TeamFlagMeshComponent;                              // 0x0818 (size: 0x8)
    float GunnerYaw;                                                                  // 0x0820 (size: 0x4)

}; // Size: 0x840

class AWaterMeshActor : public AStaticMeshActor
{
}; // Size: 0x228

class AWaterMine : public AMine
{
}; // Size: 0x318

class AWaterProjectile : public AWarProjectile
{
    class URoomComponent* InstigatorRoom;                                             // 0x0328 (size: 0x8)
    class URoomComponent* LastRoom;                                                   // 0x0330 (size: 0x8)

}; // Size: 0x338

class AWeaponFireFX : public AActor
{
    class UProjectileMovementComponent* MovementComp;                                 // 0x0218 (size: 0x8)
    class USphereComponent* CollisionComp;                                            // 0x0220 (size: 0x8)

    void OnProjectileStop(const FHitResult& HitResult);
}; // Size: 0x230

class AWearablePickup : public AItemPickup
{
}; // Size: 0x3F0

class AWeatherActor : public AActor
{
    class UArrowComponent* ArrowComponent;                                            // 0x0218 (size: 0x8)
    class UBoxComponent* FreezeBoxComponent;                                          // 0x0220 (size: 0x8)
    EWeatherType WeatherType;                                                         // 0x0228 (size: 0x1)
    FName ParameterName;                                                              // 0x022C (size: 0x8)
    class UCurveFloat* ParameterCurve;                                                // 0x0238 (size: 0x8)
    float TransitionDuration;                                                         // 0x0240 (size: 0x4)

}; // Size: 0x258

class AWeatherEffectsActor : public AActor
{
}; // Size: 0x218

class AWeatherIceActor : public AActor
{
    TArray<FWeatherIceMeshData> AllIceMeshData;                                       // 0x0228 (size: 0x10)
    int32 MeshGridSize;                                                               // 0x0238 (size: 0x4)
    float MeshSize;                                                                   // 0x023C (size: 0x4)
    float MeshHeight;                                                                 // 0x0240 (size: 0x4)
    uint16 MeshHealth;                                                                // 0x0244 (size: 0x2)
    float HeightAboveWaterLevel;                                                      // 0x0248 (size: 0x4)
    int32 MeshSetsAmount;                                                             // 0x024C (size: 0x4)
    float AnimationDuration;                                                          // 0x0250 (size: 0x4)
    class UMaterialInterface* DefaultMaterial;                                        // 0x0258 (size: 0x8)
    class UMaterialInterface* DamagedMaterial;                                        // 0x0260 (size: 0x8)
    class UMaterialInterface* CriticalMaterial;                                       // 0x0268 (size: 0x8)
    class USoundCue* DamageStateSFX;                                                  // 0x0270 (size: 0x8)
    class UParticleSystem* DamageStateVFX;                                            // 0x0278 (size: 0x8)
    class USoundCue* DestroyedSFX;                                                    // 0x0280 (size: 0x8)
    class UParticleSystem* DestroyedVFX;                                              // 0x0288 (size: 0x8)
    TArray<FWeatherIceState> States;                                                  // 0x0290 (size: 0x10)
    TArray<uint32> ReplicatedStates;                                                  // 0x02A0 (size: 0x10)
    int16 IceActorDataIndex;                                                          // 0x02B0 (size: 0x2)
    class AWeatherIceMapData* WeatherIceMapData;                                      // 0x02B8 (size: 0x8)

    void OnRep_ReplicatedStates(const TArray<uint32>& PreviousReplicatedStates);
}; // Size: 0x2E0

class AWeatherIceMapData : public AActor
{
    TSubclassOf<class AWeatherIceActor> IceActorClass;                                // 0x0218 (size: 0x8)
    TArray<FWeatherIceActorData> AllIceActorData;                                     // 0x0220 (size: 0x10)

}; // Size: 0x230

class AWeatherStation : public ATeamStructure
{
    class USkeletalMeshComponent* Mesh;                                               // 0x0818 (size: 0x8)
    class USkeletalMeshComponent* BaseMesh;                                           // 0x0820 (size: 0x8)
    class UWarAudioComponent* ActiveSFXLoop;                                          // 0x0828 (size: 0x8)
    class UWarAudioComponent* RotationSFXLoop;                                        // 0x0830 (size: 0x8)
    class UFacilityLightComponent* LightComponent;                                    // 0x0838 (size: 0x8)
    class USoundCue* ActivateSFX;                                                     // 0x0840 (size: 0x8)
    class USoundCue* DeactivateSFX;                                                   // 0x0848 (size: 0x8)
    float MaxPower;                                                                   // 0x0850 (size: 0x4)
    float RequiredPowerForFiring;                                                     // 0x0854 (size: 0x4)
    float RequiredPowerForRotation;                                                   // 0x0858 (size: 0x4)
    float ActiveDuration;                                                             // 0x085C (size: 0x4)
    float MaxTargetAngle;                                                             // 0x0860 (size: 0x4)
    float ConnectionDistance;                                                         // 0x0864 (size: 0x4)
    EWeatherStationState State;                                                       // 0x0868 (size: 0x1)
    uint8 NetworkedStations;                                                          // 0x0869 (size: 0x1)
    int8 PredictionOffset;                                                            // 0x086A (size: 0x1)
    uint8 RequiredSquadMembers;                                                       // 0x086B (size: 0x1)
    int32 SquadId;                                                                    // 0x086C (size: 0x4)
    float Yaw;                                                                        // 0x0870 (size: 0x4)
    FWeatherStationID GlobalID;                                                       // 0x0874 (size: 0x2)
    FWeatherStationID ConnectionTo;                                                   // 0x0876 (size: 0x2)
    FWarGridCoordinate CoordConnectionTo;                                             // 0x0878 (size: 0x6)
    FWeatherStationID ConnectionFrom;                                                 // 0x087E (size: 0x2)
    FWarGridCoordinate CoordConnectionFrom;                                           // 0x0880 (size: 0x6)
    float RemainingActiveTime;                                                        // 0x0888 (size: 0x4)

    void OnRep_Yaw(const float PreviousYaw);
    void OnRep_State();
}; // Size: 0x8C0

class AWorldProxyActor : public AActor
{
    TArray<class TSubclassOf<AActor>> ActorTypes;                                     // 0x0218 (size: 0x10)

}; // Size: 0x228

class AWorldResource : public AResource
{
}; // Size: 0x2B0

class AWoundedCarriedItemPickup : public AItemPickup
{
}; // Size: 0x3F0

class IAssignableSpawnPoint : public IInterface
{
}; // Size: 0x28

class ICharacterInvokableInterface : public IInterface
{
}; // Size: 0x28

class ICoalitionAssignable : public IInterface
{
}; // Size: 0x28

class ICraneOperatorInterface : public IInterface
{
}; // Size: 0x28

class IDamageableActor : public IInterface
{
}; // Size: 0x28

class IDecayPreventer : public IInterface
{
}; // Size: 0x28

class IFuelTanker : public IInterface
{
}; // Size: 0x28

class IGenericActor : public IInterface
{
}; // Size: 0x28

class IGenericInventory : public IInterface
{
}; // Size: 0x28

class IGunnerSupport : public IInterface
{

    void UpdateGunnerYawAndPitch(int32 GunnerIndex, FVector2D YawAndPitch);
    void SetStashedAmmo(int32 GunnerIndex, int32 AmmoAmount, FName AmmoName);
    void SetIsFiring(int32 GunnerIndex, bool IsFiring);
    void SetGunnerWorking(int32 GunnerIndex, bool IsWorking);
    bool IsGunnerWorking(int32 GunnerIndex);
    bool IsGunnerDeployed(int32 GunnerIndex, bool bTestFullDeploy);
    bool IsFiring(int32 GunnerIndex);
    float GetTrackingSpeedModifier(int32 GunnerIndex);
    FName GetStashedAmmoType(int32 GunnerIndex);
    int32 GetStashedAmmo(int32 GunnerIndex);
    int32 GetNumMuzzleSockets(int32 GunnerIndex);
    FTransform GetMuzzleTransformFromIndex(int32 GunnerIndex, int32 MuzzleIndex);
    FName GetMuzzleSocketName(int32 GunnerIndex, const int32 MuzzleIndex);
    FVector GetLineOfSightLocation(int32 GunnerIndex, int32 MuzzleIndex);
    FVector2D GetGunnerYawAndPitch(int32 GunnerIndex);
    bool CanRotate(int32 GunnerIndex);
    bool CanFire(int32 GunnerIndex);
}; // Size: 0x28

class ILongRangeArtillerySupport : public IInterface
{
}; // Size: 0x28

class IMapIntelligenceInterface : public IInterface
{
}; // Size: 0x28

class IMaterialOverrideInterface : public IInterface
{
}; // Size: 0x28

class IPayloadMeshGroup : public IInterface
{
}; // Size: 0x28

class IPersistentActor : public IInterface
{
}; // Size: 0x28

class IPowerGridNode : public IInterface
{
}; // Size: 0x28

class ISeatSupport : public IInterface
{
}; // Size: 0x28

class IWaterReloadSupport : public IInterface
{
}; // Size: 0x28

class UAFKTimeoutComponent : public UActorComponent
{
    float TimeUntilTimeoutHours;                                                      // 0x00B0 (size: 0x4)
    FDateTime LastUsageTime;                                                          // 0x00B8 (size: 0x8)

}; // Size: 0xF0

class UAIArtilleryGunTurretComponent : public UAIGunTurretComponent
{
    bool bUseWarningShots;                                                            // 0x0400 (size: 0x1)
    float WarningShotMinRange;                                                        // 0x0404 (size: 0x4)
    float WarningShotRadius;                                                          // 0x0408 (size: 0x4)
    bool bUseArtilleryTrace;                                                          // 0x040C (size: 0x1)
    float AccuracyRadius;                                                             // 0x0410 (size: 0x4)

}; // Size: 0x420

class UAIGunTurretComponent : public UAITurretComponent
{
    float ExplosionRadius;                                                            // 0x03D8 (size: 0x4)
    float FiringThreshold;                                                            // 0x03DC (size: 0x4)
    float DamageDelay;                                                                // 0x03E0 (size: 0x4)
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;                         // 0x03E8 (size: 0x8)

    void MulticastPlayFiringFX(const FHitResult& HitResult);
}; // Size: 0x400

class UAITurretComponent : public USceneComponent
{
    uint8 AllowedTargetTypes;                                                         // 0x01F0 (size: 0x1)
    ETurretMuzzleType MuzzleType;                                                     // 0x01F1 (size: 0x1)
    int32 GunnerIndex;                                                                // 0x01F4 (size: 0x4)
    int32 NumMuzzles;                                                                 // 0x01F8 (size: 0x4)
    ETurretTrackingMode TrackingMode;                                                 // 0x0200 (size: 0x1)
    float TrackingSpeed;                                                              // 0x0204 (size: 0x4)
    float TrackingThreshold;                                                          // 0x0208 (size: 0x4)
    class UCurveFloat* YawToPitchCurve;                                               // 0x0210 (size: 0x8)
    float MinimumRange;                                                               // 0x0218 (size: 0x4)
    float MaximumRange;                                                               // 0x021C (size: 0x4)
    float MaximumReachability;                                                        // 0x0220 (size: 0x4)
    float BorderDeadZone;                                                             // 0x0224 (size: 0x4)
    bool bReduceRangeAtNight;                                                         // 0x0228 (size: 0x1)
    bool bIgnoreLineOfSight;                                                          // 0x0229 (size: 0x1)
    bool bFlaresNegateNightRangeReduction;                                            // 0x022A (size: 0x1)
    FVector SeatOffset;                                                               // 0x022C (size: 0xC)
    FVector TriggerBoxOffset;                                                         // 0x0238 (size: 0xC)
    FVector TriggerBoxExtents;                                                        // 0x0244 (size: 0xC)
    bool bIs360ViewWhenMounted;                                                       // 0x0250 (size: 0x1)
    uint8 SuppressionPercentage;                                                      // 0x0251 (size: 0x1)
    bool bIsSuppressible;                                                             // 0x0261 (size: 0x1)
    bool bShowExtraTracers;                                                           // 0x0262 (size: 0x1)
    bool bLimitOccupantFiringArc;                                                     // 0x0263 (size: 0x1)
    float MaxOccupantFiringArcDeviation;                                              // 0x0264 (size: 0x4)
    float OccupantFiringConeAngle;                                                    // 0x0268 (size: 0x4)
    bool bUsesLegacyFoxholeTurretDamageSelection;                                     // 0x026C (size: 0x1)
    bool bUseATDamageForVehicle;                                                      // 0x026D (size: 0x1)
    FDamageAttributes DamageAttributes;                                               // 0x0270 (size: 0x48)
    FDamageAttributes DamageAttributesAlternate;                                      // 0x02B8 (size: 0x48)
    float FiringConeAngle;                                                            // 0x0300 (size: 0x4)
    TEnumAsByte<ECollisionChannel> EnemyType;                                         // 0x0304 (size: 0x1)
    TWeakObjectPtr<class AActor> CurrentEnemy;                                        // 0x0308 (size: 0x8)
    float CurrentEnemyTargetYaw;                                                      // 0x0310 (size: 0x4)
    FHitNotify SimulatedHitNotify;                                                    // 0x0318 (size: 0x38)
    bool bIsEnemyObscured;                                                            // 0x0350 (size: 0x1)
    bool bIsSuppressedOverride;                                                       // 0x0351 (size: 0x1)
    TSet<TWeakObjectPtr<AFlareExplosionEffect>> NearbyFlares;                         // 0x0358 (size: 0x50)
    class UAITurretComponent* AITurretBlueprintCDO;                                   // 0x03A8 (size: 0x8)

    void OnRep_SimulatedHitNotify();
    void OnRep_IsEnemyObscured();
    void OnRep_CurrentEnemy();
}; // Size: 0x3E0

class UAITurretsControllerComponent : public UActorComponent
{
    TArray<class UAITurretComponent*> AITurretComponents;                             // 0x00B0 (size: 0x10)

}; // Size: 0xF8

class UATRifleComponent : public UHitScanWeaponComponent
{
    bool bRequiresOpenVehiclePlatform;                                                // 0x09B8 (size: 0x1)

}; // Size: 0x9C0

class UAccessBoxComponent : public UUseComponent
{
    int8 Priority;                                                                    // 0x04B8 (size: 0x1)
    int32 ItemHolderIndex;                                                            // 0x04BC (size: 0x4)
    int32 StockpileIndex;                                                             // 0x04C0 (size: 0x4)

}; // Size: 0x4D0

class UAmmoBackpackItemComponent : public UMiscItemComponent
{
    FName ProvidedAmmoName;                                                           // 0x08F0 (size: 0x8)

}; // Size: 0x8F8

class UAnchorComponent : public USceneComponent
{
    class USoundCue* RaisingSoundCue;                                                 // 0x01F0 (size: 0x8)
    class USoundCue* DroppingSoundCue;                                                // 0x01F8 (size: 0x8)
    class UStaticMeshComponent* RaisedAnchorMeshComponent;                            // 0x0200 (size: 0x8)
    class UStaticMeshComponent* DroppedAnchorMeshComponent;                           // 0x0208 (size: 0x8)
    class UAudioComponent* SoundComponent;                                            // 0x0210 (size: 0x8)

}; // Size: 0x220

class UAnchorUseComponent : public UUseComponent
{
}; // Size: 0x4C0

class UArtilleryGunnerMountComponent : public UMultiAmmoVehicleMountComponent
{
    TSoftClassPtr<ARocketLauncherProjectileDummy> DummyProjectileActorType;           // 0x08A8 (size: 0x28)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x08D0 (size: 0x8)
    float TelegraphOffset;                                                            // 0x08D8 (size: 0x4)
    float DamageDelay;                                                                // 0x08DC (size: 0x4)
    float FireDelay;                                                                  // 0x08E0 (size: 0x4)
    float SpoolupDelay;                                                               // 0x08E4 (size: 0x4)
    float FiringAngleOverride;                                                        // 0x08E8 (size: 0x4)
    bool bUseMuzzleRotationForFiringAngleOverride;                                    // 0x08EC (size: 0x1)
    bool bUseCustomDelayScaling;                                                      // 0x08ED (size: 0x1)
    bool bCanRotate;                                                                  // 0x08EE (size: 0x1)
    bool bUseClampTrjectoryToDistanceHack;                                            // 0x08EF (size: 0x1)
    bool bIsAutomaticFire;                                                            // 0x08F0 (size: 0x1)
    bool bHighArc;                                                                    // 0x08F1 (size: 0x1)
    float FlightObstructionCheckDistance;                                             // 0x08F4 (size: 0x4)
    bool bUsePerBarrelFX;                                                             // 0x08F8 (size: 0x1)
    bool bSupportsDirectFireMode;                                                     // 0x08F9 (size: 0x1)
    float DirectFireScopeRange;                                                       // 0x08FC (size: 0x4)
    float DirectFireMaxDistance;                                                      // 0x0900 (size: 0x4)
    float DirectFireDropOffset;                                                       // 0x0904 (size: 0x4)

    void ServerStopInvoke();
    void ServerSetPitch(float Pitch);
    void ServerFireShell(FActivityStateChange ActivityStateChange, const bool bInIsDirectFireMode);
    void MulticastPlayRocketFiringFX(const class AExplosiveAmmoPickup* AmmoPickupCDO, const uint8 MuzzleIndex);
    void MulticastPlayFiringFX(const class AExplosiveAmmoPickup* AmmoPickupCDO);
}; // Size: 0x928

class UAssaultRifleComponent : public UHeavyMachineGunItemComponent
{
    FName SingleShotCodeName;                                                         // 0x09C0 (size: 0x8)
    FName SingleShotAmmoCodeName;                                                     // 0x09C8 (size: 0x8)
    FText SingleShotDisplayName;                                                      // 0x09D0 (size: 0x18)
    class USoundCue* ChangeShootingModeSoundCue;                                      // 0x09E8 (size: 0x8)
    FActivityStateInfo FiringActivityStateInfoSemiMode;                               // 0x09F0 (size: 0x18)
    float SingleShotScopeRange;                                                       // 0x0A08 (size: 0x4)
    bool bIsInSingleShotMode;                                                         // 0x0A0C (size: 0x1)

    void ServerToggleFireMode();
}; // Size: 0xB38

class UAssemblyAreaAnimInstance : public UAnimInstance
{
    EAssemblyAreaState AssemblyAreaState;                                             // 0x0268 (size: 0x1)

}; // Size: 0x270

class UAssemblyAreaComponent : public USceneComponent
{
    float AnimationDuration;                                                          // 0x01F0 (size: 0x4)
    float WaterAnimationDuration;                                                     // 0x01F4 (size: 0x4)
    float WaterDepth;                                                                 // 0x01F8 (size: 0x4)
    FName WaterCullingName;                                                           // 0x01FC (size: 0x8)
    FName WaterMeshName;                                                              // 0x0204 (size: 0x8)
    FName WaterStencilName;                                                           // 0x020C (size: 0x8)
    class UMaterialInterface* WaterMaterialOverrides;                                 // 0x0218 (size: 0x188)
    TArray<class UBoxComponent*> BoxComponents;                                       // 0x03A0 (size: 0x10)
    class UBoxComponent* WaterCullingComponent;                                       // 0x03B0 (size: 0x8)
    class UMeshComponent* WaterMeshComponent;                                         // 0x03B8 (size: 0x8)
    class UMeshComponent* WaterStencilComponent;                                      // 0x03C0 (size: 0x8)
    TArray<class UParticleSystemComponent*> WaterRaiseVFX;                            // 0x03C8 (size: 0x10)
    TArray<class UParticleSystemComponent*> WaterLowerVFX;                            // 0x03D8 (size: 0x10)
    class UWarAudioComponent* WaterRaiseSFX;                                          // 0x03E8 (size: 0x8)
    class UWarAudioComponent* WaterLowerSFX;                                          // 0x03F0 (size: 0x8)
    class UWarAudioComponent* GateMovingSFX;                                          // 0x03F8 (size: 0x8)
    class UWarAudioComponent* GateStopSFX;                                            // 0x0400 (size: 0x8)
    class UWarAudioComponent* GeneralAnimationSFX;                                    // 0x0408 (size: 0x8)
    EAssemblyAreaWaterState WaterState;                                               // 0x0411 (size: 0x1)
    uint8 WaterLevel;                                                                 // 0x0412 (size: 0x1)

    void OnRep_WaterState();
    void OnRep_WaterLevel();
}; // Size: 0x420

class UAssemblyStationAnimInstance : public UAnimInstance
{
    bool bIsActive;                                                                   // 0x0268 (size: 0x1)

}; // Size: 0x270

class UBadWordFilter : public UObject
{
    FString RegularMatch;                                                             // 0x0028 (size: 0x10)
    FString ExactMatch;                                                               // 0x0038 (size: 0x10)

}; // Size: 0x48

class UBallastMountComponent : public UMountComponent
{
    EBallastType BallastType;                                                         // 0x0869 (size: 0x1)
    float TargetFloodPercent;                                                         // 0x086C (size: 0x4)

    void ServerSetTargetFloodPercent(float InTargetFloodPercent);
}; // Size: 0x880

class UBandagesComponent : public UItemComponent
{
    class USkeletalMesh* BandagesMesh;                                                // 0x08E8 (size: 0x8)
    class USoundCue* BanadagesSoundCue;                                               // 0x08F0 (size: 0x8)
    bool bIsEquipped;                                                                 // 0x08F8 (size: 0x1)

    void ServerUseBandages(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
}; // Size: 0x900

class UBannerAnimInstance : public UAnimInstance
{
    float WindSpeedNormalized;                                                        // 0x0268 (size: 0x4)

}; // Size: 0x270

class UBarbedWireComponent : public UBoxComponent
{
}; // Size: 0x400

class UBargeAnimInstance : public USimVehicleAnimInstance
{
    float RampAngle;                                                                  // 0x0298 (size: 0x4)
    float RampExtension;                                                              // 0x029C (size: 0x4)
    float PropellerSpeed;                                                             // 0x02A0 (size: 0x4)
    int32 PropellerAnimIndex;                                                         // 0x02A4 (size: 0x4)
    EDockedState DockState;                                                           // 0x02A8 (size: 0x1)

}; // Size: 0x2B0

class UBaseWidgetStyle : public USlateWidgetStyleContainerBase
{
    FBaseStyle WidgetStyle;                                                           // 0x0030 (size: 0x1EE80)

}; // Size: 0x1EEB0

class UBicycleAnimInstance : public USimVehicleAnimInstance
{
    bool bIsInUse;                                                                    // 0x0298 (size: 0x1)

}; // Size: 0x2A0

class UBinocularsItemComponent : public UItemComponent
{
    class UCurveFloat* CameraArmLengthCurve;                                          // 0x08E8 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x08F0 (size: 0x8)
    bool bIsEquipped;                                                                 // 0x08F8 (size: 0x1)

    void ServerStartStopScope(bool IsStartScope, FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
}; // Size: 0x900

class UBoatHullComponent : public UBoxComponent
{
}; // Size: 0x400

class UBoatHullMeshComponent : public UStaticMeshComponent
{
}; // Size: 0x470

class UBorderBaseManager : public UObject
{
}; // Size: 0x488

class UBuildArmAnimInstance : public UAnimInstance
{
    class USoundCue* BuildSoundCue;                                                   // 0x0268 (size: 0x8)
    EBuildArmType Type;                                                               // 0x0270 (size: 0x1)
    float HorizontalArmSpeed;                                                         // 0x0274 (size: 0x4)
    float RotationZSpeed;                                                             // 0x0278 (size: 0x4)
    float SideDistanceSpeed;                                                          // 0x027C (size: 0x4)
    float PulleySpeed;                                                                // 0x0280 (size: 0x4)
    float MinHorizontalDistance;                                                      // 0x0284 (size: 0x4)
    float MaxHorizontalDistance;                                                      // 0x0288 (size: 0x4)
    float MaxSideDistanceOffset;                                                      // 0x028C (size: 0x4)
    float MaxYawOffset;                                                               // 0x0290 (size: 0x4)
    float WaitTime;                                                                   // 0x0294 (size: 0x4)
    float HorizontalDistanceToTarget;                                                 // 0x0298 (size: 0x4)
    float PulleyLength;                                                               // 0x029C (size: 0x4)
    float Yaw;                                                                        // 0x02A0 (size: 0x4)
    float SideDistance;                                                               // 0x02A4 (size: 0x4)

}; // Size: 0x320

class UBuildFootprintBoxComponent : public UBoxComponent
{
    FBuildFootprintInfo Info;                                                         // 0x0400 (size: 0x3)

}; // Size: 0x410

class UBuildSocketComponent : public USceneComponent
{
    TWeakObjectPtr<class AActor> ConnectedActor;                                      // 0x01F0 (size: 0x8)
    TWeakObjectPtr<class UBuildSocketComponent> ConnectedSocket;                      // 0x01F8 (size: 0x8)
    FBuildSocketTag ConnectedTag;                                                     // 0x0200 (size: 0x58)
    TArray<FBuildSocketTag> SocketTags;                                               // 0x0258 (size: 0x10)
    FPipelineSocket PipeInfo;                                                         // 0x0268 (size: 0x2)
    bool bDisabled;                                                                   // 0x026A (size: 0x1)
    bool bIsUnidirectional;                                                           // 0x026B (size: 0x1)
    bool bIgnoreUnidirectionalityForModifications;                                    // 0x026C (size: 0x1)
    bool bDisabledInBuildGhost;                                                       // 0x026D (size: 0x1)
    ESocketDirection Direction;                                                       // 0x0270 (size: 0x4)
    float MaxRotation;                                                                // 0x0274 (size: 0x4)
    ESlopeRotationMode SlopeRotationMode;                                             // 0x0278 (size: 0x4)
    float MaxZRotation;                                                               // 0x027C (size: 0x4)
    bool bDoLandscapeChecks;                                                          // 0x0280 (size: 0x1)
    bool bDisallowBuildingOnWater;                                                    // 0x0281 (size: 0x1)
    bool bMustBeBuiltOnWater;                                                         // 0x0282 (size: 0x1)
    float MaxHeightAboveLandscape;                                                    // 0x0284 (size: 0x4)
    float MaxDepthBelowLandscape;                                                     // 0x0288 (size: 0x4)
    float MaxSurfaceSamplePadding;                                                    // 0x028C (size: 0x4)
    float MaxSurfaceSampleSlopeAngle;                                                 // 0x0290 (size: 0x4)
    bool bAllowMultipleOverlaps;                                                      // 0x0294 (size: 0x1)
    bool bContributeToIslandIntegrityBonus;                                           // 0x0295 (size: 0x1)
    float MinimumPathSeparation;                                                      // 0x0298 (size: 0x4)
    bool bOnlyTestMinimumPathSeparationOnUnconnected;                                 // 0x029C (size: 0x1)
    bool bAllowRotatedPlacement;                                                      // 0x029D (size: 0x1)
    bool bIgnoreOwnerConnectedActorsWhenSnapped;                                      // 0x029E (size: 0x1)

}; // Size: 0x2B0

class UBulkheadDoor : public USkeletalMeshComponent
{
    FVector InteractionVolumeOffset;                                                  // 0x0A98 (size: 0xC)
    FVector InteractionVolumeExtents;                                                 // 0x0AA4 (size: 0xC)
    FName ObstructionVolumeName;                                                      // 0x0AB0 (size: 0x8)
    EDynamicState DoorState;                                                          // 0x0AB8 (size: 0x1)
    bool bAllowsShippableTransfer;                                                    // 0x0AB9 (size: 0x1)
    int32 Index;                                                                      // 0x0ABC (size: 0x4)
    class USoundCue* OpenSoundCue;                                                    // 0x0AC0 (size: 0x8)
    class USoundCue* CloseSoundCue;                                                   // 0x0AC8 (size: 0x8)
    class UBoxComponent* InteractionVolume;                                           // 0x0AD0 (size: 0x8)
    class UBoxComponent* ObstructionVolume;                                           // 0x0AD8 (size: 0x8)
    class UParticleSystemComponent* WaterSpreadFXInstance;                            // 0x0AE0 (size: 0x8)

    void OnRep_DoorState();
}; // Size: 0xB20

class UBulkheadDoorAnimInstance : public UAnimInstance
{
    EDynamicState DoorState;                                                          // 0x0268 (size: 0x1)

}; // Size: 0x270

class UBulkheadDoorUseComponent : public UUseComponent
{
}; // Size: 0x4C0

class UCalloutComponent : public UActorComponent
{
    float Cooldown;                                                                   // 0x00B0 (size: 0x4)
    TSubclassOf<class ACalloutMarkerGhost> CalloutMarkerGhostClass;                   // 0x00B8 (size: 0x8)
    TSubclassOf<class ACalloutMarker> CalloutMarkerClass;                             // 0x00C0 (size: 0x8)
    TArray<FCalloutInfo> WorldCalloutInfoList;                                        // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class UCharacterAnimInstance : public UAnimInstance
{
    class UAudioComponent* FootstepsAudioComp;                                        // 0x0268 (size: 0x8)
    float Speed;                                                                      // 0x0270 (size: 0x4)
    float AngularSpeedNative;                                                         // 0x0274 (size: 0x4)
    float LadderClimbSpeedNormalized;                                                 // 0x0278 (size: 0x4)
    float MovementDirection;                                                          // 0x027C (size: 0x4)
    bool bIsFalling;                                                                  // 0x0280 (size: 0x1)
    bool bIsScoping;                                                                  // 0x0281 (size: 0x1)
    float ShoulderingDuration;                                                        // 0x0284 (size: 0x4)
    bool bIsBlocking;                                                                 // 0x0288 (size: 0x1)
    bool bIsWorking;                                                                  // 0x0289 (size: 0x1)
    bool bIsTrapped;                                                                  // 0x028A (size: 0x1)
    bool bIsInHeavilyFlooded;                                                         // 0x028B (size: 0x1)
    bool bIsSwimming;                                                                 // 0x028C (size: 0x1)
    bool bIsDrowning;                                                                 // 0x028D (size: 0x1)
    float AimOffsetYaw;                                                               // 0x0290 (size: 0x4)
    float AimOffsetPitch;                                                             // 0x0294 (size: 0x4)
    float PlayRateNative;                                                             // 0x0298 (size: 0x4)
    float CrankingPlayRateNative;                                                     // 0x029C (size: 0x4)
    ESimCharacterStance CharacterStance;                                              // 0x02A0 (size: 0x1)
    ECharacterActivityState ActivityState;                                            // 0x02A1 (size: 0x1)
    EEquippedWeaponGripType EquippedWeaponGripType;                                   // 0x02A2 (size: 0x1)
    float StaggerAmount;                                                              // 0x02A4 (size: 0x4)
    float AttackChargingProgress;                                                     // 0x02A8 (size: 0x4)
    uint8 CurrentFallingPose;                                                         // 0x02AC (size: 0x1)
    bool bStanceIsCrouched;                                                           // 0x02AD (size: 0x1)
    bool bStanceIsProne;                                                              // 0x02AE (size: 0x1)
    bool bIsCommander;                                                                // 0x02AF (size: 0x1)
    bool bIsSitting;                                                                  // 0x02B0 (size: 0x1)
    bool bIsZombie;                                                                   // 0x02B1 (size: 0x1)
    EZombieType ZombieType;                                                           // 0x02B2 (size: 0x1)
    bool bHasLeftHandIK;                                                              // 0x02B3 (size: 0x1)
    bool bHasRightHandIK;                                                             // 0x02B4 (size: 0x1)
    FTransform LeftHandIKTransform;                                                   // 0x02C0 (size: 0x30)
    FTransform RightHandIKTransform;                                                  // 0x02F0 (size: 0x30)

    float OnStartActivityState(const ECharacterActivityState ActivityState);
    float GetActivityStateDuration(const ECharacterActivityState InActivityState);
    void AnimNotify_ShowEquippedMesh(const class UAnimNotify* Notify);
    void AnimNotify_HideEquippedMesh(const class UAnimNotify* Notify);
    void AnimNotify_FootFallR(const class UAnimNotify* Notify);
    void AnimNotify_FootFallL(const class UAnimNotify* Notify);
}; // Size: 0x340

class UClientConfigManager : public UObject
{
}; // Size: 0xE8

class UClientStreamingManager : public UObject
{
    float StreamingCheckInterval;                                                     // 0x0028 (size: 0x4)
    float CullDistance;                                                               // 0x002C (size: 0x4)
    TArray<class ULevelStreamingHex*> StreamingLevels;                                // 0x0038 (size: 0x10)

    void OnLevelUnloaded(class ULevelStreamingHex* LevelStreaming);
    void OnLevelShown(class ULevelStreamingHex* LevelStreaming);
    void OnLevelLoadComplete(class ULevelStreamingHex* LevelStreaming);
    void OnLevelHidden(class ULevelStreamingHex* LevelStreaming);
}; // Size: 0xD8

class UCoastalGunAnimInstance : public UAnimInstance
{
    float TrackingAngle;                                                              // 0x0268 (size: 0x4)

}; // Size: 0x270

class UConnectionRulesComponent : public UActorComponent
{
    TArray<FConnectionRule> Rules;                                                    // 0x00B0 (size: 0x10)
    FConnectionRule DefaultRule;                                                      // 0x00C0 (size: 0x20)

}; // Size: 0xE0

class UConstructionEquipmentAnimInstance : public UAnimInstance
{
    float Angle;                                                                      // 0x0268 (size: 0x4)
    float Pitch;                                                                      // 0x026C (size: 0x4)
    float Yaw;                                                                        // 0x0270 (size: 0x4)
    float HorizontalDistance;                                                         // 0x0274 (size: 0x4)
    float VerticalDistance;                                                           // 0x0278 (size: 0x4)

}; // Size: 0x280

class UConstructionGunnerComponent : public UMountComponent
{
    bool bSupportsAdvancedConstruction;                                               // 0x0868 (size: 0x1)

}; // Size: 0x870

class UConstructionVehicleAnimInstance : public USimVehicleAnimInstance
{
    float LeftTreadPlayrate;                                                          // 0x0298 (size: 0x4)
    float RightTreadPlayrate;                                                         // 0x029C (size: 0x4)
    float CabinYaw;                                                                   // 0x02A0 (size: 0x4)
    bool bIsDoingWork;                                                                // 0x02A4 (size: 0x1)

}; // Size: 0x2B0

class UCraneComponent : public UActorComponent
{
    FCraneComponents Components;                                                      // 0x00B0 (size: 0x38)
    FCraneComponentConfig Config;                                                     // 0x00E8 (size: 0xB8)
    TEnumAsByte<ECraneState> State;                                                   // 0x01A0 (size: 0x1)
    float HorizontalDistanceToTarget;                                                 // 0x01A4 (size: 0x4)
    float CraneHeight;                                                                // 0x01A8 (size: 0x4)
    float PulleyLength;                                                               // 0x01AC (size: 0x4)
    float CabRotationZ;                                                               // 0x01B0 (size: 0x4)
    float HookRotationZ;                                                              // 0x01B4 (size: 0x4)
    FName CurrentShippable;                                                           // 0x01B8 (size: 0x8)
    FReplicatedShippableData ShippableData;                                           // 0x01C0 (size: 0x18)
    class AActor* RelevantShippable;                                                  // 0x01D8 (size: 0x8)
    class AActor* RelevantShippableTarget;                                            // 0x01E0 (size: 0x8)
    FSavedShippableData SavedData;                                                    // 0x01E8 (size: 0xD0)
    class UMeshComponent* DynamicMeshComponent;                                       // 0x0358 (size: 0x8)

    void ServerUpdateHookRotation(const float HookRotation);
    void ServerUpdateAimLocation(FVector_NetQuantize AimLocation);
    void ServerTransferShippableTo(class AActor* Actor);
    void ServerToggleDeployment();
    void ServerSetIsScoping(const bool bInIsScoping);
    void ServerPickUpShippableFrom(class ASimVehicle* Vehicle);
    void ServerPickUpShippable(class AActor* Actor);
    void ServerDropShippable();
    void OnRep_State(const TEnumAsByte<ECraneState> PreviousState);
    void OnRep_ShippableData();
    void OnRep_RelevantShippable();
    void OnRep_PulleyLength(const float PreviousPulleyLength);
    void OnRep_HorizontalDistanceToTarget(const float PreviousHorizontalDistanceToTarget);
    void OnRep_CurrentShippable();
    void OnRep_CabRotationZ(const float PreviousCabRotationZ);
    void ClientShowShippableStatus(const EShippableStatus Status);
}; // Size: 0x390

class UCraneComponentAnimInstance : public UAnimInstance
{
    float Speed;                                                                      // 0x0268 (size: 0x4)
    float WheelRadius;                                                                // 0x026C (size: 0x4)
    float Yaw;                                                                        // 0x0270 (size: 0x4)
    float HookYaw;                                                                    // 0x0274 (size: 0x4)
    float HorizontalDistanceToTarget;                                                 // 0x0278 (size: 0x4)
    float CraneHeight;                                                                // 0x027C (size: 0x4)
    float PulleyLength;                                                               // 0x0280 (size: 0x4)
    bool bIsDestroyed;                                                                // 0x0284 (size: 0x1)
    bool bIsEmplaced;                                                                 // 0x0285 (size: 0x1)

}; // Size: 0x290

class UCraneOperatorComponent : public UMountComponent
{

    void ServerUpdateHookRotation(const float HookRotation);
    void ServerUpdateAimLocation(FVector_NetQuantize AimLocation);
    void ServerTransferShippableTo(class AActor* Actor);
    void ServerToggleDeployment();
    void ServerSetIsScoping(const bool bIsScoping);
    void ServerPickUpShippableFrom(class ASimVehicle* Vehicle);
    void ServerPickUpShippable(class AActor* Actor);
    void ServerDropShippable();
    void ClientShowShippableStatus(const EShippableStatus Status);
}; // Size: 0x870

class UCraneSpawnLocationComponent : public USceneComponent
{
    TSubclassOf<class AStaticCrane> CraneClass;                                       // 0x01F0 (size: 0x8)
    class AStructure* Crane;                                                          // 0x01F8 (size: 0x8)
    class UBoxComponent* UseAreaBox;                                                  // 0x0200 (size: 0x8)
    bool bIsSpawned;                                                                  // 0x0208 (size: 0x1)

}; // Size: 0x210

class UCrossRegionActorManager : public UObject
{
    TSet<AActor*> AllRemoteActors;                                                    // 0x0238 (size: 0x50)

}; // Size: 0x290

class UCursorWidget : public UUserWidget
{

    FSlateBrush GetCursorBrush();
}; // Size: 0x230

class UDecayDamageType : public USimDamageType
{
}; // Size: 0x140

class UDecayPreventionUserComponent : public UUserComponent
{
    FDecayPreventionStructureCounts StructureCounts;                                  // 0x00C8 (size: 0x10)

    void ServerUpdateStructureCount();
}; // Size: 0xE0

class UDeployUseComponent : public UUseComponent
{
}; // Size: 0x4C0

class UDeployableItemComponent : public ULargeItemComponent
{
}; // Size: 0x8F8

class UDeployedTripodAnimInstance : public UAnimInstance
{
    bool bIsDeployed;                                                                 // 0x0268 (size: 0x1)
    float Height;                                                                     // 0x026C (size: 0x4)
    float RelativeYaw;                                                                // 0x0270 (size: 0x4)
    float RelativePitch;                                                              // 0x0274 (size: 0x4)

}; // Size: 0x280

class UDepthProjectileMovementComponent : public UProjectileMovementComponent
{
}; // Size: 0x1E0

class UDockComponent : public UBoxComponent
{
    bool bRequiresDynamicHeightCheck;                                                 // 0x0400 (size: 0x1)
    float MaximumAngle;                                                               // 0x0404 (size: 0x4)
    float SurfaceOffset;                                                              // 0x0408 (size: 0x4)
    bool bUseComponentForwardVector;                                                  // 0x040C (size: 0x1)

}; // Size: 0x410

class UDrawStructureLayerComponent : public UPrimitiveComponent
{
}; // Size: 0x400

class UDrawbridgeAnimInstance : public UAnimInstance
{
    bool bIsSwitchOpen;                                                               // 0x0268 (size: 0x1)
    float OpenProgress;                                                               // 0x026C (size: 0x4)

}; // Size: 0x270

class UEmplacedFoundationAnimInstance : public UAnimInstance
{
    float Yaw;                                                                        // 0x0268 (size: 0x4)

}; // Size: 0x270

class UEmplacedWeaponAnimInstance : public UAnimInstance
{
    float Yaw;                                                                        // 0x0268 (size: 0x4)
    float Pitch;                                                                      // 0x026C (size: 0x4)
    bool bIsCranking;                                                                 // 0x0270 (size: 0x1)
    bool bIsShooting;                                                                 // 0x0271 (size: 0x1)

    void OnFiringComplete();
    void AnimNotify_OnFiringComplete(const class UAnimNotify* Notify);
}; // Size: 0x280

class UEmplacementMortarMountComponent : public UMultiAmmoStructureMountComponent
{
    float ScopeRange;                                                                 // 0x08A0 (size: 0x4)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x08A8 (size: 0x8)
    float TelegraphDelay;                                                             // 0x08B0 (size: 0x4)
    float MortarFlightTime;                                                           // 0x08B4 (size: 0x4)

    void ServerStartInvoke(FActivityStateChange ActivityStateChange, float Distance);
    void MulticastPlayFiringFX(const class AExplosiveAmmoPickup* AmmoPickupCDO);
    void MulticastDamageDebug(FVector TraceStart, FVector TraceEnd, FVector Location, const class AExplosiveAmmoPickup* AmmoPickupCDO);
}; // Size: 0x8B8

class UEnterVehicleUseComponent : public UUseComponent
{
}; // Size: 0x4C0

class UEnvironmentDamageType : public USimDamageType
{
}; // Size: 0x140

class UEnvironmentalModificationData : public UObject
{
    TArray<FCraterInfo> CraterS;                                                      // 0x0028 (size: 0x10)
    float MaxCraterCoverage;                                                          // 0x0038 (size: 0x4)
    float MinCraterSpawnDevastation;                                                  // 0x003C (size: 0x4)
    float CraterSpawnProbability;                                                     // 0x0040 (size: 0x4)
    float MaxCraterAngle;                                                             // 0x0044 (size: 0x4)
    FDecalData Decal;                                                                 // 0x0048 (size: 0x20)
    FDecalData TownDecal;                                                             // 0x0068 (size: 0x20)
    float TownDecalDistance;                                                          // 0x0088 (size: 0x4)
    int32 DecalSortOrder;                                                             // 0x008C (size: 0x4)
    int32 PuddleDecalSortOrder;                                                       // 0x0090 (size: 0x4)
    TArray<FFoliageModificationInfo> FoliageReplacements;                             // 0x0098 (size: 0x10)
    float MaxTreeRemovalPercentage;                                                   // 0x00A8 (size: 0x4)
    float FoliageRemovalThresholdWeights;                                             // 0x00AC (size: 0x40)
    float SampleExtents;                                                              // 0x00EC (size: 0x4)
    class UCurveFloat* DevastationToContrast;                                         // 0x00F0 (size: 0x8)
    class UCurveFloat* DevastationToSaturation;                                       // 0x00F8 (size: 0x8)
    class UCurveFloat* SunHeightToDevastationPostProcessMultiplier;                   // 0x0100 (size: 0x8)
    float MaxPuddleCoverage;                                                          // 0x0108 (size: 0x4)
    class UCurveFloat* PuddlesInGroupDistribution;                                    // 0x0110 (size: 0x8)
    class UCurveFloat* PuddleGroupRadiusDistribution;                                 // 0x0118 (size: 0x8)
    float PuddleMinDistance;                                                          // 0x0120 (size: 0x4)
    class UCurveFloat* PuddleMinDistanceDistribution;                                 // 0x0128 (size: 0x8)
    class UCurveFloat* PuddleRadiusDistribution;                                      // 0x0130 (size: 0x8)
    class UCurveFloat* PuddleMaximumRainfallDistribution;                             // 0x0138 (size: 0x8)
    class UCurveFloat* StructureMaximumRainfallDistribution;                          // 0x0140 (size: 0x8)
    class UCurveFloat* RainfallVisualMappingCurve;                                    // 0x0148 (size: 0x8)
    float RainfallPerIntensitySecond;                                                 // 0x0150 (size: 0x4)
    float RainfallDevastationMultiplier;                                              // 0x0154 (size: 0x4)
    float RainfallDryingRate;                                                         // 0x0158 (size: 0x4)
    float MaximumPuddleSlopeAngle;                                                    // 0x015C (size: 0x4)
    TArray<FPuddleDecalInfo> PuddleDecals;                                            // 0x0160 (size: 0x10)
    TArray<class UPhysicalMaterial*> PuddleBlockingPhysicalMaterials;                 // 0x0170 (size: 0x10)
    float RainfallPerShovel;                                                          // 0x0180 (size: 0x4)
    float RainfallPerWaterBucket;                                                     // 0x0184 (size: 0x4)

}; // Size: 0x188

class UEquipmentHolderComponent : public UItemHolderComponent
{
}; // Size: 0x140

class UExitComponent : public USceneComponent
{
}; // Size: 0x1F0

class UExplodeOnDeathComponent : public UActorComponent
{
    TSubclassOf<class AWarExplosionEffect> ExplosionTemplate;                         // 0x00B0 (size: 0x8)
    FName ExplosiveCodeName;                                                          // 0x00B8 (size: 0x8)
    float ExplosionOffsetZ;                                                           // 0x00C0 (size: 0x4)
    TArray<EDamageType> AcceptDamageTypes;                                            // 0x00C8 (size: 0x10)

}; // Size: 0x120

class UExplosiveItemComponent : public UItemComponent
{
    float DeployDuration;                                                             // 0x08E8 (size: 0x4)
    TSubclassOf<class AExplosive> ExplosiveClass;                                     // 0x08F0 (size: 0x8)
    class USoundCue* DeploySound;                                                     // 0x08F8 (size: 0x8)
    bool ShouldShowDetonationMessage;                                                 // 0x0900 (size: 0x1)
    bool bPreventBorderPlacement;                                                     // 0x0901 (size: 0x1)
    bool ShouldDoLandscapeCheck;                                                      // 0x0902 (size: 0x1)
    bool bIsEquipped;                                                                 // 0x0903 (size: 0x1)

    void ServerStartInvoke(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
    void MulticastPlayDeploySFX();
}; // Size: 0x928

class UFacilityFuelLightComponent : public USceneComponent
{
    int32 MaterialIndex;                                                              // 0x01F0 (size: 0x4)

}; // Size: 0x200

class UFacilityLightComponent : public UActorComponent
{
    FName TargetTag;                                                                  // 0x00B0 (size: 0x8)
    TArray<class UMaterialInterface*> Materials;                                      // 0x00B8 (size: 0x10)
    TArray<FFacilityLightRenderInfo> RenderInfoArray;                                 // 0x00C8 (size: 0x10)

}; // Size: 0xE0

class UFacilityRefineryAnimInstance : public UAnimInstance
{
    bool bIsActive;                                                                   // 0x0268 (size: 0x1)
    class UMaterialInterface* AnimatedMaterial;                                       // 0x0270 (size: 0x8)
    FName AnimatedSocketName;                                                         // 0x0278 (size: 0x8)
    float UVOffsetSpeed;                                                              // 0x0280 (size: 0x4)

}; // Size: 0x2A0

class UFacilityRefineryUserComponent : public UUserComponent
{
    FFacilityRefineryOrder Order;                                                     // 0x00C8 (size: 0xA0)
    uint8 PendingOrderCount;                                                          // 0x0168 (size: 0x1)
    uint8 OrderCount;                                                                 // 0x0169 (size: 0x1)
    int16 ItemInputBuffer;                                                            // 0x016A (size: 0x2)

    void ServerSubmitResources(const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount);
    void ServerStartNewOrderWithResources(const uint8 Index, const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount);
    void ServerSetConversionInfo(const int8 Index);
    void ServerSetAccessLevel(const EAccessLevel AccessLevel);
    void ServerRetrieveResources(const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount, const bool bRetrieveAsCrates, const bool bSubmitToStockpile);
    void OnRep_PendingOrderCount();
    void OnRep_OrderCount();
    void OnRep_Order();
    void OnRep_ItemInputBuffer();
}; // Size: 0x170

class UFestivalFlagItemComponent : public ULargeItemComponent
{
    float WalkingSpeedScale;                                                          // 0x08F8 (size: 0x4)
    uint8 TeamId;                                                                     // 0x08FC (size: 0x1)

    void OnRep_TeamID();
}; // Size: 0x900

class UFirePitComponent : public USceneComponent
{
    class UTemperatureModifierSphereComponent* TemperatureModifierSphereComponent;    // 0x01F0 (size: 0x8)
    class UTemperatureModifierBoxComponent* TemperatureModifierBoxComponent;          // 0x01F8 (size: 0x8)
    class UStaticMeshComponent* FireMesh;                                             // 0x0200 (size: 0x8)
    class UParticleSystemComponent* Fire1ParticleSystem;                              // 0x0208 (size: 0x8)
    class UParticleSystemComponent* Fire2ParticleSystem;                              // 0x0210 (size: 0x8)
    class UParticleSystemComponent* Fire3ParticleSystem;                              // 0x0218 (size: 0x8)
    class UWarAudioComponent* FireSFXLoop;                                            // 0x0220 (size: 0x8)
    float DieselConsumptionRate;                                                      // 0x0228 (size: 0x4)

}; // Size: 0x240

class UFiremanMountComponent : public UMountComponent
{
    int32 CoalPerBoost;                                                               // 0x0868 (size: 0x4)

    void ServerBoost(FActivityStateChange ActivityStateChange);
    void MulticastBoostFX();
}; // Size: 0x870

class UFirstAidKitComponent : public UItemComponent
{
    float HealAmountPerApplication;                                                   // 0x08E8 (size: 0x4)
    float HealApplicationInterval_Sec;                                                // 0x08EC (size: 0x4)
    uint8 HealingChargesPerBandage;                                                   // 0x08F0 (size: 0x1)
    class USkeletalMesh* FirstAidKitMesh;                                             // 0x08F8 (size: 0x8)
    class USoundCue* FirstAidApplicationSound;                                        // 0x0900 (size: 0x8)
    bool bIsEquipped;                                                                 // 0x0920 (size: 0x1)

    void ServerUseFirstAidKit();
    void ServerStartActivityState(FActivityStateChange ActivityStateChange);
    void ServerCancelActivityState();
    void OnRep_IsEquipped();
}; // Size: 0x928

class UFlameMountComponent : public UHitScanMountComponent
{
    class UParticleSystem* FlameStreamFX;                                             // 0x0930 (size: 0x8)
    class UParticleSystem* FlameBurstFX;                                              // 0x0938 (size: 0x8)
    class UParticleSystemComponent* AttachedFlameComponent;                           // 0x0940 (size: 0x8)
    class UParticleSystemComponent* ImpactBurstFXComponent;                           // 0x0948 (size: 0x8)
    float FuelReloadAmount;                                                           // 0x0950 (size: 0x4)
    float FlameSpeedPredictionFactor;                                                 // 0x0954 (size: 0x4)
    float FlameStreamFXParam;                                                         // 0x0958 (size: 0x4)
    FFlameImpactFXInfo FlameImpactFXInfo;                                             // 0x095C (size: 0x10)

    void OnRep_FlameStreamFXParam();
    void OnRep_FlameImpactFXInfo();
}; // Size: 0x970

class UFlamethrowerWeaponComponent : public UHeavyMachineGunItemComponent
{
    class UParticleSystem* FlameStreamFX;                                             // 0x09C0 (size: 0x8)
    class UParticleSystem* FlameBurstFX;                                              // 0x09C8 (size: 0x8)
    class UParticleSystem* FlameIdleFX;                                               // 0x09D0 (size: 0x8)
    class UParticleSystemComponent* AttachedFlameComponent;                           // 0x09D8 (size: 0x8)
    class UParticleSystemComponent* ImpactBurstFXComponent;                           // 0x09E0 (size: 0x8)
    class UParticleSystemComponent* IdleFlameFXComponent;                             // 0x09E8 (size: 0x8)
    float FlameSpeedPredictionFactor;                                                 // 0x09F0 (size: 0x4)
    float FlameStreamFXParam;                                                         // 0x09F4 (size: 0x4)
    FFlameImpactFXInfo FlameImpactFXInfo;                                             // 0x09F8 (size: 0x10)
    class AAmmoPickup* CachedAmmoPickupCDO;                                           // 0x0A08 (size: 0x8)
    FVector IdleFlameFXOffset;                                                        // 0x0A10 (size: 0xC)

    void OnRep_FlameStreamFXParam();
    void OnRep_FlameImpactFXInfo();
}; // Size: 0xA28

class UFloodableComponent : public UActorComponent
{
    TArray<class URoomComponent*> Rooms;                                              // 0x00B0 (size: 0x10)
    TArray<class UBulkheadDoor*> Doors;                                               // 0x00C0 (size: 0x10)
    float LeakRepairCostMultiplier;                                                   // 0x00E8 (size: 0x4)
    float LeakWaterPerSecondMultiplier;                                               // 0x00EC (size: 0x4)
    class UParticleSystem* WaterSpreadFX;                                             // 0x00F0 (size: 0x8)
    FName WaterStencilName;                                                           // 0x00F8 (size: 0x8)
    float MaxWaterLevel;                                                              // 0x0104 (size: 0x4)
    float MaxWaterHeight;                                                             // 0x0108 (size: 0x4)

}; // Size: 0x110

class UFortFireSuppressionAnimInstance : public UAnimInstance
{
    bool bIsDispensingWater;                                                          // 0x0268 (size: 0x1)

}; // Size: 0x270

class UFortStaticArtilleryAnimInstance : public UAnimInstance
{
    float HorizontalAngle;                                                            // 0x0268 (size: 0x4)
    float VerticalAngle;                                                              // 0x026C (size: 0x4)

}; // Size: 0x270

class UFoxholeTurretAnimInstance : public UAnimInstance
{
    float TrackingAngle;                                                              // 0x0268 (size: 0x4)

}; // Size: 0x270

class UFreighterAnimInstance : public USimVehicleAnimInstance
{
    EFreighterState FreighterState;                                                   // 0x0298 (size: 0x1)

}; // Size: 0x2A0

class UFuelItemComponent : public UItemComponent
{
    FName FuelItemCodeName;                                                           // 0x08E8 (size: 0x8)
    int32 FuelCapacity;                                                               // 0x08F0 (size: 0x4)
    class USoundCue* RefuelSound;                                                     // 0x08F8 (size: 0x8)
    bool bIsEquipped;                                                                 // 0x0918 (size: 0x1)

    void ServerStartActivityState(FActivityStateChange ActivityStateChange);
    void ServerRefuelTarget();
    void ServerCancelActivityState();
    void OnRep_IsEquipped();
}; // Size: 0x920

class UGangwayRamp : public USkeletalMeshComponent
{
    FRampData RampData;                                                               // 0x0AA0 (size: 0x70)
    FVector InteractionVolumeOffset;                                                  // 0x0B10 (size: 0xC)
    FVector InteractionVolumeExtents;                                                 // 0x0B1C (size: 0xC)
    class USoundCue* DeployLoopSoundCue;                                              // 0x0B28 (size: 0x8)
    class USoundCue* DeployCompleteSoundCue;                                          // 0x0B30 (size: 0x8)
    class UBoxComponent* InteractionVolume;                                           // 0x0B38 (size: 0x8)
    class UBoxComponent* PassengerVolume;                                             // 0x0B40 (size: 0x8)
    ERampState State;                                                                 // 0x0B48 (size: 0x1)
    float RampAngle;                                                                  // 0x0B4C (size: 0x4)
    class UAudioComponent* DeployAudioComponent;                                      // 0x0B50 (size: 0x8)

    void OnRep_State(ERampState PrevState);
}; // Size: 0xB70

class UGangwayRampAnimInstance : public UAnimInstance
{
    ERampState RampState;                                                             // 0x0268 (size: 0x1)
    float RampAngle;                                                                  // 0x026C (size: 0x4)

}; // Size: 0x270

class UGangwayRampUseComponent : public UUseComponent
{
}; // Size: 0x4C0

class UGarrisonComponent : public UActorComponent
{
    float GarrisonSize;                                                               // 0x00B0 (size: 0x4)
    bool bIsGarrisonEnabled;                                                          // 0x00B4 (size: 0x1)
    bool bIsToggledDynamically;                                                       // 0x00B5 (size: 0x1)

}; // Size: 0xC0

class UGateAnimInstance : public UAnimInstance
{
    EGateState GateState;                                                             // 0x0268 (size: 0x1)

}; // Size: 0x270

class UGenericCrateStockpileComponent : public UGenericStockpileComponent
{
}; // Size: 0x2A8

class UGenericItemStockpileComponent : public UGenericStockpileComponent
{
}; // Size: 0x2A8

class UGenericStockpileComponent : public UActorComponent
{
    TArray<FGenericStockpileConfig> Configs;                                          // 0x00B0 (size: 0x10)
    float RetrieveDurationModifier;                                                   // 0x00C0 (size: 0x4)
    TMap<FName, float> CustomRetrieveDurationModifiers;                               // 0x00C8 (size: 0x50)
    bool bAllowWaterVehicles;                                                         // 0x0118 (size: 0x1)
    bool bCloseUIWhenRetrieving;                                                      // 0x0119 (size: 0x1)
    bool bRequireFullItemStockpileToSubmit;                                           // 0x011A (size: 0x1)
    bool bAllowNeutralSubmissions;                                                    // 0x011B (size: 0x1)
    bool bAllowDirectRetrievals;                                                      // 0x011C (size: 0x1)
    bool bAllowContainerSubmission;                                                   // 0x011D (size: 0x1)
    bool bAllowTrainPassengerSubmission;                                              // 0x011E (size: 0x1)
    bool bIsRestrictedByClaimStatus;                                                  // 0x011F (size: 0x1)
    bool bAreCratesDisassembled;                                                      // 0x0120 (size: 0x1)
    TArray<FStockpileEntry> Items;                                                    // 0x0128 (size: 0x10)
    TArray<FStockpileEntry> ReservableItemCrates;                                     // 0x0138 (size: 0x10)
    TArray<FStockpileEntry> Vehicles;                                                 // 0x0148 (size: 0x10)
    TArray<FStockpileEntry> VehicleCrates;                                            // 0x0158 (size: 0x10)
    TArray<FStockpileEntry> Structures;                                               // 0x0168 (size: 0x10)
    TArray<FStockpileEntry> StructureCrates;                                          // 0x0178 (size: 0x10)
    FStockpileEvents Events;                                                          // 0x0188 (size: 0x30)

    void OnRep_Items();
}; // Size: 0x2A8

class UGrenadeAdapterComponent : public UHitScanWeaponComponent
{
    class USkeletalMesh* GrenadeAdapterMesh;                                          // 0x09B8 (size: 0x8)
    FActivityStateInfo GrenadeReloadActivityStateInfo;                                // 0x09C0 (size: 0x18)
    TArray<class TSubclassOf<AWarProjectile>> GrenadeClasses;                         // 0x09D8 (size: 0x10)
    class USoundCue* GrenadeFireSound;                                                // 0x09E8 (size: 0x8)
    class USkeletalMesh* BayonetMesh;                                                 // 0x09F0 (size: 0x8)
    class USoundCue* AttachAccessorySound;                                            // 0x09F8 (size: 0x8)
    class USoundCue* BayonetAttackSound;                                              // 0x0A00 (size: 0x8)
    FMultiAmmo GrenadeMultiAmmo;                                                      // 0x0A08 (size: 0x38)
    bool bIsGrenadeMode;                                                              // 0x0A40 (size: 0x1)
    bool bIsBayonetMode;                                                              // 0x0A41 (size: 0x1)

    void ServerToggleFireMode(FActivityStateChange ActivityStateChange);
    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    void ServerReleaseGrenade(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange);
    void ServerBayonetAttack(FActivityStateChange ActivityStateChange);
    void OnRep_IsGrenadeMode();
    void OnRep_IsBayonetMode();
    void OnRep_GrenadeMultiAmmo();
    void MulticastPlayFX();
    void ClientSetDesiredAmmoType(FName InDesiredAmmoType);
}; // Size: 0xA50

class UGrenadeGunnerMountComponent : public UProjectileGunnerMountComponent
{
    FMultiAmmo MultiAmmo;                                                             // 0x08C8 (size: 0x38)
    TArray<class TSubclassOf<AWarProjectile>> GrenadeClasses;                         // 0x0900 (size: 0x10)

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
}; // Size: 0x938

class UGrenadeItemComponent : public UItemComponent
{
    TSubclassOf<class AWarProjectile> GrenadeClass;                                   // 0x08E8 (size: 0x8)
    float PostTossDelay;                                                              // 0x08F0 (size: 0x4)
    float AimLineThickness;                                                           // 0x08F4 (size: 0x4)
    bool bCanCook;                                                                    // 0x08F8 (size: 0x1)
    FThrowingStabilityInfo ThrowingStabilityInfo;                                     // 0x08FC (size: 0x18)
    class USoundCue* PinPullSound;                                                    // 0x0918 (size: 0x8)
    bool bIsEquipped;                                                                 // 0x0920 (size: 0x1)

    void ServerThrowGrenade(const FCharacterInvokeInfo WeaponInvokeInfo, float SecondsOnFuse, FActivityStateChange ActivityStateChange, const FVector& Target);
    void ServerPullPin(FActivityStateChange ActivityStateChange);
    void ServerOnFuseExpired(const FCharacterInvokeInfo WeaponInvokeInfo, const FVector& Target);
    void OnRep_IsEquipped();
}; // Size: 0x940

class UGroundZeroDamageType : public USimDamageType
{
}; // Size: 0x140

class UGunTurretAnimInstance : public UAnimInstance
{
    float TrackingAngle;                                                              // 0x0268 (size: 0x4)

}; // Size: 0x270

class UHUDWidgetStyle : public USlateWidgetStyleContainerBase
{
    FHUDStyle WidgetStyle;                                                            // 0x0030 (size: 0x6470)

}; // Size: 0x64A0

class UHammerComponent : public UTaskItemComponent
{
    TSubclassOf<class UDamageType> DamageType;                                        // 0x0988 (size: 0x8)
    TSubclassOf<class AImpactEffect> ImpactEffectClass;                               // 0x0990 (size: 0x8)
    FName HammerHeadSocketName;                                                       // 0x0998 (size: 0x8)
    bool bCanBuild;                                                                   // 0x09A0 (size: 0x1)
    int32 ResourceLevel;                                                              // 0x09A4 (size: 0x4)
    int32 GatherXPMultiplier;                                                         // 0x09A8 (size: 0x4)

    void MulticastPlayImpactFX();
    void MulticastOnGather(class AResource* Resource, TSubclassOf<class AImpactEffect> ImpactEffect, const FGatherResult& GatherResult);
}; // Size: 0x9B8

class UHarvestDamageType : public USimDamageType
{
}; // Size: 0x140

class UHarvesterAnimInstance : public USimVehicleAnimInstance
{
    bool bIsGrinding;                                                                 // 0x0298 (size: 0x1)
    bool bIsSplitting;                                                                // 0x0299 (size: 0x1)

}; // Size: 0x2A0

class UHatchComponent : public UUseComponent
{
    TArray<FName> ExitNames;                                                          // 0x04B8 (size: 0x10)
    bool bIsExternal;                                                                 // 0x04C8 (size: 0x1)
    bool bIsEntrance;                                                                 // 0x04C9 (size: 0x1)
    bool bIsExit;                                                                     // 0x04CA (size: 0x1)
    bool bUserCantBeBasedOnOwner;                                                     // 0x04CB (size: 0x1)
    bool bIsPseudoLadder;                                                             // 0x04CC (size: 0x1)
    bool bTeleportToClosestPoint;                                                     // 0x04CD (size: 0x1)
    TArray<class UHatchComponent*> Exits;                                             // 0x04D0 (size: 0x10)

}; // Size: 0x4E0

class UHeadlessLocalPlayer : public UWarLocalPlayer
{
}; // Size: 0x270

class UHeavyMachineGunItemComponent : public UItemComponent
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x08E8 (size: 0x8)
    TSubclassOf<class UCameraShake> FireCameraShake;                                  // 0x08F0 (size: 0x8)
    TSubclassOf<class AImpactEffect> ImpactEffect;                                    // 0x08F8 (size: 0x8)
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;                               // 0x0900 (size: 0x8)
    FWeaponShotSFX WeaponShotSFX;                                                     // 0x0908 (size: 0x20)
    class USoundCue* ShotSoundCue;                                                    // 0x0928 (size: 0x8)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x0930 (size: 0x8)
    float FiringRate;                                                                 // 0x0938 (size: 0x4)
    bool bSpawnFakeTracerFX;                                                          // 0x093C (size: 0x1)
    ECoverMitigationType MitigationType;                                              // 0x093D (size: 0x1)
    bool bRequiresOpenVehiclePlatform;                                                // 0x093E (size: 0x1)
    bool bIsVehiclePlatformHeavyWeaponsRestricted;                                    // 0x093F (size: 0x1)
    bool bCheckForOpenSpaceWhenFiring;                                                // 0x0940 (size: 0x1)
    bool bCanFireFromVehicle;                                                         // 0x0941 (size: 0x1)
    bool bIsEquipped;                                                                 // 0x0942 (size: 0x1)
    FHitNotify SimulatedHitNotify;                                                    // 0x0948 (size: 0x38)

    void ServerStopInvoke();
    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    void OnRep_SimulatedHitNotify();
    void OnRep_IsEquipped();
}; // Size: 0x9C0

class UHitScanMountComponent : public UMountComponent
{
    float FiringRate;                                                                 // 0x0868 (size: 0x4)
    bool bIsAutomaticFire;                                                            // 0x086C (size: 0x1)
    bool bSpawnExtraTracers;                                                          // 0x086D (size: 0x1)
    bool bUsePerBarrelFX;                                                             // 0x086E (size: 0x1)
    TSubclassOf<class AImpactEffect> ImpactEffect;                                    // 0x0870 (size: 0x8)
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;                               // 0x0878 (size: 0x8)
    TSubclassOf<class AWarExplosionEffect> ExplosionClass;                            // 0x0880 (size: 0x8)
    FWeaponShotSFX WeaponShotSFX;                                                     // 0x0888 (size: 0x20)
    class USoundCue* ShotSoundCue;                                                    // 0x08A8 (size: 0x8)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x08B0 (size: 0x8)
    FHitNotify SimulatedHitNotify;                                                    // 0x08B8 (size: 0x38)
    int32 Ammo;                                                                       // 0x090C (size: 0x4)

    void ServerStopInvoke();
    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    void OnRep_SimulatedHitNotify();
    void MulticastSpawnTracerFX();
}; // Size: 0x930

class UHitScanWeaponComponent : public UItemComponent
{
    TSubclassOf<class UCameraShake> FireCameraShake;                                  // 0x08E8 (size: 0x8)
    TSubclassOf<class AImpactEffect> ImpactEffect;                                    // 0x08F0 (size: 0x8)
    TSubclassOf<class AWeaponFireFX> WeaponFireFXClass;                               // 0x08F8 (size: 0x8)
    class USoundCue* ShotSoundCue;                                                    // 0x0900 (size: 0x8)
    class USoundCue* ShotNoAmmoSoundCue;                                              // 0x0908 (size: 0x8)
    class USoundCue* ClipEmptiedSoundCue;                                             // 0x0910 (size: 0x8)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x0918 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0940 (size: 0x8)
    uint8 TotalShotsFired;                                                            // 0x0948 (size: 0x1)
    float BurstFiringRate;                                                            // 0x094C (size: 0x4)
    ECoverMitigationType MitigationType;                                              // 0x0950 (size: 0x1)
    bool bCanFireFromVehicle;                                                         // 0x0951 (size: 0x1)
    bool bIsEquipped;                                                                 // 0x0952 (size: 0x1)
    float AimAssistOffsetZ;                                                           // 0x0954 (size: 0x4)
    FHitNotify SimulatedHitNotify;                                                    // 0x0958 (size: 0x38)

    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    void OnRep_SimulatedHitNotify();
    void OnRep_IsEquipped();
}; // Size: 0x9B8

class UHospitalComponent : public UActorComponent
{
    int32 NumBeds;                                                                    // 0x00B0 (size: 0x4)
    int32 SpawnChargesPerPatient;                                                     // 0x00B4 (size: 0x4)
    float PatientConversionSeconds;                                                   // 0x00B8 (size: 0x4)
    TArray<float> Patients;                                                           // 0x00C0 (size: 0x10)
    TArray<uint8> PatientVisuals;                                                     // 0x00D0 (size: 0x10)
    TArray<int8> RecoveredPatients;                                                   // 0x00E0 (size: 0x10)

}; // Size: 0xF8

class UInfantryRailVehicleAnimInstance : public URailVehicleAnimInstance
{
    float RightGunnerYaw;                                                             // 0x02C0 (size: 0x4)
    float RightGunnerPitch;                                                           // 0x02C4 (size: 0x4)
    bool bRightGunnerIsFiring;                                                        // 0x02C8 (size: 0x1)
    float LeftGunnerYaw;                                                              // 0x02CC (size: 0x4)
    float LeftGunnerPitch;                                                            // 0x02D0 (size: 0x4)
    bool bLeftGunnerIsFiring;                                                         // 0x02D4 (size: 0x1)
    bool bIsRightHatchOpen;                                                           // 0x02D5 (size: 0x1)
    bool bIsLeftHatchOpen;                                                            // 0x02D6 (size: 0x1)
    float MainGunnerYaw;                                                              // 0x02D8 (size: 0x4)
    float MainGunnerPitch;                                                            // 0x02DC (size: 0x4)
    bool bMainGunnerIsFiring;                                                         // 0x02E0 (size: 0x1)

    void AnimNotify_OnFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAltFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt02FiringOver(const class UAnimNotify* Notify);
}; // Size: 0x2F0

class UInfraModificationSlotComponent : public UModificationSlotComponent
{
}; // Size: 0x440

class UInfrastructureComponent : public UActorComponent
{
    EFortModificationType FilteredTypes;                                              // 0x00B0 (size: 0x4)
    float Effectiveness;                                                              // 0x00B4 (size: 0x4)

}; // Size: 0xC0

class UIntelCenterAnimInstance : public UAnimInstance
{
    float Direction;                                                                  // 0x0268 (size: 0x4)
    float Pitch;                                                                      // 0x026C (size: 0x4)

}; // Size: 0x270

class UIntelCenterMountComponent : public UMountComponent
{

    void ServerSetDesiredPitch(const float Pitch);
    void ServerFireListeningArea();
}; // Size: 0x868

class UInteractiveBlueprintComponent : public UUseComponent
{
    FInteractiveBlueprintComponentBPOnUse BPOnUse;                                    // 0x04B8 (size: 0x10)
    void BPOnUse(class AWarCharacter* UsingPlayer);

}; // Size: 0x4D0

class UItemComponent : public UActorComponent
{
    EEquippedWeaponGripType EquippedGripType;                                         // 0x00B8 (size: 0x1)
    FActivityStateInfo ActivityStateInfos;                                            // 0x00C0 (size: 0x690)
    class USoundCue* ReloadSoundCue;                                                  // 0x0750 (size: 0x8)
    TSubclassOf<class UAnimInstance> AnimClass;                                       // 0x0768 (size: 0x8)
    FName MuzzleSocketName;                                                           // 0x0770 (size: 0x8)
    FName CompatibleAmmoCodeName;                                                     // 0x0778 (size: 0x8)
    FName DeployCodeName;                                                             // 0x0780 (size: 0x8)
    bool SafeItem;                                                                    // 0x0788 (size: 0x1)
    class USkeletalMesh* AttachedItemMesh;                                            // 0x0790 (size: 0x8)
    FVector MeshOffset;                                                               // 0x0798 (size: 0xC)
    FRotator MeshRotation;                                                            // 0x07A4 (size: 0xC)
    class UStaticMesh* GroundItemMesh;                                                // 0x07B0 (size: 0x8)
    ECharacterActivityState GroundItemActivityState;                                  // 0x07B8 (size: 0x1)
    FVector GroundItemOffset;                                                         // 0x07BC (size: 0xC)
    bool bRequiresCoverOrLowStanceToInvoke;                                           // 0x07C8 (size: 0x1)
    bool bAllowsMovementDuringReload;                                                 // 0x07C9 (size: 0x1)

    void ClientSyncAmmo(int32 CurrentAmmo);
}; // Size: 0x8E8

class UItemGroupRenderComponent : public USceneComponent
{
    TSubclassOf<class UItemGroupRenderData> DataClass;                                // 0x01F8 (size: 0x8)
    int32 StockpileIndex;                                                             // 0x0200 (size: 0x4)
    class UMaterialInterface* CurrentMaterial;                                        // 0x0340 (size: 0x8)

}; // Size: 0x350

class UItemGroupRenderData : public UObject
{
    TMap<class FName, class FItemGroupRenderLayout> Layouts;                          // 0x0028 (size: 0x50)
    bool bGenerateLayoutData;                                                         // 0x0078 (size: 0x1)
    FVector LayoutSize;                                                               // 0x007C (size: 0xC)

}; // Size: 0x88

class UItemHolderComponent : public UActorComponent
{
    EInventoryType InventoryType;                                                     // 0x00B8 (size: 0x1)
    int16 NextHolderId;                                                               // 0x00BA (size: 0x2)
    TArray<FName> RestrictedItems;                                                    // 0x00C0 (size: 0x10)
    TArray<FName> CustomStackableItems;                                               // 0x00D0 (size: 0x10)
    bool bForceAllItemsAreStackable;                                                  // 0x00E0 (size: 0x1)

    void ClientImportItem(const class AItemPickup* ItemCDO);
    void ClientExportItem(const int32 SlotIndex);
}; // Size: 0x138

class UItemHolderUserComponent : public UUserComponent
{
    TArray<FItemInstance> Items;                                                      // 0x00C8 (size: 0x10)

    void OnRep_Items();
}; // Size: 0xD8

class UKarateDamageType : public USimDamageType
{
}; // Size: 0x140

class ULRArtilleryCarAnimInstance : public UInfantryRailVehicleAnimInstance
{
    bool bIsFiring;                                                                   // 0x02E8 (size: 0x1)
    bool bIsCranking;                                                                 // 0x02E9 (size: 0x1)

}; // Size: 0x2F0

class ULadderComponent : public UBoxComponent
{
    FTransform EnterTransformTop;                                                     // 0x0400 (size: 0x30)
    FTransform EnterTransformBottom;                                                  // 0x0430 (size: 0x30)
    float UpwardsExitZ;                                                               // 0x0460 (size: 0x4)
    float DownwardsExitZ;                                                             // 0x0464 (size: 0x4)
    bool bIgnoreOwnerDuringMovement;                                                  // 0x0468 (size: 0x1)
    bool bGenerateBlockingVolume;                                                     // 0x0469 (size: 0x1)
    FVector BlockingVolumeExtents;                                                    // 0x046C (size: 0xC)
    FVector BlockingVolumeOffset;                                                     // 0x0478 (size: 0xC)
    class UBoxComponent* BlockingVolume;                                              // 0x0488 (size: 0x8)

}; // Size: 0x4A0

class ULadderModificationSlotComponent : public UModificationSlotComponent
{
    TSubclassOf<class ALadder> LadderType;                                            // 0x0430 (size: 0x8)
    class ALadder* Ladder;                                                            // 0x0438 (size: 0x8)

}; // Size: 0x440

class ULandingCraftAnimInstance : public USimVehicleGunnerSupportAnimInstance
{
    float IsBackHatchOpen;                                                            // 0x02F8 (size: 0x4)

}; // Size: 0x300

class ULandscapeDeformationManager : public UObject
{
    TArray<FCachedLandscape> LandscapeCache;                                          // 0x0120 (size: 0x10)
    TMap<class FEnvironmentModificationKey, class AEnvironmentModification*> EnvironmentalModifications; // 0x0140 (size: 0x50)
    TMap<class UFoliageInstancedStaticMeshComponent*, class FModifiedFoliageInfo> ModifiedFoliage; // 0x0190 (size: 0x50)
    TArray<class UFoliageInstancedStaticMeshComponent*> InProgressTreeRebuilds;       // 0x01E0 (size: 0x10)

    void VerifyLandscapeZ(float X, float Y, float Extent);
    void DebugDrawModifiedLandscapes(float Duration, bool bPersistent, bool bDrawOriginal, bool bDrawAll);
    void DebugDrawEnvironmentalModification(float Duration);
}; // Size: 0xB7A0

class ULargeItemComponent : public UItemComponent
{
    class USkeletalMesh* Mesh;                                                        // 0x08E8 (size: 0x8)
    bool bIsEquipped;                                                                 // 0x08F0 (size: 0x1)

    void OnRep_IsEquipped();
}; // Size: 0x8F8

class ULargeMaterialComponent : public UTaskItemComponent
{
    TSubclassOf<class AImpactEffect> ImpactEffect;                                    // 0x0988 (size: 0x8)

    void MulticastPlayFX();
}; // Size: 0x998

class ULargeShipAnimInstance : public USimVehicleGunnerSupportAnimInstance
{
    EAnchorState AnchorState;                                                         // 0x02F8 (size: 0x1)
    EDockedState DockedState;                                                         // 0x02F9 (size: 0x1)
    float RampExtension;                                                              // 0x02FC (size: 0x4)
    float RampAngle;                                                                  // 0x0300 (size: 0x4)
    bool bIsRampOpen;                                                                 // 0x0304 (size: 0x1)
    float AltGunner05Yaw;                                                             // 0x0308 (size: 0x4)
    float AltGunner05Pitch;                                                           // 0x030C (size: 0x4)
    float AltGunner06Yaw;                                                             // 0x0310 (size: 0x4)
    float AltGunner06Pitch;                                                           // 0x0314 (size: 0x4)
    float AltGunner07Yaw;                                                             // 0x0318 (size: 0x4)
    float AltGunner07Pitch;                                                           // 0x031C (size: 0x4)
    float AltGunner08Yaw;                                                             // 0x0320 (size: 0x4)
    float AltGunner08Pitch;                                                           // 0x0324 (size: 0x4)
    float AltGunner09Yaw;                                                             // 0x0328 (size: 0x4)
    float AltGunner09Pitch;                                                           // 0x032C (size: 0x4)
    float AltGunner10Yaw;                                                             // 0x0330 (size: 0x4)
    float AltGunner10Pitch;                                                           // 0x0334 (size: 0x4)
    float AltGunner11Yaw;                                                             // 0x0338 (size: 0x4)
    float AltGunner11Pitch;                                                           // 0x033C (size: 0x4)
    float AltGunner12Yaw;                                                             // 0x0340 (size: 0x4)
    float AltGunner12Pitch;                                                           // 0x0344 (size: 0x4)
    bool bIsAlt05Firing;                                                              // 0x0348 (size: 0x1)
    bool bIsAlt06Firing;                                                              // 0x0349 (size: 0x1)
    bool bIsAlt07Firing;                                                              // 0x034A (size: 0x1)
    bool bIsAlt08Firing;                                                              // 0x034B (size: 0x1)
    bool bIsAlt09Firing;                                                              // 0x034C (size: 0x1)
    bool bIsAlt10Firing;                                                              // 0x034D (size: 0x1)
    bool bIsAlt11Firing;                                                              // 0x034E (size: 0x1)
    bool bIsAlt12Firing;                                                              // 0x034F (size: 0x1)
    bool bIsAltGunner05Reloading;                                                     // 0x0350 (size: 0x1)
    bool bIsAltGunner06Reloading;                                                     // 0x0351 (size: 0x1)
    bool bIsAltGunner07Reloading;                                                     // 0x0352 (size: 0x1)
    bool bIsAltGunner08Reloading;                                                     // 0x0353 (size: 0x1)
    bool bIsAltGunner09Reloading;                                                     // 0x0354 (size: 0x1)
    bool bIsAltGunner10Reloading;                                                     // 0x0355 (size: 0x1)
    bool bIsAltGunner11Reloading;                                                     // 0x0356 (size: 0x1)
    bool bIsAltGunner12Reloading;                                                     // 0x0357 (size: 0x1)
    bool bIsAltGunner05Working;                                                       // 0x0358 (size: 0x1)
    bool bIsAltGunner06Working;                                                       // 0x0359 (size: 0x1)
    bool bIsAltGunner07Working;                                                       // 0x035A (size: 0x1)
    bool bIsAltGunner08Working;                                                       // 0x035B (size: 0x1)
    bool bIsAltGunner09Working;                                                       // 0x035C (size: 0x1)
    bool bIsAltGunner10Working;                                                       // 0x035D (size: 0x1)
    bool bIsAltGunner11Working;                                                       // 0x035E (size: 0x1)
    bool bIsAltGunner12Working;                                                       // 0x035F (size: 0x1)
    float NormalizedRPM0;                                                             // 0x0360 (size: 0x4)
    float NormalizedRPM1;                                                             // 0x0364 (size: 0x4)
    bool bIsThrustReversed0;                                                          // 0x0368 (size: 0x1)
    bool bIsThrustReversed1;                                                          // 0x0369 (size: 0x1)

    void AnimNotify_OnAlt12FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt11FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt10FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt09FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt08FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt07FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt06FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt05FiringOver(const class UAnimNotify* Notify);
}; // Size: 0x370

class ULargeShipEngineAnimInstance : public UAnimInstance
{
    float DefaultPlayRate0;                                                           // 0x0268 (size: 0x4)
    float DefaultPlayRate1;                                                           // 0x026C (size: 0x4)
    float PlayRate0;                                                                  // 0x0270 (size: 0x4)
    float PlayRate1;                                                                  // 0x0274 (size: 0x4)

}; // Size: 0x280

class ULevelStreamingHex : public ULevelStreamingDynamic
{

    void OnUnloaded();
    void OnShown();
    void OnLoaded();
    void OnHidden();
}; // Size: 0x160

class UListeningAreaComponent : public USceneComponent
{
    float ListeningRadius;                                                            // 0x01F0 (size: 0x4)
    EMapTeamId TeamId;                                                                // 0x01F4 (size: 0x1)

}; // Size: 0x210

class ULoadingAreaBoxComponent : public UBoxComponent
{
    EStorageType StorageType;                                                         // 0x0400 (size: 0x1)
    bool bFlipSpawnOffsetY;                                                           // 0x0401 (size: 0x1)

}; // Size: 0x410

class ULocationMultiplexedMeshComponent : public UActorComponent
{
    FName TargetTag;                                                                  // 0x00B0 (size: 0x8)
    TArray<FLocationMeshStop> MeshStops;                                              // 0x00B8 (size: 0x10)
    TArray<FLocationSkeletalMeshStop> SkeletalMeshStops;                              // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class ULongRangeArtilleryMountComponent : public UMountComponent
{
    float ExtendedMaxDistance;                                                        // 0x0868 (size: 0x4)
    int8 Ammo;                                                                        // 0x086C (size: 0x1)
    bool bCanDeploySelf;                                                              // 0x086D (size: 0x1)

    void ServerSetDesiredPitch(const float Pitch);
    void ServerFireShell(FActivityStateChange ActivityStateChange);
    void ServerDeploySelf();
}; // Size: 0x870

class ULoreKeyUseComponent : public UUseComponent
{
    TSubclassOf<class ALoreList> LoreListClass;                                       // 0x04B8 (size: 0x8)
    FName RemovedItemCodeName;                                                        // 0x04C0 (size: 0x8)
    FName AddedItemCodeName;                                                          // 0x04C8 (size: 0x8)
    FName StepIncompleteCodeName;                                                     // 0x04D0 (size: 0x8)
    FName StepCompletedCodeName;                                                      // 0x04D8 (size: 0x8)

}; // Size: 0x5B0

class UMaintenanceTunnelUserComponent : public UUserComponent
{
    FDecayPreventionStructureCounts StructureCounts;                                  // 0x00C8 (size: 0x10)

    void ServerUpdateStructureCounts(float Range, uint16 Filter);
    void ServerApplySettings(float Range, uint16 Filter);
}; // Size: 0xD8

class UMapIntelligenceSourceComponent : public UActorComponent
{
    float DetectionRadius;                                                            // 0x00B0 (size: 0x4)
    float DefaultViewDirectionOffset;                                                 // 0x00B4 (size: 0x4)
    float HalfDetectionAngle;                                                         // 0x00B8 (size: 0x4)
    float OverlapCheckInterval;                                                       // 0x00BC (size: 0x4)

}; // Size: 0xE0

class UMapWidgetStyle : public USlateWidgetStyleContainerBase
{
    FMapStyle WidgetStyle;                                                            // 0x0030 (size: 0xCDC8)

}; // Size: 0xCDF8

class UMaterialOverrideBoxComponent : public UBoxComponent
{
    class UMaterialInterface* Material;                                               // 0x0400 (size: 0x8)

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x4A0

class UMechAnimInstance : public UAnimInstance
{
    float MechSpeed;                                                                  // 0x0268 (size: 0x4)
    float RotationInPlaceSpeed;                                                       // 0x026C (size: 0x4)
    float MovementDirection;                                                          // 0x0270 (size: 0x4)
    float HorizontalBodyAim;                                                          // 0x0274 (size: 0x4)
    float CannonVerticalAim;                                                          // 0x0278 (size: 0x4)
    float LeftHMGHorizontalAim;                                                       // 0x027C (size: 0x4)
    float LeftHMGVerticalAim;                                                         // 0x0280 (size: 0x4)
    float RightHMGHorizontalAim;                                                      // 0x0284 (size: 0x4)
    float RightHMGVerticalAim;                                                        // 0x0288 (size: 0x4)
    bool bIsDestroyed;                                                                // 0x028C (size: 0x1)
    bool bIsAnyWeaponAiming;                                                          // 0x028D (size: 0x1)
    bool bIsHatchOpen;                                                                // 0x028E (size: 0x1)
    float MinSpeed;                                                                   // 0x0290 (size: 0x4)
    class UCurveFloat* LegAngleCurve;                                                 // 0x0298 (size: 0x8)
    float LastYaw;                                                                    // 0x02A0 (size: 0x4)
    float LastAngularVelocity;                                                        // 0x02A4 (size: 0x4)

}; // Size: 0x2B0

class UMeleeWeaponComponent : public UItemComponent
{
    float ChargeUpTime;                                                               // 0x08E8 (size: 0x4)
    float QuickClickTime;                                                             // 0x08EC (size: 0x4)
    bool bIsBlocking;                                                                 // 0x08F7 (size: 0x1)
    bool bIsSustainingCharge;                                                         // 0x08F8 (size: 0x1)
    bool bIsEquipped;                                                                 // 0x08F9 (size: 0x1)
    class USoundCue* QuickAttackSound;                                                // 0x0900 (size: 0x8)
    class USoundCue* LongAttackSound;                                                 // 0x0908 (size: 0x8)
    class USoundCue* ChargedSound;                                                    // 0x0910 (size: 0x8)
    TSubclassOf<class AImpactEffect> DefaultImpactEffectClass;                        // 0x0918 (size: 0x8)
    TSubclassOf<class AImpactEffect> ChargedImpactEffectClass;                        // 0x0920 (size: 0x8)
    TSubclassOf<class AImpactEffect> BlockedImpactEffectClass;                        // 0x0928 (size: 0x8)

    void ServerStopInvoke();
    void ServerStopCharging();
    void ServerStartInvoke();
    void ServerStartCharging(FActivityStateChange ActivityStateChange);
    void ServerSimulateQuickAttack(FActivityStateChange ActivityStateChange);
    void ServerSimulateLongAttack(FActivityStateChange ActivityStateChange);
    void ServerSetIsBlocking(const bool bInIsblocking);
    void OnRep_IsEquipped();
    void MulticastSpawnImpactEffects(FHitNotify SimulatedHitNotify, const bool bWasBlocked, const bool bWasCharged);
    void ClientSetIsBlocking(const bool bInIsblocking);
}; // Size: 0x950

class UMeshVisibilityComponent : public UActorComponent
{
    TArray<class UMeshComponent*> AnimatedMeshes;                                     // 0x00B0 (size: 0x10)
    TArray<class UMeshComponent*> AnimatedFloorMeshes;                                // 0x00C0 (size: 0x10)
    TArray<class UMeshComponent*> Meshes;                                             // 0x00D0 (size: 0x10)
    TArray<class UMeshComponent*> FloorMeshes;                                        // 0x00E0 (size: 0x10)
    TArray<class UItemGroupRenderComponent*> FloorIGRComponents;                      // 0x00F0 (size: 0x10)

}; // Size: 0x118

class UMiscItemComponent : public UItemComponent
{
    bool bIsEquipped;                                                                 // 0x08E8 (size: 0x1)

    void OnRep_IsEquipped();
}; // Size: 0x8F0

class UModificationSlotComponent : public USceneComponent
{
    bool bIsLinkedToSocket;                                                           // 0x01F0 (size: 0x1)
    TArray<FName> LinkedSocketNames;                                                  // 0x01F8 (size: 0x10)
    bool bIsBlockedByLinkedSocket;                                                    // 0x0208 (size: 0x1)
    TArray<FName> BlockedByModSlotNames;                                              // 0x0210 (size: 0x10)
    TSet<EFortModificationType> BlockedByModTypes;                                    // 0x0220 (size: 0x50)
    bool bOverrideSplineTarget;                                                       // 0x0270 (size: 0x1)
    FName SplineTargetComponentNameOverride;                                          // 0x0274 (size: 0x8)
    bool bIgnoreSocketModSiblings;                                                    // 0x027C (size: 0x1)
    TArray<FName> SubComponentTags;                                                   // 0x0280 (size: 0x10)
    TMap<class EFortModificationType, class FModificationDefinition> Modifications;   // 0x0290 (size: 0x50)
    class UMaterialInterface* HighlightMaterial;                                      // 0x02E0 (size: 0x8)
    bool bIgnoreConcreteMaterial;                                                     // 0x02E8 (size: 0x1)
    bool bIsBuildableUnderRoads;                                                      // 0x02E9 (size: 0x1)
    bool bPreviewAllInGhost;                                                          // 0x02EA (size: 0x1)
    EFortModificationType ActiveType;                                                 // 0x02EB (size: 0x1)
    FModificationTier ActiveTier;                                                     // 0x02F0 (size: 0x68)
    FModificationTier ShownTier;                                                      // 0x0358 (size: 0x68)
    bool bRevertedToDefault;                                                          // 0x03C0 (size: 0x1)
    int32 NumMaskBits;                                                                // 0x03C4 (size: 0x4)
    int32 MaskStartBit;                                                               // 0x03C8 (size: 0x4)
    TArray<TWeakObjectPtr<UBuildSocketComponent>> LinkedSockets;                      // 0x03D0 (size: 0x10)
    TMap<class FName, class TWeakObjectPtr<UActorComponent>> SpawnedActorComponents;  // 0x03E0 (size: 0x50)

}; // Size: 0x430

class UModularMountAnimInstance : public UDeployedTripodAnimInstance
{
}; // Size: 0x280

class UModularMountsComponent : public UActorComponent
{
    uint8 ActiveModularMounts;                                                        // 0x00B0 (size: 0x4)
    TArray<FGunnerInfo> GunnerInfo;                                                   // 0x00B8 (size: 0x10)

    void OnRep_ActiveModularMounts();
}; // Size: 0xC8

class UMonumentManager : public UObject
{
}; // Size: 0x50

class UMortarItemComponent : public UMultiAmmoItemComponent
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x0928 (size: 0x8)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x0930 (size: 0x8)
    float TelegraphDelay;                                                             // 0x0938 (size: 0x4)
    float MortarFlightTime;                                                           // 0x093C (size: 0x4)
    float MinDistance;                                                                // 0x0940 (size: 0x4)
    float MaxDistance;                                                                // 0x0944 (size: 0x4)

    void ServerFire(float Distance, FActivityStateChange ActivityStateChange);
    void MulticastPlayFiringFX(const class AExplosiveAmmoPickup* AmmoPickup);
    void ClientDrawDamageDebug(FVector HitLocation, float Radius);
}; // Size: 0x950

class UMountComponent : public UActorComponent
{
    FText DisplayName;                                                                // 0x00B8 (size: 0x18)
    FName AmmoName;                                                                   // 0x00D0 (size: 0x8)
    int32 AmmoSlotFilterAmount;                                                       // 0x00D8 (size: 0x4)
    class USoundCue* ReloadSoundCue;                                                  // 0x00E0 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x00E8 (size: 0x8)
    EEquippedWeaponGripType EquippedGripType;                                         // 0x00F0 (size: 0x1)
    FActivityStateInfo ActivityStateInfos;                                            // 0x00F8 (size: 0x690)
    FName RotationBaseSocketName;                                                     // 0x0788 (size: 0x8)
    bool bUseSingleItemSlotFilter;                                                    // 0x0790 (size: 0x1)
    bool bMustBeStoppedToInvoke;                                                      // 0x0791 (size: 0x1)
    bool bUseCharacterRotationForAim;                                                 // 0x0792 (size: 0x1)
    uint8 bIsStationary;                                                              // 0x0793 (size: 0x1)
    uint8 bUpdateCharacterRotation;                                                   // 0x0793 (size: 0x1)
    EVehicleSubsystem LinkedVehicleSubsystem;                                         // 0x0794 (size: 0x1)
    class AAmmoPickup* CachedAmmoPickupCDO;                                           // 0x07A8 (size: 0x8)
    bool bIsMultiWeapon;                                                              // 0x07C0 (size: 0x1)
    bool bIsDeployedGunner;                                                           // 0x07C1 (size: 0x1)
    bool bTriggerDriverFiringState;                                                   // 0x07C2 (size: 0x1)
    float CameraLerpModifierOverride;                                                 // 0x07C4 (size: 0x4)
    int8 MountIndex;                                                                  // 0x07C8 (size: 0x1)
    uint8 bIsEquipped;                                                                // 0x07C9 (size: 0x1)

    void OnRep_MountIndex();
    void OnRep_IsEquipped();
    void ClientSyncAmmo(int32 CurrentAmmo);
}; // Size: 0x868

class UMultiAmmoItemComponent : public UItemComponent
{
    FMultiAmmo MultiAmmo;                                                             // 0x08E8 (size: 0x38)
    bool bIsEquipped;                                                                 // 0x0920 (size: 0x1)

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    void OnRep_MultiAmmo();
    void OnRep_IsEquipped();
    void ClientSetDesiredAmmoType(FName InDesiredAmmoType);
}; // Size: 0x928

class UMultiAmmoStructureMountComponent : public UMountComponent
{
    FMultiAmmo MultiAmmo;                                                             // 0x0868 (size: 0x38)

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
}; // Size: 0x8A0

class UMultiAmmoVehicleMountComponent : public UMountComponent
{
    bool bRequiresExternalReload;                                                     // 0x0868 (size: 0x1)
    FMultiAmmo MultiAmmo;                                                             // 0x0870 (size: 0x38)

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
}; // Size: 0x8A8

class UMultiFloorVisibilityToggleComponent : public UVisibilityToggleAreaComponent
{
    uint8 FloorVisibilityBitmask;                                                     // 0x0430 (size: 0x1)

}; // Size: 0x440

class UMultiplexedSkeletalMeshComponent : public UActorComponent
{
    FName TargetTag;                                                                  // 0x00B0 (size: 0x8)
    TArray<FSkeletalMeshStop> MeshStops;                                              // 0x00B8 (size: 0x10)
    int32 InputValue;                                                                 // 0x00C8 (size: 0x4)
    uint8 SelectedMeshIndex;                                                          // 0x00CC (size: 0x1)
    class UParticleSystem* TransitionDownFX;                                          // 0x00D0 (size: 0x8)
    class USoundCue* TransitionUpSoundCue;                                            // 0x00D8 (size: 0x8)
    bool Enabled;                                                                     // 0x00E0 (size: 0x1)
    FMultiplexedSkeletalMeshComponentOnSelectedMeshChanged OnSelectedMeshChanged;     // 0x00E8 (size: 0x10)
    void SelectedMeshChangedDelegate();

    void SetEnabled(bool IsEnabled);
}; // Size: 0xF8

class UMultiplexedStaticMeshComponent : public UActorComponent
{
    FName TargetTag;                                                                  // 0x00B0 (size: 0x8)
    TArray<FMeshStop> MeshStops;                                                      // 0x00B8 (size: 0x10)
    int32 InputValue;                                                                 // 0x00C8 (size: 0x4)
    uint8 SelectedMeshIndex;                                                          // 0x00CC (size: 0x1)
    TArray<FMaterialOverride> MaterialOverridesC;                                     // 0x00D0 (size: 0x10)
    TArray<FMaterialOverride> MaterialOverridesW;                                     // 0x00E0 (size: 0x10)
    class UParticleSystem* TransitionDownFX;                                          // 0x00F0 (size: 0x8)
    class USoundCue* TransitionUpSoundCue;                                            // 0x00F8 (size: 0x8)
    FMultiplexedStaticMeshComponentOnSelectedMeshChanged OnSelectedMeshChanged;       // 0x0100 (size: 0x10)
    void SelectedMeshChangedDelegate();
    bool Enabled;                                                                     // 0x0110 (size: 0x1)
    TArray<FMaterialOverride> MaterialOverrides;                                      // 0x0118 (size: 0x10)

    void SetEnabled(bool IsEnabled);
}; // Size: 0x128

class UNewsItemImageDownloadTask : public UObject
{
    class AMainMenuPlayerController* Owner;                                           // 0x0028 (size: 0x8)
    FNewsItemInfo NewsItemInfo;                                                       // 0x0030 (size: 0x48)

    void OnImageDownloadSuccess(class UTexture2DDynamic* Texture);
    void OnImageDownloadFailed(class UTexture2DDynamic* Texture);
}; // Size: 0x80

class UNonDamagingDamageType : public USimDamageType
{
}; // Size: 0x140

class UObscuringSphereComponent : public USphereComponent
{
    float MinimumVisibilityRadius;                                                    // 0x03F8 (size: 0x4)

}; // Size: 0x400

class UObstructionCheckBoxComponent : public UBoxComponent
{
}; // Size: 0x400

class UParkingSpotComponent : public USceneComponent
{
}; // Size: 0x1F0

class UPayloadInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
    FRotator MeshRotation;                                                            // 0x0520 (size: 0xC)
    uint8 Rows;                                                                       // 0x052C (size: 0x1)
    uint8 Columns;                                                                    // 0x052D (size: 0x1)
    float RowSpacing;                                                                 // 0x0530 (size: 0x4)
    float ColumnSpacing;                                                              // 0x0534 (size: 0x4)
    uint8 GroupIndex;                                                                 // 0x0538 (size: 0x1)
    float MeshInstanceRemovalDelay;                                                   // 0x053C (size: 0x4)

}; // Size: 0x550

class UPayloadParticleSystemComponent : public UParticleSystemComponent
{
    uint8 SlotCount;                                                                  // 0x0640 (size: 0x1)
    uint8 GroupIndex;                                                                 // 0x0641 (size: 0x1)

}; // Size: 0x650

class UPayloadStaticMeshComponent : public UStaticMeshComponent
{
    uint8 GroupIndex;                                                                 // 0x0470 (size: 0x1)
    bool bLinkToSpecificGunnerIndex;                                                  // 0x0471 (size: 0x1)
    int32 GunnerIndex;                                                                // 0x0474 (size: 0x4)

}; // Size: 0x480

class UPersistentProxyComponent : public UStaticMeshComponent
{
    FName MigrationTag;                                                               // 0x0468 (size: 0x8)
    TSubclassOf<class APersistentProxy> ProxyLoadingDock;                             // 0x0470 (size: 0x8)
    bool bIsSpawned;                                                                  // 0x0478 (size: 0x1)
    class APersistentProxy* SpawnedLoadingDock;                                       // 0x0480 (size: 0x8)

}; // Size: 0x490

class UPipelineManager : public UObject
{
}; // Size: 0x38

class UPipelineUserComponent : public UUserComponent
{
    FRepPipelineSystem RepPipelineSystem;                                             // 0x00C8 (size: 0x18)

    void ServerSetLiquidType(const FName DesiredCodeName);
    void OnRep_System();
}; // Size: 0xE0

class UPlayerAnimInstance2 : public UCharacterAnimInstance
{
}; // Size: 0x340

class UPlayerCameraRigComponent : public USceneComponent
{
    float TargetArmLength;                                                            // 0x01F0 (size: 0x4)
    uint8 bEnableCameraLag;                                                           // 0x0224 (size: 0x1)
    float MaxDistanceForCameraLerp;                                                   // 0x022C (size: 0x4)
    class UCurveFloat* AimRadiusToViewRangeCurve;                                     // 0x0278 (size: 0x8)
    class UCurveVector* NormalizedAimCurve;                                           // 0x0280 (size: 0x8)
    class UCurveFloat* ViewRangeToMaxArmLengthCurve;                                  // 0x0288 (size: 0x8)

}; // Size: 0x2C0

class UPlayerCharacterMovementComponent : public UCharacterMovementComponent
{
    float MaxWalkSpeedProne;                                                          // 0x06D0 (size: 0x4)
    float MaxLadderClimbingSpeed;                                                     // 0x06D4 (size: 0x4)
    float ImmersionDepthHeightBias;                                                   // 0x0704 (size: 0x4)
    float WaterFrictionCoefficient;                                                   // 0x0708 (size: 0x4)

    void CapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void CapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x720

class UPlayerLOSRasterComponent : public USceneComponent
{
    class UMaterialInterface* CharacterOutlineMaterial;                               // 0x01F0 (size: 0x8)
    class UMaterialInterface* VisibilityIndicatorMaterial;                            // 0x01F8 (size: 0x8)
    class UMaterialInstanceDynamic* VisibilityIndicatorMaterialDynamic;               // 0x0200 (size: 0x8)

}; // Size: 0x210

class UPlayerProfileManager : public UObject
{
    TMap<class FString, class FWarPlayerProfile> CachedWarProfileMap;                 // 0x0028 (size: 0x50)

}; // Size: 0x168

class UPlayerSaveGame : public USaveGame
{
    float Gamma;                                                                      // 0x0028 (size: 0x4)
    bool bSprintModeHeld;                                                             // 0x002C (size: 0x1)
    TArray<FSoundClassVolume> VolumeSettings;                                         // 0x0030 (size: 0x10)
    bool bShowTutorial;                                                               // 0x0040 (size: 0x1)
    bool bShowHomeTutorial;                                                           // 0x0041 (size: 0x1)
    bool bShowMapTutorial;                                                            // 0x0042 (size: 0x1)
    bool bShowZombieTutorial_2020;                                                    // 0x0043 (size: 0x1)
    bool bShowIntroductionScreen;                                                     // 0x0044 (size: 0x1)
    int32 TimesHammerTutorialShown;                                                   // 0x0048 (size: 0x4)
    bool bVoiceChatEnabled;                                                           // 0x004C (size: 0x1)
    bool bLocalChatEnabled;                                                           // 0x004D (size: 0x1)
    bool bSquadChatEnabled;                                                           // 0x004E (size: 0x1)
    FString ActiveVoiceOutputDeviceID;                                                // 0x0050 (size: 0x10)
    FString ActiveMicDeviceID;                                                        // 0x0060 (size: 0x10)
    bool bMiniMapEnabled;                                                             // 0x0070 (size: 0x1)
    EChatLanguage ChatBroadcastLanguage;                                              // 0x0071 (size: 0x1)
    TArray<EChatLanguage> ChatListenLanguages;                                        // 0x0078 (size: 0x10)
    FString LastJoinedServerName;                                                     // 0x0088 (size: 0x10)
    ELanguageType ClientLanguage;                                                     // 0x0098 (size: 0x4)
    EItemSortMethod StockpileSortMethod;                                              // 0x009C (size: 0x1)
    EStockpileType ActiveStockpileType;                                               // 0x009D (size: 0x1)
    TArray<FText> LocalChatHistory;                                                   // 0x00A0 (size: 0x10)
    TSet<FString> LocalVoiceMuteList;                                                 // 0x00B0 (size: 0x50)
    TMap<FString, float> LocalVoicePlayerVolumeList;                                  // 0x0100 (size: 0x50)
    TSet<FString> LocalTextChatMuteList;                                              // 0x0150 (size: 0x50)
    bool bPlayVoiceInBackground;                                                      // 0x01A0 (size: 0x1)
    bool bMuteEnemyPlayers;                                                           // 0x01A1 (size: 0x1)
    TSet<EChatChannel> MutedTextChatChannels;                                         // 0x01A8 (size: 0x50)
    FLoadoutSaveData LoadoutSaveData;                                                 // 0x01F8 (size: 0x28)
    int32 LastShardId;                                                                // 0x0220 (size: 0x4)
    float SignpostVisibilityDistance;                                                 // 0x0224 (size: 0x4)
    bool bStreamerModeEnabled;                                                        // 0x0228 (size: 0x1)
    bool bIsBadWordFilterEnabled;                                                     // 0x0229 (size: 0x1)
    EFactionId LastFactionId;                                                         // 0x022A (size: 0x1)
    TMap<class FString, class FDateTime> ReportTimes;                                 // 0x0230 (size: 0x50)
    TArray<FString> QueuedModReplies;                                                 // 0x0280 (size: 0x10)
    bool bUseDifferentialSteeringMode;                                                // 0x0290 (size: 0x1)
    FMapLegendFilter MapLegendFilter;                                                 // 0x0292 (size: 0x12)
    bool bTrainHUDModeEnabled;                                                        // 0x02A4 (size: 0x1)
    uint8 DeploymentWarningCount;                                                     // 0x02A5 (size: 0x1)
    TArray<FString> WarIdsJoinedList;                                                 // 0x02C0 (size: 0x10)

}; // Size: 0x2D0

class UPowerConsumerComponent : public UActorComponent
{
    float TickRate;                                                                   // 0x00B0 (size: 0x4)
    float PowerConsumed;                                                              // 0x00B4 (size: 0x4)
    bool bAutoStart;                                                                  // 0x00B8 (size: 0x1)
    bool bConsumeWhenVisibilityLimited;                                               // 0x00B9 (size: 0x1)

}; // Size: 0xC8

class UPowerPoleUserComponent : public UUserComponent
{
    bool bIsDisabled;                                                                 // 0x00C8 (size: 0x1)

    void ServerSetIsDisabled(const bool bInIsDisabled);
    void OnRep_IsDisabled();
}; // Size: 0xD0

class UProjectileGunnerMountComponent : public UMountComponent
{
    class UParticleSystem* MuzzleFlashPS;                                             // 0x0868 (size: 0x8)
    class UParticleSystem* BackMuzzleFlashPS;                                         // 0x0870 (size: 0x8)
    class USoundCue* ShotSoundCue;                                                    // 0x0878 (size: 0x8)
    float MinSpeed;                                                                   // 0x0880 (size: 0x4)
    float MaxSpeed;                                                                   // 0x0884 (size: 0x4)
    float SpeedVariation;                                                             // 0x0888 (size: 0x4)
    float SuggestedVelocitySpeed;                                                     // 0x088C (size: 0x4)
    float FallbackAngle;                                                              // 0x0890 (size: 0x4)
    float DetonationDepthToggleIncrement;                                             // 0x0894 (size: 0x4)
    float MinDetonationDepth;                                                         // 0x0898 (size: 0x4)
    float MaxDetonationDepth;                                                         // 0x089C (size: 0x4)
    TSubclassOf<class AWarProjectile> ProjectileClass;                                // 0x08A0 (size: 0x8)
    bool bIsArtilleryMode;                                                            // 0x08A8 (size: 0x1)
    bool bIsDepthMode;                                                                // 0x08A9 (size: 0x1)
    bool bShowAimMesh;                                                                // 0x08AA (size: 0x1)
    bool bIsAutomaticFire;                                                            // 0x08AB (size: 0x1)
    bool bApplyVehicleAngleLimit;                                                     // 0x08AC (size: 0x1)
    int8 Ammo;                                                                        // 0x08AD (size: 0x1)

    void ServerStopInvoke();
    void ServerStartInvoke(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange, const float InDetonationDepth);
    void ServerSetPitch(float Pitch);
    void AllSpawnFiringEffects();
}; // Size: 0x8C8

class UProjectileItemComponent : public UMultiAmmoItemComponent
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x0928 (size: 0x8)
    class USkeletalMesh* PayloadMesh;                                                 // 0x0930 (size: 0x8)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x0938 (size: 0x8)
    class UParticleSystem* BackMuzzleFlashPS;                                         // 0x0940 (size: 0x8)
    class USoundCue* ShotSoundCue;                                                    // 0x0948 (size: 0x8)
    TArray<class TSubclassOf<AWarProjectile>> ProjectileClasses;                      // 0x0950 (size: 0x10)
    EProjectileFiringMode FiringMode;                                                 // 0x0960 (size: 0x1)
    float SuggestedVelocitySpeed;                                                     // 0x0964 (size: 0x4)
    float FallbackAngle;                                                              // 0x0968 (size: 0x4)
    float MinDistance;                                                                // 0x096C (size: 0x4)
    bool bIsSingleUse;                                                                // 0x0970 (size: 0x1)

    void ServerStartInvoke(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange);
    void AllSpawnFiringEffects();
}; // Size: 0x980

class UPuddleComponent : public USphereComponent
{
}; // Size: 0x400

class UQuadrilateralCoverComponent : public UInstancedStaticMeshComponent
{
    float EndOffset;                                                                  // 0x0518 (size: 0x4)
    float SideOffset;                                                                 // 0x051C (size: 0x4)

}; // Size: 0x520

class URWDVehicleMovementComponent : public USimpleVehicleMovementComponent
{
    float CenterOfGravityHeight;                                                      // 0x0AC0 (size: 0x4)
    float EngineForce;                                                                // 0x0ACC (size: 0x4)
    float BrakeForce;                                                                 // 0x0AD8 (size: 0x4)
    float HandbrakeForce;                                                             // 0x0ADC (size: 0x4)
    float AirResistance;                                                              // 0x0AE0 (size: 0x4)
    float RollingResistance;                                                          // 0x0AE4 (size: 0x4)
    float TowingResistance;                                                           // 0x0AE8 (size: 0x4)
    float MaxEncumbranceMass;                                                         // 0x0AEC (size: 0x4)
    float MassPerMuddynessOverride;                                                   // 0x0AF0 (size: 0x4)
    bool bUseLegacyLateralCalc;                                                       // 0x0AF4 (size: 0x1)
    float TractorTowingResistanceModifier;                                            // 0x0B30 (size: 0x4)
    float TowingEngineForceMultiplier;                                                // 0x0B34 (size: 0x4)
    class ARWDSimVehicle* Tractor;                                                    // 0x0FF0 (size: 0x8)
    class ARWDSimVehicle* Trailer;                                                    // 0x0FF8 (size: 0x8)

}; // Size: 0x1010

class URadioBackpackItemComponent : public UMiscItemComponent
{
    float DetectionCooldown;                                                          // 0x08F0 (size: 0x4)
    float DetectionRadius;                                                            // 0x08F4 (size: 0x4)

}; // Size: 0x908

class URailCouplerUseComponent : public UUseComponent
{
    FVector ChainVisualOffset;                                                        // 0x04B8 (size: 0xC)

}; // Size: 0x4D0

class URailSwitchUseComponent : public UUseComponent
{
}; // Size: 0x4C0

class URailVehicleAnimInstance : public USimVehicleAnimInstance
{
    float BufferYOffset;                                                              // 0x0298 (size: 0x4)
    float ExtendToDistance;                                                           // 0x029C (size: 0x4)
    float MaxExtensionDistance;                                                       // 0x02A0 (size: 0x4)
    float FrontBogieTurnAngle;                                                        // 0x02A4 (size: 0x4)
    float RearBogieTurnAngle;                                                         // 0x02A8 (size: 0x4)
    float BufferExtendFrontLeft;                                                      // 0x02AC (size: 0x4)
    float BufferExtendFrontRight;                                                     // 0x02B0 (size: 0x4)
    float BufferExtendBackLeft;                                                       // 0x02B4 (size: 0x4)
    float BufferExtendBackRight;                                                      // 0x02B8 (size: 0x4)

}; // Size: 0x2C0

class URailVehicleHospitalAnimInstance : public URailVehicleAnimInstance
{
    float GunnerYaw;                                                                  // 0x02C4 (size: 0x4)
    float GunnerPitch;                                                                // 0x02C8 (size: 0x4)
    bool bIsGunnerWorking;                                                            // 0x02CC (size: 0x1)

}; // Size: 0x2D0

class URailVehicleMovementComponent : public USimpleVehicleMovementComponent
{
    FRailPhysicsState PhysicsState;                                                   // 0x0AB0 (size: 0x50)
    FRailPhysicsState NetworkUpdatePhysicsState;                                      // 0x0B00 (size: 0x50)
    bool bNetworkPhysicsStateReceived;                                                // 0x0B50 (size: 0x1)
    class UCurveFloat* EngineForceCurve;                                              // 0x0B58 (size: 0x8)
    class UCurveFloat* BoostingEngineForceCurve;                                      // 0x0B60 (size: 0x8)
    class UCurveFloat* FrictionForceCurve;                                            // 0x0B68 (size: 0x8)
    class UCurveFloat* BrakingFrictionForceCurve;                                     // 0x0B70 (size: 0x8)
    float MaxRailSpeed;                                                               // 0x0B78 (size: 0x4)
    float MaxRailSpeedBoosted;                                                        // 0x0B7C (size: 0x4)

}; // Size: 0xB80

class URampRoomComponent : public URoomComponent
{
    FName RampOperationVolumeName;                                                    // 0x03E0 (size: 0x8)
    class UPrimitiveComponent* RampOperationVolume;                                   // 0x03E8 (size: 0x8)

}; // Size: 0x3F0

class UReadableTextComponent : public UUseComponent
{
    FName LoreCodeName;                                                               // 0x04B8 (size: 0x8)

}; // Size: 0x4C0

class URefineryUserComponent : public UUserComponent
{
    FRefinementOrderInfo OrderInfo;                                                   // 0x00C8 (size: 0x20)

}; // Size: 0xE8

class UReplicatedGenericStockpileComponent : public UGenericStockpileComponent
{
}; // Size: 0x2A8

class UReplicatedStockpileUserComponent : public UStockpileUserComponent
{
}; // Size: 0x130

class UReserveStockpileComponent : public UActorComponent
{
    TArray<FReserveStockpileData> StockpileDataList;                                  // 0x00B0 (size: 0x10)
    TSet<uint16> ActivePassCodes;                                                     // 0x00C0 (size: 0x50)

}; // Size: 0x170

class UReserveStockpileUserComponent : public UUserComponent
{
    TArray<FReserveStockpileData> StockpileDataList;                                  // 0x00C8 (size: 0x10)
    FReserveStockpileFailedPassCodeInfo FailedPassCodeAttemptInfo;                    // 0x00D8 (size: 0x10)
    class UReserveStockpileComponent* ReserveStockpileBeingUsed;                      // 0x00E8 (size: 0x8)

    void ServerTransferRequestToPublic(FString SourceStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType);
    void ServerTransferRequestFromReserveToReserve(FString SourceStockpileName, FString DestinationStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType);
    void ServerTransferItemFromReserveToReserve(FString SourceStockpileName, FString DestinationStockpileName, const FName CodeName, const int32 Quantity);
    void ServerTransferItemFromReserveToPublic(FString SourceStockpileName, const FName CodeName, const int32 Quantity);
    void ServerSubmitVehicle(FString TargetStockpileName, class AActor* DestinationActor, class ASimVehicle* Vehicle);
    void ServerSubmitShippableCrate(FString TargetStockpileName, class AActor* DestinationActor, class AShippableCrate* ShippableCrate);
    void ServerSubmitItemsFromPlayerStockpileFiltered(FString TargetStockpileName, class AActor* DestinationActor, const FStockpileEntry ItemFilter);
    void ServerSubmitItemsFromPlayerStockpile(FString TargetStockpileName, class AActor* DestinationActor);
    void ServerSubmitItemsFromItemHolderFiltered(FString TargetStockpileName, class AActor* DestinationActor, class UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter);
    void ServerSubmitItemsFromItemHolder(FString TargetStockpileName, class AActor* DestinationActor, class UItemHolderComponent* SourceItemHolder);
    void ServerSubmitContainer(FString TargetStockpile, class AActor* DestinationActor, class AContainer* Container);
    void ServerResetAccess(FString StockpileName);
    void ServerReleaseStockpile(FString StockpileName);
    void ServerRefreshExpiryTime();
    void ServerMakeVisible(FString TargetStockpileName, const bool bMakeVisible);
    void ServerCreateStockpile(FString StockpileName);
    void ServerAccessStockpile(const int32 PassCode);
    void OnRep_StockpileData(const TArray<FReserveStockpileData>& PreviousStockpileDataList);
    void ClientShowStockpileResponse(const ETransactionResponse Response);
}; // Size: 0x128

class UResourceGroupRenderComponent : public USceneComponent
{
    TSubclassOf<class UResourceGroupRenderData> DataClass;                            // 0x01F8 (size: 0x8)
    bool bSetItemHolderAllowedItems;                                                  // 0x0200 (size: 0x1)
    int32 ItemHolderIndex;                                                            // 0x0204 (size: 0x4)
    int32 StockpileIndex;                                                             // 0x0208 (size: 0x4)
    class UItemHolderComponent* LinkedItemHolder;                                     // 0x0210 (size: 0x8)
    class UGenericStockpileComponent* LinkedGenericStockpile;                         // 0x0218 (size: 0x8)
    TArray<class UStaticMeshComponent*> ResourceNodes;                                // 0x0220 (size: 0x10)
    class UMaterialInterface* CurrentMaterial;                                        // 0x0230 (size: 0x8)

}; // Size: 0x240

class UResourceGroupRenderData : public UObject
{
    TArray<FResourceRenderInfo> Info;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

class UResourceMapping : public UObject
{
    TMap<class FName, class TSubclassOf<AResourceMine>> MineTypes;                    // 0x0028 (size: 0x50)
    TMap<class FName, class TSubclassOf<AResourceField>> FieldTypes;                  // 0x0078 (size: 0x50)
    TSubclassOf<class AFacilityRefinery> OilRigType;                                  // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class URoomComponent : public USceneComponent
{
    FName CodeName;                                                                   // 0x01F0 (size: 0x8)
    int8 Index;                                                                       // 0x01F8 (size: 0x1)
    bool bIsSpawnRoom;                                                                // 0x01F9 (size: 0x1)
    ESimScreen SimScreenOverride;                                                     // 0x01FC (size: 0x4)
    float MaxLeakZ;                                                                   // 0x0200 (size: 0x4)
    float MinLeakZ;                                                                   // 0x0204 (size: 0x4)
    float MaxLeakRadius;                                                              // 0x0208 (size: 0x4)
    float MinLeakRadius;                                                              // 0x020C (size: 0x4)
    TArray<FLeakOffsetRange> LeakOffsetRanges;                                        // 0x0210 (size: 0x10)
    float HullThickness;                                                              // 0x0220 (size: 0x4)
    class UCurveFloat* HullThicknessCurve;                                            // 0x0228 (size: 0x8)
    float MinWaterSpreadThreshold;                                                    // 0x0230 (size: 0x4)
    TArray<FName> RoomVolumeNames;                                                    // 0x0238 (size: 0x10)
    TArray<FName> WaterVolumeNames;                                                   // 0x0248 (size: 0x10)
    float BoundMinExtension;                                                          // 0x0258 (size: 0x4)
    float BoundMaxExtension;                                                          // 0x025C (size: 0x4)
    float BoundWidthExtension;                                                        // 0x0260 (size: 0x4)
    FName CollisionBoneLeft;                                                          // 0x0264 (size: 0x8)
    FName CollisionBoneRight;                                                         // 0x026C (size: 0x8)
    TArray<FName> DeckCollisionBones;                                                 // 0x0278 (size: 0x10)
    TSet<int8> DoorIndices;                                                           // 0x0288 (size: 0x50)
    class UParticleSystem* WaterLeakFX;                                               // 0x02D8 (size: 0x8)
    class UParticleSystem* AboveWaterLeakFX;                                          // 0x02E0 (size: 0x8)
    class UMaterialInterface* LeakDecalExterior;                                      // 0x02E8 (size: 0x8)
    class UMaterialInterface* LeakDecalInterior;                                      // 0x02F0 (size: 0x8)
    class UMaterialInterface* LargeLeakDecalExterior;                                 // 0x02F8 (size: 0x8)
    class UMaterialInterface* LargeLeakDecalInterior;                                 // 0x0300 (size: 0x8)
    class UMaterialInterface* PatchedLargeLeakDecalExterior;                          // 0x0308 (size: 0x8)
    class UMaterialInterface* PatchedLargeLeakDecalInterior;                          // 0x0310 (size: 0x8)
    class USoundCue* LeakCreatedSoundCue;                                             // 0x0318 (size: 0x8)
    class USoundCue* LeakingSoundCue;                                                 // 0x0320 (size: 0x8)
    class USoundCue* FloodedSoundCue;                                                 // 0x0328 (size: 0x8)
    FVector MinLeakDecalSize;                                                         // 0x0330 (size: 0xC)
    FVector MaxLeakDecalSize;                                                         // 0x033C (size: 0xC)
    float MinLeakFXSize;                                                              // 0x0348 (size: 0x4)
    float MaxLeakFXSize;                                                              // 0x034C (size: 0x4)
    float PatchedLargeLeakFXScale;                                                    // 0x0350 (size: 0x4)
    TArray<class UPrimitiveComponent*> RoomVolumes;                                   // 0x0358 (size: 0x10)
    TArray<class UPrimitiveComponent*> WaterVolumes;                                  // 0x0368 (size: 0x10)
    class UFloodableComponent* Floodable;                                             // 0x0378 (size: 0x8)
    FBox RoomBounds;                                                                  // 0x0380 (size: 0x1C)
    float WaterLevel;                                                                 // 0x039C (size: 0x4)
    FTimerHandle WaterLevelTickHandle;                                                // 0x03C0 (size: 0x8)
    TArray<class UPrimitiveComponent*> UsableVolumes;                                 // 0x03C8 (size: 0x10)
    class UAudioComponent* FloodedSFXLoop;                                            // 0x03D8 (size: 0x8)

    void OnRep_WaterLevel();
    void MulticastPlayLeakFX(FVector LocalLocation);
}; // Size: 0x3E0

class URotatorMountComponent : public UMountComponent
{
    int32 PlayersRequiredToRotate;                                                    // 0x0868 (size: 0x4)

    void ServerOnMoveRight(float Val);
}; // Size: 0x870

class URuinedComponent : public USceneComponent
{
}; // Size: 0x1F0

class URuinedMeshComponent : public UStaticMeshComponent
{
}; // Size: 0x470

class USafeHouseVisibilityToggleComponent : public UVisibilityToggleAreaComponent
{
}; // Size: 0x430

class UScoutVehicleAnimInstance : public USimVehicleAnimInstance
{
    bool bIsTransmitting;                                                             // 0x0298 (size: 0x1)

}; // Size: 0x2A0

class USeatComponent : public USceneComponent
{
    int32 Index;                                                                      // 0x01F0 (size: 0x4)
    FName TriggerName;                                                                // 0x01F4 (size: 0x8)
    FName ExitName;                                                                   // 0x01FC (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x0208 (size: 0x8)
    class USceneComponent* Exit;                                                      // 0x0210 (size: 0x8)
    FName MountCodeName;                                                              // 0x0218 (size: 0x8)
    bool bIsExposed;                                                                  // 0x0220 (size: 0x1)
    bool bExposedSeatRequiresLoS;                                                     // 0x0221 (size: 0x1)
    TSubclassOf<class UMountComponent> MountComponent;                                // 0x0228 (size: 0x8)
    FModularMounts ModularMounts;                                                     // 0x0230 (size: 0x20)
    int32 ItemHolderIndex;                                                            // 0x0250 (size: 0x4)
    bool bOverrideHandIK;                                                             // 0x0254 (size: 0x1)
    FName LeftHandIKSocketName;                                                       // 0x0258 (size: 0x8)
    FName RightHandIKSocketName;                                                      // 0x0260 (size: 0x8)
    bool bUsableWhenAnchored;                                                         // 0x0268 (size: 0x1)
    bool bUsableWhenSubmerged;                                                        // 0x0269 (size: 0x1)
    bool bIsEnabled;                                                                  // 0x026A (size: 0x1)
    class APlayerController* PC;                                                      // 0x0270 (size: 0x8)
    class ASimCharacter* Character;                                                   // 0x0278 (size: 0x8)

}; // Size: 0x280

class USeatExitComponent : public USceneComponent
{
}; // Size: 0x1F0

class USeatTriggerComponent : public UBoxComponent
{
}; // Size: 0x400

class USensorOperatorMountComponent : public USubmarineMountComponent
{
    float ElectricityCost;                                                            // 0x0888 (size: 0x4)

    void ServerStartInvoke(FActivityStateChange ActivityStateChange, bool bIsOmnidirectional);
}; // Size: 0x898

class UServerSettings : public USaveGame
{
    bool bFriendlyFire;                                                               // 0x0038 (size: 0x1)
    bool bLoginRestrictions;                                                          // 0x0039 (size: 0x1)
    bool bAllowMods;                                                                  // 0x003A (size: 0x1)
    TArray<FName> ExcludedCodeNames;                                                  // 0x0040 (size: 0x10)
    FText WelcomeMessage;                                                             // 0x0050 (size: 0x18)
    int32 MaxPlayers;                                                                 // 0x0068 (size: 0x4)
    FString ServerName;                                                               // 0x0070 (size: 0x10)
    bool IsCommunityServer;                                                           // 0x00B0 (size: 0x1)
    FGameplayFlags GameplayFlags;                                                     // 0x00B4 (size: 0x4)
    ERegionType ServerRegion;                                                         // 0x00B8 (size: 0x4)
    TArray<FRefinableItemModifier> RefinableItemModifierList;                         // 0x00C0 (size: 0x10)
    float GlobalRefineYieldModifier;                                                  // 0x00D0 (size: 0x4)
    float SpawnInvulnerabilityTime;                                                   // 0x00D4 (size: 0x4)
    bool bEnableVehicleAFKTimeout;                                                    // 0x00D8 (size: 0x1)
    bool bEnableTravelPortalSearchFallback;                                           // 0x00D9 (size: 0x1)
    bool bAdvertiseToSteam;                                                           // 0x00DA (size: 0x1)
    TArray<int32> MinClientVersion;                                                   // 0x00E0 (size: 0x10)
    bool bSelfServeFactionUnlockEnabled;                                              // 0x00F0 (size: 0x1)
    FWarTweakables WarTweakables;                                                     // 0x00F8 (size: 0x590)
    FWarReplicatedTweakables WarRepTweakables;                                        // 0x0688 (size: 0x110)
    FWarTimeDiscrepancy WarTimeDiscrepancy;                                           // 0x0798 (size: 0x10)
    FDateTime NextWarTime;                                                            // 0x07A8 (size: 0x8)
    FString NextWarMapOverride;                                                       // 0x07B0 (size: 0x10)

}; // Size: 0x7C0

class UShipControlSurfaceVisComponent : public UPrimitiveComponent
{
}; // Size: 0x3E0

class UShipEngineUseComponent : public UShipFlagUseComponent
{
}; // Size: 0x4C0

class UShipFlagUseComponent : public UUseComponent
{
    int32 FlagIndex;                                                                  // 0x04B8 (size: 0x4)
    bool bIsMovement;                                                                 // 0x04BC (size: 0x1)
    bool bRequiresWrench;                                                             // 0x04BD (size: 0x1)
    ECharacterActivityState WrenchingActivityState;                                   // 0x04BE (size: 0x1)

}; // Size: 0x4C0

class UShipMovementComponent : public USimpleVehicleMovementComponent
{
    class UCurveFloat* ThrustCurve;                                                   // 0x0AB8 (size: 0x8)
    class UCurveFloat* SubmergedThrustCurve;                                          // 0x0AC0 (size: 0x8)

}; // Size: 0xC30

class UShipRammingDamageType : public USimDamageType
{
}; // Size: 0x140

class UShippableUseComponent : public UUseComponent
{
}; // Size: 0x4C0

class UShotgunComponent : public UHitScanWeaponComponent
{
    TArray<FHitNotify> SimulatedHitNotifies;                                          // 0x09B8 (size: 0x10)
    float ShotRadius;                                                                 // 0x09C8 (size: 0x4)
    uint32 MaxHitsPerShot;                                                            // 0x09CC (size: 0x4)

    void OnRep_SimulatedHitNotifies();
}; // Size: 0x9D0

class UShovelComponent : public UTaskItemComponent
{
    TSubclassOf<class AImpactEffect> ImpactEffect;                                    // 0x0988 (size: 0x8)

    void MulticastPlayFX();
}; // Size: 0x998

class USignPostDownVoteDamageType : public USimDamageType
{
}; // Size: 0x140

class USimDamageType : public UDamageType
{
    EDamageType Type;                                                                 // 0x0040 (size: 0x1)
    bool bAppliesBurning;                                                             // 0x0043 (size: 0x1)
    bool bCanRuinStructures;                                                          // 0x0044 (size: 0x1)
    bool bApplyDamageFalloff;                                                         // 0x0045 (size: 0x1)
    bool bAlwaysAppliesBleeding;                                                      // 0x0046 (size: 0x1)
    bool bNeverAppliesBleeding;                                                       // 0x0047 (size: 0x1)
    bool bBypassesSpawnInvulnerability;                                               // 0x0048 (size: 0x1)
    bool bDisableVehicleCollisionsIfKilledBy;                                         // 0x0049 (size: 0x1)
    bool bCanCauseLeaks;                                                              // 0x004A (size: 0x1)
    bool bCanPenetrateArmour;                                                         // 0x004B (size: 0x1)
    bool bCanDisableSubsystems;                                                       // 0x004C (size: 0x1)
    bool bSuppressionAffectsVehicles;                                                 // 0x004D (size: 0x1)
    float LeakChanceMultiplier;                                                       // 0x0050 (size: 0x4)
    float LeakSizeMultiplier;                                                         // 0x0054 (size: 0x4)
    bool bCausesLargeLeaks;                                                           // 0x0058 (size: 0x1)
    float TankArmourPenetrationFactor;                                                // 0x005C (size: 0x4)
    ETankArmourEffectType TankArmourEffectType;                                       // 0x0060 (size: 0x4)
    EVehicleSubsystem VehicleSubsystemOverride;                                       // 0x0064 (size: 0x1)
    float VehicleSubsystemDisableMultipliers;                                         // 0x0068 (size: 0x1C)
    bool bCanWoundCharacter;                                                          // 0x0084 (size: 0x1)
    bool bApplyTankArmourMechanics;                                                   // 0x0085 (size: 0x1)
    bool bApplyTankArmourAngleRangeBonuses;                                           // 0x0086 (size: 0x1)
    bool bExposeInUI;                                                                 // 0x0087 (size: 0x1)
    bool bBreachesBunkers;                                                            // 0x0088 (size: 0x1)
    bool bAffectedByShelterBonus;                                                     // 0x0089 (size: 0x1)
    bool bIgnoreBreachesBunkersThreshold;                                             // 0x008A (size: 0x1)
    FSlateBrush Icon;                                                                 // 0x0090 (size: 0x88)
    FText DisplayName;                                                                // 0x0118 (size: 0x18)
    TArray<FTooltipDetailText> DescriptionDetails;                                    // 0x0130 (size: 0x10)

}; // Size: 0x140

class USimVehicleAnimInstance : public UAnimInstance
{
    float Speed;                                                                      // 0x0268 (size: 0x4)
    float RotationInPlaceSpeed;                                                       // 0x026C (size: 0x4)
    float TurnAngle;                                                                  // 0x0270 (size: 0x4)
    float WheelRadius;                                                                // 0x0274 (size: 0x4)
    float InertialRoll;                                                               // 0x0278 (size: 0x4)
    float InertialPitch;                                                              // 0x027C (size: 0x4)
    bool bIsDestroyed;                                                                // 0x0280 (size: 0x1)
    bool bIsTopHatchOpen;                                                             // 0x0281 (size: 0x1)
    bool bIsDeployed;                                                                 // 0x0282 (size: 0x1)
    bool bIsHitched;                                                                  // 0x0283 (size: 0x1)
    EVehicleDeploymentState DeploymentState;                                          // 0x0284 (size: 0x1)
    float LastYaw;                                                                    // 0x0288 (size: 0x4)
    float LastAngularVelocity;                                                        // 0x028C (size: 0x4)
    float TrackDisabledIntensity;                                                     // 0x0290 (size: 0x4)
    bool bHasDriver;                                                                  // 0x0294 (size: 0x1)

}; // Size: 0x2A0

class USimVehicleGunnerSupportAnimInstance : public USimVehicleAnimInstance
{
    float GunnerYaw;                                                                  // 0x02B8 (size: 0x4)
    float GunnerPitch;                                                                // 0x02BC (size: 0x4)
    bool bIsFiring;                                                                   // 0x02C0 (size: 0x1)
    bool bIsGunnerFiring;                                                             // 0x02C1 (size: 0x1)
    bool bIsGunnerReloading;                                                          // 0x02C2 (size: 0x1)
    bool bIsGunnerWorking;                                                            // 0x02C3 (size: 0x1)
    float AltGunnerYaw;                                                               // 0x02C4 (size: 0x4)
    float AltGunnerPitch;                                                             // 0x02C8 (size: 0x4)
    bool bIsAltFiring;                                                                // 0x02CC (size: 0x1)
    bool bIsAltGunnerFiring;                                                          // 0x02CD (size: 0x1)
    bool bIsAltGunnerReloading;                                                       // 0x02CE (size: 0x1)
    bool bIsAltGunnerWorking;                                                         // 0x02CF (size: 0x1)
    float AltGunner02Yaw;                                                             // 0x02D0 (size: 0x4)
    float AltGunner02Pitch;                                                           // 0x02D4 (size: 0x4)
    bool bIsAlt02Firing;                                                              // 0x02D8 (size: 0x1)
    bool bIsAltGunner02Firing;                                                        // 0x02D9 (size: 0x1)
    bool bIsAltGunner02Reloading;                                                     // 0x02DA (size: 0x1)
    bool bIsAltGunner02Working;                                                       // 0x02DB (size: 0x1)
    float AltGunner03Yaw;                                                             // 0x02DC (size: 0x4)
    float AltGunner03Pitch;                                                           // 0x02E0 (size: 0x4)
    bool bIsAlt03Firing;                                                              // 0x02E4 (size: 0x1)
    bool bIsAltGunner03Firing;                                                        // 0x02E5 (size: 0x1)
    bool bIsAltGunner03Reloading;                                                     // 0x02E6 (size: 0x1)
    bool bIsAltGunner03Working;                                                       // 0x02E7 (size: 0x1)
    float AltGunner04Yaw;                                                             // 0x02E8 (size: 0x4)
    float AltGunner04Pitch;                                                           // 0x02EC (size: 0x4)
    bool bIsAlt04Firing;                                                              // 0x02F0 (size: 0x1)
    bool bIsAltGunner04Firing;                                                        // 0x02F1 (size: 0x1)
    bool bIsAltGunner04Reloading;                                                     // 0x02F2 (size: 0x1)
    bool bIsAltGunner04Working;                                                       // 0x02F3 (size: 0x1)

    void AnimNotify_OnFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAltFiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt04FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt03FiringOver(const class UAnimNotify* Notify);
    void AnimNotify_OnAlt02FiringOver(const class UAnimNotify* Notify);
}; // Size: 0x300

class USimpleVehicleMovementComponent : public UCharacterMovementComponent
{
    bool bCanSink;                                                                    // 0x06D0 (size: 0x1)
    bool bIgnoreStepCheck;                                                            // 0x06D1 (size: 0x1)
    bool bUsesConstantFriction;                                                       // 0x06D2 (size: 0x1)
    bool bAllowIsWalkable;                                                            // 0x06D3 (size: 0x1)
    float WaterDepthNormalized;                                                       // 0x06D4 (size: 0x4)
    float FloatVelocity;                                                              // 0x06D8 (size: 0x4)
    float DepthOffset;                                                                // 0x06DC (size: 0x4)
    float MaxDepth;                                                                   // 0x06E0 (size: 0x4)

}; // Size: 0xAB0

class USnapshotManager : public UObject
{
}; // Size: 0xE0

class USniperRifleComponent : public UHitScanWeaponComponent
{
}; // Size: 0x9C0

class USoldierItemComponent : public ULargeItemComponent
{
    uint8 SoldierVisualsPacked;                                                       // 0x08F8 (size: 0x1)

    void OnRep_SoldierVisuals();
}; // Size: 0x928

class USoulstoneComponent : public UItemComponent
{
    TSubclassOf<class AWarExplosionEffect> TransformExplosionEffect;                  // 0x08E8 (size: 0x8)
    bool bIsEquipped;                                                                 // 0x08F0 (size: 0x1)

    void ServerUseSoulstone(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
}; // Size: 0x8F8

class USpawnPointComponent : public USceneComponent
{
    ESpawnPointPriority Priority;                                                     // 0x01F0 (size: 0x1)

}; // Size: 0x200

class USpecializedFactoryComponent : public UActorComponent
{
    TArray<FFactoryProductionCategory> ProductionCategories;                          // 0x00B0 (size: 0x10)
    int32 MaxOrderSize;                                                               // 0x00C0 (size: 0x4)
    int32 MaxQueueSize;                                                               // 0x00C4 (size: 0x4)
    int32 MaxCompletedOrders;                                                         // 0x00C8 (size: 0x4)
    float CraftUpdateCycleSeconds;                                                    // 0x00CC (size: 0x4)
    float CompletedOrderExpiryTime;                                                   // 0x00D0 (size: 0x4)
    float ProductionTimeMultiplier;                                                   // 0x00D4 (size: 0x4)
    float MassProductionDiscountPerItem;                                              // 0x00D8 (size: 0x4)
    float MassProductionMaxDiscount;                                                  // 0x00DC (size: 0x4)
    bool bIsMassProductionSupported;                                                  // 0x00E0 (size: 0x1)
    int32 MassProductionMinOrderSize;                                                 // 0x00E4 (size: 0x4)
    bool bAutoAddVehicleProductionCategory;                                           // 0x00E8 (size: 0x1)
    bool bAutoAddStructureProductionCategory;                                         // 0x00E9 (size: 0x1)
    TArray<FFactoryQueue> Queues;                                                     // 0x00F0 (size: 0x10)
    bool bIsProducing;                                                                // 0x0110 (size: 0x1)

    bool IsProducing();
}; // Size: 0x138

class USpecializedFactoryUserComponent : public UUserComponent
{
    TArray<FFactoryQueue> Queues;                                                     // 0x00C8 (size: 0x10)

}; // Size: 0xE8

class USpiderMechAnimInstance : public USimVehicleAnimInstance
{
    float GunnerYaw;                                                                  // 0x0298 (size: 0x4)
    float AltGunnerYaw;                                                               // 0x029C (size: 0x4)
    float AltGunnerPitch;                                                             // 0x02A0 (size: 0x4)
    bool bIsHatchOpen;                                                                // 0x02A4 (size: 0x1)

}; // Size: 0x2B0

class USplineConnectorComponent : public USceneComponent
{
    FName TargetComponentName;                                                        // 0x01F0 (size: 0x8)
    FName TargetComponentTag;                                                         // 0x01F8 (size: 0x8)
    float MaxTargetDistance;                                                          // 0x0200 (size: 0x4)
    float MaxTargetAngle;                                                             // 0x0204 (size: 0x4)
    bool bIgnoreTargetAngle;                                                          // 0x0208 (size: 0x1)
    FTransform DefaultTarget;                                                         // 0x0210 (size: 0x30)
    float SurfaceSampleResolution;                                                    // 0x0240 (size: 0x4)
    float SurfaceSampleExtension;                                                     // 0x0244 (size: 0x4)
    bool bSurfaceSamplesIgnoreHoles;                                                  // 0x0248 (size: 0x1)
    TArray<FSplineConnectorMeshConfig> MeshConfigs;                                   // 0x0268 (size: 0x10)
    TArray<FSplineConnectorComponentConfig> ComponentConfigs;                         // 0x0278 (size: 0x10)
    EConnectorPathMode PathMode;                                                      // 0x0288 (size: 0x1)
    bool bUseBiarcPathModeWhenSnapped;                                                // 0x0289 (size: 0x1)
    bool bWorldSpaceArcTangents;                                                      // 0x028A (size: 0x1)
    float MinBuffer;                                                                  // 0x028C (size: 0x4)
    float MaxBuffer;                                                                  // 0x0290 (size: 0x4)
    float MinRadius;                                                                  // 0x0294 (size: 0x4)
    float MaxRadius;                                                                  // 0x0298 (size: 0x4)
    bool bEnforceSplineModeCornerRadius;                                              // 0x029C (size: 0x1)
    float MaxArcAngle;                                                                // 0x02A0 (size: 0x4)
    ESplineFootprintShapeType BuildFootprintShapeType;                                // 0x02A4 (size: 0x1)
    float BuildFootprintCapsuleRadius;                                                // 0x02A8 (size: 0x4)
    float BuildFootprintCapsuleHalfHeight;                                            // 0x02AC (size: 0x4)
    float BuildFootprintWidth;                                                        // 0x02B0 (size: 0x4)
    float BuildFootprintLength;                                                       // 0x02B4 (size: 0x4)
    float BuildFootprintHeight;                                                       // 0x02B8 (size: 0x4)
    float SurfaceSampleRadiusOverride;                                                // 0x02BC (size: 0x4)
    float BuildFootprintVerticalOffset;                                               // 0x02C0 (size: 0x4)
    float BuildFootprintStartOffset;                                                  // 0x02C4 (size: 0x4)
    float BuildFootprintEndOffset;                                                    // 0x02C8 (size: 0x4)
    float BuildFootprintBoxEndVerticalOffset;                                         // 0x02CC (size: 0x4)
    float BuildFootprintBoxEndLengthOverride;                                         // 0x02D0 (size: 0x4)
    float BuildFootprintBoxEndHeightOverride;                                         // 0x02D4 (size: 0x4)
    float BuildFootprintDualBoxOffset;                                                // 0x02D8 (size: 0x4)
    bool bUseExtendedFootprint;                                                       // 0x02DC (size: 0x1)
    bool bDisallowSnappedSplineIntersection;                                          // 0x02DD (size: 0x1)
    bool bCheckBuildFootprintsAgainstIgnoredActors;                                   // 0x02DE (size: 0x1)
    bool bIgnoreInnerBuildFootprintPlacementChecks;                                   // 0x02DF (size: 0x1)
    int32 NumIgnoredFootprints;                                                       // 0x02E0 (size: 0x4)
    float MaxSlopeAngle;                                                              // 0x02E4 (size: 0x4)
    bool bMouseWheelControlsHeight;                                                   // 0x02E8 (size: 0x1)
    bool bAltMouseWheelControlsPitch;                                                 // 0x02E9 (size: 0x1)
    float MaxFootprintDepthBelowSurface;                                              // 0x02EC (size: 0x4)
    float MaxFootprintHeightAboveSurface;                                             // 0x02F0 (size: 0x4)
    float MaxHeightAboveSurfaceAtEnds;                                                // 0x02F4 (size: 0x4)
    int32 NumHeightEndSamples;                                                        // 0x02F8 (size: 0x4)
    ESplineWaterPlacementRequirement WaterPlacementRequirement;                       // 0x02FC (size: 0x1)
    float Alpha;                                                                      // 0x0300 (size: 0x4)
    float ZFightingCompensation;                                                      // 0x0304 (size: 0x4)
    float BuildGhostZFightingCompensation;                                            // 0x0308 (size: 0x4)
    TArray<FSplineConnectorMeshConfigTransient> MeshConfigTransient;                  // 0x0310 (size: 0x10)
    TArray<class UBoxComponent*> BoxComponents;                                       // 0x0460 (size: 0x10)
    TArray<class UDecalComponent*> Decals;                                            // 0x0470 (size: 0x10)

}; // Size: 0x4C0

class USpotterMountComponent : public UMountComponent
{
    float CameraArmLengthOverride;                                                    // 0x0868 (size: 0x4)
    class UCurveFloat* CameraArmLengthCurve;                                          // 0x0870 (size: 0x8)

}; // Size: 0x878

class UStaticArtilleryAnimInstance : public UAnimInstance
{
    float Yaw;                                                                        // 0x0268 (size: 0x4)
    float Pitch;                                                                      // 0x026C (size: 0x4)
    bool bIsMoving;                                                                   // 0x0270 (size: 0x1)
    bool bIsShooting;                                                                 // 0x0271 (size: 0x1)

}; // Size: 0x280

class UStaticMeshOverrideComponent : public UActorComponent
{
    TArray<FStaticMeshOverride> StaticMeshOverrides;                                  // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UStealthComponent : public UActorComponent
{
    float MinimumViewableDistanceOverride;                                            // 0x00B0 (size: 0x4)
    bool bSkipIncomingLoSCheck;                                                       // 0x00B4 (size: 0x1)
    bool bUseViewerLocationAsViewLocation;                                            // 0x00B5 (size: 0x1)
    FName OpacityParamName;                                                           // 0x00B8 (size: 0x8)
    TArray<class UStealthComponent*> FiringOccupants;                                 // 0x00E8 (size: 0x10)

}; // Size: 0xF8

class UStockpileUserComponent : public UUserComponent
{
    TArray<FStockpileEntry> Items;                                                    // 0x00C8 (size: 0x10)
    TArray<FStockpileEntry> ReservableItemCrates;                                     // 0x00D8 (size: 0x10)
    TArray<FStockpileEntry> Vehicles;                                                 // 0x00E8 (size: 0x10)
    TArray<FStockpileEntry> VehicleCrates;                                            // 0x00F8 (size: 0x10)
    TArray<FStockpileEntry> Structures;                                               // 0x0108 (size: 0x10)
    TArray<FStockpileEntry> StructureCrates;                                          // 0x0118 (size: 0x10)

    void OnRep_Vehicles();
    void OnRep_VehicleCrates();
    void OnRep_Structures();
    void OnRep_StructureCrates();
    void OnRep_ReservableItemCrates();
    void OnRep_Items();
}; // Size: 0x130

class UStructureLayerComponent : public UActorComponent
{
    uint32 IncludedInLayers;                                                          // 0x00B0 (size: 0x4)
    uint32 ExcludedByLayers;                                                          // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class UStructureSeatComponent : public USeatComponent
{
    FVector SafeSpawnOffset;                                                          // 0x0280 (size: 0xC)
    uint8 bProvidesFullCover;                                                         // 0x028C (size: 0x1)
    uint8 bProvidesInvul;                                                             // 0x028C (size: 0x1)
    uint8 bTeleportBack;                                                              // 0x028C (size: 0x1)
    bool bCanOccupantSeeThroughEverything;                                            // 0x028D (size: 0x1)
    bool bCheckForPlayersOnOccupy;                                                    // 0x028E (size: 0x1)
    bool bOccupantCrouches;                                                           // 0x028F (size: 0x1)
    TWeakObjectPtr<class ASimCharacter> CurrentOccupant;                              // 0x0290 (size: 0x8)

    void OnRep_CurrentOccupant();
}; // Size: 0x2B0

class USubmarineAnimInstance : public ULargeShipAnimInstance
{
    EDynamicState HatchState;                                                         // 0x0370 (size: 0x1)
    EDynamicState LeftTorpedoTubeState;                                               // 0x0371 (size: 0x1)
    EDynamicState RightTorpedoTubeState;                                              // 0x0372 (size: 0x1)
    float DivePlaneAngle;                                                             // 0x0374 (size: 0x4)
    float MainBallastPlayRate;                                                        // 0x0378 (size: 0x4)
    float NegativeBallastPlayRate;                                                    // 0x037C (size: 0x4)
    float SafteyBallastPlayRate;                                                      // 0x0380 (size: 0x4)

}; // Size: 0x390

class USubmarineDivingMountComponent : public USubmarineMountComponent
{

    void ServerSetDivingPlaneInput(int8 Input);
}; // Size: 0x890

class USubmarineDriverMountComponent : public UMountComponent
{
}; // Size: 0x868

class USubmarineMountComponent : public UMountComponent
{
    TSubclassOf<class ASensorReadingProxy> SensorReadingProxy;                        // 0x0868 (size: 0x8)
    class USoundCue* ResponseSoundCue;                                                // 0x0870 (size: 0x8)

    void ClientSensorPingResponse(const TArray<FSensorPingResponse>& Responses, bool bIsIntel);
}; // Size: 0x888

class USubmarinePeriscopeMountComponent : public USubmarineMountComponent
{
    float MaxDepthForVisuals;                                                         // 0x0888 (size: 0x4)
    class UCurveFloat* CameraArmLengthCurve;                                          // 0x0890 (size: 0x8)

}; // Size: 0x898

class USubmarineTubeUseComponent : public UShipFlagUseComponent
{
}; // Size: 0x4C0

class USubmarineVisibilityToggleComponent : public UVisibilityToggleAreaComponent
{
}; // Size: 0x430

class UTankEngineerComponent : public UMountComponent
{
    int32 TargetMountIndex;                                                           // 0x0868 (size: 0x4)
    int32 RepairAmount;                                                               // 0x086C (size: 0x4)
    TArray<FName> CompatibleAmmoNames;                                                // 0x0880 (size: 0x10)

    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    void ServerRepair(FActivityStateChange ActivityStateChange);
}; // Size: 0x890

class UTankGunnerMountComponent : public UMultiAmmoVehicleMountComponent
{
    class USoundCue* ShotSoundCue;                                                    // 0x08A8 (size: 0x8)
    class UParticleSystem* MuzzleFlashPS;                                             // 0x08B0 (size: 0x8)
    bool bUsePerBarrelFX;                                                             // 0x08B8 (size: 0x1)
    bool AimOffsetEnabled;                                                            // 0x08B9 (size: 0x1)
    float AimOffsetStartRange;                                                        // 0x08BC (size: 0x4)
    float AimRightOffsetAmount;                                                       // 0x08C0 (size: 0x4)
    float AimDistanceOffsetAmount;                                                    // 0x08C4 (size: 0x4)

    void ServerFireShell(FActivityStateChange ActivityStateChange, const FCharacterInvokeInfo InvokeInfo);
    void MulticastPlayFiringFX();
    void MulticastPlayDebugTrace(FVector TraceStart, FVector TraceEnd, FVector HitLocation, float HitAngle, FVector HitNormal, float DamageInnerRadius, float DamageOuterRadius);
}; // Size: 0x8E8

class UTankZombieDamageType : public USimDamageType
{
}; // Size: 0x140

class UTankZombieSecondaryDamageType : public USimDamageType
{
}; // Size: 0x140

class UTaskItemComponent : public UItemComponent
{
    class USkeletalMesh* ItemMesh;                                                    // 0x08E8 (size: 0x8)
    class USoundCue* StartTaskSoundCue;                                               // 0x08F0 (size: 0x8)
    ECharacterActivityState TaskActivityState;                                        // 0x08F8 (size: 0x1)
    float MaxRangeToTarget;                                                           // 0x08FC (size: 0x4)
    FText NoTargetText;                                                               // 0x0900 (size: 0x18)
    FText NoAmmoText;                                                                 // 0x0918 (size: 0x18)
    FText StartTaskText;                                                              // 0x0930 (size: 0x18)
    FText EndTaskText;                                                                // 0x0948 (size: 0x18)
    float LoopDuration;                                                               // 0x0960 (size: 0x4)
    ETaskItemTargetCheckMethod TargetCheckMethod;                                     // 0x0964 (size: 0x1)
    bool bIsEquipped;                                                                 // 0x0965 (size: 0x1)

    void ServerTryStartTask(FActivityStateChange ActivityStateChange);
    void ServerStopInvokeTask();
    void OnRep_IsEquipped();
}; // Size: 0x988

class UTeamFlagMeshComponent : public UStaticMeshComponent
{
    class UStaticMesh* Team0Mesh;                                                     // 0x0468 (size: 0x8)
    class UStaticMesh* Team1Mesh;                                                     // 0x0470 (size: 0x8)
    class UMaterialInterface* MaterialConnected;                                      // 0x0478 (size: 0x8)
    class UMaterialInterface* MaterialDisconnected;                                   // 0x0480 (size: 0x8)
    class UMaterialInterface* MaterialDisconnectedStarved;                            // 0x0488 (size: 0x8)
    bool bAllowWindRotation;                                                          // 0x0490 (size: 0x1)

}; // Size: 0x4A0

class UTechTreeComponent : public UActorComponent
{
    TSubclassOf<class UTechTreeComponentData> DataClass;                              // 0x00B0 (size: 0x8)
    bool bStartsCompleted;                                                            // 0x00B8 (size: 0x1)
    class UTechTreeComponentData* Data;                                               // 0x00C0 (size: 0x8)
    TArray<FTechTreeComponentItemProgress> ItemProgress;                              // 0x00D8 (size: 0x10)
    int32 ItemUnlockBits;                                                             // 0x00E8 (size: 0x4)
    uint8 InfrastructureModCount;                                                     // 0x00EC (size: 0x5)
    int32 TechStateID;                                                                // 0x00F4 (size: 0x4)
    TArray<int64> CompletedTimes;                                                     // 0x00F8 (size: 0x10)
    TArray<float> ActivityWeights;                                                    // 0x0108 (size: 0x10)
    FTechTreeComponentDynamicOnResearched DynamicOnResearched;                        // 0x0170 (size: 0x10)
    void DynamicOnResearched(const class UTechTreeComponent* TechTreeComponent, const ETechComponentID TechID);

    void OnRep_ItemUnlockBits(const int32 PreviousItemUnlockBits);
}; // Size: 0x180

class UTechTreeComponentData : public UActorComponent
{
    int8 UniqueId;                                                                    // 0x00B0 (size: 0x1)
    TArray<FTechTreeComponentItem> Items;                                             // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UTechTreeUserComponent : public UUserComponent
{
    FTechTreeComponentVotes TechTreeVotes;                                            // 0x00C8 (size: 0x2)
    bool bIsSpawnPointSetHere;                                                        // 0x00CA (size: 0x1)
    EActivityBonusState ActivityBonusState;                                           // 0x00CB (size: 0x1)

    void ServerSetVote(const ESpawnPointCategory SpawnPointCategory, const EInfrastructureType Vote);
    void OnRep_IsActivityBonusActive();
}; // Size: 0xD0

class UTemperatureModifierBoxComponent : public UBoxComponent
{

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x410

class UTemperatureModifierSphereComponent : public USphereComponent
{

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x400

class UTemplateComponent : public USceneComponent
{
    TSubclassOf<class ATemplate> TemplateActor;                                       // 0x01F0 (size: 0x8)
    bool bOnlyCollisions;                                                             // 0x01F8 (size: 0x1)
    FName OverrideCollisionProfile;                                                   // 0x01FC (size: 0x8)
    bool bUnidirectionalSockets;                                                      // 0x0204 (size: 0x1)
    TSubclassOf<class AActor> OnlyIncludeOn;                                          // 0x0208 (size: 0x8)
    TArray<class UActorComponent*> SpawnedComponents;                                 // 0x0210 (size: 0x10)

}; // Size: 0x220

class UTorpedoGunnerMountComponent : public USubmarineMountComponent
{
    TSubclassOf<class AWarProjectile> ProjectileClass;                                // 0x0888 (size: 0x8)
    float MinDepth;                                                                   // 0x0890 (size: 0x4)
    float MaxDepth;                                                                   // 0x0894 (size: 0x4)
    float RangeIncrement;                                                             // 0x0898 (size: 0x4)
    int8 Ammo;                                                                        // 0x08A0 (size: 0x1)
    uint8 RangeIndex;                                                                 // 0x08A1 (size: 0x1)

    void ServerStartInvoke(FActivityStateChange ActivityStateChange, FVector2D TargetDirection, float TargetDepth);
    void ServerCycleRange();
}; // Size: 0x8B0

class UTorpedoMovementComponent : public UProjectileMovementComponent
{
    class UCurveFloat* MaxHorizontalAccelerationCurve;                                // 0x01D0 (size: 0x8)
    class UCurveVector* PIDCurve;                                                     // 0x01D8 (size: 0x8)

}; // Size: 0x1F0

class UTowHitchUseComponent : public UUseComponent
{
    bool bIsTractor;                                                                  // 0x04B8 (size: 0x1)
    float CollisionBuffer;                                                            // 0x04BC (size: 0x4)
    class USoundCue* HitchCue;                                                        // 0x04C0 (size: 0x8)
    class USoundCue* UnhitchCue;                                                      // 0x04C8 (size: 0x8)
    FSlateBrush HitchIcon;                                                            // 0x04D0 (size: 0x88)
    FSlateBrush UnhitchIcon;                                                          // 0x0558 (size: 0x88)

}; // Size: 0x5E0

class UTrackSwitchAnimInstance : public UAnimInstance
{
    float Angle;                                                                      // 0x0268 (size: 0x4)

}; // Size: 0x270

class UTrainPassengerMountComponent : public UMountComponent
{
    bool bAllowItemSubmission;                                                        // 0x0868 (size: 0x1)

    void ServerSubmitItems(class AActor* TargetActor);
}; // Size: 0x870

class UTransferLocationComponent : public USceneComponent
{
    TArray<FName> ValidShippables;                                                    // 0x01F0 (size: 0x10)

}; // Size: 0x200

class UTraumaKitComponent : public UTaskItemComponent
{
}; // Size: 0x988

class UTravelManager : public UObject
{
    float RequestTimeout;                                                             // 0x0028 (size: 0x4)
    float ProfileLoadTimeout;                                                         // 0x002C (size: 0x4)
    float ReservationTimeout;                                                         // 0x0030 (size: 0x4)
    float FirstPlayerReservationTimeout;                                              // 0x0034 (size: 0x4)
    float SearchBorderOffset;                                                         // 0x0038 (size: 0x4)
    float SearchMaxRadius;                                                            // 0x003C (size: 0x4)
    float SearchMaxRadiusVehicle;                                                     // 0x0040 (size: 0x4)
    float SearchGroundMargin;                                                         // 0x0044 (size: 0x4)
    float SearchMinimumWaterDepth;                                                    // 0x0048 (size: 0x4)
    float OfflineCharacterOffset;                                                     // 0x004C (size: 0x4)
    float OfflineCharacterSpacing;                                                    // 0x0050 (size: 0x4)
    float OfflineCharacterZOffset;                                                    // 0x0054 (size: 0x4)
    float ArrivalInvulnerabilityTime;                                                 // 0x0058 (size: 0x4)

    void ProfileSyncComplete(bool bSuccess, uint32 PendingTravelId);
}; // Size: 0x100

class UTravelPortalComponent : public UUseComponent
{
}; // Size: 0x4C0

class UTurretLightComponent : public USceneComponent
{
    class USceneComponent* RotatedSceneComponent;                                     // 0x01F0 (size: 0x8)
    class ULightComponentBase* LightComponent;                                        // 0x01F8 (size: 0x8)

}; // Size: 0x210

class UUnexplodedOrdnanceDamageType : public USimDamageType
{
}; // Size: 0x140

class UUniforms : public UObject
{
    FUniform Data;                                                                    // 0x0028 (size: 0xB80)

}; // Size: 0xBA8

class UUseComponent : public UBoxComponent
{
    FText HintText;                                                                   // 0x0400 (size: 0x18)
    FText DisplayName;                                                                // 0x0418 (size: 0x18)
    FSlateBrush Icon;                                                                 // 0x0430 (size: 0x88)

}; // Size: 0x4C0

class UUseMonumentComponent : public UUseComponent
{
}; // Size: 0x4C0

class UUseWorldMapComponent : public UUseComponent
{
}; // Size: 0x4C0

class UUserComponent : public UActorComponent
{
    TWeakObjectPtr<class AActor> AssociatedActor;                                     // 0x00B4 (size: 0x8)
    TWeakObjectPtr<class UActorComponent> AssociatedComponent;                        // 0x00BC (size: 0x8)

    void OnRep_AssociatedComponent();
    void OnRep_AssociatedActor();
}; // Size: 0xC8

class UVehicleBuildTriggerComponent : public UBoxComponent
{
    FName BuiltVehicleCodeNameColonial;                                               // 0x0400 (size: 0x8)
    FName BuiltVehicleCodeNameWarden;                                                 // 0x0408 (size: 0x8)
    FName BuildFootprintTag;                                                          // 0x0410 (size: 0x8)

}; // Size: 0x420

class UVehicleSeatComponent : public USeatComponent
{
    ESeatDirection Direction;                                                         // 0x0280 (size: 0x1)
    bool bIsSwitchable;                                                               // 0x0281 (size: 0x1)
    bool bCanFireWeapon;                                                              // 0x0283 (size: 0x1)
    bool bCanUseBinoculars;                                                           // 0x0284 (size: 0x1)
    bool bIsWoundable;                                                                // 0x0286 (size: 0x1)
    bool bOverrideAsPassenger;                                                        // 0x0287 (size: 0x1)
    class USoundCue* EnterSFX;                                                        // 0x0288 (size: 0x8)

}; // Size: 0x290

class UVehicleSpawnLocationComponent : public USceneComponent
{
    TSubclassOf<class ASimVehicle> VehicleClass;                                      // 0x01F0 (size: 0x8)

}; // Size: 0x200

class UVisibilityToggleAreaComponent : public UBoxComponent
{
    FName ToggleableComponentsTag;                                                    // 0x0400 (size: 0x8)
    FName ShowComponentsTag;                                                          // 0x0408 (size: 0x8)
    bool bBlockVehicles;                                                              // 0x0410 (size: 0x1)
    TArray<FName> BonesForAimTraceToIgnore;                                           // 0x0418 (size: 0x10)

    void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x430

class UWarAssetManager : public UAssetManager
{
}; // Size: 0x438

class UWarAudioComponent : public UAudioComponent
{
}; // Size: 0x730

class UWarBenchmarkNetConnection : public USimulatedClientNetConnection
{
}; // Size: 0x19C0

class UWarBoxComponent : public UBoxComponent
{
    uint8 MovementIgnoreFlags;                                                        // 0x0400 (size: 0x1)

}; // Size: 0x410

class UWarCapsuleComponent : public UCapsuleComponent
{
    uint8 MovementIgnoreFlags;                                                        // 0x03F8 (size: 0x1)

}; // Size: 0x400

class UWarGameInstance : public UGameInstance
{
    class USoundMix* BaseSoundMix;                                                    // 0x0170 (size: 0x8)
    FWarBlueprints Blueprints;                                                        // 0x01F0 (size: 0x28)
    class UBorderBaseManager* BorderBaseManager;                                      // 0x03A0 (size: 0x8)
    class UPipelineManager* PipelineManager;                                          // 0x03A8 (size: 0x8)
    class UWeatherManager* WeatherManager;                                            // 0x03B0 (size: 0x8)
    class UWorldResourceSpawner* WorldResourceSpawner;                                // 0x03B8 (size: 0x8)
    class UWarSaveGame* CurrentWarSave;                                               // 0x03C0 (size: 0x8)
    class UPlayerProfileManager* PlayerProfileManager;                                // 0x03C8 (size: 0x8)
    class UServerSettings* ServerSettings;                                            // 0x03D0 (size: 0x8)
    class UClientStreamingManager* StreamingManager;                                  // 0x03D8 (size: 0x8)
    class UTravelManager* TravelManager;                                              // 0x03E0 (size: 0x8)
    class ULandscapeDeformationManager* LandscapeDeformationManager;                  // 0x03E8 (size: 0x8)
    class UCrossRegionActorManager* CrossRegionActorManager;                          // 0x03F0 (size: 0x8)
    class USnapshotManager* SnapshotManager;                                          // 0x03F8 (size: 0x8)
    class AMapList* MapList;                                                          // 0x0480 (size: 0x8)
    class UWarSessionSettings* WarSessionSettings;                                    // 0x0488 (size: 0x8)
    class ALoreList* LoreList;                                                        // 0x0490 (size: 0x8)
    uint32 LastColonialCount;                                                         // 0x0498 (size: 0x4)
    uint32 LastWardenCount;                                                           // 0x049C (size: 0x4)
    class UDiscordRichPresence* DiscordRichPresence;                                  // 0x04A0 (size: 0x8)
    FString DiscordRichPresenceApplicationID;                                         // 0x04A8 (size: 0x10)
    class AWarBeaconHost* WarBeaconHost;                                              // 0x04B8 (size: 0x8)
    class UMonumentManager* MonumentManager;                                          // 0x04C0 (size: 0x8)
    FWarServerQueue ColonialQueue;                                                    // 0x0500 (size: 0x40)
    FWarServerQueue WardenQueue;                                                      // 0x0540 (size: 0x40)
    TArray<FDeploymentQueueEntry> DeploymentQueue;                                    // 0x0580 (size: 0x10)
    class UWarVoiceClient* WarVoiceClient;                                            // 0x0608 (size: 0x8)
    class UClientConfigManager* ClientConfigManager;                                  // 0x0610 (size: 0x8)
    FWarAPIClient WarAPIClient;                                                       // 0x0620 (size: 0x28)
    FMapPostManager MapPostManager;                                                   // 0x0648 (size: 0x38)
    FWarRichTextStyle RichTextStyle;                                                  // 0x0680 (size: 0x188)
    FRegionZoneManager RegionZoneManager;                                             // 0x0808 (size: 0xC0)
    FSquadManager SquadManager;                                                       // 0x08C8 (size: 0x380)
    FRegimentManager RegimentManager;                                                 // 0x0C48 (size: 0x3A0)
    FExternalWarServiceReplicatedState ExternalWarServiceReplicatedState;             // 0x1030 (size: 0x10)
    FWarServiceReplicatedState WarServiceReplicatedState;                             // 0x10C0 (size: 0x10)

    void ResetServerTravelStatusOnClient();
    uint32 GetLocalNetworkVersion();
    void DumpProperties(FString OutputFileName, const UClass* Type, const TArray<class UClass*>& BaseClassFilters, const TArray<FString>& PropertyNameFilter);
    void DumpComponentOwners(FString OutputFileName, const UClass* ComponentType);
    void DumpCollisionProfiles(FString OutputFileName, const UClass* Type, const TArray<class UClass*>& BaseClassFilters, const TArray<FString>& ProfileNameFilters);
}; // Size: 0x1560

class UWarGameUserSettings : public UGameUserSettings
{
}; // Size: 0x120

class UWarGameViewportClient : public UGameViewportClient
{
}; // Size: 0x308

class UWarLocalPlayer : public ULocalPlayer
{
    class UPlayerSaveGame* PlayerSaveGame;                                            // 0x0258 (size: 0x8)

}; // Size: 0x260

class UWarMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
    FWarMenuStyle WidgetStyle;                                                        // 0x0030 (size: 0xCA10)

}; // Size: 0xCA40

class UWarOpsMapData : public UObject
{
    FWarOpsMap Map;                                                                   // 0x0028 (size: 0x40)

}; // Size: 0x68

class UWarRecoverySaveGame : public USaveGame
{
    FDateTime Timestamp;                                                              // 0x0028 (size: 0x8)
    FString WarId;                                                                    // 0x0030 (size: 0x10)
    EWarPhase WarPhase;                                                               // 0x0040 (size: 0x1)
    FString MapName;                                                                  // 0x0048 (size: 0x10)
    TArray<FSavedRecoveryCharacter> Characters;                                       // 0x0058 (size: 0x10)
    TArray<FSavedRecoveryVehicle> Vehicles;                                           // 0x0068 (size: 0x10)
    TArray<FString> OriginatorVehicleNames;                                           // 0x0078 (size: 0x10)

}; // Size: 0x88

class UWarReplicationGraph : public UReplicationGraph
{
    TArray<class UClass*> NonSpatializedChildClasses;                                 // 0x0498 (size: 0x10)
    class UWarReplicationGraphNode_GridSpatialization2D* GridNode;                    // 0x04A8 (size: 0x8)
    class UWarReplicationGraphNode_RailVehicleNode* RailVehicleNode;                  // 0x04B0 (size: 0x8)
    class UReplicationGraphNode_ActorList* AlwaysRelevantNode;                        // 0x04B8 (size: 0x8)

}; // Size: 0x550

class UWarReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
{
    TArray<FWarAlwaysRelevantActorInfo> PastRelevantActors;                           // 0x0068 (size: 0x10)

}; // Size: 0x80

class UWarReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode_GridSpatialization2D
{
}; // Size: 0x230

class UWarReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
{
}; // Size: 0x80

class UWarReplicationGraphNode_RailVehicleNode : public UReplicationGraphNode
{
    TMap<class ARailVehicle*, class FTrainRepInfo> Trains;                            // 0x0088 (size: 0x50)

}; // Size: 0x128

class UWarSaveGame : public USaveGame
{
    FString WarId;                                                                    // 0x0028 (size: 0x10)
    TArray<FSavedActor> SavedActors;                                                  // 0x0038 (size: 0x10)
    uint32 NextSpawnPointId;                                                          // 0x0048 (size: 0x4)
    FString MapName;                                                                  // 0x0050 (size: 0x10)
    bool bUprisingStarted;                                                            // 0x0060 (size: 0x1)
    FGameplayFlags GameplayFlags;                                                     // 0x0064 (size: 0x4)
    TMap<class FString, class FPlayerWarState> PlayerWarStates;                       // 0x0068 (size: 0x50)
    TMap<class FString, class FSavedCharacter> SavedCharacterMap;                     // 0x00B8 (size: 0x50)
    FWarReporter WarReporter;                                                         // 0x0108 (size: 0x58)
    FWarBalancer WarBalancer;                                                         // 0x0160 (size: 0x70)
    FRegionLogs RegionLogs;                                                           // 0x01D0 (size: 0x30)
    TArray<FTransform> ResourceMineTransforms;                                        // 0x0200 (size: 0x10)
    TArray<FTransform> ResourceFieldTransforms;                                       // 0x0210 (size: 0x10)
    TArray<FTransform> OilRigTransforms;                                              // 0x0220 (size: 0x10)
    EWarPhase WarPhase;                                                               // 0x0230 (size: 0x1)
    FDateTime WorldResourceSpawnTime;                                                 // 0x0238 (size: 0x8)
    TArray<FScheduledWeatherState> WeatherStateTimes;                                 // 0x0240 (size: 0x10)
    int32 IceTaskListIndex;                                                           // 0x0250 (size: 0x4)
    float DryingDuration;                                                             // 0x0254 (size: 0x4)
    bool bIsWeatherManual;                                                            // 0x0258 (size: 0x1)
    FWarDebugVariables DebugVariables;                                                // 0x025C (size: 0x18)
    FDateTime Timestamp;                                                              // 0x0278 (size: 0x8)
    bool bIsAutoSave;                                                                 // 0x0280 (size: 0x1)
    TSet<FName> DestroyedDestructibleProps;                                           // 0x0288 (size: 0x50)
    int32 NextTechStateID;                                                            // 0x02D8 (size: 0x4)
    TArray<FPipelineSystem> PipelineSystems;                                          // 0x02E0 (size: 0x10)

}; // Size: 0x2F0

class UWarSessionSettings : public UObject
{
}; // Size: 0x50

class UWarStatics : public UObject
{

    bool IsNight(const class UObject* WorldContextObject);
}; // Size: 0x28

class UWarVoiceClient : public UObject
{
}; // Size: 0x140

class UWatchTowerAnimInstance : public UAnimInstance
{
    float ViewDirection;                                                              // 0x0268 (size: 0x4)

}; // Size: 0x270

class UWatchTowerMountComponent : public UMountComponent
{

    void ServerSetRotationDirection(const ERotationDirection Direction);
}; // Size: 0x870

class UWaterBucketItemComponent : public UProjectileItemComponent
{
}; // Size: 0x988

class UWaterDamageType : public USimDamageType
{
}; // Size: 0x140

class UWaterMineItemComponent : public ULargeItemComponent
{
    TSubclassOf<class AWaterMine> WaterMineClass;                                     // 0x08F8 (size: 0x8)
    float DetonationDepthToggleIncrement;                                             // 0x0900 (size: 0x4)
    float MinDeploymentDepth;                                                         // 0x0904 (size: 0x4)
    float MaxDeploymentDepth;                                                         // 0x0908 (size: 0x4)
    float MinDistanceBetweenMines;                                                    // 0x090C (size: 0x4)
    float MaxDeploymentRange;                                                         // 0x0910 (size: 0x4)
    float DeployDuration;                                                             // 0x0914 (size: 0x4)

    void ServerStartInvoke(FActivityStateChange ActivityStateChange, const FVector MouseTraceStart, const FVector MouseTraceEnd, const float InDetonationDepth);
}; // Size: 0x940

class UWaterProjectileMovementComponent : public UProjectileMovementComponent
{
}; // Size: 0x1D0

class UWaterReloadSourceComponent : public UActorComponent
{
}; // Size: 0xB0

class UWaterStencilComponent : public UStaticMeshComponent
{
}; // Size: 0x470

class UWeaponAnimInstance : public UAnimInstance
{
    ECharacterActivityState CharacterActivityState;                                   // 0x0268 (size: 0x1)
    ESimCharacterStance CharacterStance;                                              // 0x0269 (size: 0x1)
    float CharacterSpeed;                                                             // 0x026C (size: 0x4)
    float AimOffsetYaw;                                                               // 0x0270 (size: 0x4)
    float AimOffsetPitch;                                                             // 0x0274 (size: 0x4)
    bool bIsCharacterScoping;                                                         // 0x0278 (size: 0x1)

}; // Size: 0x280

class UWeatherData : public UObject
{
    TArray<FWeatherPattern> WeatherPatterns;                                          // 0x0028 (size: 0x10)

}; // Size: 0x38

class UWeatherIceLimiterBox : public UBoxComponent
{
    EWeatherIceLimiterType Type;                                                      // 0x0400 (size: 0x1)

}; // Size: 0x410

class UWeatherIceLimiterSphere : public USphereComponent
{
    EWeatherIceLimiterType Type;                                                      // 0x03F8 (size: 0x1)

}; // Size: 0x400

class UWeatherIceMeshComponent : public UStaticMeshComponent
{
}; // Size: 0x470

class UWeatherManager : public UObject
{
    TSubclassOf<class UWeatherData> DataClass;                                        // 0x0028 (size: 0x8)
    TMap<class EWeatherType, class FWeatherEffects> WeatherEffects;                   // 0x0040 (size: 0x50)
    class UMaterialParameterCollection* WeatherControl;                               // 0x0090 (size: 0x8)
    class UMaterialParameterCollection* WeatherIceControl;                            // 0x0098 (size: 0x8)
    TArray<class UCurveFloat*> IntensityCurves;                                       // 0x00A0 (size: 0x10)
    class UCurveFloat* VisualsIntensityCurve;                                         // 0x00B0 (size: 0x8)
    float FogVisibilityMultiplier;                                                    // 0x00B8 (size: 0x4)
    class UMaterialInterface* FogMaterial;                                            // 0x00C0 (size: 0x8)
    class UCurveFloat* FogBlendCurve;                                                 // 0x00C8 (size: 0x8)
    FNamedParameterRange CloudParameter;                                              // 0x00D0 (size: 0x10)
    FNamedParameterRange WindParameter;                                               // 0x00E0 (size: 0x10)
    FVector EffectsOffset;                                                            // 0x00F0 (size: 0xC)
    float EffectsLookAheadScale;                                                      // 0x00FC (size: 0x4)
    TArray<class UPhysicalMaterial*> SnowyPhysicalMaterials;                          // 0x0100 (size: 0x10)
    TArray<class AWeatherIceActor*> WeatherIceActors;                                 // 0x0110 (size: 0x10)

}; // Size: 0x1F0

class UWeatherStationAnimInstance : public UAnimInstance
{
    float Yaw;                                                                        // 0x0268 (size: 0x4)
    float WindSpeedNormalized;                                                        // 0x026C (size: 0x4)
    float ArrowRotationSpeed;                                                         // 0x0270 (size: 0x4)
    class UStaticMeshComponent* ArrowStaticMeshComponent;                             // 0x0278 (size: 0x8)

}; // Size: 0x280

class UWeatherStationBaseAnimInstance : public UAnimInstance
{
    bool bIsActive;                                                                   // 0x0268 (size: 0x1)

}; // Size: 0x270

class UWeatherStationMountComponent : public UMountComponent
{

    void ServerStartPrediction();
}; // Size: 0x868

class UWeatherStationUserComponent : public UUserComponent
{
    EWeatherType UpcomingWeather;                                                     // 0x00C8 (size: 0x1)
    uint8 UpcomingPeakIntensity;                                                      // 0x00C9 (size: 0x1)
    int8 UpcomingStartTimeHours;                                                      // 0x00CA (size: 0x1)

    void ServerDisconnectFromNetwork(const bool bResetConnectionTo);
    void ServerConnectToNetwork(const FWeatherStationID GlobalID);
}; // Size: 0xD0

class UWindowMeshSet : public UObject
{
    FWindowMeshes T1;                                                                 // 0x0028 (size: 0x30)
    FWindowMeshes T2;                                                                 // 0x0058 (size: 0x30)
    FWindowMeshes T3;                                                                 // 0x0088 (size: 0x30)

}; // Size: 0xB8

class UWindsockAnimInstance : public UAnimInstance
{
    float WindSpeedNormalized;                                                        // 0x0268 (size: 0x4)

}; // Size: 0x270

class UWorkItemComponent : public UItemComponent
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x08E8 (size: 0x8)
    TSubclassOf<class AImpactEffect> ImpactEffect;                                    // 0x08F0 (size: 0x8)
    class USoundCue* WorkSoundCue;                                                    // 0x08F8 (size: 0x8)
    float QueryOffset;                                                                // 0x0900 (size: 0x4)
    int32 MaxRange;                                                                   // 0x0904 (size: 0x4)
    bool bIsEquipped;                                                                 // 0x0908 (size: 0x1)

    void ServerPerformWork(class AActor* InTargetActor, class USceneComponent* InTargetActorComponent, FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
}; // Size: 0x910

class UWorldResourceSpawner : public UObject
{
    TSubclassOf<class AWorldResource> ResourceClass;                                  // 0x0028 (size: 0x8)

}; // Size: 0x48

class UWoundCausingDamageType : public USimDamageType
{
}; // Size: 0x140

class UWoundedCarriedItemComponent : public ULargeItemComponent
{
    class ASimCharacter* CarriedCharacter;                                            // 0x08F8 (size: 0x8)
    FVector CapsuleOffset;                                                            // 0x0900 (size: 0xC)

}; // Size: 0x910

class UZombieWeaponComponent : public UItemComponent
{
    TArray<FZombieWeaponInfo> WeaponInfo;                                             // 0x08E8 (size: 0x10)
    float MeleeDamageDelay;                                                           // 0x08F8 (size: 0x4)
    float MeleeDamageDelaySecond;                                                     // 0x08FC (size: 0x4)
    TSubclassOf<class AWarProjectile> ProjectileClass;                                // 0x0900 (size: 0x8)
    float ProjectileDelay;                                                            // 0x0908 (size: 0x4)
    float ProjectileSpeed;                                                            // 0x090C (size: 0x4)
    class USoundCue* ProjectileSoundCue;                                              // 0x0910 (size: 0x8)
    class UParticleSystem* ProjectilePS;                                              // 0x0918 (size: 0x8)
    TSubclassOf<class AWarExplosionEffect> SmashExplosionEffect;                      // 0x0920 (size: 0x8)
    float SmashDamageDelay;                                                           // 0x0928 (size: 0x4)
    float SmashBaseDamage;                                                            // 0x092C (size: 0x4)
    float SmashRadius;                                                                // 0x0930 (size: 0x4)
    bool bIsEquipped;                                                                 // 0x0934 (size: 0x1)

    void ServerInvokeRangedAttack(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange);
    void ServerInvokePrimaryAttack(FActivityStateChange ActivityStateChange);
    void ServerInvokeFrontalAOEAttack(FActivityStateChange ActivityStateChange);
    void OnRep_IsEquipped();
    void MulticastRangedAttackTriggered();
}; // Size: 0x958

#endif
