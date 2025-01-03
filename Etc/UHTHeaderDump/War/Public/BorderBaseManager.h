#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BorderBaseManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class WAR_API UBorderBaseManager : public UObject {
    GENERATED_BODY()
public:
    UBorderBaseManager();

};

