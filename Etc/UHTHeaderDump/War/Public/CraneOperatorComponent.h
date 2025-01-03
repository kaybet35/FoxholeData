#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "CraneOperatorInterface.h"
#include "EShippableStatus.h"
#include "MountComponent.h"
#include "CraneOperatorComponent.generated.h"

class AActor;
class ASimVehicle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UCraneOperatorComponent : public UMountComponent, public ICraneOperatorInterface {
    GENERATED_BODY()
public:
    UCraneOperatorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateHookRotation(const float HookRotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateAimLocation(FVector_NetQuantize AimLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTransferShippableTo(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleDeployment();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIsScoping(const bool bIsScoping);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpShippableFrom(ASimVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPickUpShippable(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropShippable();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientShowShippableStatus(const EShippableStatus Status);
    

    // Fix for true pure virtual functions not being implemented
};

