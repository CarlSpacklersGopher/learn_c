// User enters a dollar amount and program supplies the minimum number of bills to make that amount

#include <stdio.h>

int main(void)
{
    int amount, remainder, lcm_20, lcm_10, lcm_5, lcm_1;

    printf("Enter an amount: ");
    scanf("%d", &amount);

    lcm_20 = amount / 20;
    remainder = amount - (20 * lcm_20);
    
    lcm_10 = remainder / 10;
    remainder = remainder - (10 * lcm_10);

    lcm_5 = remainder / 5;
    remainder = remainder - (5 * lcm_5);

    lcm_1 = remainder;

    printf("$20 bills: %d\n", lcm_20);
    printf("$10 bills: %d\n", lcm_10);
    printf("$5 bills: %d\n", lcm_5);
    printf("$1 bills: %d\n", lcm_1);

}
