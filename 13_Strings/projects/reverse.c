/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 13
 * Project 4
 *********************************************************/

/*
 * Echoes the provided command line args in reverse order
 * */

/* #include directives */
#include <stdio.h>

/* #define directives */

/* Type definitions */

/* Global variable declarations */

/* Prototypes for functions other than main */

/* Definition of main */
int main(int argc, char *argv[])
{
    for (int i = argc - 1; i > 0; i--) {
        puts(argv[i]);
    }
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


