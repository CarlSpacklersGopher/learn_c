/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 9
 * Project 8
 *********************************************************/

/*
 * Let's play Craps!
 * */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#define DICE_FACES 6
#define LOSS 0
#define WIN 1
#define REROLL 2
#define INVALID 3

int roll_dice(void);
bool play_game(void);

int roll_dice(void) {
    int d1 = rand() % DICE_FACES;
    int d2 = rand() % DICE_FACES;

    printf("You rolled: %d\n", d1 + d2);
    return d1 + d2;

}

bool play_game() {
    int rolls[] = { [0]  = INVALID, // Not possible - 2 dice rolls
                    [1]  = INVALID, // Not possible - 2 dice rolls
                    [2]  = LOSS,
                    [3]  = LOSS,
                    [4]  = REROLL,
                    [5]  = REROLL,
                    [6]  = REROLL,
                    [7]  = WIN,
                    [8]  = REROLL,
                    [9]  = REROLL,
                    [10] = REROLL,
                    [11] = WIN,
                    [12] = LOSS
                };

    int dice_roll = roll_dice();
    if (rolls[dice_roll] == WIN) {
        printf("You win!\n");
        return true;
    } else if (rolls[dice_roll] == LOSS) {
        printf("You lose!\n");
        return false;
    } else {
        int point = dice_roll;

        // Reset roll lookup
        for (int i = 2; i <= 2*DICE_FACES; i++) {
            rolls[i] = REROLL;
        }
        rolls[point] = WIN;
        rolls[7] = LOSS;

        while (1) {
            dice_roll = roll_dice();
            if (rolls[dice_roll] == WIN) {
                printf("You win!\n");
                return true;
            } else if (rolls[dice_roll] == LOSS) {
                printf("You lose!\n");
                return false;
            }
        }
    }
}

int main(void) {
    // Setup
    srand(time(NULL));

    // Game management
    int wins = 0;
    int losses = 0;

    printf("Let's Play Craps!\n");

    while (1) {
        bool winner_winner_chicken_dinner = play_game();
        if (winner_winner_chicken_dinner) {
            wins++;
        } else {
            losses++;
        }

        printf("Play again? \n");
        char ch1 = toupper(getchar());
        char ch2 = getchar();
        if ((ch1 != 'Y') || (ch2 != '\n')) {
            break;
        }

    }

    printf("Wins: %3d   Losses: %d\n", wins, losses);

}

