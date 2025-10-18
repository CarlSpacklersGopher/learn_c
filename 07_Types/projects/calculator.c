/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 6
 * Project 12
 *********************************************************/

/* Basic calculator that allows operator entry.
 * Expression is evaluated left to right,
 * no order of operations.  */

#include <stdio.h>

#define OPERATOR 0
#define OPERAND 1

int main(void)
{
    float operand;
    char operator;
    float value;
    int lastparsed = OPERAND;

    printf("Enter an expression: ");
    scanf("%f", &operand);
    lastparsed = OPERAND;
    value = operand;

    // flips between parsing operator chars and operand floats.
    while (1) {
        if (lastparsed == OPERAND) {
            // look for operator
            scanf("%c", &operator); // pull next character off input.
            lastparsed = OPERATOR;

            if (operator == '\n') {
                // End of line.  Nothing left to parse.
                break;
            }
        } else { // lastparsed == OPERATOR
            // pull next float off input.
            scanf("%f", &operand);
            lastparsed = OPERAND;

            // calculate values based on current value and stored operator.
            if (operator == '+') {
                value = value + operand;
            } else if (operator == '-') {
                value = value - operand;
            } else if (operator == '*') {
                value = value * operand;
            } else if (operator == '/') {
                value = value / operand;
            }
        }
    }
    printf("Evaluates to:\n");
    printf("%.2f\n", value);
}


