/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 5
 * Project 1
 *********************************************************/

/* Counts the digits in the entered number (0-9999) */

#include <stdio.h>

int main(void)
{
    int entry, count;
  
    printf("Enter a number: ");
    scanf("%d", &entry);

    if (entry < 10) {
        count = 1;
    } else if (entry < 100) {
        count = 2;
    } else if (entry < 1000) {
        count = 3;
    } else {
        count = 4;
    }

    printf("%d\n", count);

    return count;
}


