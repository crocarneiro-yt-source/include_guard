#include <stdio.h>
#include "point.h"
#include "geometry.h"

int main()
{
    struct Point a, b;
    a.x = 0.0f;
    a.y = 1.0f;

    b.x = 1.0;
    b.y = 2.0;

    print_point(a);
    print_point(b);

    float distance = distance_between_points(a, b);
    printf("\n\nDistância entre o ponto e o ponto b é %2.2f.\n", distance);

    return 0;
}