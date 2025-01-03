#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "ETravelResult.h"
#include "EWorldConquestMapId.h"
#include "RegionConnectionInfo.h"
#include "WarPlayerController.generated.h"

class AWarBeaconClient;

UCLASS(Abstract, Blueprintable)
class WAR_API AWarPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelRequestIsPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelRequestWasSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelReservationIsPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelReservationIsComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQueuedViaBorderTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedToContinueTravelling;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWarBeaconClient* WarBeaconClient;
    
public:
    AWarPlayerController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInitiateTravel();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClientTravelLoadComplete();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SelectWarDrawDebugWorld();
    
    UFUNCTION(Client, Reliable)
    void ClientTravelSuccess(uint64 TravelId, FRegionConnectionInfo RegionConnectionInfo, float Delay);
    
    UFUNCTION(Client, Reliable)
    void ClientTravelProgress(uint32 NumPlayersConnected, uint32 NumPlayersTotal, float AdditionalDelay);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelPending(int32 PendingTravelId, EWorldConquestMapId DestinationMapId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelFailure(ETravelResult Result, int32 PartySize);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientTravelComplete(uint64 TravelId, float InvulnerabilityDuration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelArrived(FTransform ReservationLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientQueueForTravel(EWorldConquestMapId DestinationMapId, FRegionConnectionInfo RegionConnectionInfo);
    
};

