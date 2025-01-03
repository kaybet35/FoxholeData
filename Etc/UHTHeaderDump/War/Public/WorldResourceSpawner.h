#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "WorldResourceSpawner.generated.h"

class AWorldResource;

UCLASS(Blueprintable)
class WAR_API UWorldResourceSpawner : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWorldResource> ResourceClass;
    
public:
    UWorldResourceSpawner();

};

