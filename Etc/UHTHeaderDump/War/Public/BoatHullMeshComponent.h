#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BoatHullMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBoatHullMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UBoatHullMeshComponent(const FObjectInitializer& ObjectInitializer);

};

