#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioVolume -FallbackName=AudioVolume
#include "SubmarineAudioVolume.generated.h"

class ASubmarineVehicle;

UCLASS(Blueprintable)
class WAR_API ASubmarineAudioVolume : public AAudioVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASubmarineVehicle* AssociatedSubmarine;
    
    ASubmarineAudioVolume(const FObjectInitializer& ObjectInitializer);

};

