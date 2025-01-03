#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ENetRole -FallbackName=ENetRole
#include "EActivityStateDebugTraceType.h"
#include "ECharacterActivityState.h"
#include "ActivityStateDebugTrace.generated.h"

USTRUCT(BlueprintType)
struct FActivityStateDebugTrace {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENetRole> Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityStateDebugTraceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterActivityState ActivityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SequenceNumber;
    
    WAR_API FActivityStateDebugTrace();
};

