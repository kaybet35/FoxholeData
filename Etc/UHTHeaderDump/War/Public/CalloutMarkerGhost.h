#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CalloutMarkerGhost.generated.h"

class ASimPlayerController;

UCLASS(Blueprintable)
class WAR_API ACalloutMarkerGhost : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimPlayerController* SimPlayerController;
    
public:
    ACalloutMarkerGhost(const FObjectInitializer& ObjectInitializer);

};

