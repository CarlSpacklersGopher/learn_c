/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 7
 * Project 4
 *********************************************************/

/* Outputs the equivalent phone number when given a string
 * 2 = ABC
 * 3 = DEF
 * 4 = GHI
 * 5 = JKL
 * 6 = MNO
 * 7 = PRS
 * 8 = TUV
 * 9 = WXYZ
 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int toprint = 10;
    char ch = 0;
    printf("Enter letters to decode: ");

    while ((ch = getchar()) != '\n') {
        if isalpha(ch) {
            // 3 letters per number, starting with 'A'
            ch = toupper(ch);
            toprint = ((ch - 'A') / 3) + 2;
            printf("%d", toprint);
        } else {
            putchar(ch);
        }
    }
    printf("\n");

}


