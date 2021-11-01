#include <stdio.h>
#include "point.h"

void point_to_string(char *buffer, struct Point point)
{
    sprintf(buffer, "(%2.2f, %2.2f)", point.x, point.y);
}

void print_point(struct Point point)
{
    char string[100];
    point_to_string(string, point);
    printf("%s\n", string);
}