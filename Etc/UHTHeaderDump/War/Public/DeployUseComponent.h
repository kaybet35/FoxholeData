#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "DeployUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UDeployUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UDeployUseComponent(const FObjectInitializer& ObjectInitializer);

};

