#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "ConstructionGunnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UConstructionGunnerComponent : public UMountComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsAdvancedConstruction;
    
public:
    UConstructionGunnerComponent(const FObjectInitializer& ObjectInitializer);

};

