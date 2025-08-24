// Allows user to input a mm/dd/yyyy date and prints it as yyyymmdd

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year); // space tolerant

    printf("You entered the date: %d%.2d%.2d\n", year, month, day); // .2 adds leading zeros if needed

    return 0;
}
