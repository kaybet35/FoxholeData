#pragma once
#include "CoreMinimal.h"
#include "RoomComponent.h"
#include "RampRoomComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URampRoomComponent : public URoomComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RampOperationVolumeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* RampOperationVolume;
    
    URampRoomComponent(const FObjectInitializer& ObjectInitializer);

};

