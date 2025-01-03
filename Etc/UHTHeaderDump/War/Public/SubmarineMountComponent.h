#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "SensorPingResponse.h"
#include "Templates/SubclassOf.h"
#include "SubmarineMountComponent.generated.h"

class ASensorReadingProxy;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USubmarineMountComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASensorReadingProxy> SensorReadingProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ResponseSoundCue;
    
    USubmarineMountComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSensorPingResponse(const TArray<FSensorPingResponse>& Responses, bool bIsIntel);
    
};

