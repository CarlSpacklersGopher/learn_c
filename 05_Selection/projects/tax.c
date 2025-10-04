/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 5
 * Project 5
 *********************************************************/

/* Calculates income tax owed when taxable income is entered  */

#include <stdio.h>

int main(void)
{
    int income = 0;
    float tax_owed = 0;

    printf("Enter taxable income: ");
    scanf("%d", &income);

    if (income < 750) {
        tax_owed = income * 0.01;
    } else if (income < 2250) {
        tax_owed = 7.50 + (income - 750) * 0.02;
    } else if (income < 3750) {
        tax_owed = 37.50 + (income - 2250) * 0.03;
    } else if (income < 5250) {
        tax_owed = 82.50 + (income - 3750) * 0.04;
    } else if (income < 7000) {
        tax_owed = 142.50 + (income - 5250) * 0.05;
    } else { // income < 7000
        tax_owed = 230.00 + (income - 7000) * 0.06;
    }

    printf("Tax owed: $%.2f\n", tax_owed);

}


