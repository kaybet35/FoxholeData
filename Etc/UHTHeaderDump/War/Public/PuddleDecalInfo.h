#pragma once
#include "CoreMinimal.h"
#include "DecalData.h"
#include "PuddleDecalInfo.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FPuddleDecalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData Decal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> RequiredPhysMats;
    
    WAR_API FPuddleDecalInfo();
};

