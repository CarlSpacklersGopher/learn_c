/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
*                                                        *
 * Modified for Chapter 13 Exercise 3.                   *
 *********************************************************/

/* deal.c (Chapter 8, page 173) */
/* Deals a random hand of cards */
/* TODO: Modify to print full names of cards dealt */

#include <stdbool.h>   /* C99 only */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
  bool in_hand[NUM_SUITS][NUM_RANKS] = {false};
  int num_cards, rank, suit;
  const char *ranks[] = {"Two","Three","Four","Five","Six","Seven","Eight",
                            "Nine","Ten","Jack","Queen","King","Ace"};
  const char *suits[] = {"Clubs","Diamonds","Hearts","Spades"};

  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand:\n");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;     /* picks a random suit */
    rank = rand() % NUM_RANKS;     /* picks a random rank */
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf(" %s of %s\n", ranks[rank], suits[suit]);
    }
  }
  printf("\n");

  return 0;
}
