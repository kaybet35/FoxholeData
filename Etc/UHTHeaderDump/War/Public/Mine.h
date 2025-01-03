#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "DamageableActor.h"
#include "EArmourType.h"
#include "Explosive.h"
#include "PersistentActor.h"
#include "Mine.generated.h"

class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AMine : public AExplosive, public IDamageableActor, public IPersistentActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggeredByInfantry: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTriggeredByVehicles: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> RoadPhysicalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmourType ArmourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime SpawnTime;
    
public:
    AMine(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    

    // Fix for true pure virtual functions not being implemented
};

