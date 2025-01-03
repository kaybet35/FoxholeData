#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CalloutMarker.generated.h"

UCLASS(Blueprintable)
class WAR_API ACalloutMarker : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Lifetime_Sec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
public:
    ACalloutMarker(const FObjectInitializer& ObjectInitializer);

};

