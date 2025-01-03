#pragma once
#include "CoreMinimal.h"
#include "EStockpileEntryType.h"
#include "ETransactionResponse.h"
#include "ReserveStockpileData.h"
#include "ReserveStockpileFailedPassCodeInfo.h"
#include "StockpileEntry.h"
#include "StockpileItemFilter.h"
#include "UserComponent.h"
#include "ReserveStockpileUserComponent.generated.h"

class AActor;
class AContainer;
class AShippableCrate;
class ASimVehicle;
class UItemHolderComponent;
class UReserveStockpileComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UReserveStockpileUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StockpileData, meta=(AllowPrivateAccess=true))
    TArray<FReserveStockpileData> StockpileDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReserveStockpileFailedPassCodeInfo FailedPassCodeAttemptInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReserveStockpileComponent* ReserveStockpileBeingUsed;
    
public:
    UReserveStockpileUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferRequestToPublic(const FString& SourceStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferRequestFromReserveToReserve(const FString& SourceStockpileName, const FString& DestinationStockpileName, const FName CodeName, const int32 Quantity, const EStockpileEntryType StockpileType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferItemFromReserveToReserve(const FString& SourceStockpileName, const FString& DestinationStockpileName, const FName CodeName, const int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferItemFromReserveToPublic(const FString& SourceStockpileName, const FName CodeName, const int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitVehicle(const FString& TargetStockpileName, AActor* DestinationActor, ASimVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitShippableCrate(const FString& TargetStockpileName, AActor* DestinationActor, AShippableCrate* ShippableCrate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromPlayerStockpileFiltered(const FString& TargetStockpileName, AActor* DestinationActor, const FStockpileEntry ItemFilter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromPlayerStockpile(const FString& TargetStockpileName, AActor* DestinationActor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromItemHolderFiltered(const FString& TargetStockpileName, AActor* DestinationActor, UItemHolderComponent* SourceItemHolder, const FStockpileItemFilter ItemFilter);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitItemsFromItemHolder(const FString& TargetStockpileName, AActor* DestinationActor, UItemHolderComponent* SourceItemHolder);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSubmitContainer(const FString& TargetStockpile, AActor* DestinationActor, AContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerResetAccess(const FString& StockpileName);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseStockpile(const FString& StockpileName);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRefreshExpiryTime();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMakeVisible(const FString& TargetStockpileName, const bool bMakeVisible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCreateStockpile(const FString& StockpileName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAccessStockpile(const int32 PassCode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StockpileData(const TArray<FReserveStockpileData>& PreviousStockpileDataList);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowStockpileResponse(const ETransactionResponse Response);
    
};

