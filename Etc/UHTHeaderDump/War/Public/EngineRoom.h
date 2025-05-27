#pragma once
#include "CoreMinimal.h"
#include "FacilityRefinery.h"
#include "EngineRoom.generated.h"

class UAnimMontage;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API AEngineRoom : public AFacilityRefinery {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
public:
    AEngineRoom(const FObjectInitializer& ObjectInitializer);

};

