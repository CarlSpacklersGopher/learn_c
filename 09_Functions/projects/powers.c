/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 9
 * Project 6
 *********************************************************/

/*
 * Calculates the polynomial
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * */

#include <stdio.h>

int exponent(int base, int exponent) {
    int product = base;
    for (int i=1; i < exponent; i++)
        product = product * base;
    return product;
}


int main(void)
{
    double x = 0;

    printf("Calcualtes 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.\n");
    printf("Enter a value for x: ");
    scanf("%lf", &x);

    double equation = 3 * exponent(x, 5) + 2 * exponent(x, 4) - 5 * exponent(x, 3) - 1 * exponent(x, 2) + 7 * x - 6;

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2lf\n", equation);

}


