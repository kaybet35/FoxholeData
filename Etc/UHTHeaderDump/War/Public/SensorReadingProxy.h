#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SensorReadingProxy.generated.h"

class UMaterialInterface;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API ASensorReadingProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    ASensorReadingProxy(const FObjectInitializer& ObjectInitializer);

};

