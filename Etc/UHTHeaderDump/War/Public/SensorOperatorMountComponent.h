#pragma once
#include "CoreMinimal.h"
#include "ActivityStateChange.h"
#include "SubmarineMountComponent.h"
#include "SensorOperatorMountComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USensorOperatorMountComponent : public USubmarineMountComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElectricityCost;
    
    USensorOperatorMountComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(FActivityStateChange ActivityStateChange, bool bIsOmnidirectional);
    
};

