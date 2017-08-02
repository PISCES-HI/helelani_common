#ifndef HELELANICOMMON_H
#define HELELANICOMMON_H

#include <cmath>
#define WHEEL_DIAMETER 0.6f

namespace helelani_common
{

static float RotationsToMeters(float rots) {
    return WHEEL_DIAMETER * float(M_PI) * rots;
}

}

#endif // HELELANICOMMON_H