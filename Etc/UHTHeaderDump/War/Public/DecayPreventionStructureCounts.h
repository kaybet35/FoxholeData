#pragma once
#include "CoreMinimal.h"
#include "DecayPreventionStructureCounts.generated.h"

USTRUCT(BlueprintType)
struct FDecayPreventionStructureCounts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PossibleStructureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClosestStructureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredStructureCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreferredSuppliesPerTick;
    
    WAR_API FDecayPreventionStructureCounts();
};

