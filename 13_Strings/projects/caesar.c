/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King
 *
 * Chapter 13
 * Project 13
 *********************************************************/

/* Encrypts a given message with a Caesar ciper */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MSG_LENGTH 80

void encrypt(char *message, int shift);

int main(void)
{
    printf("Enter a message to be encrypted: ");
    char message[MSG_LENGTH];
    fgets(message, MSG_LENGTH, stdin);

    printf("Enter shift amount (1-25): ");
    int shift = 0;
    scanf("%d", &shift);

    char encrypted[MSG_LENGTH];
    printf("Encrypted message: ");

    encrypt(message, shift);

    puts(message);

    return 0;
}

void encrypt(char *message, int shift) {

    char encrypted[MSG_LENGTH];
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];
        if islower(ch) {
            encrypted[i] = 'a' + (((ch - 'a') + shift) % 26);
        } else if isupper(ch) {
            encrypted[i] = 'A' + (((ch - 'A') + shift) % 26);
        } else {
            encrypted[i] = ch;
        }
    }

    strcpy(message, encrypted);
}

