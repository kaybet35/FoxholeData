#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ParkingSpotComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UParkingSpotComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UParkingSpotComponent(const FObjectInitializer& ObjectInitializer);

};

