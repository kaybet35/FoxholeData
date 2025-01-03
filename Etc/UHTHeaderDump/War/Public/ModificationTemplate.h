#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ModificationTemplate.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AModificationTemplate : public AActor {
    GENERATED_BODY()
public:
    AModificationTemplate(const FObjectInitializer& ObjectInitializer);

};

