#pragma once
#include "CoreMinimal.h"
#include "ResourceAmounts.h"
#include "Templates/SubclassOf.h"
#include "ModificationTier.generated.h"

class AModificationTemplate;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FModificationTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceAmounts ResourceAmounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResourceAmounts RemoveCostOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTemplateActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TemplateMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AModificationTemplate> TemplateActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PreviewMesh;
    
    WAR_API FModificationTier();
};

