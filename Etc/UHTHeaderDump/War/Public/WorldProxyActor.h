#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "WorldProxyActor.generated.h"

UCLASS(Blueprintable)
class WAR_API AWorldProxyActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorTypes;
    
    AWorldProxyActor(const FObjectInitializer& ObjectInitializer);

};

