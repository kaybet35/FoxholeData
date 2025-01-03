#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
#include "BanReasonInfo.h"
#include "EFactionId.h"
#include "EJoinWarResponse.h"
#include "WarBeaconJoinRequestData.h"
#include "WarBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API AWarBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    AWarBeaconClient(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestQueueStatusUpdate();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLeaveQueue();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJoinQueue(FWarBeaconJoinRequestData JoinRequestData);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateQueueStatus(const int32 NumPlayersAhead);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayerIsBannedResponse(const bool IsBanned, const int64 BanDurationTicks, const FBanReasonInfo& BanReasonInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnServerTravelling();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOfflineCharacterExpired();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientJoinServer(const EFactionId TeamId);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientJoinQueueResponse(const EJoinWarResponse JoinWarResponse);
    
};

