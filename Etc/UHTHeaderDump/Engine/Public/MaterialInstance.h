#pragma once
#include "CoreMinimal.h"
#include "FontParameterValue.h"
#include "MaterialInstanceBasePropertyOverrides.h"
#include "MaterialInterface.h"
#include "RuntimeVirtualTextureParameterValue.h"
#include "ScalarParameterValue.h"
#include "StaticParameterSet.h"
#include "TextureParameterValue.h"
#include "VectorParameterValue.h"
#include "MaterialInstance.generated.h"

class UObject;
class UPhysicalMaterial;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMaterialInstance : public UMaterialInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasStaticPermutationResource: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideSubsurfaceProfile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterValue> ScalarParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterValue> VectorParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureParameterValue> TextureParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFontParameterValue> FontParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialInstanceBasePropertyOverrides BasePropertyOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PermutationTextureReferences;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaticParameterSet StaticParameters;
    
public:
    UMaterialInstance();

};

