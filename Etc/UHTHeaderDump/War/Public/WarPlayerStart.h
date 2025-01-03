#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerStart -FallbackName=PlayerStart
#include "WarPlayerStart.generated.h"

class AActor;

UCLASS(Blueprintable)
class WAR_API AWarPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PlayerStartOwner;
    
    AWarPlayerStart(const FObjectInitializer& ObjectInitializer);

};

