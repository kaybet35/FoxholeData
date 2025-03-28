#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "LuminARSessionFunctionLibrary.generated.h"

class ULuminARSessionConfig;
class UObject;

UCLASS(Blueprintable)
class MAGICLEAPAR_API ULuminARSessionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuminARSessionFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void StartLuminARSession(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ULuminARSessionConfig* Configuration);
    
};

