#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AssemblyStationAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UAssemblyStationAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UAssemblyStationAnimInstance();

};

