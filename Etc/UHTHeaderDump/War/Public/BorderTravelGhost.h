#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BorderTravelGhost.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ABorderTravelGhost : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
public:
    ABorderTravelGhost(const FObjectInitializer& ObjectInitializer);

};

