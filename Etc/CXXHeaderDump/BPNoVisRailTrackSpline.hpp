#ifndef UE4SS_SDK_BPNoVisRailTrackSpline_HPP
#define UE4SS_SDK_BPNoVisRailTrackSpline_HPP

class ABPNoVisRailTrackSpline_C : public ABPRailTrackSpline_C
{
    class UArrowComponent* RailStartArrowVis1;                                        // 0x0890 (size: 0x8)
    class UArrowComponent* RailStartArrowVis;                                         // 0x0898 (size: 0x8)
    class UStaticMeshComponent* RailEndVis;                                           // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* RailStartVis;                                         // 0x08A8 (size: 0x8)

}; // Size: 0x8B0

#endif
