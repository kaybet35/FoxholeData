#pragma once
#include "CoreMinimal.h"
#include "FortTurret.h"
#include "FortTurretMG.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AFortTurretMG : public AFortTurret {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
public:
    AFortTurretMG(const FObjectInitializer& ObjectInitializer);

};

