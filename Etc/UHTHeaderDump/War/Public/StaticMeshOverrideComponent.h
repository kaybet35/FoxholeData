#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "StaticMeshOverride.h"
#include "StaticMeshOverrideComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UStaticMeshOverrideComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticMeshOverride> StaticMeshOverrides;
    
public:
    UStaticMeshOverrideComponent(const FObjectInitializer& ObjectInitializer);

};

