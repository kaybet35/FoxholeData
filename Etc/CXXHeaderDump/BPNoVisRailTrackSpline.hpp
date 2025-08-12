#ifndef UE4SS_SDK_BPNoVisRailTrackSpline_HPP
#define UE4SS_SDK_BPNoVisRailTrackSpline_HPP

class ABPNoVisRailTrackSpline_C : public ABPRailTrackSpline_C
{
    class UArrowComponent* RailStartArrowVis1;                                        // 0x08F0 (size: 0x8)
    class UArrowComponent* RailStartArrowVis;                                         // 0x08F8 (size: 0x8)
    class UStaticMeshComponent* RailEndVis;                                           // 0x0900 (size: 0x8)
    class UStaticMeshComponent* RailStartVis;                                         // 0x0908 (size: 0x8)

}; // Size: 0x910

#endif
