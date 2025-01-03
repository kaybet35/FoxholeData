#pragma once
#include "CoreMinimal.h"
#include "EFortModificationType.h"
#include "EFortTier.h"
#include "ModificationSocketPreviewInfo.generated.h"

USTRUCT(BlueprintType)
struct FModificationSocketPreviewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModificationSlotComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortModificationType ModificationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortTier ModificationTier;
    
    WAR_API FModificationSocketPreviewInfo();
};

