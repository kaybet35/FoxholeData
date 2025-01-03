#pragma once
#include "CoreMinimal.h"
#include "RailVehicle.h"
#include "ReplicatedShippableData.h"
#include "SavedShippableData.h"
#include "Templates/SubclassOf.h"
#include "FlatbedRailVehicle.generated.h"

class AGlobalShippableInfo;
class UMeshComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AFlatbedRailVehicle : public ARailVehicle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGlobalShippableInfo> GlobalShippableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentShippable, meta=(AllowPrivateAccess=true))
    FName CurrentShippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShippableData, meta=(AllowPrivateAccess=true))
    FReplicatedShippableData ShippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedShippableData SavedData;
    
public:
    AFlatbedRailVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShippableData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentShippable();
    
};

