#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FoliageModificationInfo.generated.h"

class AClientFoliageReplacement;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FFoliageModificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* OriginalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AClientFoliageReplacement> Replacement;
    
    WAR_API FFoliageModificationInfo();
};

