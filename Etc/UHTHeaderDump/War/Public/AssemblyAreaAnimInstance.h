#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "EAssemblyAreaState.h"
#include "AssemblyAreaAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UAssemblyAreaAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAssemblyAreaState AssemblyAreaState;
    
    UAssemblyAreaAnimInstance();

};
