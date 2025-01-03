#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "RuinedMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URuinedMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    URuinedMeshComponent(const FObjectInitializer& ObjectInitializer);

};

