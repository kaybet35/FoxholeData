#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Template.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API ATemplate : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitiallyDisableCollisions;
    
    ATemplate(const FObjectInitializer& ObjectInitializer);

};

