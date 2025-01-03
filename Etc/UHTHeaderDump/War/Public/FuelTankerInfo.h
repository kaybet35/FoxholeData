#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FuelQuantity.h"
#include "FuelTankerInfo.generated.h"

class AActor;
class UAudioComponent;
class UCableComponent;
class UGenericStockpileComponent;
class UItemHolderComponent;
class UMaterialInterface;
class USoundCue;
class UStealthComponent;

USTRUCT(BlueprintType)
struct FFuelTankerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* OwnerItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* OwnerGenericStockpile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UStealthComponent* OwnerStealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UAudioComponent* RefuelAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float AmountRefueledPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float RefuelCycleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FVector FuelLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USoundCue* RefuelActivateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    USoundCue* RefuelSoundLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    UMaterialInterface* RefuelCableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, meta=(AllowPrivateAccess=true))
    UCableComponent* RefuelCableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActorToRefuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelQuantity FuelBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    WAR_API FFuelTankerInfo();
};

