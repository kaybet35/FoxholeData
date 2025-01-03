#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "DeploymentQueueEntry.h"
#include "ExternalWarServiceReplicatedState.h"
#include "MapPostManager.h"
#include "RegimentManager.h"
#include "RegionZoneManager.h"
#include "SquadManager.h"
#include "WarAPIClient.h"
#include "WarBlueprints.h"
#include "WarRichTextStyle.h"
#include "WarServerQueue.h"
#include "WarServiceReplicatedState.h"
#include "WarGameInstance.generated.h"

class ALoreList;
class AMapList;
class AWarBeaconHost;
class UBorderBaseManager;
class UClientConfigManager;
class UClientStreamingManager;
class UCrossRegionActorManager;
class UDiscordRichPresence;
class ULandscapeDeformationManager;
class UMonumentManager;
class UPlayerProfileManager;
class UServerSettings;
class USoundMix;
class UTravelManager;
class UWarSaveGame;
class UWarSessionSettings;
class UWarVoiceClient;
class UWeatherManager;
class UWorldResourceSpawner;

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* BaseSoundMix;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarBlueprints Blueprints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBorderBaseManager* BorderBaseManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeatherManager* WeatherManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldResourceSpawner* WorldResourceSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarSaveGame* CurrentWarSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerProfileManager* PlayerProfileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UServerSettings* ServerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClientStreamingManager* StreamingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTravelManager* TravelManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULandscapeDeformationManager* LandscapeDeformationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCrossRegionActorManager* CrossRegionActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMapList* MapList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarSessionSettings* WarSessionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALoreList* LoreList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastColonialCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LastWardenCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDiscordRichPresence* DiscordRichPresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DiscordRichPresenceApplicationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWarBeaconHost* WarBeaconHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMonumentManager* MonumentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarServerQueue ColonialQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarServerQueue WardenQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeploymentQueueEntry> DeploymentQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWarVoiceClient* WarVoiceClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClientConfigManager* ClientConfigManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarAPIClient WarAPIClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPostManager MapPostManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarRichTextStyle RichTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionZoneManager RegionZoneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadManager SquadManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegimentManager RegimentManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExternalWarServiceReplicatedState ExternalWarServiceReplicatedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarServiceReplicatedState WarServiceReplicatedState;
    
    UWarGameInstance();

    UFUNCTION(BlueprintCallable)
    void ResetServerTravelStatusOnClient();
    
    UFUNCTION()
    uint32 GetLocalNetworkVersion();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void DumpProperties(const FString& OutputFileName, const UClass* Type, const TArray<UClass*>& BaseClassFilters, const TArray<FString>& PropertyNameFilter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpComponentOwners(const FString& OutputFileName, const UClass* ComponentType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpCollisionProfiles(const FString& OutputFileName, const UClass* Type, const TArray<UClass*>& BaseClassFilters, const TArray<FString>& ProfileNameFilters);
    
};

