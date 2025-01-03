#pragma once
#include "CoreMinimal.h"
#include "EAccessLevel.h"
#include "EFacilityRefineryItemsType.h"
#include "FacilityRefineryOrder.h"
#include "UserComponent.h"
#include "FacilityRefineryUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UFacilityRefineryUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Order, meta=(AllowPrivateAccess=true))
    FFacilityRefineryOrder Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PendingOrderCount, meta=(AllowPrivateAccess=true))
    uint8 PendingOrderCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OrderCount, meta=(AllowPrivateAccess=true))
    uint8 OrderCount;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ItemInputBuffer, meta=(AllowPrivateAccess=true))
    int16 ItemInputBuffer;
    
    UFacilityRefineryUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(Reliable, Server)
    void ServerSubmitResources(const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount);
    
    UFUNCTION(Reliable, Server)
    void ServerStartNewOrderWithResources(const uint8 Index, const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount);
    
    UFUNCTION(Reliable, Server)
    void ServerSetConversionInfo(const int8 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetAccessLevel(const EAccessLevel AccessLevel);
    
    UFUNCTION(Reliable, Server)
    void ServerRetrieveResources(const EFacilityRefineryItemsType ItemsType, const uint8 ItemIndex, const uint16 Amount, const bool bRetrieveAsCrates, const bool bSubmitToStockpile);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PendingOrderCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OrderCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Order();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemInputBuffer();
    
};

