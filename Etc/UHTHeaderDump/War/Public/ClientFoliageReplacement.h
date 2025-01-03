#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EClientFoliageReplacementState.h"
#include "ClientFoliageReplacement.generated.h"

class UFoliageInstancedStaticMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API AClientFoliageReplacement : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CriticalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EClientFoliageReplacementState ReplacementState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFoliageInstancedStaticMeshComponent* OriginalComponent;
    
    AClientFoliageReplacement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateChanged(EClientFoliageReplacementState State);
    
};

