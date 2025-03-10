#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InteractiveToolsContext.generated.h"

class UInputRouter;
class UInteractiveGizmoManager;
class UInteractiveToolManager;

UCLASS(Blueprintable, Transient)
class INTERACTIVETOOLSFRAMEWORK_API UInteractiveToolsContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputRouter* InputRouter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveToolManager* ToolManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveGizmoManager* GizmoManager;
    
    UInteractiveToolsContext();

};

