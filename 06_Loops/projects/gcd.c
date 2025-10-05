/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 6
 * Project 1
 *********************************************************/

/* Calculates the greatest common divisor between two integers  */

#include <stdio.h>

int main(void)
{
    int gcd = 1; // Everything is divisible by 1
    int num1 = 1;
    int num2 = 1;
    int min = -1;

    printf("This program calculates the greatest common divisor.\n");
    printf("Enter two numbers (separated by a space): ");
    scanf("%d%d", &num1, &num2);

    if (num1 < num2) {
        min = num1;
    } else {
        min = num2;
    }

    for (int i=min; i >= 1; i--) {

        if ((num1 % i == 0) && (num2 % i == 0)) {
            gcd = i;
        }

        if (i <= gcd) {
            // we have already found the GCD.
            // No need for further checks.

            // There's probably a way to do this in the
            // loop declaration itself, but this feels
            // more readable.
            break;
        }

    }

    printf("GCD: %d\n", gcd);

}


