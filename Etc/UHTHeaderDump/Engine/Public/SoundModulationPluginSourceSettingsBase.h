#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundModulationPluginSourceSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API USoundModulationPluginSourceSettingsBase : public UObject {
    GENERATED_BODY()
public:
    USoundModulationPluginSourceSettingsBase();

};

