#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Templates/SubclassOf.h"
#include "VehicleSpawnLocationComponent.generated.h"

class ASimVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UVehicleSpawnLocationComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASimVehicle> VehicleClass;
    
public:
    UVehicleSpawnLocationComponent(const FObjectInitializer& ObjectInitializer);

};

