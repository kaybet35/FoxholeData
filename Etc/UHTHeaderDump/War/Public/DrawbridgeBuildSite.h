#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "DrawbridgeBuildSite.generated.h"

class UPersistentProxyComponent;

UCLASS(Blueprintable)
class WAR_API ADrawbridgeBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* SideAProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* SideBProxy;
    
    ADrawbridgeBuildSite(const FObjectInitializer& ObjectInitializer);

};

