#pragma once
#include "CoreMinimal.h"
#include "EWeatherType.h"
#include "UserComponent.h"
#include "WeatherStationID.h"
#include "WeatherStationUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWeatherStationUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EWeatherType UpcomingWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 UpcomingPeakIntensity;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int8 UpcomingStartTimeHours;
    
    UWeatherStationUserComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDisconnectFromNetwork(const bool bResetConnectionTo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerConnectToNetwork(const FWeatherStationID GlobalID);
    
};

