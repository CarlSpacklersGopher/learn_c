/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 13
 * Exercises
 *********************************************************/

/*
 * Allows me to test out the exercises
 * */

/* #include directives */
#include <stdio.h>
#include <ctype.h>

/* #define directives */

/* Type definitions */

/* Global variable declarations */

/* Prototypes for functions other than main */
void part3(void);
int readline(char str[], int n);

/* Definition of main */
int main(void)
{
    // part3();

    /* ------- Part 4 ------- */

    // char s[5];
    // int n = 5;
    // int tmp = 0;
    // tmp = readline(s, n);
    // puts(s);
    // printf("%d\n", tmp);


}

/* Definition of other functions */

/*********************************************************
 * King suggests each function get its own boxed comment.
 * Function name: Purpose of function
 * Parameter list:
 *      - Param 1 - purpose
 *      - Param 2 - purpose
 * Return value:
 *
 * Side effects: (modifying global variables, etc)
 ********************************************************/
void part3(void) {
    int i, j;
    char s[20];
    scanf("%d%s%d", &i, s, &j);

    printf("%d\n", i);
    printf("%s\n", s);
    printf("%d\n", j);

}


/*
 * PART 4 BASE IMPLEMENTATION:
 */
/*
int readline(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
*/



/*
 * DONE: 4a) Skip whitespace at beginning
 */
/*
int readline(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if ((i == 0) && (isspace(ch))) {
            continue;
        } else if (i < n) {
            str[i++] = ch;
        }
    str[i] = '\0';
    return i;
}
*/

/*
 * DONE: b) Stop reading at first whitespace
 */
/*
int readline(char str[], int n) {
    int ch, i = 0;

    while (!isspace(ch = getchar()))
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
*/

/*
 * DONE: c) Stop reading at first newline, then store newline char in string
 */
/*
int readline(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\n';
    str[i + 1] = '\0';
    return i;
}
*/

/*
 * DONE: d) Leave behind characters that it doesn't have room to store
 */

int readline(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < (n - 1)) // n-1 ensures we can add a null terminator
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
