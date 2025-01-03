#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TravelBlockingArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API ATravelBlockingArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* TravelBlockingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockOutgoing;
    
    ATravelBlockingArea(const FObjectInitializer& ObjectInitializer);

};

