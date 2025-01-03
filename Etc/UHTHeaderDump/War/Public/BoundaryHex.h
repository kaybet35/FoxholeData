#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BoundaryHex.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API ABoundaryHex : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EditorMesh;
    
public:
    ABoundaryHex(const FObjectInitializer& ObjectInitializer);

};

