#pragma once
#include "CoreMinimal.h"
#include "EServerTravelOriginType.h"
#include "EServerTravelStatusOnClient.h"
#include "EWarServerType.h"
#include "ServerTravelClientState.generated.h"

USTRUCT(BlueprintType)
struct FServerTravelClientState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerTravelStatusOnClient Status;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerTravelOriginType OriginType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarServerType OriginServerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBorderTravel;
    
    WAR_API FServerTravelClientState();
};

