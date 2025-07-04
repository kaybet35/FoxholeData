#pragma once
#include "CoreMinimal.h"
#include "ESubmixChannelFormat.generated.h"

UENUM(BlueprintType)
enum class ESubmixChannelFormat : uint8 {
    Device,
    Stereo,
    Quad,
    FiveDotOne,
    SevenDotOne,
    Ambisonics,
    Count,
};

