#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WarPlayerProfile.h"
#include "PlayerProfileManager.generated.h"

UCLASS(Blueprintable)
class WAR_API UPlayerProfileManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FWarPlayerProfile> CachedWarProfileMap;
    
public:
    UPlayerProfileManager();

};

