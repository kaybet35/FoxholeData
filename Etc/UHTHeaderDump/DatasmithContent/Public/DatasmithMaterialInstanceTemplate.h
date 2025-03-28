#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "DatasmithObjectTemplate.h"
#include "DatasmithStaticParameterSetTemplate.h"
#include "DatasmithMaterialInstanceTemplate.generated.h"

class UTexture;

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ScalarParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLinearColor> VectorParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithStaticParameterSetTemplate StaticParameters;
    
    UDatasmithMaterialInstanceTemplate();

};

