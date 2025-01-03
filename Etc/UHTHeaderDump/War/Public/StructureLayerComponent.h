#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "StructureLayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UStructureLayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 IncludedInLayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ExcludedByLayers;
    
    UStructureLayerComponent(const FObjectInitializer& ObjectInitializer);

};

