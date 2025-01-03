#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "LoreData.h"
#include "LoreList.generated.h"

UCLASS(Blueprintable)
class WAR_API ALoreList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLoreData> LoreDataTable;
    
public:
    ALoreList(const FObjectInitializer& ObjectInitializer);

};

