#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "WaterStencilComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWaterStencilComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UWaterStencilComponent(const FObjectInitializer& ObjectInitializer);

};

