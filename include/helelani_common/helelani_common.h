#ifndef HELELANICOMMON_H
#define HELELANICOMMON_H

#include <cmath>
#define DEFAULT_WHEEL_DIAMETER 0.6f

namespace helelani_common
{

static float RotationsToMeters(float diameter, float rots) {
    return diameter * float(M_PI) * rots;
}

}

#endif // HELELANICOMMON_H