// Checks the manual output of the text exercises.

#include <stdio.h>

int main(void)
{
    // #2
    int i, j, k;
    i = 10; j = 5;
    printf("2a) %d\n", !i < j);

    i = 2; j = 1;
    printf("2b) %d\n", !!i + !j);
    
    i = 5; j = 0; k = -5;
    printf("2c) %d\n", i && j || k);
    
    i = 1; j = 2; k = 3;
    printf("2c) %d\n", i < j || k);
}
