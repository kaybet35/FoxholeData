#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "ReplicatedShippableData.h"
#include "SavedShippableData.h"
#include "Templates/SubclassOf.h"
#include "Shippable.generated.h"

class AGlobalShippableInfo;
class UMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AShippable : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGlobalShippableInfo> GlobalShippableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ShippableType, meta=(AllowPrivateAccess=true))
    FName ShippableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShippableData, meta=(AllowPrivateAccess=true))
    FReplicatedShippableData ShippableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSavedShippableData SavedData;
    
public:
    AShippable(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShippableType();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ShippableData();
    
};

