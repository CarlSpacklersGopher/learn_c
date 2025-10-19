/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King
 *
 * Chapter 8
 * Project 12
 *********************************************************/

/* Computes the scrabble score of a word */

#include <stdio.h>
#include <ctype.h>

const int scores[] = {
                        ['A'] = 1,
                        ['B'] = 3,
                        ['C'] = 3,
                        ['D'] = 2,
                        ['E'] = 1,
                        ['F'] = 4,
                        ['G'] = 2,
                        ['H'] = 4,
                        ['I'] = 1,
                        ['J'] = 8,
                        ['K'] = 5,
                        ['L'] = 1,
                        ['M'] = 3,
                        ['N'] = 1,
                        ['O'] = 1,
                        ['P'] = 3,
                        ['Q'] = 10,
                        ['R'] = 1,
                        ['S'] = 1,
                        ['T'] = 1,
                        ['U'] = 1,
                        ['V'] = 4,
                        ['W'] = 4,
                        ['X'] = 8,
                        ['Y'] = 4,
                        ['Z'] = 10,
                     };

int main(void)
{
    printf("Enter a word: ");
    char ch;
    int score = 0;
    while (1) {
        ch = getchar();
        if (ch == '\n') {
            break;
        } else {
            score += scores[toupper(ch)];
        }
    }

    printf("Scrabble value: %d\n", score);
    return 0;
}

