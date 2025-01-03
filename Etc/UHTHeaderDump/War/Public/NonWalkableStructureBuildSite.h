#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "NonWalkableStructureBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API ANonWalkableStructureBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
    ANonWalkableStructureBuildSite(const FObjectInitializer& ObjectInitializer);

};

