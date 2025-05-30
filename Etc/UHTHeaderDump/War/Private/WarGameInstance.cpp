#include "WarGameInstance.h"

UWarGameInstance::UWarGameInstance() {
    this->BaseSoundMix = NULL;
    this->BorderBaseManager = NULL;
    this->PipelineManager = NULL;
    this->WeatherManager = NULL;
    this->WorldResourceSpawner = NULL;
    this->CurrentWarSave = NULL;
    this->PlayerProfileManager = NULL;
    this->ServerSettings = NULL;
    this->StreamingManager = NULL;
    this->TravelManager = NULL;
    this->LandscapeDeformationManager = NULL;
    this->CrossRegionActorManager = NULL;
    this->SnapshotManager = NULL;
    this->WarSessionSettings = NULL;
    this->LoreList = NULL;
    this->LastColonialCount = 0;
    this->LastWardenCount = 0;
    this->DiscordRichPresence = NULL;
    this->WarBeaconHost = NULL;
    this->MonumentManager = NULL;
    this->WarVoiceClient = NULL;
    this->ClientConfigManager = NULL;
}

void UWarGameInstance::ResetServerTravelStatusOnClient() {
}

uint32 UWarGameInstance::GetLocalNetworkVersion() {
    return 0;
}

void UWarGameInstance::DumpProperties(const FString& OutputFileName, const UClass* Type, const TArray<UClass*>& BaseClassFilters, const TArray<FString>& PropertyNameFilter) {
}

void UWarGameInstance::DumpComponentOwners(const FString& OutputFileName, const UClass* ComponentType) {
}

void UWarGameInstance::DumpCollisionProfiles(const FString& OutputFileName, const UClass* Type, const TArray<UClass*>& BaseClassFilters, const TArray<FString>& ProfileNameFilters) {
}


