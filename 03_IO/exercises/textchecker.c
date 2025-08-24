// Checks the manual output of the text exercises.

#include <stdio.h>

int main(void)
{
    /*  BLOCK COMMENT OUT PREVIOUS EXAMPLES */
    /*
    // #1
    printf("#1\n");
    printf("12345789012345\n"); // helps see how many spaces are in a string 
    // | characters help show end of string
    printf("%6d,%4d|\n", 86, 1040);
    printf("%12.5e|\n", 30.235);
    printf("%.4f|\n", 83.162);
    printf("%-6.2g|\n", .0000009979);

    // #3
    printf("-----\n\n#3\n");
    int xi1, xi2, xf1, xf2;
    // 3a
    printf("3a\n");
    printf("\"%%d\"       versus \" %%d\"\n");
    scanf("%d", &xi1);
    scanf(" %d", &xi2);
    printf("%d,%d\n", xi1, xi2);
    printf("\n");

    // 3b
    printf("3b\n");
    int x3b1, x3b2, x3b3;
    printf("\"%%d-%%d-%%d\"       versus \"%%d -%%d -%%d\"\n");
    scanf("%d-%d-%d", &x3b1, &x3b2, &x3b3);
    printf("%d|%d|%d\n", x3b1, x3b2, x3b3);
    scanf("%d -%d -%d", &x3b1, &x3b2, &x3b3);
    printf("%d|%d|%d\n", x3b1, x3b2, x3b3);
    printf("\n");


    // #4
    printf("#4\n");
    int i = -1;
    int j = -1;
    float x = -1.0;
    scanf("%d%f%d", &i, &x, &j);
    printf("%d|%f|%d\n", i, x, j);


    */

    // #5
    printf("#5\n");
    float x = -1.0f;
    int i = -1;
    float y = -1.0f;
    scanf("%f%d%f", &x, &i, &y); 
    printf("%f|%d|%f", x, i, y); 


}
