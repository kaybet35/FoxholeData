#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Info -FallbackName=Info
#include "EItemProfileType.h"
#include "ItemProfileData.h"
#include "ItemProfileTable.generated.h"

UCLASS(Blueprintable)
class WAR_API AItemProfileTable : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EItemProfileType, FItemProfileData> ItemProfileTable;
    
public:
    AItemProfileTable(const FObjectInitializer& ObjectInitializer);

};

