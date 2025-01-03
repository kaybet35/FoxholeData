#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameViewportClient -FallbackName=GameViewportClient
#include "WarGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UWarGameViewportClient();

};

