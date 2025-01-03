#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMapExtentMarkerLocation.h"
#include "MapExtentMarker.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AMapExtentMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapExtentMarkerLocation Location;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MarkerScene;
    
public:
    AMapExtentMarker(const FObjectInitializer& ObjectInitializer);

};

