/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>
/*
int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;

}
*/


/*
 * Exercise 3
 * Condense the dweight.c program by 
 * 1) replacing the assignments to height, length, and width with initializers
 * 2) removing the weight variable, instead calculating (volume+165)/166 in the last printf
*/

int main(void)
{
    int height = 8;
    int length = 12;
    int width = 10;
    int volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;

}
