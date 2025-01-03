#pragma once
#include "CoreMinimal.h"
#include "AssemblyItem.h"
#include "AssemblyModification.generated.h"

USTRUCT(BlueprintType)
struct FAssemblyModification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssemblyItem> AssemblyItems;
    
    WAR_API FAssemblyModification();
};

