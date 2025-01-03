#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "AccessBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UAccessBoxComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemHolderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StockpileIndex;
    
    UAccessBoxComponent(const FObjectInitializer& ObjectInitializer);

};

