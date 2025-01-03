#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FootPrintActorInfo.generated.h"

class ADecalActor;
class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FFootPrintActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADecalActor> FootPrintActorLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADecalActor> FootPrintActorRight;
    
    WAR_API FFootPrintActorInfo();
};

