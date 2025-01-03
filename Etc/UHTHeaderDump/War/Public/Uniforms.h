#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Uniform.h"
#include "Uniforms.generated.h"

UCLASS(Blueprintable)
class WAR_API UUniforms : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniform Data[21];
    
    UUniforms();

};

