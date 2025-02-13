#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESkyLightSourceType -FallbackName=ESkyLightSourceType
#include "DatasmithObjectTemplate.h"
#include "DatasmithSkyLightComponentTemplate.generated.h"

class UTextureCube;

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESkyLightSourceType> SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CubemapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* CubeMap;
    
    UDatasmithSkyLightComponentTemplate();

};

