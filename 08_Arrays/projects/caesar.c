/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King
 *
 * Chapter 8
 * Project 15
 *********************************************************/

/* Encrypts a given message with a Caesar ciper */

#include <stdio.h>
#include <ctype.h>

#define MSG_LENGTH 80

int main(void)
{
    printf("Enter a message to be encrypted: ");
    char cleartext[MSG_LENGTH];
    for (int i = 0; i < MSG_LENGTH; i++) {
        char ch = getchar();
        cleartext[i] = ch;
        if (ch == '\n') {
            break;
        }
    }

    printf("Enter shift amount (1-25): ");
    int shift = 0;
    scanf("%d", &shift);

    char encrypted[MSG_LENGTH];
    printf("Encrypted message: ");
    for (int i = 0; i < MSG_LENGTH; i++) {
        char ch = cleartext[i];
        if islower(ch) {
            encrypted[i] = 'a' + (((ch - 'a') + shift) % 26);
        } else if isupper(ch) {
            encrypted[i] = 'A' + (((ch - 'A') + shift) % 26);
        } else {
            encrypted[i] = ch;
        }

        // Print
        if (ch == '\n') {
            putchar('\n');
            break;
        } else {
            putchar(encrypted[i]);
        }

    }
    return 0;
}

