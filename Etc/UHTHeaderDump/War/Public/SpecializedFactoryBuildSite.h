#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "SpecializedFactoryBuildSite.generated.h"

class USpecializedFactoryComponent;

UCLASS(Blueprintable)
class WAR_API ASpecializedFactoryBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    USpecializedFactoryComponent* SpecializedFactoryComponent;
    
public:
    ASpecializedFactoryBuildSite(const FObjectInitializer& ObjectInitializer);

};

