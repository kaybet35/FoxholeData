#pragma once
#include "CoreMinimal.h"
#include "MiscItemComponent.h"
#include "RadioBackpackItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URadioBackpackItemComponent : public UMiscItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
public:
    URadioBackpackItemComponent(const FObjectInitializer& ObjectInitializer);

};

