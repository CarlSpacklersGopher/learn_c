/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 11
 * Project 1
 *********************************************************/

/*
 * Calculates the number of each bill to make the desired amount of change.
 * */

/* #include directives */
#include <stdio.h>

/* #define directives */

/* Type definitions */

/* Global variable declarations */

/* Prototypes for functions other than main */
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

/* Definition of main */
int main(void)
{
    int amount = 0;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    pay_amount(amount, &twenties, &tens, &fives, &ones);

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n",  fives);
    printf("$1 bills: %d\n",  ones);
}

/* Definition of other functions */

/*********************************************************
 * pay_amount: Calculates quantity of each bill to make change
 *             for dollars input.
 * Parameter list:
 *      - dollars - cost to break down
 *      - twenties - pointer to variable to store number of 20's in
 *      - tens     - pointer to variable to store number of 10's in
 *      - fives    - pointer to variable to store number of  5's in
 *      - ones     - pointer to variable to store number of  1's in
 *
 * Side effects: modifies the values of each variable passed in
 ********************************************************/
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {

    int remainder = 0;

    *twenties = dollars / 20;
    remainder = dollars - (20 * *twenties);

    *tens = remainder / 10;
    remainder = remainder - (10 * *tens);

    *fives = remainder / 5;
    remainder = remainder - (5 * *fives);

    *ones = remainder;
}
