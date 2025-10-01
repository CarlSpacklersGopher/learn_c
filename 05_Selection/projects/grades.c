/*********************************************************
 * C PROGRAMMING: A MODERN APPROACH, Second Edition
 * By K. N. King
 *
 * Chapter 5
 * Project 10 
 *********************************************************/

/* Converts numerical grades into letter grades */

#include <stdio.h>

int main(void)
{
    int grade_pct = -1;
    printf("Enter numerical grade: ");
    scanf("%d", &grade_pct);
    
    if ((grade_pct > 100) || (grade_pct < 0)) { 
        printf("Illegal grade.\n");
    } else {
        switch (grade_pct / 10) {
            case 10:
                printf("Letter Grade: A\n");
                break;
            case 9:
                printf("Letter Grade: A\n");
                break;
            case 8:
                printf("Letter Grade: B\n");
                break;
            case 7:
                printf("Letter Grade: C\n");
                break;
            case 6:
                printf("Letter Grade: D\n");
                break;
            default:
                printf("Letter Grade: F\n");
                break;
        }
    }
}


