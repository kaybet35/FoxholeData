#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "DamageProfiles.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class WAR_API ADamageProfiles : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    ADamageProfiles(const FObjectInitializer& ObjectInitializer);

};

