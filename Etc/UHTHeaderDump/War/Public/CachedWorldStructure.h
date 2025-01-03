#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Templates/SubclassOf.h"
#include "CachedWorldStructure.generated.h"

class AStructure;

USTRUCT(BlueprintType)
struct FCachedWorldStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStructure> StructureClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldPosition;
    
    WAR_API FCachedWorldStructure();
};

