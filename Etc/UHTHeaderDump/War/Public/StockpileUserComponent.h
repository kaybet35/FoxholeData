#pragma once
#include "CoreMinimal.h"
#include "StockpileEntry.h"
#include "UserComponent.h"
#include "StockpileUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UStockpileUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReservableItemCrates, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> ReservableItemCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Vehicles, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_VehicleCrates, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> VehicleCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Structures, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Structures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StructureCrates, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> StructureCrates;
    
public:
    UStockpileUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Vehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleCrates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Structures();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StructureCrates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReservableItemCrates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Items();
    
};

