#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EFacilityMapPostType.h"
#include "EMapPostType.h"
#include "CreateMapPostRequest.generated.h"

USTRUCT(BlueprintType)
struct FCreateMapPostRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalizedMapCoords;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapPostType MapPostType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFacilityMapPostType FacilityMapPostType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsModModeOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    WAR_API FCreateMapPostRequest();
};

