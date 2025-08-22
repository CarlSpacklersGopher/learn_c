// Calculates the volume of a sphere.

#include <stdio.h>

#define PI 3.14159265359f

int main(void)
{
    int radius = 10;

    float volume = (4.0f / 3.0f) * PI * radius * radius * radius;

    printf("Volume of a sphere with radius %d: %.3f\n", radius, volume);
}
