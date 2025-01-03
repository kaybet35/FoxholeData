#pragma once
#include "CoreMinimal.h"
#include "DestroyedStructure.h"
#include "DestroyedDrawbridge.generated.h"

class UPersistentProxyComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedDrawbridge : public ADestroyedStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* SideAProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* SideBProxy;
    
    ADestroyedDrawbridge(const FObjectInitializer& ObjectInitializer);

};

