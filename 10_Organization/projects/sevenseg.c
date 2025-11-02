/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 10 
 * Project 7 
 *********************************************************/

/*
 * Prints the provided string of digits in the format
 * of a seven segment display.
 */

/* #include directives */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/* #define directives */
#define MAX_DIGITS 10
#define PRINT_HEIGHT 3
#define PRINT_WIDTH 3

/* Type definitions */

/* Global variable declarations */
/* 7 segment encoding:
 *   
 *   _0_
 *  |   |
 * 5|_6_|1
 *  |   |
 * 4|___|2
 *    3
 */
static bool segments[][9] = {// { 0   ,  1   ,  2   ,  3   ,  4   ,  5   ,   6  }
                                {true , true , true , true , true , true , false}, // Digit = 0
                                {false, true , true , false, false, false, false}, // Digit = 1
                                {true , true , false, true , true , false, true }, // Digit = 2
                                {true , true , true , true , false, false, true }, // Digit = 3
                                {false, true , true , false, false, true , true }, // Digit = 4
                                {true , false, true , true , false, true , true }, // Digit = 5
                                {true , false, true , true , true , true , true }, // Digit = 6
                                {true , true , true , false, false, false, false}, // Digit = 7
                                {true , true , true , true , true , true , true }, // Digit = 8
                                {true , true , true , true , false, true , true }, // Digit = 9
                        };

// +1 to account for space between printed digits
char digits[PRINT_HEIGHT][MAX_DIGITS * (PRINT_WIDTH + 1)];

/* Prototypes for functions other than main */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* Definition of main */
int main(void)
{
    char ch = ' ';
    int digits_read = 0;

    clear_digits_array();
    printf("Enter up to %d numbers: ", MAX_DIGITS);


    while (1) {
        ch = getchar();

        if (digits_read == MAX_DIGITS) {
            break;
        } else if (ch == '\n') {
            break;
        } else if (isdigit(ch)) {
            process_digit((int) (ch - '0'), digits_read);
            digits_read++;
        }

    }

    print_digits_array();

}

/* Definition of other functions */

/*********************************************************
 * clear_digits_array: Resets the printable digits array
 *
 * Side effects: Sets all characters in digits global to spaces.
 ********************************************************/
void clear_digits_array(void) {
    int digits_rows = PRINT_HEIGHT;
    int digits_cols = MAX_DIGITS * (PRINT_WIDTH + 1);
    for (int i = 0; i < digits_rows; i++) {
        for (int j = 0; j < digits_cols; j++) {
            digits[i][j] = ' ';
        }
    }
}


/*********************************************************
 * process_digit: Stores the seven segment representation
 *                of digit into the digits global array.
 *
 * Parameter list:
 *      - digit    - Digit to be decoded into seven
 *                   segments representation
 *                   Range: 0 thru 9
 *
 *      - position - position in entered value
 *                   Range: 0 thru (MAX_DIGITS - 1)
 *
 * Side effects: modifies digits global array
 ********************************************************/
void process_digit(int digit, int position) {

    // Loop through row and col for one position
    int col_offset = position * (PRINT_WIDTH + 1); // +1 to account for space after digit
    for (int row = 0; row < PRINT_HEIGHT; row++) {
        for (int col = 0; col < PRINT_WIDTH; col++) {
            /* Bad practice - I'm assuming each printed char is 3x3
             * because it's not worthwhile to write a generic seven seg mapper*/

            // Calculate which segment corresponds to this slot
            // Get segments[digit][spot]
            bool light_on = false;
            if (row == 0 && col == 1) {
                light_on = segments[digit][0];
            } else if (row == 1 && col == 2) {
                light_on = segments[digit][1];
            } else if (row == 2 && col == 2) {
                light_on = segments[digit][2];
            } else if (row == 2 && col == 1) {
                light_on = segments[digit][3];
            } else if (row == 2 && col == 0) {
                light_on = segments[digit][4];
            } else if (row == 1 && col == 0) {
                light_on = segments[digit][5];
            } else if (row == 1 && col == 1) {
                light_on = segments[digit][6];
            }

            // TODO: refactor 7 seg lookup to use this strategy
            bool middle_spot = (col != 0) && (col != (PRINT_WIDTH - 1));
            bool edge_spot = !middle_spot;

            if (!light_on) {
                digits[row][col_offset + col] = ' ';
            } else if (middle_spot) {
                digits[row][col_offset + col] = '_';
            } else if (edge_spot) {
                digits[row][col_offset + col] = '|';
            }
        }
    }
}


/*********************************************************
 * print_digits_array: Prints the digits array to standard out
 *                      in seven segment format
 *
 * Side effects: Prints to std out
 ********************************************************/
void print_digits_array(void) {
    int digits_rows = PRINT_HEIGHT;
    int digits_cols = MAX_DIGITS * (PRINT_WIDTH + 1);
    for (int i = 0; i < digits_rows; i++) {
        for (int j = 0; j < digits_cols; j++) {
            putchar(digits[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}




