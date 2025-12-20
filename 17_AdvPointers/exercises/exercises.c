/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 17 - Advanced Pointers
 * Exercises
 *********************************************************/

/*
 * File containing selected exercises from the chapter
 * */

/* #include directives */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* #define directives */

/* Type definitions */

/* Global variable declarations */

/* Prototypes for functions other than main */
void *my_malloc(size_t size);

/* Definition of main */
int main(void)
{

}

/* Definition of other functions */

/*********************************************************
 * 1) malloc wrapper that does the return type checking already
 ********************************************************/
void *my_malloc(size_t size) {
    void *p;

    p = malloc(size);
    if (p == NULL) {
        printf("Unable to allocate memory.");
        exit(EXIT_FAILURE);
    }
    return p;
}

/*********************************************************
 * 2) creates a copy of a string using dynamic storage allocation
 ********************************************************/
char *duplicate(const char *str) {
    char *str_dup = malloc(strlen(str) + 1);
    if (str_dup == NULL) {
        printf("Unable to allocate memory.");
        exit(EXIT_FAILURE);
    }
    strcpy(str_dup, str);
    return str_dup;
}




