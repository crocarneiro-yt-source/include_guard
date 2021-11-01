#include <math.h>
#include "geometry.h"

float distance_between_points(struct Point a, struct Point b)
{
    double dx = pow(a.x - b.x, 2);
    double dy = pow(a.y - b.y, 2);

    return sqrt(dx + dy);
}