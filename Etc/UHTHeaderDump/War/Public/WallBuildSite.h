#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "WallBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API AWallBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
    AWallBuildSite(const FObjectInitializer& ObjectInitializer);

};

