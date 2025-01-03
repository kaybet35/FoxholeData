#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LuminARUObjectManager.generated.h"

class UARPin;

UCLASS(Blueprintable)
class ULuminARUObjectManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UARPin*> AllAnchors;
    
    ULuminARUObjectManager();

};

