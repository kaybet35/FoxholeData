#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "LorePickup.generated.h"

class UReadableTextComponent;

UCLASS(Blueprintable)
class WAR_API ALorePickup : public AItemPickup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReadableTextComponent* ReadableTextComponent;
    
public:
    ALorePickup(const FObjectInitializer& ObjectInitializer);

};

