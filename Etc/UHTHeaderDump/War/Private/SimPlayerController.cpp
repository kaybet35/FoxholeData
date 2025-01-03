#include "SimPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "SimPlayerCameraManager.h"

ASimPlayerController::ASimPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ASimPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->DefaultMouseCursor = EMouseCursor::Crosshairs;
    this->MapIntelRefreshRate = 1.00f;
    this->MapIntelItemsPerChunk = 100;
    this->MapIntelProviderRangeSquared = 4000000.00f;
    this->BuildGhost = NULL;
    this->UpgradeBuildGhost = NULL;
    this->DeathCamTime = 3.00f;
    this->ChatRange = 2500.00f;
    this->PlaceInDeploymentQueue = -1;
    this->RailHUDTargetDismountTime = 0.00f;
    this->CalloutMarkerGhost = NULL;
}

void ASimPlayerController::WarMessageTest(const int32 TestInt, const float TestFloat, const bool TestBool, const FString& TestStr, const ETestEnum TestEnum) {
}

void ASimPlayerController::TunnelNetworkDebugDraw() {
}

void ASimPlayerController::ToggleStabilityDebug() {
}

void ASimPlayerController::ToggleShowMouseCursor() {
}

void ASimPlayerController::TestTravel(float SearchBorderOffset, float SearchMaxRadius, bool bWaterTravel, float ShipDepth, float SearchMinimumWaterDepth, float WorldX, float WorldY, float WorldZ, float Yaw) {
}

void ASimPlayerController::StructureIslandDebugDraw() {
}

void ASimPlayerController::StopRequestingGarrisonInfo() {
}

void ASimPlayerController::StartRequestingGarrisonInfo() {
}

void ASimPlayerController::SpawnAllVehicles(int32 PerVehicleCount) {
}

void ASimPlayerController::SpawnAllStructures(int32 PerStructureCount) {
}

void ASimPlayerController::SimulateDeath(const bool bWipeItems, int32 AfterSeconds) {
}

void ASimPlayerController::ServerWhisper_Implementation(const FString& TargetOnlineID, const FString& Message) {
}
bool ASimPlayerController::ServerWhisper_Validate(const FString& TargetOnlineID, const FString& Message) {
    return true;
}

void ASimPlayerController::ServerWarMessageTest_Implementation(const FWarMessageTest& Message) {
}
bool ASimPlayerController::ServerWarMessageTest_Validate(const FWarMessageTest& Message) {
    return true;
}

void ASimPlayerController::ServerVoteOnSignPost_Implementation(const bool bIsUpVote, ASignPost* TargetSignPost) {
}
bool ASimPlayerController::ServerVoteOnSignPost_Validate(const bool bIsUpVote, ASignPost* TargetSignPost) {
    return true;
}

void ASimPlayerController::ServerVoteOnChatMessage_Implementation(const FString& TargetOnlineID, const bool bIsUpVote, const FString& MessageContent, EChatMessageType MessageType) {
}
bool ASimPlayerController::ServerVoteOnChatMessage_Validate(const FString& TargetOnlineID, const bool bIsUpVote, const FString& MessageContent, EChatMessageType MessageType) {
    return true;
}

void ASimPlayerController::ServerVoteKick_Implementation(const FString& PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory) {
}
bool ASimPlayerController::ServerVoteKick_Validate(const FString& PlayerOnlineId, const EUserVoteKickCategory VoteKickCategory) {
    return true;
}

void ASimPlayerController::ServerUseUseComponent_Implementation(UUseComponent* UseComponent) {
}
bool ASimPlayerController::ServerUseUseComponent_Validate(UUseComponent* UseComponent) {
    return true;
}

void ASimPlayerController::ServerUseShipRamp_Implementation(UGangwayRamp* Ramp) {
}
bool ASimPlayerController::ServerUseShipRamp_Validate(UGangwayRamp* Ramp) {
    return true;
}

void ASimPlayerController::ServerUpgradeVehicle_Implementation(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle) {
}
bool ASimPlayerController::ServerUpgradeVehicle_Validate(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle) {
    return true;
}

void ASimPlayerController::ServerUpgradeTargetStructure_Implementation(AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation) {
}
bool ASimPlayerController::ServerUpgradeTargetStructure_Validate(AStructure* TargetStructure, FName UpgradeCodename, const FRotator& UpgradeRotation) {
    return true;
}

void ASimPlayerController::ServerUpgradeStaticTargetStructure_Implementation(AStructure* TargetStructure, FName UpgradeCodename) {
}
bool ASimPlayerController::ServerUpgradeStaticTargetStructure_Validate(AStructure* TargetStructure, FName UpgradeCodename) {
    return true;
}

void ASimPlayerController::ServerUpdateInfo_Implementation(const uint32 Info) {
}
bool ASimPlayerController::ServerUpdateInfo_Validate(const uint32 Info) {
    return true;
}

void ASimPlayerController::ServerUnpackShippableCrate_Implementation(UActorComponent* SourceComponent, UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, const FString& TargetStockpileName) {
}
bool ASimPlayerController::ServerUnpackShippableCrate_Validate(UActorComponent* SourceComponent, UActorComponent* TargetComponent, const EStockpileEntryType StockpileType, const FName CodeName, const FString& TargetStockpileName) {
    return true;
}

void ASimPlayerController::ServerUnCrateItems_Implementation(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
}
bool ASimPlayerController::ServerUnCrateItems_Validate(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
    return true;
}

void ASimPlayerController::ServerTravelToHomeRegion_Implementation() {
}
bool ASimPlayerController::ServerTravelToHomeRegion_Validate() {
    return true;
}

void ASimPlayerController::ServerTransferItem_Implementation(UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit) {
}
bool ASimPlayerController::ServerTransferItem_Validate(UItemHolderComponent* SourceItemHolder, const int8 SourceItemIndex, UItemHolderComponent* DestItemHolder, const bool bUseStackTransferLimit) {
    return true;
}

void ASimPlayerController::ServerToggleVehicleLock_Implementation(ASimVehicle* SimVehicle) {
}
bool ASimPlayerController::ServerToggleVehicleLock_Validate(ASimVehicle* SimVehicle) {
    return true;
}

void ASimPlayerController::ServerTimeRequest_Implementation(float RequestTime) {
}
bool ASimPlayerController::ServerTimeRequest_Validate(float RequestTime) {
    return true;
}

void ASimPlayerController::ServerTeleportToLocation_Implementation(const FVector& WorldPosition) {
}
bool ASimPlayerController::ServerTeleportToLocation_Validate(const FVector& WorldPosition) {
    return true;
}

void ASimPlayerController::ServerSyncWorldPlayerId_Implementation() {
}
bool ASimPlayerController::ServerSyncWorldPlayerId_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncTravelMaps_Implementation() {
}
bool ASimPlayerController::ServerSyncTravelMaps_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncTimeToNextWar_Implementation() {
}
bool ASimPlayerController::ServerSyncTimeToNextWar_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncStaticRegionMapData_Implementation() {
}
bool ASimPlayerController::ServerSyncStaticRegionMapData_Validate() {
    return true;
}

void ASimPlayerController::ServerSyncDynamicRegionMapData_Implementation() {
}
bool ASimPlayerController::ServerSyncDynamicRegionMapData_Validate() {
    return true;
}

void ASimPlayerController::ServerSwapEquipment_Implementation(const int8 BackpackItemIndex) {
}
bool ASimPlayerController::ServerSwapEquipment_Validate(const int8 BackpackItemIndex) {
    return true;
}

void ASimPlayerController::ServerSubmitVehicleToStockpile_Implementation(ASimVehicle* SimVehicle, UActorComponent* TargetStockpile) {
}
bool ASimPlayerController::ServerSubmitVehicleToStockpile_Validate(ASimVehicle* SimVehicle, UActorComponent* TargetStockpile) {
    return true;
}

void ASimPlayerController::ServerSubmitTech_Implementation(AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex) {
}
bool ASimPlayerController::ServerSubmitTech_Validate(AStructure* TechStructure, const uint8 CategoryIndex, const uint8 LevelIndex, const uint8 ItemIndex) {
    return true;
}

void ASimPlayerController::ServerSubmitStructureToStockpile_Implementation(ABuildableStructure* Structure, UActorComponent* TargetStockpile, const FString& TargetStockpileName) {
}
bool ASimPlayerController::ServerSubmitStructureToStockpile_Validate(ABuildableStructure* Structure, UActorComponent* TargetStockpile, const FString& TargetStockpileName) {
    return true;
}

void ASimPlayerController::ServerSubmitStarterKit_Implementation(AActor* Actor) {
}
bool ASimPlayerController::ServerSubmitStarterKit_Validate(AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerSubmitResourceConverterOrder_Implementation(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
}
bool ASimPlayerController::ServerSubmitResourceConverterOrder_Validate(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
    return true;
}

void ASimPlayerController::ServerSubmitRefinementOrderWithLimit_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit) {
}
bool ASimPlayerController::ServerSubmitRefinementOrderWithLimit_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const int32 UserQuantityLimit) {
    return true;
}

void ASimPlayerController::ServerSubmitRefinementOrder_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll) {
}
bool ASimPlayerController::ServerSubmitRefinementOrder_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const bool bTransferAll) {
    return true;
}

void ASimPlayerController::ServerSubmitPatients_Implementation(UHospitalComponent* HospitalComponent) {
}

void ASimPlayerController::ServerSubmitLargeItem_Implementation(AActor* Actor) {
}
bool ASimPlayerController::ServerSubmitLargeItem_Validate(AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolderWithItemFilter_Implementation(UItemHolderComponent* SourceItemHolder, UActorComponent* TargetStockpile, const FStockpileItemFilter ItemFilter) {
}
bool ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolderWithItemFilter_Validate(UItemHolderComponent* SourceItemHolder, UActorComponent* TargetStockpile, const FStockpileItemFilter ItemFilter) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolder_Implementation(UItemHolderComponent* SourceItemHolder, UActorComponent* TargetStockpile) {
}
bool ASimPlayerController::ServerSubmitItemsToStockpileFromItemHolder_Validate(UItemHolderComponent* SourceItemHolder, UActorComponent* TargetStockpile) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered_Implementation(UActorComponent* TargetStockpile, const FStockpileEntry ItemFilter) {
}
bool ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpileFiltered_Validate(UActorComponent* TargetStockpile, const FStockpileEntry ItemFilter) {
    return true;
}

void ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpile_Implementation(UActorComponent* TargetStockpile) {
}
bool ASimPlayerController::ServerSubmitItemsFromPlayerStockpileToTargetStockpile_Validate(UActorComponent* TargetStockpile) {
    return true;
}

void ASimPlayerController::ServerSubmitFactoryOrder_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems) {
}
bool ASimPlayerController::ServerSubmitFactoryOrder_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId, const TArray<FSpecializedFactoryOrderItem>& OrderItems) {
    return true;
}

void ASimPlayerController::ServerSubmitCrateToStockpile_Implementation(AShippableCrate* ShippableCrate, UActorComponent* TargetStockpile, const bool bSubmitToPublic) {
}
bool ASimPlayerController::ServerSubmitCrateToStockpile_Validate(AShippableCrate* ShippableCrate, UActorComponent* TargetStockpile, const bool bSubmitToPublic) {
    return true;
}

void ASimPlayerController::ServerSubmitContainerToStockpile_Implementation(AContainer* Container, UActorComponent* TargetStockpile) {
}
bool ASimPlayerController::ServerSubmitContainerToStockpile_Validate(AContainer* Container, UActorComponent* TargetStockpile) {
    return true;
}

void ASimPlayerController::ServerStopRepairVehicle_Implementation(AAssemblyStation* AssemblyStation) {
}

void ASimPlayerController::ServerStopRefuelingActorInUse_Implementation(AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
}
bool ASimPlayerController::ServerStopRefuelingActorInUse_Validate(AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
    return true;
}

void ASimPlayerController::ServerSplitItemStack_Implementation(UItemHolderComponent* TargetItemHolder, const uint8 SplitPercentageQuantized, int8 FromIndex) {
}
bool ASimPlayerController::ServerSplitItemStack_Validate(UItemHolderComponent* TargetItemHolder, const uint8 SplitPercentageQuantized, int8 FromIndex) {
    return true;
}

void ASimPlayerController::ServerSpectateSpawnPoint_Implementation() {
}
bool ASimPlayerController::ServerSpectateSpawnPoint_Validate() {
    return true;
}

void ASimPlayerController::ServerSpectate_Implementation(const int8 Delta, const bool bAllowSpectatorCameraFallback) {
}
bool ASimPlayerController::ServerSpectate_Validate(const int8 Delta, const bool bAllowSpectatorCameraFallback) {
    return true;
}

void ASimPlayerController::ServerSpawnAllVehicles_Implementation(int32 PerVehicleCount) {
}
bool ASimPlayerController::ServerSpawnAllVehicles_Validate(int32 PerVehicleCount) {
    return true;
}

void ASimPlayerController::ServerSpawnAllStructures_Implementation(int32 PerStructureCount) {
}
bool ASimPlayerController::ServerSpawnAllStructures_Validate(int32 PerStructureCount) {
    return true;
}

void ASimPlayerController::ServerSortWreckage_Implementation(UItemHolderComponent* SourceItemHolder) {
}
bool ASimPlayerController::ServerSortWreckage_Validate(UItemHolderComponent* SourceItemHolder) {
    return true;
}

void ASimPlayerController::ServerSortItemHolder_Implementation(UItemHolderComponent* TargetItemHolder) {
}
bool ASimPlayerController::ServerSortItemHolder_Validate(UItemHolderComponent* TargetItemHolder) {
    return true;
}

void ASimPlayerController::ServerSimulateDeath_Implementation(const bool bWipeItems, int32 AfterSeconds) {
}
bool ASimPlayerController::ServerSimulateDeath_Validate(const bool bWipeItems, int32 AfterSeconds) {
    return true;
}

void ASimPlayerController::ServerSignalAttemptServerTravel_Implementation() {
}
bool ASimPlayerController::ServerSignalAttemptServerTravel_Validate() {
    return true;
}

void ASimPlayerController::ServerSetVehicleLock_Implementation(ASimVehicle* SimVehicle, const bool bIsLocked) {
}
bool ASimPlayerController::ServerSetVehicleLock_Validate(ASimVehicle* SimVehicle, const bool bIsLocked) {
    return true;
}

void ASimPlayerController::ServerSetStructureColor_Implementation(AContainer* Container, const uint8 Color) {
}
bool ASimPlayerController::ServerSetStructureColor_Validate(AContainer* Container, const uint8 Color) {
    return true;
}

void ASimPlayerController::ServerSetStockpileTargetOverride_Implementation(UGenericStockpileComponent* StockpileTargetOverride) {
}
bool ASimPlayerController::ServerSetStockpileTargetOverride_Validate(UGenericStockpileComponent* StockpileTargetOverride) {
    return true;
}

void ASimPlayerController::ServerSetSpawnPoint_Implementation(AActor* AssignableSPActor) {
}
bool ASimPlayerController::ServerSetSpawnPoint_Validate(AActor* AssignableSPActor) {
    return true;
}

void ASimPlayerController::ServerSetShipAnchorState_Implementation(ALargeShip* LargeShip, const bool bShouldBeRaised) {
}
bool ASimPlayerController::ServerSetShipAnchorState_Validate(ALargeShip* LargeShip, const bool bShouldBeRaised) {
    return true;
}

void ASimPlayerController::ServerSetRefineryOrderAccessLevel_Implementation(ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel) {
}
bool ASimPlayerController::ServerSetRefineryOrderAccessLevel_Validate(ARefinery* TargetRefinery, const ERefineryOrderAccessLevel AccessLevel) {
    return true;
}

void ASimPlayerController::ServerSetPowerGridConnectionState_Implementation(AActor* LHSActor, AActor* RHSActor) {
}
bool ASimPlayerController::ServerSetPowerGridConnectionState_Validate(AActor* LHSActor, AActor* RHSActor) {
    return true;
}

void ASimPlayerController::ServerSetInventorySourceOverride_Implementation(UActorComponent* InventorySourceOverride) {
}
bool ASimPlayerController::ServerSetInventorySourceOverride_Validate(UActorComponent* InventorySourceOverride) {
    return true;
}

void ASimPlayerController::ServerSetHospitalDeployState_Implementation(ARailVehicleHospital* RailVehicleHospital, const bool bWantsItDeployed) {
}

void ASimPlayerController::ServerSetCharacterCustomizationInfo_Implementation(const FCharacterCustomizationInfo CustomizationInfo) {
}
bool ASimPlayerController::ServerSetCharacterCustomizationInfo_Validate(const FCharacterCustomizationInfo CustomizationInfo) {
    return true;
}

void ASimPlayerController::ServerSetCameraFlags_Implementation(int32 Flags, AActor* Actor) {
}
bool ASimPlayerController::ServerSetCameraFlags_Validate(int32 Flags, AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerSetAssemblyAreaState_Implementation(AAssemblyStation* AssemblyStation, const bool bWantsItOpen) {
}
bool ASimPlayerController::ServerSetAssemblyAreaState_Validate(AAssemblyStation* AssemblyStation, const bool bWantsItOpen) {
    return true;
}

void ASimPlayerController::ServerSetAdminCommandTarget_Implementation(AActor* TargetActor) {
}
bool ASimPlayerController::ServerSetAdminCommandTarget_Validate(AActor* TargetActor) {
    return true;
}

void ASimPlayerController::ServerRetrievePatient_Implementation(UHospitalComponent* HospitalComponent) {
}

void ASimPlayerController::ServerRetrieveFromStockpile_Implementation(UActorComponent* RetrieveFromStockpileComponent, UGenericStockpileComponent* RetrieveToStockpileComponent, const FString& StockpileName, const FName CodeName, const EStockpileEntryType EntryType, const uint16 RequestedAmount) {
}

void ASimPlayerController::ServerRespawnDefault_Implementation() {
}
bool ASimPlayerController::ServerRespawnDefault_Validate() {
    return true;
}

void ASimPlayerController::ServerRespawnAtNearestStaticBase_Implementation() {
}
bool ASimPlayerController::ServerRespawnAtNearestStaticBase_Validate() {
    return true;
}

void ASimPlayerController::ServerRespawnAtNearestSafeHouse_Implementation() {
}
bool ASimPlayerController::ServerRespawnAtNearestSafeHouse_Validate() {
    return true;
}

void ASimPlayerController::ServerRespawnAtAssignedPoint_Implementation(const uint8 Category) {
}
bool ASimPlayerController::ServerRespawnAtAssignedPoint_Validate(const uint8 Category) {
    return true;
}

void ASimPlayerController::ServerResetStockpileTargetOverride_Implementation() {
}
bool ASimPlayerController::ServerResetStockpileTargetOverride_Validate() {
    return true;
}

void ASimPlayerController::ServerResetPowerGridConnectionState_Implementation(AActor* Actor) {
}
bool ASimPlayerController::ServerResetPowerGridConnectionState_Validate(AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerResetInventorySourceOverride_Implementation() {
}
bool ASimPlayerController::ServerResetInventorySourceOverride_Validate() {
    return true;
}

void ASimPlayerController::ServerRequestStructureInfo_Implementation(AStructure* Structure, const bool bIsInitialRequest) {
}
bool ASimPlayerController::ServerRequestStructureInfo_Validate(AStructure* Structure, const bool bIsInitialRequest) {
    return true;
}

void ASimPlayerController::ServerRequestStockpileAccessEvents_Implementation(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index) {
}
bool ASimPlayerController::ServerRequestStockpileAccessEvents_Validate(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index) {
    return true;
}

void ASimPlayerController::ServerRequestReserveStockpileLog_Implementation(const AStructure* Structure, const FString& StockpileName, const uint32 PageIndex) {
}
bool ASimPlayerController::ServerRequestReserveStockpileLog_Validate(const AStructure* Structure, const FString& StockpileName, const uint32 PageIndex) {
    return true;
}

void ASimPlayerController::ServerRequestRegionMinimalData_Implementation(const EWorldConquestMapId MapId) {
}
bool ASimPlayerController::ServerRequestRegionMinimalData_Validate(const EWorldConquestMapId MapId) {
    return true;
}

void ASimPlayerController::ServerRequestRegionLog_Implementation(const uint32 LogPageIndex) {
}
bool ASimPlayerController::ServerRequestRegionLog_Validate(const uint32 LogPageIndex) {
    return true;
}

void ASimPlayerController::ServerRequestOfflineActivityLog_Implementation(const FString& OnlineID) {
}
bool ASimPlayerController::ServerRequestOfflineActivityLog_Validate(const FString& OnlineID) {
    return true;
}

void ASimPlayerController::ServerRequestNetworkTechStatus_Implementation(const AStructure* Structure) {
}
bool ASimPlayerController::ServerRequestNetworkTechStatus_Validate(const AStructure* Structure) {
    return true;
}

void ASimPlayerController::ServerRequestMapItemDetails_Implementation(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber) {
}
bool ASimPlayerController::ServerRequestMapItemDetails_Validate(const EWorldConquestMapId MapId, const int32 Index, const int32 SerialNumber) {
    return true;
}

void ASimPlayerController::ServerRequestMapIntelligence_Implementation() {
}
bool ASimPlayerController::ServerRequestMapIntelligence_Validate() {
    return true;
}

void ASimPlayerController::ServerRequestCachedDriverInfo_Implementation(ASimVehicle* SimVehicle) {
}
bool ASimPlayerController::ServerRequestCachedDriverInfo_Validate(ASimVehicle* SimVehicle) {
    return true;
}

void ASimPlayerController::ServerRequestActorLog_Implementation(const AStructure* Structure, const uint32 PageIndex) {
}
bool ASimPlayerController::ServerRequestActorLog_Validate(const AStructure* Structure, const uint32 PageIndex) {
    return true;
}

void ASimPlayerController::ServerRequestActivityLog_Implementation(ASimPlayerState* TargetPlayerState) {
}
bool ASimPlayerController::ServerRequestActivityLog_Validate(ASimPlayerState* TargetPlayerState) {
    return true;
}

void ASimPlayerController::ServerRepairVehicle_Implementation(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle) {
}
bool ASimPlayerController::ServerRepairVehicle_Validate(AAssemblyStation* AssemblyStation, ASimVehicle* TargetSimVehicle) {
    return true;
}

void ASimPlayerController::ServerRefuelActorInUse_Implementation(const FName FuelCodeName, AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
}
bool ASimPlayerController::ServerRefuelActorInUse_Validate(const FName FuelCodeName, AActor* RefuelSourceActor, AActor* RefuelTargetActor) {
    return true;
}

void ASimPlayerController::ServerReconnectToVoiceChat_Implementation() {
}
bool ASimPlayerController::ServerReconnectToVoiceChat_Validate() {
    return true;
}

void ASimPlayerController::ServerReceieveInfo_Implementation() {
}
bool ASimPlayerController::ServerReceieveInfo_Validate() {
    return true;
}

void ASimPlayerController::ServerQueueForDeployment_Implementation(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery) {
}
bool ASimPlayerController::ServerQueueForDeployment_Validate(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery) {
    return true;
}

void ASimPlayerController::ServerProcessCommand_Implementation(int32 ID, const TArray<uint8>& Data) {
}
bool ASimPlayerController::ServerProcessCommand_Validate(int32 ID, const TArray<uint8>& Data) {
    return true;
}

void ASimPlayerController::ServerPlaceTrench_Implementation(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
}
bool ASimPlayerController::ServerPlaceTrench_Validate(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
    return true;
}

void ASimPlayerController::ServerPlaceCalloutMarker_Implementation(const int8 CalloutInfoIndex, const FVector_NetQuantize Location) {
}
bool ASimPlayerController::ServerPlaceCalloutMarker_Validate(const int8 CalloutInfoIndex, const FVector_NetQuantize Location) {
    return true;
}

void ASimPlayerController::ServerPickUpFactoryOrder_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const FString& TargetOrderOnlineID) {
}
bool ASimPlayerController::ServerPickUpFactoryOrder_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const FString& TargetOrderOnlineID) {
    return true;
}

void ASimPlayerController::ServerPerformCallOut_Implementation(const int8 CalloutInfoIndex) {
}
bool ASimPlayerController::ServerPerformCallOut_Validate(const int8 CalloutInfoIndex) {
    return true;
}

void ASimPlayerController::ServerPackageShippable_Implementation(AActor* ShippableActor, const bool bWantsItPackaged, const bool bIsCargoOnly) {
}
bool ASimPlayerController::ServerPackageShippable_Validate(AActor* ShippableActor, const bool bWantsItPackaged, const bool bIsCargoOnly) {
    return true;
}

void ASimPlayerController::ServerOpenVehicleInventory_Implementation(ASimVehicle* SimVehicle) {
}
bool ASimPlayerController::ServerOpenVehicleInventory_Validate(ASimVehicle* SimVehicle) {
    return true;
}

void ASimPlayerController::ServerOnUserResetAFKTimer_Implementation() {
}
bool ASimPlayerController::ServerOnUserResetAFKTimer_Validate() {
    return true;
}

void ASimPlayerController::ServerOnPlayerLogOut_Implementation() {
}
bool ASimPlayerController::ServerOnPlayerLogOut_Validate() {
    return true;
}

void ASimPlayerController::ServerOnNewSpawnPointAccessed_Implementation(AActor* AccessedBaseActor) {
}
bool ASimPlayerController::ServerOnNewSpawnPointAccessed_Validate(AActor* AccessedBaseActor) {
    return true;
}

void ASimPlayerController::ServerJoinWar_Implementation(const EFactionId TeamId) {
}
bool ASimPlayerController::ServerJoinWar_Validate(const EFactionId TeamId) {
    return true;
}

void ASimPlayerController::ServerGetTravelInfo_Implementation(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery) {
}
bool ASimPlayerController::ServerGetTravelInfo_Validate(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool bIsRecovery) {
    return true;
}

void ASimPlayerController::ServerGenerateVivoxChannelJoinToken_Implementation(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& AccountSIPAddress, const FString& ChannelSIPAddress) {
}
bool ASimPlayerController::ServerGenerateVivoxChannelJoinToken_Validate(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& AccountSIPAddress, const FString& ChannelSIPAddress) {
    return true;
}

void ASimPlayerController::ServerFullRepair_Implementation(AVehicleFactory* VehicleFactory) {
}
bool ASimPlayerController::ServerFullRepair_Validate(AVehicleFactory* VehicleFactory) {
    return true;
}

void ASimPlayerController::ServerFlagDisruptivePlacement_Implementation(ATeamStructure* TeamStructure) {
}
bool ASimPlayerController::ServerFlagDisruptivePlacement_Validate(ATeamStructure* TeamStructure) {
    return true;
}

void ASimPlayerController::ServerEnterRocketLaunchCode_Implementation(const FRocketLaunchCodeRequest& Request) {
}
bool ASimPlayerController::ServerEnterRocketLaunchCode_Validate(const FRocketLaunchCodeRequest& Request) {
    return true;
}

void ASimPlayerController::ServerEditSignPost_Implementation(const FText& Text, ASignPost* TargetSignPost) {
}
bool ASimPlayerController::ServerEditSignPost_Validate(const FText& Text, ASignPost* TargetSignPost) {
    return true;
}

void ASimPlayerController::ServerDropLargeItem_Implementation() {
}
bool ASimPlayerController::ServerDropLargeItem_Validate() {
    return true;
}

void ASimPlayerController::ServerDropItem_Implementation(UItemHolderComponent* ItemHolder, const int8 ItemIndex) {
}
bool ASimPlayerController::ServerDropItem_Validate(UItemHolderComponent* ItemHolder, const int8 ItemIndex) {
    return true;
}

void ASimPlayerController::ServerDrainPipes_Implementation(AStructure* Structure) {
}
bool ASimPlayerController::ServerDrainPipes_Validate(AStructure* Structure) {
    return true;
}

void ASimPlayerController::ServerDetachUserComponents_Implementation() {
}
bool ASimPlayerController::ServerDetachUserComponents_Validate() {
    return true;
}

void ASimPlayerController::ServerDetachLargeItem_Implementation(ASimVehicle* DetachTarget, const uint8 Index) {
}
bool ASimPlayerController::ServerDetachLargeItem_Validate(ASimVehicle* DetachTarget, const uint8 Index) {
    return true;
}

void ASimPlayerController::ServerDestroySignPost_Implementation(ASignPost* TargetSignPost) {
}
bool ASimPlayerController::ServerDestroySignPost_Validate(ASignPost* TargetSignPost) {
    return true;
}

void ASimPlayerController::ServerDeployLargeItem_Implementation(const FVector& Location, const FRotator& Rotation) {
}
bool ASimPlayerController::ServerDeployLargeItem_Validate(const FVector& Location, const FRotator& Rotation) {
    return true;
}

void ASimPlayerController::ServerDemolishVehicle_Implementation(ASimVehicle* TargetVehicle) {
}
bool ASimPlayerController::ServerDemolishVehicle_Validate(ASimVehicle* TargetVehicle) {
    return true;
}

void ASimPlayerController::ServerDemolishStructure_Implementation(AStructure* Structure) {
}
bool ASimPlayerController::ServerDemolishStructure_Validate(AStructure* Structure) {
    return true;
}

void ASimPlayerController::ServerCrateItems_Implementation(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
}
bool ASimPlayerController::ServerCrateItems_Validate(UItemHolderComponent* TargetItemHolder, const int32 ItemSlotIndex) {
    return true;
}

void ASimPlayerController::ServerConvertPatient_Implementation(UHospitalComponent* HospitalComponent) {
}

void ASimPlayerController::ServerConfirmAdminDestroy_Implementation(const FName ObjectName) {
}
bool ASimPlayerController::ServerConfirmAdminDestroy_Validate(const FName ObjectName) {
    return true;
}

void ASimPlayerController::ServerCommend_Implementation(const FString& PlayerOnlineId) {
}
bool ASimPlayerController::ServerCommend_Validate(const FString& PlayerOnlineId) {
    return true;
}

void ASimPlayerController::ServerCommandStringID_Implementation(const FString& ID) {
}
bool ASimPlayerController::ServerCommandStringID_Validate(const FString& ID) {
    return true;
}

void ASimPlayerController::ServerCommandID_Implementation(int8 ID) {
}
bool ASimPlayerController::ServerCommandID_Validate(int8 ID) {
    return true;
}

void ASimPlayerController::ServerClearSquad_Implementation(AActor* Actor) {
}
bool ASimPlayerController::ServerClearSquad_Validate(AActor* Actor) {
    return true;
}

void ASimPlayerController::ServerClaimStructure_Implementation(AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed, const bool bIsMultiClaim) {
}
bool ASimPlayerController::ServerClaimStructure_Validate(AStructure* Structure, const int32 SelectedSquadID, const bool bWantsItClaimed, const bool bIsMultiClaim) {
    return true;
}

void ASimPlayerController::ServerClaimResourceConverterOrder_Implementation(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
}
bool ASimPlayerController::ServerClaimResourceConverterOrder_Validate(AActor* TargetActor, const int32 RefinableItemIndex, const bool bTransferAll) {
    return true;
}

void ASimPlayerController::ServerClaimRefinementOrder_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType) {
}
bool ASimPlayerController::ServerClaimRefinementOrder_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex, const ERefineryClaimType ClaimType) {
    return true;
}

void ASimPlayerController::ServerChat_Implementation(const FString& Message, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage) {
}
bool ASimPlayerController::ServerChat_Validate(const FString& Message, EChatChannel ChatChannel, EChatLanguage BroadcastLanguage) {
    return true;
}

void ASimPlayerController::ServerChangeVehicleFuelType_Implementation(ASimVehicle* SimVehicle) {
}
bool ASimPlayerController::ServerChangeVehicleFuelType_Validate(ASimVehicle* SimVehicle) {
    return true;
}

void ASimPlayerController::ServerChangeFactoryOrderAccess_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId) {
}
bool ASimPlayerController::ServerChangeFactoryOrderAccess_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type, const EFactoryOrderAccess AccessLevel, const int32 SquadId) {
    return true;
}

void ASimPlayerController::ServerCancelRocketLaunch_Implementation(ARocketFacility* RocketFacility) {
}
bool ASimPlayerController::ServerCancelRocketLaunch_Validate(ARocketFacility* RocketFacility) {
    return true;
}

void ASimPlayerController::ServerCancelRetrieval_Implementation() {
}
bool ASimPlayerController::ServerCancelRetrieval_Validate() {
    return true;
}

void ASimPlayerController::ServerCancelRefinementOrder_Implementation(ARefinery* TargetRefinery, const int32 RefinableItemIndex) {
}
bool ASimPlayerController::ServerCancelRefinementOrder_Validate(ARefinery* TargetRefinery, const int32 RefinableItemIndex) {
    return true;
}

void ASimPlayerController::ServerCancelPackaging_Implementation() {
}
bool ASimPlayerController::ServerCancelPackaging_Validate() {
    return true;
}

void ASimPlayerController::ServerCancelFactoryOrder_Implementation(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type) {
}
bool ASimPlayerController::ServerCancelFactoryOrder_Validate(USpecializedFactoryComponent* FactoryComponent, const EFactoryQueueType Type) {
    return true;
}

void ASimPlayerController::ServerBuildVehicleFromStructure_Implementation(AActor* BuildLocationActor, const FName CodeName, const bool bIsPrototype, const FName BuildLocationTag) {
}
bool ASimPlayerController::ServerBuildVehicleFromStructure_Validate(AActor* BuildLocationActor, const FName CodeName, const bool bIsPrototype, const FName BuildLocationTag) {
    return true;
}

void ASimPlayerController::ServerBuildVehicle_Implementation(const FName CodeName, const FVector& Location, const FRotator& Rotation) {
}
bool ASimPlayerController::ServerBuildVehicle_Validate(const FName CodeName, const FVector& Location, const FRotator& Rotation) {
    return true;
}

void ASimPlayerController::ServerBuildStructureFromStructure_Implementation(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype) {
}
bool ASimPlayerController::ServerBuildStructureFromStructure_Validate(AConstructionSite* ConstructionSite, const FName CodeName, const bool bIsPrototype) {
    return true;
}

void ASimPlayerController::ServerBuildStructure_Implementation(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
}
bool ASimPlayerController::ServerBuildStructure_Validate(const FName& StructureCodeName, const FVector& BuildLocation, const FRotator& BuildRotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration) {
    return true;
}

void ASimPlayerController::ServerBuildRailVehicle_Implementation(const FName CodeName, const FRepSnapInfo SnapInfo) {
}
bool ASimPlayerController::ServerBuildRailVehicle_Validate(const FName CodeName, const FRepSnapInfo SnapInfo) {
    return true;
}

void ASimPlayerController::ServerAttachUserComponents_Implementation(AActor* AssociatedActor) {
}
bool ASimPlayerController::ServerAttachUserComponents_Validate(AActor* AssociatedActor) {
    return true;
}

void ASimPlayerController::ServerAttachLargeItem_Implementation(AActor* AttachTarget, const uint8 Index) {
}
bool ASimPlayerController::ServerAttachLargeItem_Validate(AActor* AttachTarget, const uint8 Index) {
    return true;
}

void ASimPlayerController::ServerAssignSquad_Implementation(AActor* Actor, const int32 NewSquadID) {
}
bool ASimPlayerController::ServerAssignSquad_Validate(AActor* Actor, const int32 NewSquadID) {
    return true;
}

void ASimPlayerController::ServerAssembleStructureOrVehicle_Implementation(AAssemblyStation* AssemblyStation, const FName CodeName, const int32 SelectedSquadID) {
}

void ASimPlayerController::OnRep_UserComponents() {
}

void ASimPlayerController::OnRep_PlaceInDeploymentQueue() {
}

void ASimPlayerController::OnClientTravelWaitComplete(const FString& URL) {
}

void ASimPlayerController::MaybeRequestGarrisonInfo() {
}

void ASimPlayerController::DisconnectWarService() {
}

void ASimPlayerController::DeleteMapPost(const FString& OnlineID) {
}

void ASimPlayerController::DebugRecreateLandscapeHoles() {
}

void ASimPlayerController::DebugDrawCurrentLandscape() {
}

void ASimPlayerController::ConnectWarService() {
}

void ASimPlayerController::ClientWorldChatMessage_Implementation(const FString& Message, const FString& SenderName, const FString& SenderRegimentTag, const FString& SenderOnlineId, const uint8 SenderTeamID, const EChatChannel Channel, const EChatLanguage BroadcastLanguage, const EWorldConquestMapId MapId, const bool bReportingWhisperToSelf, const bool bIsEnabled) {
}

void ASimPlayerController::ClientWarEndingAlert_Implementation(int32 SecondsUntilWarEnd, int32 Duration) {
}

void ASimPlayerController::ClientVoiceLogin_Implementation(const FVoiceLoginInfo& VoiceLoginInfo) {
}

void ASimPlayerController::ClientUpdateUTCOffset_Implementation(const int64 ServerDateTimeTicks) {
}

void ASimPlayerController::ClientUpdateShardConfig_Implementation(FClientShardConfig ClientShardConfig) {
}

void ASimPlayerController::ClientUpdateRegionMinimalData_Implementation(const FRegionMinimalData& RegionMinimalData) {
}

void ASimPlayerController::ClientUpdateRegionLog_Implementation(const FRegionLogPage& RegionLogPage, const uint32 MaxAvailablePages) {
}

void ASimPlayerController::ClientUpdateCachedDriverInfo_Implementation(ASimVehicle* SimVehicle, const FString& OnlineID, const FString& PlayerName) {
}

void ASimPlayerController::ClientUpdateActorLog_Implementation(const FActorLogPage& LogPage, const uint32 PageCount) {
}

void ASimPlayerController::ClientUpdateActivityLog_Implementation(const FPlayerActivity& Activity) {
}

void ASimPlayerController::ClientUnstuckMessage_Implementation(const EUnstuckMessage UnstuckMessage, const int32 Value) {
}

void ASimPlayerController::ClientTravelToWorldConquestMap_Implementation(const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint) {
}

void ASimPlayerController::ClientTravelToHomeRegion_Implementation(FRegionConnectionInfo RegionConnectionInfo) {
}

void ASimPlayerController::ClientTraceActivity_Implementation(FActivityStateDebugTrace NewTrace, ASimCharacter* SimCharacter) {
}

void ASimPlayerController::ClientTimeResponse_Implementation(float RequestTime, float ServerTime) {
}

void ASimPlayerController::ClientTeleportToMapMarker_Implementation(const FString& TargetMapMarkerName) {
}

void ASimPlayerController::ClientTeamKillMessage_Implementation(const FString& KillerName, const FString& DeadPlayerName, const EDamageSource DamageSource) {
}

void ASimPlayerController::ClientSyncWorldPlayerId_Implementation(const FString& ID) {
}

void ASimPlayerController::ClientSyncTravelMaps_Implementation(const TArray<FRegionConnectionInfo>& TravelMaps) {
}

void ASimPlayerController::ClientSyncTimeToNextWar_Implementation(const int32 Seconds) {
}

void ASimPlayerController::ClientSyncStructureStatus_Implementation(AStructure* TargetStructure, const EFactionId FactionId, const int32 SquadId, const int64 ClaimTime, const AStructure* DecayPreventer) {
}

void ASimPlayerController::ClientSyncStructureBuilderInfo_Implementation(AStructure* TargetStructure, const FString& BuilderOnlineID, const FString& BuilderName) {
}

void ASimPlayerController::ClientSyncStatsForNearbyStructures_Implementation(const TArray<FStructureStats>& StatList) {
}

void ASimPlayerController::ClientSyncStaticRegionMapData_Implementation(const FRegionMapData& StaticMapData) {
}

void ASimPlayerController::ClientSyncReplicatedTweakables_Implementation(const FWarReplicatedTweakables& NewWarRepTweakables) {
}

void ASimPlayerController::ClientSyncMapIntelligence_Implementation(const bool bOnlySyncIfMapIsOpen) {
}

void ASimPlayerController::ClientSyncGameplayParams_Implementation(const FGameplayParams& GameplayParams) {
}

void ASimPlayerController::ClientSyncDynamicRegionMapData_Implementation(const FRegionMapData& RegionMapData) {
}

void ASimPlayerController::ClientStopSpectateTargetTick_Implementation() {
}

void ASimPlayerController::ClientStartRespawnTimer_Implementation(const float RespawnTime) {
}

void ASimPlayerController::ClientSimReset_Implementation(const bool bInIsLeavingDueToServerTravel) {
}

void ASimPlayerController::ClientShowWeatherStationResponse_Implementation(const uint8 Response) {
}

void ASimPlayerController::ClientShowVehicleStockpileResponse_Implementation(const EVehicleStockpileResponse Response) {
}

void ASimPlayerController::ClientShowVehicleLostMessage_Implementation(const FString& PlayerName) {
}

void ASimPlayerController::ClientShowUnrestrictedNotification_Implementation(const ERestrictedState UnrestrictedState) {
}

void ASimPlayerController::ClientShowTravelReservationAlert_Implementation() {
}

void ASimPlayerController::ClientShowTeamKillWarning_Implementation() {
}

void ASimPlayerController::ClientShowStockpileAlert_Implementation(FStockpileBroadcastAlertInfo StockpileBroadcastAlertInfo) {
}

void ASimPlayerController::ClientShowSquadResponse_Implementation(AActor* Actor, const EAssignCoalitionResponse Response) {
}

void ASimPlayerController::ClientShowSquadClaimedNotification_Implementation(const FName CodeName, const int32 SquadId) {
}

void ASimPlayerController::ClientShowShippableResponse_Implementation(const uint8 ShippableStatus) {
}

void ASimPlayerController::ClientShowRocketFacilityResult_Implementation(const ARocketFacility* RocketFacility, const ERocketConsoleActionResult ActionResult) {
}

void ASimPlayerController::ClientShowRocketFacilityResponse_Implementation(const ARocketFacility* RocketFacility, const ERocketLaunchResponse Response) {
}

void ASimPlayerController::ClientShowResistanceStart_Implementation(const EFactionId ConquestWinner) {
}

void ASimPlayerController::ClientShowRecentItem_Implementation(const FName& ItemCodeName, const int32 StackSize) {
}

void ASimPlayerController::ClientShowPlacementStatus_Implementation(const EPlacementStatus PlacementStatus) {
}

void ASimPlayerController::ClientShowMapNames_Implementation(const bool bShow) {
}

void ASimPlayerController::ClientShowLongRangeArtilleryResponse_Implementation(const uint8 Response) {
}

void ASimPlayerController::ClientShowIntelCenterResponse_Implementation(const uint8 Response) {
}

void ASimPlayerController::ClientShowHUDNotification_Implementation(const EHUDNotification HUDNotification) {
}

void ASimPlayerController::ClientShowHUDCodeNameNotification_Implementation(const EHUDNotification HUDNotification, const FName CodeName) {
}

void ASimPlayerController::ClientShowHUDClaimNotification_Implementation(const EHUDNotification HUDNotification, const AActor* Actor, const int32 SquadId) {
}

void ASimPlayerController::ClientShowHUDActorNotification_Implementation(const EHUDNotification HUDNotification, const AActor* Actor) {
}

void ASimPlayerController::ClientShowHospitalResponse_Implementation(const EHospitalResponse Response) {
}

void ASimPlayerController::ClientShowEventVictory_Implementation(const EFactionId FactionWinner) {
}

void ASimPlayerController::ClientShowDeployResponse_Implementation(const EDeployResponse DeployResponse) {
}

void ASimPlayerController::ClientShowDeploymentFailureNotification_Implementation(const uint8 Reason) {
}

void ASimPlayerController::ClientShowConquestVictory_Implementation(const FConquestOverNotificationInfo ConquestOverInfo) {
}

void ASimPlayerController::ClientShowChatOnCooldown_Implementation() {
}

void ASimPlayerController::ClientShowBuildResponse_Implementation(const FBuildResponse& BuildResponse) {
}

void ASimPlayerController::ClientShowBorderBaseResponse_Implementation(const uint8 Response) {
}

void ASimPlayerController::ClientShowAchievementCompleted_Implementation(const FWarAchievementCompletedInfo CompletionInfo) {
}

void ASimPlayerController::ClientSetVehicleReplicatedBasedMovement_Implementation(ASimVehicle* Vehicle, const FBasedMovementInfo& MovementInfo) {
}

void ASimPlayerController::ClientSetTeleport_Implementation(bool bIsMapTeleport, bool bIsAwaitingClick) {
}

void ASimPlayerController::ClientSetSpawnPointResponse_Implementation(const AActor* AssignableSP, const uint8 Response) {
}

void ASimPlayerController::ClientSetShowVisibilityDebug_Implementation(const bool bShow) {
}

void ASimPlayerController::ClientSetShowStructureStats_Implementation(const bool bShow) {
}

void ASimPlayerController::ClientSetShowHP_Implementation(const bool Show) {
}

void ASimPlayerController::ClientSetRepTrainMovement_Implementation(ARailVehicle* RailVehicle, const FRepTrainMovement& RepTrainMovement) {
}

void ASimPlayerController::ClientSetItemAsStackableCheat_Implementation(const FName& ItemCodeName) {
}

void ASimPlayerController::ClientSetFastBuild_Implementation(const bool bIsFastBuild) {
}

void ASimPlayerController::ClientSetCinematicCamera_Implementation(const float NewCameraRotateSpeed, const float NewCameraZoom, const bool bInAreCharacterStencilsEnabled) {
}

void ASimPlayerController::ClientSetCameraFlags_Implementation(int32 Flags) {
}

void ASimPlayerController::ClientSendAutoRestartMessage_Implementation(const float SecsToRestart) {
}

void ASimPlayerController::ClientRestrictedMessage_Implementation(const FString& PlayerName, const ERestrictedState RestrictedState, const int32 DurationMinutes) {
}

void ASimPlayerController::ClientRespawnAtAssignedPoint_Implementation(const uint8 Category) {
}

void ASimPlayerController::ClientRespawnAlert_Implementation() {
}

void ASimPlayerController::ClientResistanceStartingAlert_Implementation(int32 SecondsUntilResistanceEnd, int32 Duration) {
}

void ASimPlayerController::ClientResetStructureClaimStatus_Implementation(AStructure* TargetStructure) {
}

void ASimPlayerController::ClientResetRetrieveState_Implementation(const ETransactionResponse Response) {
}

void ASimPlayerController::ClientRefinementOrderResponse_Implementation(const ERefinementOrderResponse Response) {
}

void ASimPlayerController::ClientReconnectToVoiceChat_Implementation() {
}

void ASimPlayerController::ClientReceiveTravelInfo_Implementation(const FRegionConnectionInfo TravelInfo, const EWorldConquestMapId TargetMapID, const FSpawnPoint TravelPoint, bool Success, bool bIsRecovery) {
}

void ASimPlayerController::ClientReceiveTransactionResponse_Implementation(const ETransactionResponse Response) {
}

void ASimPlayerController::ClientReceiveTechResponse_Implementation(const uint8 TechResponse) {
}

void ASimPlayerController::ClientReceiveStockpileAccessEvents_Implementation(UGenericStockpileComponent* GenericStockpileComponent, const uint8 Index, const FStockpileEventsResponse& EventsResponse) {
}

void ASimPlayerController::ClientReceiveRocketUpdateAlert_Implementation(const FRPCRocketPreLaunchUpdateAlert& LaunchUpdateAlert) {
}

void ASimPlayerController::ClientReceiveRocketAlert_Implementation(const FRPCRocketPreLaunchAlert& LaunchAlert) {
}

void ASimPlayerController::ClientReceiveRegionMinimalData_Implementation(const EWorldConquestMapId MapId, const FRegionMinimalData& RegionMinimalData) {
}

void ASimPlayerController::ClientReceiveOnlineIDInfo_Implementation(const FString& OnlineID) {
}

void ASimPlayerController::ClientReceiveNetworkTechStatus_Implementation(const AStructure* Structure, const FTechTreeComponentNetworkStatus NetworkStatus) {
}

void ASimPlayerController::ClientReceiveMapItemDetails_Implementation(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber, const FMapItemDetails& MapItemDetails) {
}

void ASimPlayerController::ClientReceiveListeningAreaDetails_Implementation(const TArray<FListeningAreaDebugData>& InListeningAreaDetails) {
}

void ASimPlayerController::ClientReceiveInfo_Implementation() {
}

void ASimPlayerController::ClientReceiveEmptyMapItemDetails_Implementation(const EWorldConquestMapId MapId, const uint32 Index, const int32 SerialNumber) {
}

void ASimPlayerController::ClientQueueMainMenuPrompt_Implementation(const EMainMenuPromptType PromptType) {
}

void ASimPlayerController::ClientProcessCommand_Implementation(int32 ID, const TArray<uint8>& Data) {
}

void ASimPlayerController::ClientOpenVehicleResponse_Implementation(ASimVehicle* SimVehicle, const EOpenVehicleInventoryResponse OpenVehicleInventoryResponse) {
}

void ASimPlayerController::ClientOnVehicleMountError_Implementation() {
}

void ASimPlayerController::ClientOnVehicleExitFailure_Implementation() {
}

void ASimPlayerController::ClientOnVacateSuccess_Implementation() {
}

void ASimPlayerController::ClientOnUseComponentUsed_Implementation(UUseComponent* UseComponent) {
}

void ASimPlayerController::ClientOnShippableResponse_Implementation(const uint8 ShippableStatus) {
}

void ASimPlayerController::ClientOnServerTravelAllowed_Implementation() {
}

void ASimPlayerController::ClientOnRocketGroundZeroEvent_Implementation(const FVector_NetQuantize Location) {
}

void ASimPlayerController::ClientOnProfileDownloadComplete_Implementation(const bool bIsRegionTravelling) {
}

void ASimPlayerController::ClientOnOutgoingSensorPing_Implementation() {
}

void ASimPlayerController::ClientOnOccupySuccess_Implementation(bool OccupantCrouches) {
}

void ASimPlayerController::ClientOnOccupyError_Implementation() {
}

void ASimPlayerController::ClientOnLongRangeArtilleryFireShellEvent_Implementation(AActor* LongRangeArtillery, const FVector_NetQuantize Location, ELongRangeArtilleryType LongRangeArtilleryType) {
}

void ASimPlayerController::ClientOnIntelCenterFireListeningAreaEvent_Implementation(AActor* IntelCenter, const FVector_NetQuantize Location) {
}

void ASimPlayerController::ClientOnIncomingSensorPing_Implementation(FSensorPingResponse SensorPingResponse) {
}

void ASimPlayerController::ClientOnChannelJoinTokenReceived_Implementation(const EVoiceChannelType ChannelType, const FString& ChannelName, const FString& ChannelJoinToken) {
}

void ASimPlayerController::ClientNotifyCommend_Implementation(const FString& PlayerName, const FString& OnlineID) {
}

void ASimPlayerController::ClientModDestroySignPost_Implementation() {
}

void ASimPlayerController::ClientJoinWarResponse_Implementation(const EJoinWarResponse ResponseType, const FGameplayParams& GameplayParams, bool bHadTravelReservation, uint32 StructureLayers, int32 ShardId, const FSignedPayload& SignedPlayerServerData) {
}

void ASimPlayerController::ClientGotoScreen_Implementation(const ESimScreen SimScreen) {
}

void ASimPlayerController::ClientGetSquadIdFromSquadName_Implementation(const FString& SquadName) {
}

void ASimPlayerController::ClientFullRepairResponse_Implementation(const EFullRepairResponse Response) {
}

void ASimPlayerController::ClientFriendlyFireMessage_Implementation(const FString& PlayerName) {
}

void ASimPlayerController::ClientFactionLockAlert_Implementation(const EFactionId TeamId, const FTimespan& FactionLockTimespan) {
}

void ASimPlayerController::ClientExitRecoveryMode_Implementation() {
}

void ASimPlayerController::ClientEnterRecoveryMode_Implementation(float Duration) {
}

void ASimPlayerController::ClientEnterBuildGhostMode_Implementation(const FName& StructureCodeName) {
}

void ASimPlayerController::ClientDrawDebugVehicleHitbox_Implementation(ASimVehicle* SimVehicle, FVector Position, FVector Extents, FQuat Rotation, TEnumAsByte<ECollisionResponse> CollisionResponseToPawn) {
}

void ASimPlayerController::ClientDisruptivePlacementMessage_Implementation(const FString& PlayerName, const FName CodeName, const FWarGridCoordinate WarGridCoordinate) {
}

void ASimPlayerController::ClientCreateDebugMapPost_Implementation(const FText& Text) {
}

void ASimPlayerController::ClientCopyToClipboard_Implementation(const FString& String) {
}

void ASimPlayerController::ClientConfirmAdminDestroy_Implementation(const FName ObjectName) {
}

void ASimPlayerController::ClientClearSquadList_Implementation() {
}

void ASimPlayerController::ClientClearAdminAlertMessages_Implementation() {
}

void ASimPlayerController::ClientClaimStructureMulti_Implementation(const int32 Amount, const bool bIsRefresh) {
}

void ASimPlayerController::ClientChatMessageWithTag_Implementation(const EChatChannel Channel, const APlayerState* SenderPlayerState, const FString& SenderRegimentTag, const FString& MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled) {
}

void ASimPlayerController::ClientChatMessage_Implementation(const EChatChannel Channel, const APlayerState* SenderPlayerState, const FString& MsgString, EChatLanguage BroadcastLanguage, const bool ReportingWhisperToSelf, const bool bIsEnabled) {
}

void ASimPlayerController::ClientBeaconLoadTest_Implementation(FRegionConnectionInfo RegionConnectionInfo, const FString& MapCodename, uint32 NumBeacons, uint32 Interval, uint32 Duration) {
}

void ASimPlayerController::ClientAllowHammerToBuildAll_Implementation(const bool bAllowHammerToBuildAll) {
}

void ASimPlayerController::ClientAlertTownUnderAttack_Implementation(const FAlertTownUnderAttackRPCInfo AlertInfo) {
}

void ASimPlayerController::ClientAlertTownDestroyed_Implementation(const FAlertTownDestroyedRPCInfo AlertInfo) {
}

void ASimPlayerController::ClientAlertTownBuilt_Implementation(const FAlertTownBuiltRPCInfo AlertInfo) {
}

void ASimPlayerController::ClientAlertTeamKill_Implementation() {
}

void ASimPlayerController::ClientAlertMessage_Implementation(const FString& MsgString, const float DurationSecs) {
}

void ASimPlayerController::ClientAlertAFKTimeoutPending_Implementation() {
}

void ASimPlayerController::ClientAdminMessageUnformatted_Implementation(const FString& Message) {
}

void ASimPlayerController::ClientAdminMessageList_Implementation(const TArray<FString>& MessageList) {
}

void ASimPlayerController::ClientAdminMessage_Implementation(const FString& S) {
}

void ASimPlayerController::ClientAdminDownloadClientConfig_Implementation(const FName ClientConfigTypeName) {
}

void ASimPlayerController::ClientAdminAlertMessage_Implementation(const FString& MsgString, const float DurationSecs) {
}

void ASimPlayerController::Client_ShowTargetingRangeResults_Implementation(float Damage, float Range) {
}

void ASimPlayerController::Client_ShowHUDNotificationDuration_Implementation(const FText& NotificationText, float Duration) {
}

void ASimPlayerController::Client_ShowHUDNotification_Implementation(const FText& NotificationText) {
}

void ASimPlayerController::Client_ShowCommendNotification_Implementation(const FText& NotificationText) {
}

void ASimPlayerController::CaptureDebugScreenshot() {
}

void ASimPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASimPlayerController, CommsRating);
    DOREPLIFETIME(ASimPlayerController, SpawnPointInfo);
    DOREPLIFETIME(ASimPlayerController, PlaceInDeploymentQueue);
    DOREPLIFETIME(ASimPlayerController, StockpileEffects);
    DOREPLIFETIME(ASimPlayerController, UserComponents);
}


