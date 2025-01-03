#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "LocationMeshStop.h"
#include "LocationSkeletalMeshStop.h"
#include "LocationMultiplexedMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API ULocationMultiplexedMeshComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationMeshStop> MeshStops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLocationSkeletalMeshStop> SkeletalMeshStops;
    
public:
    ULocationMultiplexedMeshComponent(const FObjectInitializer& ObjectInitializer);

};

