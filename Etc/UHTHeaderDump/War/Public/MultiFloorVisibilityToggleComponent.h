#pragma once
#include "CoreMinimal.h"
#include "VisibilityToggleAreaComponent.h"
#include "MultiFloorVisibilityToggleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMultiFloorVisibilityToggleComponent : public UVisibilityToggleAreaComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FloorVisibilityBitmask;
    
    UMultiFloorVisibilityToggleComponent(const FObjectInitializer& ObjectInitializer);

};

