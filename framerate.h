#ifndef RAYCASTER_FRAMERATE_H
#define RAYCASTER_FRAMERATE_H

#include <math.h>
#include <vector>

class FrameRateCalculator
{
public:
    float GetFrameRate(float tick);
    FrameRateCalculator() = default;
    ;

private:
    float frame_rate = 0.0;
    int counter = 0;
    float accumulated_time = 0.0;
};
#endif  // RAYCASTER_FRAMERATE_H
