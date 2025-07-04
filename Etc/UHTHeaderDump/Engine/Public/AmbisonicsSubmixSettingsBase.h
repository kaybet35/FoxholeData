#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AmbisonicsSubmixSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API UAmbisonicsSubmixSettingsBase : public UObject {
    GENERATED_BODY()
public:
    UAmbisonicsSubmixSettingsBase();

};

