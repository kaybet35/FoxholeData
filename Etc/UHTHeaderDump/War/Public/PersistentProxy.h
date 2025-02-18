#pragma once
#include "CoreMinimal.h"
#include "LandscapeEnvironmentActor.h"
#include "PersistentActor.h"
#include "PersistentProxy.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API APersistentProxy : public ALandscapeEnvironmentActor, public IPersistentActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
public:
    APersistentProxy(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

