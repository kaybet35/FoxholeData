#pragma once
#include "CoreMinimal.h"
#include "AnimCompress.h"
#include "AnimCompress_Automatic.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAnimCompress_Automatic : public UAnimCompress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxEndEffectorError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRunCurrentDefaultCompressor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoReplaceIfExistingErrorTooGreat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRaiseMaxErrorToExisting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTryExhaustiveSearch: 1;
    
    UAnimCompress_Automatic();

};

