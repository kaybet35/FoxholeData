#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportHierarchy.generated.h"

UENUM(BlueprintType)
enum class EDatasmithImportHierarchy : uint8 {
    UseMultipleActors,
    UseSingleActor,
    UseOneBlueprint,
};

