#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPlacementStatus.h"
#include "NoBuildArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ANoBuildArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* NoBuildComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlacementStatus PlacementStatus;
    
    ANoBuildArea(const FObjectInitializer& ObjectInitializer);

};

