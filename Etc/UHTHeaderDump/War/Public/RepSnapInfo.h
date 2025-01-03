#pragma once
#include "CoreMinimal.h"
#include "ESnapType.h"
#include "ModificationSocketPreviewInfo.h"
#include "RepSnapInfo.generated.h"

class UBuildSocketComponent;
class USplineConnectorComponent;

USTRUCT(BlueprintType)
struct FRepSnapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESnapType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModificationSocketPreviewInfo ModificationSocketPreviewInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* TargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineConnectorComponent* TargetPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathPackedAlpha;
    
    WAR_API FRepSnapInfo();
};

