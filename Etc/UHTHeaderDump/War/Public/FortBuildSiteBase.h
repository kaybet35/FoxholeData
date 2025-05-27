#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "FortBuildSiteBase.generated.h"

UCLASS(Blueprintable)
class WAR_API AFortBuildSiteBase : public AStructureBuildSite {
    GENERATED_BODY()
public:
    AFortBuildSiteBase(const FObjectInitializer& ObjectInitializer);

};

