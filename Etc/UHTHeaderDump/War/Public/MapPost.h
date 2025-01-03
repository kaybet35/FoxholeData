#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EMapPostType.h"
#include "MapPostEntry.h"
#include "MapPostVote.h"
#include "MapPost.generated.h"

USTRUCT(BlueprintType)
struct FMapPost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapPostEntry OriginalEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapPostEntry> ReplyList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalizedMapCoords;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapPostType MapPostType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMapPostVote> VoteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CommsRating;
    
    WAR_API FMapPost();
};

