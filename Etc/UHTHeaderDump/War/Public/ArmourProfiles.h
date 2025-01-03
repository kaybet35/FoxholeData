#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "ArmourProfiles.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class WAR_API AArmourProfiles : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    AArmourProfiles(const FObjectInitializer& ObjectInitializer);

};

