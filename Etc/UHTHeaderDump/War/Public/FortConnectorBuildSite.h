#pragma once
#include "CoreMinimal.h"
#include "FortBuildSiteBase.h"
#include "FortConnectorBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API AFortConnectorBuildSite : public AFortBuildSiteBase {
    GENERATED_BODY()
public:
    AFortConnectorBuildSite(const FObjectInitializer& ObjectInitializer);

};

