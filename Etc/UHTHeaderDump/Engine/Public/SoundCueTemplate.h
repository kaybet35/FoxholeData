#pragma once
#include "CoreMinimal.h"
#include "SoundCue.h"
#include "SoundCueTemplate.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API USoundCueTemplate : public USoundCue {
    GENERATED_BODY()
public:
    USoundCueTemplate();

};

