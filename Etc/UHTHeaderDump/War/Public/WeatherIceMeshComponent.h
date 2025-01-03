#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "WeatherIceMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWeatherIceMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UWeatherIceMeshComponent(const FObjectInitializer& ObjectInitializer);

};

