#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CrossRegionActorManager.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class WAR_API UCrossRegionActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> AllRemoteActors;
    
public:
    UCrossRegionActorManager();

};

