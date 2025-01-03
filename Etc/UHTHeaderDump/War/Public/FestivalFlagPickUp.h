#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "FestivalFlagPickUp.generated.h"

class UMaterialInterface;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AFestivalFlagPickUp : public AItemPickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FlagMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ColonialMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* WardenMaterial;
    
public:
    AFestivalFlagPickUp(const FObjectInitializer& ObjectInitializer);

};

