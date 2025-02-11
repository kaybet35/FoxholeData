#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=GenericTeamAgentInterface -FallbackName=GenericTeamAgentInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BasedMovementInfo -FallbackName=BasedMovementInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionResponse -FallbackName=ECollisionResponse
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
#include "ActivityStateDebugTrace.h"
#include "ActorLogPage.h"
#include "AlertTownBuiltRPCInfo.h"
#include "AlertTownDestroyedRPCInfo.h"
#include "AlertTownUnderAttackRPCInfo.h"
#include "BuildResponse.h"
#include "CharacterCustomizationInfo.h"
#include "ClientShardConfig.h"
#include "CommsRating.h"
#include "ConnectorConfiguration.h"
#include "ConquestOverNotificationInfo.h"
#include "EAssignCoalitionResponse.h"
#include "EChatChannel.h"
#include "EChatLanguage.h"
#include "EChatMessageType.h"
#include "EDamageSource.h"
#include "EDeployResponse.h"
#include "EFactionId.h"
#include "EFactoryOrderAccess.h"
#include "EFactoryQueueType.h"
#include "EFullRepairResponse.h"
#include "EHUDNotification.h"
#include "EHospitalResponse.h"
#include "EJoinWarResponse.h"
#include "ELongRangeArtilleryType.h"
#include "EMainMenuPromptType.h"
#include "EOpenVehicleInventoryResponse.h"
#include "EPlacementStatus.h"
#include "ERefinementOrderResponse.h"
#include "ERefineryClaimType.h"
#include "ERefineryOrderAccessLevel.h"
#include "ERestrictedState.h"
#include "ERocketConsoleActionResult.h"
#include "ERocketLaunchResponse.h"
#include "ESimScreen.h"
#include "EStockpileCategoryType.h"
#include "EStockpileEntryType.h"
#include "ETestEnum.h"
#include "ETransactionResponse.h"
#include "EUnstuckMessage.h"
#include "EUserVoteKickCategory.h"
#include "EVehicleStockpileResponse.h"
#include "EVoiceChannelType.h"
#include "EWorldConquestMapId.h"
#include "GameplayParams.h"
#include "ListeningAreaDebugData.h"
#include "MapItemDetails.h"
#include "MapPostDetails.h"
#include "PlayerActivity.h"
#include "PlayerSpawnPointsInfo.h"
#include "RPCRocketPreLaunchAlert.h"
#include "RPCRocketPreLaunchUpdateAlert.h"
#include "RegionConnectionInfo.h"
#include "RegionLogPage.h"
#include "RegionMapData.h"
#include "RegionMinimalData.h"
#include "RepSnapInfo.h"
#include "RepTrainMovement.h"
#include "RocketLaunchCodeRequest.h"
#include "SensorPingResponse.h"
#include "SignedPayload.h"
#include "SpawnPoint.h"
#include "SpecializedFactoryOrderItem.h"
#include "StockpileAccessEvent.h"
#include "StockpileBroadcastAlertInfo.h"
#include "StockpileEffects.h"
#include "StockpileEntry.h"
#include "StockpileItemFilter.h"
#include "StructureStats.h"
#include "TechTreeComponentNetworkStatus.h"
#include "VoiceLoginInfo.h"
#include "WarAchievementCompletedInfo.h"
#include "WarGridCoordinate.h"
#include "WarMessageTest.h"
#include "WarPlayerController.h"
#include "WarReplicatedTweakables.h"
#include "SimPlayerController.generated.h"

class AActor;
class AAssemblyStation;
class ABuildGhost;
class ABuildableStructure;
class ACalloutMarkerGhost;
class AConstructionSite;
class AContainer;
class ALargeShip;
class APlayerState;
class ARailVehicle;
class ARailVehicleHospital;
class ARefinery;
class ARocketFacility;
class AShippableCrate;
class ASignPost;
class ASimCharacter;
class ASimPlayerState;
class ASimVehicle;
class AStructure;
class ATeamStructure;
class AVehicleFactory;
class UActorComponent;
class UGangwayRamp;
class UGenericStockpileComponent;
class UHospitalComponent;
class UItemHolderComponent;
class USpecializedFactoryComponent;
class UUseComponent;
class UUserComponent;

UCLASS(Blueprintable)
class WAR_API ASimPlayerController : public AWarPlayerController, public IGenericTeamAgentInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStructure> UpgradeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AStructure> UpgradeTargetDecayPreventer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIntelRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapIntelItemsPerChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapIntelProviderRangeSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FCommsRating CommsRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPlayerSpawnPointsInfo SpawnPointInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildGhost* BuildGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildGhost* UpgradeBuildGhost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathCamTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlaceInDeploymentQueue, meta=(AllowPrivateAccess=true))
    int32 PlaceInDeploymentQueue;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStockpileEffects StockpileEffects;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_UserComponents, meta=(AllowPrivateAccess=true))
    TArray<UUserComponent*> UserComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructureStats> StatsForNearybyStructures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARailVehicle> RailHUDTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RailHUDTargetDismountTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACalloutMarkerGhost* CalloutMarkerGhost;
    
public:
    ASimPlayerController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Exec)
    void WarMessageTest(const int32 TestInt, const float TestFloat, const bool TestBool, const FString& TestStr, const ETestEnum TestEnum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TunnelNetworkDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleStabilityDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShowMouseCursor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestTravel(float SearchBorderOffset, float SearchMaxRadius, bool bWaterTravel, float ShipDepth, float SearchMinimumWaterDepth, float WorldX, float WorldY, float WorldZ, float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StructureIslandDebugDraw();
    
    UFUNCTION(BlueprintCallable)
    void StopRequestingGarrisonInfo();
    
    UFUNCTION(BlueprintCallable)
    void StartRequestingGarrisonInfo();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAllVehicles(int32 PerVehicleCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAllStructures(int32 PerStructureCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerWhisper(const FString& TargetOnlineID, const FString& Message);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerWarMessageTest(const FWarMessageTest& Message);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVoteOnSignPost(const bool bIsUpVote, ASignPost* TargetSignPost);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerVoteOnChatMessage(const FString& TargetOnlineID, const bool bIsUpVote, const FString& MessageContent, EChatMessageType MessageType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerVoteKick(const FString& PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseUseComponent(UUseComponent* UseComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUseShipRamp(UGangwayRamp* Ramp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeVehicle(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeTargetStructure(AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpgradeStaticTargetStructure(AStructure* TargetStructure, FName UpgradeCodename);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUpdateInfo(const uint32 Info);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnpackShippableCrate(UActorComponent* SourceComponent, UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, const FString& TargetStockpileName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUnCrateItems(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTravelToHomeRegion();
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerTransferItem(UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleVehicleLock(ASimVehicle* SimVehicle);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTimeRequest(float RequestTime);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleportToLocation(const FVector& WorldPosition);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncWorldPlayerId();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncTravelMaps();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncTimeToNextWar();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncStaticRegionMapData();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncDynamicRegionMapData();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSwapEquipment(const int8 BackpackItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitVehicleToStockpile(ASimVehicle* SimVehicle, UActorComponent* TargetStockpile);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitTech(AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitStructureToStockpile(ABuildableStructure* Structure, UActorComponent* TargetStockpile, const FString& TargetStockpileName);
    
    UFUNCTION(Reliable, Server)
    void ServerSubmitStarterKit(AActor* Actor, const uint16 Bitmask);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitResourceConverterOrder(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitRefinementOrderWithLimit(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitRefinementOrder(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSubmitPatients(UHospitalComponent* HospitalComponent);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitLargeItem(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsToStockpileFromItemHolderWithItemFilter(UItemHolderComponent* SourceItemHolder, UActorComponent* TargetStockpile, const FStockpileItemFilter ItemFilter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsToStockpileFromItemHolder(UItemHolderComponent* SourceItemHolder, UActorComponent* TargetStockpile);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered(UActorComponent* TargetStockpile, const FStockpileEntry ItemFilter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromPlayerStockpileToTargetStockpile(UActorComponent* TargetStockpile);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitFactoryOrder(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitCrateToStockpile(AShippableCrate* ShippableCrate, UActorComponent* TargetStockpile, const bool bSubmitToPublic);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitContainerToStockpile(AContainer* Container, UActorComponent* TargetStockpile);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopRepairVehicle(AAssemblyStation* AssemblyStation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopRefuelingActorInUse(AActor* RefuelSourceActor, AActor* RefuelTargetActor);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSplitItemStack(UItemHolderComponent* TargetItemHolder, const uint8 SplitPercentageQuantized, int8 FromIndex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpectateSpawnPoint();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSpectate(const int8 Delta, const bool bAllowSpectatorCameraFallback);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnAllVehicles(int32 PerVehicleCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnAllStructures(int32 PerStructureCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSortWreckage(UItemHolderComponent* SourceItemHolder);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSortItemHolder(UItemHolderComponent* TargetItemHolder);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSimulateDeath(const bool bWipeItems, int32 AfterSeconds);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSignalAttemptServerTravel();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetVehicleLock(ASimVehicle* SimVehicle, const bool bIsLocked);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetStructureColor(AContainer* Container, const uint8 Color);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetStockpileTargetOverride(UGenericStockpileComponent* StockpileTargetOverride);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSpawnPoint(AActor* AssignableSPActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetShipAnchorState(ALargeShip* LargeShip, const bool bShouldBeRaised);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetRefineryOrderAccessLevel(ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPowerGridConnectionState(AActor* LHSActor, AActor* RHSActor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetInventorySourceOverride(UActorComponent* InventorySourceOverride);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetHospitalDeployState(ARailVehicleHospital* RailVehicleHospital, const bool bWantsItDeployed);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCharacterCustomizationInfo(const FCharacterCustomizationInfo CustomizationInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCameraFlags(int32 Flags, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAssemblyAreaState(AAssemblyStation* AssemblyStation, const bool bWantsItOpen);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAdminCommandTarget(AActor* TargetActor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRetrievePatient(UHospitalComponent* HospitalComponent);
    
    UFUNCTION(Reliable, Server)
    void ServerRetrieveFromStockpile(UActorComponent* RetrieveFromStockpileComponent, UGenericStockpileComponent* RetrieveToStockpileComponent, const FString& StockpileName, const FName CodeName, const EStockpileEntryType EntryType, const uint16 RequestedAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnDefault();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnAtNearestStaticBase();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnAtNearestSafeHouse();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRespawnAtAssignedPoint(const uint8 Category);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetStockpileTargetOverride();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetPowerGridConnectionState(AActor* Actor);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerResetInventorySourceOverride();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestStructureInfo(AStructure* Structure, const bool bIsInitialRequest);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestStockpileAccessEvents(UGenericStockpileComponent* GenericStockpileComponent, const EStockpileCategoryType CategoryType);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestReserveStockpileLog(const AStructure* Structure, const FString& StockpileName, const uint32 PageIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestRegionMinimalData(const EWorldConquestMapId MapId);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestRegionLog(const uint32 LogPageIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestOfflineActivityLog(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestNetworkTechStatus(const AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestMapPostDetails(const int32 MapPostID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestMapItemDetails(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestMapIntelligence();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestCachedDriverInfo(ASimVehicle* SimVehicle);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRequestActorLog(const AStructure* Structure, const uint32 PageIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestActivityLog(ASimPlayerState* TargetPlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRepairVehicle(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRefuelActorInUse(const FName FuelCodeName, AActor* RefuelSourceActor, AActor* RefuelTargetActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReconnectToVoiceChat();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReceieveInfo();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerQueueForDeployment(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerProcessCommand(int32 ID, const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlaceTrench(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPlaceCalloutMarker(const int8 CalloutInfoIndex, const FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpFactoryOrder(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const FString& TargetOrderOnlineID);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPerformCallOut(const int8 CalloutInfoIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPackageShippable(AActor* ShippableActor, const bool bWantsItPackaged, const bool bIsCargoOnly);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOpenVehicleInventory(ASimVehicle* SimVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnUserResetAFKTimer();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnPlayerLogOut();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnNewSpawnPointAccessed(AActor* AccessedBaseActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJoinWar(const EFactionId TeamId);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetTravelInfo(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGenerateVivoxChannelJoinToken(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& AccountSIPAddress, const FString& ChannelSIPAddress);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFullRepair(AVehicleFactory* VehicleFactory);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFlagDisruptivePlacement(ATeamStructure* TeamStructure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnterRocketLaunchCode(const FRocketLaunchCodeRequest& Request);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEditSignPost(const FText& Text, ASignPost* TargetSignPost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropLargeItem();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDropItem(UItemHolderComponent* ItemHolder, const int8 ItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDrainPipes(AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachUserComponents();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDetachLargeItem(ASimVehicle* DetachTarget, const uint8 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroySignPost(ASignPost* TargetSignPost);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeployLargeItem(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDemolishVehicle(ASimVehicle* TargetVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDemolishStructure(AStructure* Structure);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCrateItems(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerConvertPatient(UHospitalComponent* HospitalComponent);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerConfirmAdminDestroy(const FName ObjectName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCommend(const FString& PlayerOnlineId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCommandStringID(const FString& ID);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCommandID(int8 ID);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClearSquad(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimStructure(AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed, const bool bIsMultiClaim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimResourceConverterOrder(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClaimRefinementOrder(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChat(const FString& Message, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeVehicleFuelType(ASimVehicle* SimVehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerChangeFactoryOrderAccess(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelRocketLaunch(ARocketFacility* RocketFacility);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelRetrieval();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelRefinementOrder(ARefinery* TargetRefinery, const int32 RefinableItemIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelPackaging();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelFactoryOrder(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildVehicleFromStructure(AActor* BuildLocationActor, const FName CodeName, const bool bIsPrototype, const FName BuildLocationTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildVehicle(const FName CodeName, const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildStructureFromStructure(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildStructure(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBuildRailVehicle(const FName CodeName, const FRepSnapInfo SnapInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttachUserComponents(AActor* AssociatedActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttachLargeItem(AActor* AttachTarget, const uint8 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAssignSquad(AActor* Actor, const int32 NewSquadID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAssembleStructureOrVehicle(AAssemblyStation* AssemblyStation, const FName CodeName, const int32 SelectedSquadID);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UserComponents();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlaceInDeploymentQueue();
    
    UFUNCTION(BlueprintCallable)
    void OnClientTravelWaitComplete(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void MaybeRequestGarrisonInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisconnectWarService();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeleteMapPost(const FString& OnlineID);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DebugRecreateLandscapeHoles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugDrawCurrentLandscape();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConnectWarService();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWorldChatMessage(const FString& Message, const FString& SenderName, const FString& SenderRegimentTag, const FString& SenderOnlineId, const uint8 SenderTeamID, const EChatChannel Channel, const EChatLanguage BroadcastLanguage, const EWorldConquestMapId MapId, const bool bReportingWhisperToSelf, const bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWarEndingAlert(int32 SecondsUntilWarEnd, int32 Duration);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientVoiceLogin(const FVoiceLoginInfo& VoiceLoginInfo);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateUTCOffset(const int64 ServerDateTimeTicks);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateShardConfig(FClientShardConfig ClientShardConfig);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateRegionMinimalData(const FRegionMinimalData& RegionMinimalData);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateRegionLog(const FRegionLogPage& RegionLogPage, const uint32 MaxAvailablePages);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateCachedDriverInfo(ASimVehicle* SimVehicle, const FString& OnlineID, const FString& PlayerName);
    
    UFUNCTION(Client, Reliable)
    void ClientUpdateActorLog(const FActorLogPage& LogPage, const uint32 PageCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateActivityLog(const FPlayerActivity& Activity);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUnstuckMessage(const EUnstuckMessage UnstuckMessage, const int32 Value);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelToWorldConquestMap(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelToHomeRegion(FRegionConnectionInfo RegionConnectionInfo);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace, ASimCharacter* SimCharacter);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTimeResponse(float RequestTime, float ServerTime);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTeleportToMapMarker(const FString& TargetMapMarkerName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTeamKillMessage(const FString& KillerName, const FString& DeadPlayerName, const EDamageSource DamageSource);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncWorldPlayerId(const FString& ID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncTravelMaps(const TArray<FRegionConnectionInfo>& TravelMaps);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncTimeToNextWar(const int32 Seconds);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientSyncStructureStatus(AStructure* TargetStructure, const EFactionId FactionId, const int32 SquadId, const int64 ClaimTime, const AStructure* DecayPreventer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStructureBuilderInfo(AStructure* TargetStructure, const FString& BuilderOnlineID, const FString& BuilderName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStatsForNearbyStructures(const TArray<FStructureStats>& StatList);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStaticRegionMapData(const FRegionMapData& StaticMapData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncReplicatedTweakables(const FWarReplicatedTweakables& NewWarRepTweakables);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncMapIntelligence(const bool bOnlySyncIfMapIsOpen);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncGameplayParams(const FGameplayParams& GameplayParams);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncDynamicRegionMapData(const FRegionMapData& RegionMapData);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopSpectateTargetTick();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStartRespawnTimer(const float RespawnTime);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSimReset(const bool bInIsLeavingDueToServerTravel);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowWeatherStationResponse(const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowVehicleStockpileResponse(const EVehicleStockpileResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowVehicleLostMessage(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowUnrestrictedNotification(const ERestrictedState UnrestrictedState);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowTravelReservationAlert();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowTeamKillWarning();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowStockpileAlert(FStockpileBroadcastAlertInfo StockpileBroadcastAlertInfo);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowSquadResponse(AActor* Actor, const EAssignCoalitionResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowSquadClaimedNotification(const FName CodeName, const int32 SquadId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowShippableResponse(const uint8 ShippableStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowRocketFacilityResult(const ARocketFacility* RocketFacility, const ERocketConsoleActionResult ActionResult);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowRocketFacilityResponse(const ARocketFacility* RocketFacility, const ERocketLaunchResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowResistanceStart(const EFactionId ConquestWinner);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowRecentItem(const FName& ItemCodeName, const int32 StackSize);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowPlacementStatus(const EPlacementStatus PlacementStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowMapNames(const bool bShow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowLongRangeArtilleryResponse(const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowIntelCenterResponse(const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDNotification(const EHUDNotification HUDNotification);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDCodeNameNotification(const EHUDNotification HUDNotification, const FName CodeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDClaimNotification(const EHUDNotification HUDNotification, const AActor* Actor, const int32 SquadId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHUDActorNotification(const EHUDNotification HUDNotification, const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowHospitalResponse(const EHospitalResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowEventVictory(const EFactionId FactionWinner);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowDeployResponse(const EDeployResponse DeployResponse);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientShowDeploymentFailureNotification(const uint8 Reason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowConquestVictory(const FConquestOverNotificationInfo ConquestOverInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowChatOnCooldown();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowBuildResponse(const FBuildResponse& BuildResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowBorderBaseResponse(const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowAchievementCompleted(const FWarAchievementCompletedInfo CompletionInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetVehicleReplicatedBasedMovement(ASimVehicle* Vehicle, const FBasedMovementInfo& MovementInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetTeleport(bool bIsMapTeleport, bool bIsAwaitingClick);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetSpawnPointResponse(const AActor* AssignableSP, const uint8 Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetShowVisibilityDebug(const bool bShow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetShowStructureStats(const bool bShow);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetShowHP(const bool Show);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetRepTrainMovement(ARailVehicle* RailVehicle, const FRepTrainMovement& RepTrainMovement);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetItemAsStackableCheat(const FName& ItemCodeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetFastBuild(const bool bIsFastBuild);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCinematicCamera(const float NewCameraRotateSpeed, const float NewCameraZoom, const bool bInAreCharacterStencilsEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetCameraFlags(int32 Flags);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendAutoRestartMessage(const float SecsToRestart);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRestrictedMessage(const FString& PlayerName, const ERestrictedState RestrictedState, const int32 DurationMinutes);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRespawnAtAssignedPoint(const uint8 Category);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRespawnAlert();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResistanceStartingAlert(int32 SecondsUntilResistanceEnd, int32 Duration);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResetStructureClaimStatus(AStructure* TargetStructure);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientResetRetrieveState(const ETransactionResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRefinementOrderResponse(const ERefinementOrderResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReconnectToVoiceChat();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveTravelInfo(const FRegionConnectionInfo TravelInfo, const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool Success, bool bIsRecovery);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveTransactionResponse(const ETransactionResponse Response);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveTechResponse(const uint8 TechResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveStockpileAccessEvents(UGenericStockpileComponent* GenericStockpileComponent, const EStockpileCategoryType CategoryType, const TArray<FStockpileAccessEvent>& Events);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveRocketUpdateAlert(const FRPCRocketPreLaunchUpdateAlert& LaunchUpdateAlert);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveRocketAlert(const FRPCRocketPreLaunchAlert& LaunchAlert);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveRegionMinimalData(const EWorldConquestMapId MapId, const FRegionMinimalData& RegionMinimalData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveOnlineIDInfo(const FString& OnlineID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveNetworkTechStatus(const AStructure* Structure, const FTechTreeComponentNetworkStatus NetworkStatus);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveMapPostDetails(const int32 MapPostID, const FMapPostDetails MapPostDetails);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber, const FMapItemDetails& MapItemDetails);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveListeningAreaDetails(const TArray<FListeningAreaDebugData>& InListeningAreaDetails);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveInfo();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveEmptyMapPostDetails(const int32 MapPostID);
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveEmptyMapItemDetails(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientQueueMainMenuPrompt(const EMainMenuPromptType PromptType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ClientProcessCommand(int32 ID, const TArray<uint8>& Data);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOpenVehicleResponse(ASimVehicle* SimVehicle, const EOpenVehicleInventoryResponse OpenVehicleInventoryResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnVehicleMountError();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnVehicleExitFailure();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnVacateSuccess();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnUseComponentUsed(UUseComponent* UseComponent);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnShippableResponse(const uint8 ShippableStatus);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnServerTravelAllowed();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnRocketGroundZeroEvent(const FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnProfileDownloadComplete(const bool bIsRegionTravelling);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnOutgoingSensorPing();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOccupySuccess(bool OccupantCrouches);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOccupyError();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnLongRangeArtilleryFireShellEvent(AActor* LongRangeArtillery, const FVector_NetQuantize Location, ELongRangeArtilleryType LongRangeArtilleryType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnIntelCenterFireListeningAreaEvent(AActor* IntelCenter, const FVector_NetQuantize Location);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnIncomingSensorPing(FSensorPingResponse SensorPingResponse);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnChannelJoinTokenReceived(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& ChannelJoinToken);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyCommend(const FString& PlayerName, const FString& OnlineID);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientModDestroySignPost();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientJoinWarResponse(const EJoinWarResponse ResponseType, const FGameplayParams& GameplayParams, bool bHadTravelReservation, uint32 StructureLayers, int32 ShardId, const FSignedPayload& SignedPlayerServerData);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientGotoScreen(const ESimScreen SimScreen);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientGetSquadIdFromSquadName(const FString& SquadName);
    
private:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientFullRepairResponse(const EFullRepairResponse Response);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFriendlyFireMessage(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFactionLockAlert(const EFactionId TeamId, const FTimespan& FactionLockTimespan);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExitRecoveryMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterRecoveryMode(float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterBuildGhostMode(const FName& StructureCodeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDebugVehicleHitbox(ASimVehicle* SimVehicle, FVector Position, FVector Extents, FQuat Rotation, TEnumAsByte<ECollisionResponse> CollisionResponseToPawn);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDisruptivePlacementMessage(const FString& PlayerName, const FName CodeName, const FWarGridCoordinate WarGridCoordinate);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreateDebugMapPost(const FText& Text);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCopyToClipboard(const FString& String);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConfirmAdminDestroy(const FName ObjectName);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearSquadList();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClearAdminAlertMessages();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientClaimStructureMulti(const int32 Amount, const bool bIsRefresh);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientChatMessageWithTag(const EChatChannel Channel, const APlayerState* SenderPlayerState, const FString& SenderRegimentTag, const FString& MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientChatMessage(const EChatChannel Channel, const APlayerState* SenderPlayerState, const FString& MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled);
    
    UFUNCTION(Client, Reliable)
    void ClientBeaconLoadTest(FRegionConnectionInfo RegionConnectionInfo, const FString& MapCodename, uint32 NumBeacons, uint32 Interval, uint32 Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllowHammerToBuildAll(const bool bAllowHammerToBuildAll);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertTownUnderAttack(const FAlertTownUnderAttackRPCInfo AlertInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertTownDestroyed(const FAlertTownDestroyedRPCInfo AlertInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertTownBuilt(const FAlertTownBuiltRPCInfo AlertInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertTeamKill();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertMessage(const FString& MsgString, const float DurationSecs);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAlertAFKTimeoutPending();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminMessageUnformatted(const FString& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminMessageList(const TArray<FString>& MessageList);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminMessage(const FString& S);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminDownloadClientConfig(const FName ClientConfigTypeName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAdminAlertMessage(const FString& MsgString, const float DurationSecs);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowTargetingRangeResults(float Damage, float Range);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowHUDNotificationDuration(const FText& NotificationText, float Duration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowHUDNotification(const FText& NotificationText);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ShowCommendNotification(const FText& NotificationText);
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureDebugScreenshot();
    

    // Fix for true pure virtual functions not being implemented
};

