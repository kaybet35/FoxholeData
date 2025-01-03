#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "SubmarineDriverMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USubmarineDriverMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    USubmarineDriverMountComponent(const FObjectInitializer& ObjectInitializer);

};

