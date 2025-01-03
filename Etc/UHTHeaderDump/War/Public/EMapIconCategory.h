#pragma once
#include "CoreMinimal.h"
#include "EMapIconCategory.generated.h"

UENUM()
enum class EMapIconCategory : uint16 {
    None,
    MapIntel,
    Resources,
    Bases = 4,
    OtherWorldStructures = 8,
    MapMarkers = 16,
    MapPosts = 32,
    RegionZones = 64,
    RailwayTracks = 128,
    All = 65535,
};

