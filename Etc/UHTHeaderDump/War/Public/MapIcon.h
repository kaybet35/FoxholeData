#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMapIconType.h"
#include "EMapTeamId.h"
#include "MapIcon.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AMapIcon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapTeamId MapTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType MapIconType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSceneComponent;
    
public:
    AMapIcon(const FObjectInitializer& ObjectInitializer);

};

