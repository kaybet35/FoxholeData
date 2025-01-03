#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
#include "ClothCollisionPrim_Convex.generated.h"

USTRUCT(BlueprintType)
struct FClothCollisionPrim_Convex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlane> Planes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneIndex;
    
    CLOTHINGSYSTEMRUNTIMEINTERFACE_API FClothCollisionPrim_Convex();
};

