#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMonumentType.h"
#include "Monument.generated.h"

class UStaticMesh;
class UStaticMeshComponent;
class UUseMonumentComponent;

UCLASS(Blueprintable)
class WAR_API AMonument : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MonumentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> MonumentTypeMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUseMonumentComponent* UseMonumentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MonumentIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonumentType MonumentType;
    
public:
    AMonument(const FObjectInitializer& ObjectInitializer);

};

