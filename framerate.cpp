#include "framerate.h"
#include <math.h>
#include <vector>

float FrameRateCalculator::GetFrameRate(float time)
{
    counter++;
    accumulated_time += time;
    if (counter < 100) {
        return frame_rate;
    }

    frame_rate = counter / accumulated_time;
    counter = 0;
    accumulated_time = 0.0;
    return frame_rate;
}
