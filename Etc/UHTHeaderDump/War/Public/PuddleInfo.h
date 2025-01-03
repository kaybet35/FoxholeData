#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PuddleInfo.generated.h"

class AActor;
class UDecalComponent;
class UPuddleComponent;

USTRUCT(BlueprintType)
struct FPuddleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPuddleComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SpawnBlocker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rainfall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRainfall;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DecalIx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DevastatedDecalIx;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 SpawnedDecalIx;
    
    WAR_API FPuddleInfo();
};

