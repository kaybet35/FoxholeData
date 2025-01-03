#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DatasmithTessellationOptions.h"
#include "DatasmithCommonTessellationOptions.generated.h"

UCLASS(Blueprintable, Transient, Config=EditorPerProjectUserSettings)
class DATASMITHCONTENT_API UDatasmithCommonTessellationOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithTessellationOptions Options;
    
    UDatasmithCommonTessellationOptions();

};

